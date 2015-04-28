//
//  flower.cpp
//  Bubbles
//
//  Created by Glenna Xie on 4/19/15.
//
//

#include "flower.h"

Flower::Flower(){

}

void Flower::setup(float x_, float y_){
    flowerPos = ofVec2f(x_,y_);
    flower.loadImage("flower.png");
    
}

void Flower::draw(){

    ofSetColor(255);
    ofPushMatrix();
    ofTranslate(flowerPos);
    flower.setAnchorPoint(flower.getWidth()/2, flower.getHeight()/2);
    ofRotate(flowerDeg);
    flower.draw(0,0);
    //    ofRotate(deg, 0 ,0,0);
    //    ofCircle(0, 0,rad);
    ofPopMatrix();
    
    
}

void Flower::update(){
    
    //the flower rotates after it is placed
    flowerDeg+=1;
    
}
