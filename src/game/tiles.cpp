#include "tiles.h"
#include <iostream>

//coord tile::getCoordinates(){
//    return this->coordinates;
//}

bool tile::getIsLand(){
    return this->isLand;
}
unsigned int tile::getTreeCoverage(){
    return this->treeCoverage;
}

unsigned int tile::getHumanPopulation(){
    return this->humanPopulation;
}

//void tile::setCoordinates(int q, int r){
//    this->coordinates=coord(q, r);
//}

void tile::incHumanPopulation(unsigned int amount){
    this->humanPopulation+=amount;
}

void tile::decHumanPopulation(unsigned int amount) {
    if (amount > this->humanPopulation) {
        this->humanPopulation = 0;
        std::cout << "Tried to reduce population more than available.";
    }
    else {
        this->humanPopulation -= amount;
    }
}

void summarizeTile(tile tile){
    std::cout << "--Summarizing tile--\n";

    //coord coordinates = tile.getCoordinates();
    //std::cout <<    "This tile is located at:\n" << 
    //                "\tq: " <<coordinates.q << "\n" << 
    //                "\tr: " << coordinates.r << "\n";

    tile.getIsLand()?   std::cout << "It's a land tile.\n" : 
                        std::cout << "It's an aquatic tile.\n"; 

    std::cout << tile.getTreeCoverage() << "%" << " of the tile is covered by trees.\n";

    tile.getHumanPopulation()? std::cout << tile.getHumanPopulation() << " people live here.\n": std::cout << "Nobody lives here.\n";
}