//
//15. Двоичные деревья поиска – алгоритм удаления элемента(словесное описание или
//    описание на уровне блок - схемы).

    //Для удаления узла из бинарного дерева поиска нужно рассмотреть три возможные ситуации.Если у узла нет дочерних узлов, то у его родителя нужно просто заменить указатель на null.Если у узла есть только один дочерний узел, то нужно создать новую связь между родителем удаляемого узла и его дочерним узлом.Наконец, если у узла два дочерних узла, то нужно найти следующий за ним элемент(у этого элемента не будет левого потомка), его правого потомка подвесить на место найденного элемента, а удаляемый узел заменить найденным узлом.Таким образом, свойство бинарного дерева поиска не будет нарушено.



    //!!!Это код он не нужен в этом вопросе, но чтобы был на всякий случай добавил
// Deleting a node
struct node* deleteNode(struct node* root, int key) {
    // Return if the tree is empty
    if (root == NULL) return root;

    // Find the node to be deleted
    if (key < root->key)
        root->left = deleteNode(root->left, key);
    else if (key > root->key)
        root->right = deleteNode(root->right, key);
    else {
        // If the node is with only one child or no child
        if (root->left == NULL) {
            struct node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            struct node* temp = root->left;
            free(root);
            return temp;
        }

        // If the node has two children
        struct node* temp = minValueNode(root->right);

        // Place the inorder successor in position of the node to be deleted
        root->key = temp->key;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}
