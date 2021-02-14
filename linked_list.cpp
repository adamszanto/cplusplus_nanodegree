#include <iostream>
using namespace std;

struct node
{
    int key_value;
    node *p_left;
    node *p_right;
};

node* insert(node* p_tree, int key)
{
    if(p_tree == NULL)
    {
        node* p_new_tree = new node;
        p_new_tree->p_left = NULL;
        p_new_tree->p_right = NULL;
        p_new_tree->key_value = key;
        return p_new_tree;
    }

    if(key < p_tree->key_value)
    {
        p_tree->p_left = insert(p_tree->p_left, key);
    }
    else
    {
        p_tree->p_right = insert(p_tree->p_right, key);
    }
    return p_tree;
}

node* search(node *p_tree, int key)
{
    if(p_tree == NULL)
    {
        return NULL;
    }
    else if(key == p_tree->key_value)
    {
        return p_tree;
    }
    else if(key < p_tree->key_value)
    {
        return search(p_tree->p_left, key);
    }
    else {
        return search(p_tree->p_right, key);
    }
}

int main()
{

}
