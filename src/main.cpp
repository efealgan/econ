#include <iostream>
#include "game/tiles.h"
#include "game/chunks.h"

int main (){

    tile testTile;
    testTile.incHumanPopulation(540);
    summarizeTile(testTile);

    std::unordered_map<coord, tile, coordHash> testChunk;

    testChunk[{0,0}] = testTile;

    summarizeTile(testChunk.at({0,0}));

    std::cout << "\n--Testing Chunks--\n\n";

    for (int i = 1; i < 3; i++) {
        testChunk[{0,i}] = tile();
    }

    testChunk.at({0,1}).incHumanPopulation(123);

    for (int i = 0; i < 3; i++) {
        std::cout << "q: " << 0 << " r: " << i << "\n";
        summarizeTile(testChunk.at({0,i}));
        std::cout << "\n"; 
    }
    return 0;
}