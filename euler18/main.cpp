#include <iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
 // C program to demonstrate insert operation in binary search tree
struct node
{
    int key;
    struct node *left, *right;
};

// A utility function to create a new BST node
struct node *newNode(int item)
{
    struct node *temp =  (struct node *)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

// A utility function to do inorder traversal of BST
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d \n", root->key);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d \n", root->key);
        inorder(root->left);
        inorder(root->right);

    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {

        inorder(root->left);
        inorder(root->right);
        printf("%d \n", root->key);

    }
}

/* A utility function to insert a new node with given key in BST */
struct node* insert(struct node* node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left  = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    /* return the (unchanged) node pointer */
    return node;
}

// Driver Program to test above functions
int main()
{
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
struct node *root = NULL;
//int nums[] = {75,95,64,17,47,82,18, 35, 87, 10,20, 4, 82, 47, 65,19, 1, 23, 75, 3, 34,88, 2, 77, 73, 7, 63, 67,99, 65, 4, 28, 6, 16, 70, 92,41, 41, 26, 56, 83, 40, 80, 70, 33,41, 48, 72, 33, 47, 32, 37, 16, 94, 29,53, 71, 44, 65, 25, 43, 91, 52, 97, 51, 14,70,11, 33, 28, 77, 73, 17, 78, 39, 68, 17, 57,91, 71, 52, 38, 17, 14, 91, 43, 58, 50, 27, 29, 48,63, 66, 4, 68, 89, 53, 67, 30, 73, 16, 69, 87, 40, 31,4, 62, 98, 27, 23, 9, 70, 98, 73, 93, 38, 53, 60, 4, 23};
//for(int i = 0; i < 120; i++){
    //insert(root, nums[i]);
//}


    root = insert(root, 4);
    insert(root, 21);
    insert(root, 9);
    insert(root, -3);
    insert(root, 17);
    insert(root, 10);
    insert(root, 6);
    insert(root, 30);
    insert(root, 12);
    insert(root, 8);
    insert(root, 0);
    insert(root, 20);
    insert(root, 15);

    preorder(root);

    return 0;
}

