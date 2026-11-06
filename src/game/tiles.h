#ifndef TILES_H
#define TILES_H


//coordinates. see: https://www.redblobgames.com/grids/hexagons/#coordinates-axial
//let's go with |q+r| <= 3, like shown in the website. that looks like a nice "chunk" size.
struct coord{   
    int q = 0;
    int r = 0;
    bool operator==(const coord& other) const {
        return q == other.q && r == other.r;
    }
};

class tile{
    //coord coordinates;
    
    //geographic qualities
    bool isLand = false;
    unsigned int treeCoverage = 50;     //is a percentage

    //human related 
    unsigned int humanPopulation = 0;

public:
    //gets
    //coord getCoordinates();

    bool getIsLand();
    unsigned int getTreeCoverage();

    unsigned int getHumanPopulation(); 
    

    //sets
    void setCoordinates(int q, int r);
    void incHumanPopulation(unsigned int amount);
    void decHumanPopulation(unsigned int amount);

};

extern void summarizeTile(tile tile);

#endif//TILES_H