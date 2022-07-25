//Jonathan Hartsell
//CS 372 Assignment 7 Problem 1
//Filename: Asg7P1.cpp
// Source for some of the code: https://www.chegg.com/homework-help/questions-and-answers/c-write-function-takes-binary-search-tree-input-produces-linked-list-entries-entries-sorte-q9506795


/*

* C++ Program To Implement BST

*/



# include <iostream>

# include <cstdlib>

#define MAX 20

using namespace std;

/*

* Node Declaration

*/

struct TreeNode

{

int key;

struct TreeNode *left;

struct TreeNode *right;

struct TreeNode *parent;

}*root;

/*

* Class Declaration

*/

class BST

{

public:

void insert(TreeNode *, TreeNode *);

void inOrder(TreeNode *);

void descend(TreeNode *);

BST()

{

root = NULL;

}

};

/*

* main() Contains Menu

*/

int main()

{

int start, end;

int choice, num;

BST bst;

TreeNode *temp;

//Menu

while (1)

{

cout << endl << "-----------------" << endl;

cout << "Operations on BST" << endl;

cout << "-----------------" << endl;

cout << "1. Insert Element " << endl;

cout << "2. Ascending traversal" << endl;

cout<<  "3. Descending traversal"<< endl; 

cout << "4. Exit" << endl;

cout << "Enter your choice : ";

cin >> choice;

//Start Switch case

switch (choice)

{

//Insert the element

case 1:

temp = new TreeNode;

cout << "Enter the number to be inserted : ";

cin >> temp->key;

bst.insert(root, temp);

break;

//Display the elements in sorted order.

case 2:

cout << "Elements in ascending order are:" << endl;

bst.inOrder(root);

cout << endl;

break;

case 3:

cout<< "Elemenets in descending order are:" <<endl; 

bst.descend(root);

cout << endl; 

break; 

case 4:

exit(1);

default:

cout << "Wrong choice" << endl;

}

}

}

/*

* Inserting Element into the Tree

*/

void BST::insert(TreeNode *tree, TreeNode *newnode)

{

//Initially tree is empty.

//Add the node as root node.

if (root == NULL)

{

root = new TreeNode;

root->key = newnode->key;

root->left = NULL;

root->right = NULL;

cout << "Root Node is Added" << endl;

return;

}

//If the element is repeated.

if (tree->key == newnode->key)

{

cout << "Element already in the tree" << endl;

return;

}

//New element is less than the node in tree

//Insert in the left subtree

if (tree->key > newnode->key)

{

if (tree->left != NULL)

{

insert(tree->left, newnode);

}

else

{

tree->left = newnode;

(tree->left)->left = NULL;

(tree->left)->right = NULL;

cout << "Node Added To Left" << endl;

return;

}

}

//New element is greater than the node in tree

//Insert in the right subtree

else

{

if (tree->right != NULL)

{

insert(tree->right, newnode);

}

else

{

tree->right = newnode;

(tree->right)->left = NULL;

(tree->right)->right = NULL;

cout << "Node Added To Right" << endl;

return;

}

}

}

/*

* Display Tree elements in sorted order

*/

void BST::inOrder(TreeNode *ptr)

{

if(ptr != NULL)

{

inOrder(ptr->left);

cout << ptr->key;

//if(ptr->left!= NULL && ptr->right != NULL)

cout <<" " ;

inOrder(ptr->right);

}

}

void BST::descend(TreeNode *ptr)

{

if(ptr != NULL)

{

descend(ptr->right);

cout << ptr->key;

//if(ptr->left!= NULL && ptr->right != NULL)

cout <<" " ;

descend(ptr->left);

}

}