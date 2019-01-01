//
// Created by alitbs on 12/31/18.
//
#include <iostream>
#include <vector>
#include<stdlib.h>
#include<time.h>
#include "BineryTree.h"
#include <vector>
void BineryTree::printBT(const std::string& prefix, const BineryNode* node, bool isLeft){

        if( node != nullptr )
        {
            std::cout << prefix;

            std::cout << (isLeft ? "├──" : "└──" );

            // print the value of the node
            std::cout << node->value << std::endl;

            // enter the next tree level - left and right branch
            printBT( prefix + (isLeft ? "│   " : "    "), node->left_node, true);
            printBT( prefix + (isLeft ? "│   " : "    "), node->right_node, false);
        }

}
BineryTree::BineryTree(BineryNode *node) {
    root = node ;
    depth=1;
}
//void BineryTree::find_way(std::vector < std::vector <int > > *ways, BineryNode * root, std::vector <int> lastWay, int target) {
//    std::vector <int > newWay=lastWay ;
//    BineryNode  current= root;
//    if(!root->left_node && !root->right_node){
//        newWay.push_back(root->value);
//        ways->push_back(newWay);
//        return;
//    }
//    newWay.push_back(root->value);
//    find_way(ways,root->left_node,newWay, target);
//    find_way(ways,root->right_node,newWay,target);
//}
void BineryTree::find_way( BineryNode * roots, std::vector <int> lastWay,int sum , int target) {

    for (int  i =0 ; i < lastWay.size() ; i++){

        std::cout <<"- " <<  lastWay[i];

    }
    std::cout << std::endl ;
    std::cout <<"its fine " <<  sum
            << "  ;  its value" << roots->value <<std::endl;
    std::vector <int > newWay=lastWay ;

    if(!roots->left_node && !roots->right_node){
        std::cout <<"no childeren " << std :: endl ;
        newWay.push_back(roots->value);
        if ( sum +roots->value  == target ){
            std::cout << " correct!! this sum is " << sum << " " ;
            for ( int i =0 ; i < newWay.size() ; i++ ){

                std::cout << "-"<< newWay[i] ;
            }
            std::cout <<  std::endl;
        }
        if ( sum *roots->value  == target ){
            std::cout << " correct!!" ;
            for ( int i =0 ; i < newWay.size() ; i++ ){

                std::cout << "-"<< newWay[i] ;
            }
            std::cout <<  std::endl;
        }

        return;
    }
    if (sum>target){
        std::cout <<"sum  bigger than target  " <<sum << std :: endl ;
        return;
    }

    newWay.push_back(roots->value);
    int newSum = sum;

    newSum = sum *roots->value ;

    if(roots->value==root->value){
        newSum = roots->value;
    }
    if ( roots->left_node){
        std::cout <<"left ****  root " <<roots->value<< std :: endl ;
//        if (( roots->value %2==0 && target%2==1  ) ){
//            std::cout << "alllllllll " << roots->value << " " <<sum<< std::endl;
//            return;
//        }
        find_way(roots->left_node,newWay,newSum, target);
    }
    if ( roots->right_node){
//        if (( roots->value %2==0 && target%2==1  ) ){
//            std::cout << "alllllllll " << roots->value << " " <<sum<< std::endl;
//            return;
//        }
        std::cout <<"right *******root " <<roots->value<< std :: endl ;
        find_way(roots->right_node,newWay ,newSum, target);
    }

    newSum= sum +roots->value ;

    if ( roots->left_node){
        std::cout <<"left ++++++++ root " <<roots->value<< std :: endl ;
        find_way(roots->left_node,newWay,newSum , target);

    }
    if ( roots->right_node){
        std::cout <<"right +++++++++root " <<roots->value<< std :: endl ;
        find_way(roots->right_node,newWay,newSum  , target);
    }
}
void BineryTree::insert(int newValue) {
    BineryNode *newNode= new BineryNode(newValue);
    if( root==NULL ){
        root =newNode;
    }
    int currentDepth = 1;
    BineryNode *current= root;
    BineryNode *prev;
    while(current ){
        if(current->value< newValue){
            if(current->left_node){

                current= current->left_node;
                currentDepth++;
            }else{
                current->left_node=newNode;
                break;
            }
        }else{
            if(current->right_node){

                current= current->right_node;
                currentDepth++;
            }else{
                current->right_node=newNode;
                break;
            }
        }
    }
}