//
// Created by alitbs on 12/31/18.
//

#ifndef DS_HW_BINERYTREE_H
#define DS_HW_BINERYTREE_H

#include "BineryNode.h"
#include <vector>
class BineryTree {
public :
    BineryNode *root;
    int depth;
    BineryTree(BineryNode *node );
    void insert(int newValue );
    void printBT(const std::string& prefix, const BineryNode* node, bool isLeft);

    void  find_way(BineryNode * root, std::vector <int> lastWay,int sum , int target);



};


#endif //DS_HW_BINERYTREE_H
