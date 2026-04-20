#include "binaryTreeType.h"

// Constructor
binaryTreeType::binaryTreeType() {
    root = nullptr;
}

// Insert function
void binaryTreeType::insert(int item) {
    insertNode(root, item);
}

void binaryTreeType::insertNode(nodeType*& p, int item) {
    if (p == nullptr) {
        p = new nodeType;
        p->info = item;
        p->llink = nullptr;
        p->rlink = nullptr;
    }
    else if (item < p->info)
        insertNode(p->llink, item);
    else
        insertNode(p->rlink, item);
}

// Public function
int binaryTreeType::singleParent() {
    return countSingleParent(root);
}

// Recursive helper
int binaryTreeType::countSingleParent(nodeType* p) {
    if (p == nullptr)
        return 0;

    int count = 0;

    // Check if exactly one child exists
    if ((p->llink == nullptr && p->rlink != nullptr) ||
        (p->llink != nullptr && p->rlink == nullptr)) {
        count = 1;
    }

    return count + countSingleParent(p->llink) + countSingleParent(p->rlink);
}