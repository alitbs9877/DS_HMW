//
// Created by alitbs on 12/31/18.
//

#ifndef DS_HW_BINERYNODE_H
#define DS_HW_BINERYNODE_H


class BineryNode {
public:
    int value ;
    BineryNode * right_node;
    BineryNode * left_node;
    BineryNode * parent_node;
    BineryNode(int value) {
        this->value=value;
        right_node=NULL;
        left_node=NULL;
        parent_node=NULL;
    }

};


#endif //DS_HW_BINERYNODE_H
