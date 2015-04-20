#pragma once

#include "ofMain.h"
#include "bubble.h"
#include "flower.h"
#define BubbleSize 10   //arrays don't have sizes

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    // Bubble bubble;
    
   // Bubble bubbles[BubbleSize];
    
    // add another vector
    // write another class
    
    vector<Bubble> bubbles;
    vector<Flower> flowers;
};
