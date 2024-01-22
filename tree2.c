#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createNode(int data) {
    struct TreeNode* newNode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

struct TreeNode* insert(struct TreeNode* root, int data) {
    if (root == NULL) 
        return createNode(data);
    

    if (data < root->data) 
        root->left = insert(root->left, data);
     else if (data > root->data) 
        root->right = insert(root->right, data);
    

    return root;
}

struct TreeNode* search(struct TreeNode* root, int key) {
    if (root == NULL || root->data == key) {
        return root;
    }

    if (key < root->data) 
        return search(root->left, key);
    else 
        return search(root->right, key);
    
}

struct TreeNode* findMin(struct TreeNode* node) {
    while (node->left != NULL) 
        node = node->left;
    
    return node;
}

struct TreeNode* deleteNode(struct TreeNode* root, int key) {
    if (root == NULL) 
        return root;


    if (key < root->data) 
        root->left = deleteNode(root->left, key);
    else if (key > root->data) 
        root->right = deleteNode(root->right, key);
    else {
        if (root->left == NULL) {
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        }

        struct TreeNode* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}



int main() {
    struct TreeNode* root = NULL;
    int choice, key;

    while (1) {
        printf("1. Insert a node\n2. Search for a node\n3. Delete a node\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &key);
                root = insert(root, key);
                break;
            case 2:
                printf("Enter the value to search: ");
                scanf("%d", &key);
                if (search(root, key) != NULL) {
                    printf("Node with value %d found in the tree.\n", key);
                } else {
                    printf("Node with value %d not found in the tree.\n", key);
                }
                break;
            case 3:
                printf("Enter the value to delete: ");
                scanf("%d", &key);
                root = deleteNode(root, key);
                break;
            
            default:
                exit(0);
                
        }
    }

    return 0;
}
