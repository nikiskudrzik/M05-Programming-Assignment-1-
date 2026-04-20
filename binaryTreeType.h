#ifndef H_binaryTreeType
#define H_binaryTreeType

#include <iostream>
using namespace std;

struct nodeType {
    int info;
    nodeType* llink;
    nodeType* rlink;
};

class binaryTreeType {
public:
    binaryTreeType();
    void insert(int item);
    int singleParent();

private:
    nodeType* root;

    int countSingleParent(nodeType* p);
    void insertNode(nodeType*& p, int item);
};

#endif