//
//  bubble.cpp
//  Bubbles
//
//  Created by Glenna Xie on 4/15/15.
//
//

#include "bubble.h"

Bubble::Bubble(){
   // pos = ofVec3f(300, 300, 0);
    vel = ofVec2f(ofRandom(0, 10), ofRandom(-10, 10));
    myColor = ofColor(255,ofRandom(255),ofRandom(255), 150);
    deg  = ofRandom(30, 90);
}

void Bubble::setup(float x_, float y_){
    pos = ofVec2f(x_,y_);
    butterfly.loadImage("butterfly.png");

}

void Bubble::draw(){
    
    ofSetColor(myColor);
    
    ofPushMatrix();
    ofTranslate(pos);
    butterfly.setAnchorPoint(butterfly.getWidth()/2, butterfly.getHeight()/2);
    ofRotate(deg);
    butterfly.draw(0,0);
    ofPopMatrix();
    
    
 }

void Bubble::update(){
   // deg+=abs( ofDist(ofGetMouseX(),ofGetMouseY(), pos.x, pos.y) / 20);
    if((abs(pos.x) < abs(ofGetMouseX() + 100) && abs(pos.y) < abs(ofGetMouseY() + 100))
       ||(abs(pos.x) > abs(ofGetMouseX() + 300) && abs(pos.y) > abs(ofGetMouseY() +100))
       ){
        pos+=vel;

    }else{
        pos.x +=vel.x;
        pos.y -=vel.y;
    
    }
    myColor.a -= .1;

}



