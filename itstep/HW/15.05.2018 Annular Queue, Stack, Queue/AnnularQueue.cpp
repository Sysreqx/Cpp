#include "AnnularQueue.h"

template<class T>
inline void AnnularQueue<T>::push(T val)
{
	aq.push_back(val);
}

template<class T>
inline void AnnularQueue<T>::pop()
{
	aq.erase(aq.begin());
}

template<class T>
inline bool AnnularQueue<T>::empty() const
{
	return aq.empty();
}

template<class T>
inline int AnnularQueue<T>::size() const
{
	return aq.size();
}

template<class T>
void AnnularQueue<T>::movE()
{
	//sohranitt perviy element
	T x = aq.front();
	//udalitt perviy element
	aq.pop();
	//vstavitt perviy element
	aq.push(x);
}

template<class T>
inline T & AnnularQueue<T>::back()
{
	return aq[aq.size() - 1];
}

template<class T>
inline T & AnnularQueue<T>::front()
{
	return aq[aq.begin()];
}

