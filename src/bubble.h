//
//  bubble.h
//  Bubbles
//
//  Created by Glenna Xie on 4/15/15.
//
//

#ifndef __Bubbles__bubble__
#define __Bubbles__bubble__

#include <ofMain.h>  //gives access to openFrameworks library

class Bubble{
    
public:
    Bubble(); //an empty constructor: defines a memory chunk
    void setup(float x_, float y_);
    void update();
    void draw();
     
    ofVec2f pos;
    ofVec2f vel;
    float rad;
    ofColor myColor;
    float deg;
    
    ofImage butterfly;
};

#endif /* defined(__Bubbles__bubble__) */
