#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update(bool isMousePressed);
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void update();
		
		ofVec2f mPosition;
		ofVec2f mVelocity;
		ofImage sakura;
		ofImage haikei;
		bool isshowsakura;
		bool isreleasesakura;
		constexpr static const float gravity = 0.0098;
		constexpr static const float friction = 0.999;
		int i = 1;
		int j = i+1;
};
