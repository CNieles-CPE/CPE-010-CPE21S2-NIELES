#include <iostream>
#include "BinaryTree.h"

int main(){
    

    // creating the root of the binary tree
    BinaryTree<char>* root = new BinaryTree<char>('A');

    // creating the children of the binary tree "A"
    root->insertLeftChild('B');
    root->insertRightChild('C');

    // adding children to the children
    root->getLeftChild()->insertLeftChild('D');
    root->getLeftChild()->insertRightChild('F');

    root->getRightChild()->insertLeftChild('E');

    // printing the root node
    std::cout << "Root value: " << root->getRootVal() << '\n';
    std::cout << "Left child of root: " << root->getLeftChild()->getRootVal() << '\n';
    std::cout << "Right child of root: " << root->getRightChild()->getRootVal() << '\n';

    std::cout << "Left child of root: " << root->getLeftChild()->getLeftChild()->getRootVal() << '\n';
    std::cout << "Right child of root: " << root->getLeftChild()->getRightChild()->getRootVal() << '\n';

    // changing the child 'F'
    root->getLeftChild()->getRightChild()->setRootVal('K');
    std::cout << "Right child of root: " << root->getLeftChild()->getRightChild()->getRootVal() << '\n';
    
    return 0;
}
