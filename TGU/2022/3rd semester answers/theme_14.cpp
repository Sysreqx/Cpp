//14. Двоичные деревья поиска - алгоритмы поиска и вставки элементов; функции для
//реализации этих алгоритмов.



// Insert a node
struct node* insert(struct node* node, int key) {
    // Return a new node if the tree is empty
    if (node == NULL) return newNode(key);

    // Traverse to the right place and insert the node
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);

    return node;
}

// Find the inorder successor
struct node* minValueNode(struct node* node) {
    struct node* current = node;

    // Find the leftmost leaf
    while (current && current->left != NULL)
        current = current->left;

    return current;
}
