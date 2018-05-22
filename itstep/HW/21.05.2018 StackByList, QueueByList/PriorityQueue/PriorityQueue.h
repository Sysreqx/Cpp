#pragma once
#include <memory>
#include <iostream>

template <typename T>
class PriorityQueue
{
public:
	PriorityQueue();
	PriorityQueue(const PriorityQueue& other);
	PriorityQueue(PriorityQueue&& other)                            noexcept;
	~PriorityQueue();

	PriorityQueue<T>& operator= (const PriorityQueue<T>& other);
	PriorityQueue<T>& operator= (PriorityQueue<T>&& other)          noexcept;

	void swap(PriorityQueue<T>& other)                              noexcept;

	friend void swapPriorityQueue(PriorityQueue<T>& A, PriorityQueue<T>& B)
	{
		A.swap(B);
	}

	//Highest priority item is dequeued first. If the same priority is used, the earlier queued item is dequeued first
	void dequeue();
	void enqueue(int priority, T item);

	T& first()                                                      const;
	T& last()                                                       const;

	void print()                                                    const;

private:

	struct Node
	{
		std::shared_ptr<Node> next;
		std::shared_ptr<Node> prev;
		T data;
		int priority;

		Node(T&& data, int priority, std::shared_ptr<Node>&& next, std::shared_ptr<Node>&& prev)
			:data(std::move(data))
			, priority(priority)
			, next(std::move(next))
			, prev(std::move(prev))
		{}
	};

	std::shared_ptr<Node> head;
	std::shared_ptr<Node> tail;
};

template <typename T>
PriorityQueue<T>::PriorityQueue()
	:head(nullptr)
	, tail(nullptr)
{}

template <typename T>
PriorityQueue<T>::PriorityQueue(const PriorityQueue& other)
{
	for (std::shared_ptr<Node> curr = other.tail; curr != nullptr; curr = curr->next)
		enqueue(curr->priority, curr->data);

}

template <typename T>
PriorityQueue<T>::PriorityQueue(PriorityQueue&& other)                                  noexcept
	:PriorityQueue()
{
	swapPriorityQueue(*this, other);
}

template <typename T>
PriorityQueue<T>& PriorityQueue<T>::operator= (const PriorityQueue<T>& other)
{
	PriorityQueue tmp(other);
	swapPriorityQueue(*this, tmp);
	return *this;
}

template <typename T>
PriorityQueue<T>::~PriorityQueue()
{
	while (tail != nullptr)
		dequeue();
}

template <typename T>
PriorityQueue<T>& PriorityQueue<T>::operator= (PriorityQueue<T>&& other)                    noexcept
{
	swapPriorityQueue(*this, other);
	return *this;
}

template <typename T>
void PriorityQueue<T>::swap(PriorityQueue& other)                                           noexcept
{
	using std::swap;
	swap(head, other.head);
	swap(tail, other.tail);
}

template <typename T>
void PriorityQueue<T>::dequeue()
{
	if (tail == nullptr)
		throw std::runtime_error("Nothing in queue");

	tail = std::move(tail->next);

	if (tail != nullptr)
		tail->prev = nullptr;
}

template <typename T>
void PriorityQueue<T>::enqueue(int priority, T item)
{
	std::shared_ptr<Node> newNode = std::make_shared<Node>(std::move(item), priority, nullptr, nullptr);

	if (head == nullptr)
	{
		head = tail = newNode;
		return;
	}
	std::shared_ptr<Node> curr = nullptr;
	for (curr = head; curr != nullptr && priority < curr->priority; curr = curr->prev);

	if (curr == nullptr)        //We are at the end of queue, the priority I want to insert must be the highest priority in the queue, we didn't find any lower priority
	{
		newNode->next = tail;
		tail->prev = newNode;
		newNode->prev = nullptr;
		tail = newNode;
	}
	else                        //curr now points to the Node that is just barely in front of newNode. curr is either higher priority than newNode, or same priority but inserted earlier
	{
		newNode->prev = curr;
		newNode->next = curr->next;

		if (newNode->next != nullptr)
			newNode->next->prev = newNode;

		newNode->prev->next = newNode;

		if (head == tail || priority >= head->priority)
			head = newNode;
	}
}

template <typename T>
T& PriorityQueue<T>::first() const
{
	if (tail == nullptr)
		throw std::runtime_error("Nothing in queue");

	return tail->data;
}

template <typename T>
T& PriorityQueue<T>::last() const
{
	if (head == nullptr)
		throw std::runtime_error("Nothing in queue");

	return head->data;
}

template <typename T>
void PriorityQueue<T>::print() const
{
	if (head == nullptr)
		throw std::runtime_error("Nothing in queue");

	std::cout << "\n\nFrom lowest priority to highest \n\n";

	for (std::shared_ptr<Node> curr = head; curr != nullptr; curr = curr->prev)
		std::cout << curr->data << "[" << curr->priority << "] --> ";               //print is just for testing purposes. This line will not compile if T is not a primitive data-type


}