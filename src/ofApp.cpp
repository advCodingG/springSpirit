#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    background.loadImage("background.jpg");
}

//--------------------------------------------------------------
void ofApp::update(){

    //the butterfilies fire every 3 seconds
    int time = ofGetSeconds();
   
    if( (time % 3) == 0 ){
        Bubble tempBubble;
        tempBubble.setup(ofGetMouseX(), ofGetMouseY());
        bubbles.push_back(tempBubble); // add one bubble to the vector, the vector keeps getting bigger;
    }
    
    for (int i = 0; i < bubbles.size(); i ++) {
         bubbles[i].update();
        float distance = ofDist(ofGetMouseX(), ofGetMouseY(), bubbles[i].pos.x, bubbles[i].pos.y);
        if(distance > 800){
            //vector indexes are always changing. begin() makes sure it starts interating from the beginning of the list
            bubbles.erase( bubbles.begin() + i);
        
        }
        

    }
    
    for (int j = 0; j < flowers.size(); j ++) {
        flowers[j].update();
        if(flowers.size() > 20){
            flowers.erase( flowers.begin() + j);
            
        }
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofSetColor(255);

    background.draw(0, 0);
    
//    ofColor white;
//    ofColor green;
//    
//    white.set (255, 255, 255);
//    green.set (201, 231, 172);
//    
//    ofBackgroundGradient(white, green, OF_GRADIENT_LINEAR);
    
    for (int i = 0; i < bubbles.size(); i ++) {
        bubbles[i].draw();
     
    }
    
    for (int j = 0; j < flowers.size(); j ++) {

        flowers[j].draw();
        
    }
    
    
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    //the flower is placed only when the mouse is pressed
    
    if(button == OF_MOUSE_BUTTON_LEFT){
        Flower tempFlower;
        tempFlower.setup(ofGetMouseX(), ofGetMouseY());
        flowers.push_back(tempFlower);
        
    }
    
}
//--------------------------------------------------------------

void ofApp::keyPressed(int key){
    

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
