#include <iostream>
#include <vector>

using namespace std;

class Node
{
public:
	int data;
	Node* left;
	Node* right;
};

Node* findMin(Node* root)
{
	while (root->left != nullptr)
		root = root->left;
	return root;
}

Node* deleteNode(Node* root, int data)
{
	if (root == nullptr)
		return root;
	else if (root->data > data)
		root->left = deleteNode(root->left, data);
	else if (root->data < data)
		root->right = deleteNode(root->right, data);
	// Нода найдена
	else
	{
		// первый случай: нет детей
		if (root->left == nullptr && root->right == nullptr)
		{
			delete root;
			root = nullptr;
		}

		// второй случай: один ребенок
		else if (root->right == nullptr)
		{
			Node* tmp = root;
			root = root->left;
			delete tmp;
		}
		else if (root->left == nullptr)
		{
			Node* tmp = root;
			root = root->right;
			delete tmp;
		}

		// 3 случай: 2 ребенка
		else
		{
			Node* tmp = findMin(root->right);
			root->data = tmp->data;
			root->right = deleteNode(root->right, tmp->data);
		}
	}
	return root;
}

// вставить элемент
Node* insertNode(Node* root, int data)
{
	if (root == nullptr)
	{
		root = new Node();
		root->data = data;
		root->left = root->right = nullptr;
	}
	else if (root->data >= data)
		root->left = insertNode(root->left, data);
	else
		root->right = insertNode(root->right, data);
	return root;
}


void testIfNodeInTree(Node* root, int data, bool& flag) {
	if (root == nullptr)
		return;

	testIfNodeInTree(root->left, data, flag);
	if (root->data == data) {
		flag = true;
		return;
	}
	testIfNodeInTree(root->right, data, flag);
}

int treeHeight(Node* root)
{
	if (root == nullptr) {
		return 0;
	}
	else if (root->left == nullptr && root->right == nullptr) {
		return 1;
	}
	else if (treeHeight(root->left) > treeHeight(root->right))
		return treeHeight(root->left) + 1;
	else
		return treeHeight(root->right) + 1;
}

// Вспомогательная функция для нахождения
// данной ноды в бинарнмо дереве
int findHeightUtil(Node* root, int x,
	int& height)
{
	// Базовый случай
	if (root == NULL) {
		return -1;
	}

	// Сохранить максимальную высоту
	// леовго и правого поддрева
	int leftHeight = findHeightUtil(
		root->left, x, height);

	int rightHeight
		= findHeightUtil(
			root->right, x, height);

	// Обновить высоту текущей ноды
	int ans = max(leftHeight, rightHeight) + 1;

	// Если текущая нода, та которую ищем
	if (root->data == x)
		height = ans;

	return ans;
}

// Нахождение глубины
int findDepth(Node* root, int x)
{
	// Базовый случай
	if (root == NULL)
		return -1;

	// Устанавливаем расстояние в ноль
	int dist = 0;

	// Проверка если x текущая нода
	if ((root->data == x)

		// Иначе, проверить если х 
		// присутствует в левом поддереве
		|| (dist = findDepth(root->left, x)) >= 0

		// Иначе, проверить если х 
		// присутствует в правом поддереве
		|| (dist = findDepth(root->right, x)) >= 0)

		// вернуть глубину ноды
		return dist + 1;

	return dist;
}


void printTree(Node* root, int space = 0) {
	if (!root)
		return;
	int count = 2;
	space += count;
	printTree(root->right, space);
	for (int i = count; i < space; i++)
		std::cout << "  ";
	cout << root->data << endl;
	printTree(root->left, space);
}


int main()
{
	setlocale(LC_ALL, "Russian");

	Node* root = nullptr;
	root = insertNode(root, 6);
	root = insertNode(root, 3);
	root = insertNode(root, 9);
	root = insertNode(root, 7);
	root = insertNode(root, 10);
	root = insertNode(root, 8);
	root = insertNode(root, 2);
	root = insertNode(root, 5);
	root = insertNode(root, 4);
	root = insertNode(root, 1);

	int num;
	bool flag = false;

	cout << "Введите число: \n";
	cin >> num;
	testIfNodeInTree(root, num, flag);
	if (flag) {
		cout << "Число входит в дерево" << endl;
		cout << "Высота ноды " << findDepth(root, num) << endl;
	}
	else {
		cout << "Число не входит в дерево" << endl;
	}

	// Распечатать дерево
	cout << "Дерево: \n";
	printTree(root);
	cout << "\n";
	system("pause");
	return 0;
}