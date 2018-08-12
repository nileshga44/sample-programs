/*
 * Date: 07-Nov-2017
 *
 * Description: Insert in Binary search tree(BST) - O(logn).
 *              Inorder, Preorder, Postorder - O(n)
 *              Search in bst - O(logn)
 *              Delete from bst - O(logn)
 * 
 * Limitation - Can may not be balanced (skwed trees), BST becomes a linked list
 *              and all operations take O(n) complexity.
 */

#include "stdio.h"
#include "stdlib.h"

typedef struct node
{
  int key;
  struct node *left;
  struct node *right;
} node;

void print_array(int arr[], int n, char *msg)
{
  int i = 0;
  printf("*********** %s *****************\n", msg);
  for (i = 0; i < n; i++)
    printf("%d ", arr[i]);
  printf("\n\n");
}

node* new(int k)
{
  node *ptr = (node *)malloc(sizeof(node));
  ptr->key = k;
  ptr->left = NULL;
  ptr->right = NULL;
  return ptr;
}

node* insert(node *root, int k)
{
  if (root == NULL) 
  {
     return new(k);  
  }
  else if (root->key > k)
  {
    root->left = insert(root->left, k);
  }
  else if (root->key < k)
  {
    root->right = insert(root->right, k);
  }
  else
  {
    printf("[ERROR]: Duplicate key(%d) is not allowed in BST\n", k);
    return root;
  }
  return root;
}

void preorder(node *root)
{
  if (root != NULL)
  {
    printf ("%d ", root->key);
    preorder(root->left);
    preorder(root->right);
  }
}

void inorder(node *root)
{
  if (root != NULL)
  {
    inorder(root->left);
    printf ("%d ", root->key);
    inorder(root->right);
  }
}

void postorder(node *root)
{
  if (root != NULL)
  {
    postorder(root->left);
    postorder(root->right);
    printf ("%d ", root->key);
  }
}

node* search(node *root, int k)
{
  if (root == NULL) 
  {
     return NULL;  
  }
  else if (root->key == k)
  {
    return root;
  }
  else if(root->key > k)
  {
    search(root->left, k);
  }
  else
  {
    search(root->right, k);
  }
}

node* find_min_element_in_bst(node *root)
{
  while (root->left != NULL)
    root = root->left;

  return root;
}

node* delete(node *root, int key)
{
  node *tmp = NULL;

  if (root == NULL)
  {
    return root;
  }
  else if (root->key > key)
  {
    root->left = delete(root->left, key);
  }
  else if (root->key < key)
  {
    root->right = delete(root->right, key);
  }
  else
  {
    // Node to be deleted has 1 or 0 child nodes - Copy the leaf node to
    // current node and deleted copied node.
    if (root->left == NULL)
    {
      tmp = root->right;
      free(root);
      return tmp;
    }
    else if (root->right == NULL)
    {
      tmp = root->left;
      free(root);
      return tmp;
    }
    // Node to be deleted has 2 child nodes - find inorder successor(smallest
    // element) in right subtree and swap current node with inorder successor
    // and delete inorder successor location
    else
    {
      tmp = find_min_element_in_bst(root->right);
      root->key = tmp->key;
      // Here root->right is passed in delete instead of 'tmp' directly
      // (which is the node to be deleted), if we will pass tmp then
      // root->right will be assigned with NULL and we will loose the
      // right subtree.
      root->right = delete(root->right, tmp->key);
    }
  }
}

int main()
{
  int i = 0;
  int n = 0;
  int *a = NULL;
  int element = 0;
  node *root = NULL;
  node *curr_node = NULL;
  printf("Enter number of elements : ");
  scanf("%d",&n);
  a = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
  {
    printf("Enter element [%d] : ", i);
    scanf("%d",&a[i]);
  }
  print_array(a, n, "Inserted Array");

  // Driver loop to insert in in BST
  for (i = 0; i < n; i++)
  {
    root = insert(root, a[i]);
  }

  printf("*********** PreOrder Traversal *****************\n");
  preorder(root);
  printf("\n\n");

  printf("*********** Inorder Traversal *****************\n");
  inorder(root);
  printf("\n\n");

  printf("*********** Postorder Traversal *****************\n");
  postorder(root);
  printf("\n\n");

  // Search in a BST
  printf("Enter element to be searched in BST: ");
  scanf("%d", &element);
  curr_node = search(root, element);
  if (curr_node)
    printf("%d found in BST\n\n", element);
  else
    printf("%d not found in BST\n\n", element);

  // Delete from BST
  printf("Enter element to be deleted from BST: ");
  scanf("%d", &element);
  delete(root, element);
  
  printf("*********** Inorder traversal after deletion *****************\n");
  inorder(root);
  printf("\n\n");

  return 0;
}
