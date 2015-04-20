//
//  flower.h
//  Bubbles
//
//  Created by Glenna Xie on 4/19/15.
//
//

#ifndef __Bubbles__flower__
#define __Bubbles__flower__

#include <ofMain.h>  //gives access to openFrameworks library

class Flower{
    
public:
    Flower();
    void setup(float x_, float y_);
    void update();
    void draw();

    
    ofVec2f flowerPos;
    float flowerDeg;
    ofColor flowerColor;
    
    ofImage flower;
};

#endif /* defined(__Bubbles__flower__) */
