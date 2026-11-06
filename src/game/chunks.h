#ifndef CHUNKS_H
#define CHUNKS_H

#include "tiles.h"
#include <unordered_map>

struct coordHash {
    std::size_t operator()(const coord& coordToHash) const {
        std::size_t hash1 = std::hash<int>{}(coordToHash.q);
        std::size_t hash2 = std::hash<int>{}(coordToHash.r);

        return hash1 ^ (hash2 + 0x9e3779b9 + (hash1 << 6) + (hash1 >> 2));
    }
};

extern std::unordered_map<coord, tile, coordHash> testChunk;



#endif//CHUNKS_H