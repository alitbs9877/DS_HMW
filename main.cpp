#include <iostream>
#include <vector>
#include<stdlib.h>
#include<time.h>
#include "BineryTree.h"

#include "BineryTree.cpp"
#include "BineryNode.h"
int main() {
    srand(time(NULL));

    int count_of_number;
    std::cout << "enter how many number " << std::endl;
    std::cin >> count_of_number;
    int target;
    std::cin >> target;
    int random_number_1=rand()%10;
    BineryNode * node= new BineryNode(1);
    std::vector <int > numbers ;
    BineryTree *bineryTree = new BineryTree(node);
    for ( int i =0 ; i < count_of_number-1  ; i++){
        int random_number=rand()%10;
        bineryTree->insert(i+2);
        numbers.push_back(random_number);
    }
    std:: vector< std::vector< int >  >  all_ways ;
    std::vector<int > way;
    int sum =0;
    bineryTree->printBT("", bineryTree->root, false);
    bineryTree->find_way(bineryTree->root,way,sum, target);


    return 0;
}


