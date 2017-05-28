#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate (60);
	float px = ofRandom(0, ofGetMouseX());
	float py = ofRandom(0, ofGetMouseY());

	mPosition = ofVec2f(px, py);

	float vx = (0, 0);
	float vy = (0, 0);

	mVelocity = ofVec2f(vx, vy);

    isshowsakura = false;
	haikei.load ("haikei.png");
	sakura.load("thEBQL02EH.jpg");

}

//--------------------------------------------------------------
void ofApp::update(bool isMousePressed){
	float mouseX = ofGetMouseX();
	float mouseY = ofGetMouseY();
	ofVec2f mousePosition = ofVec2f(mouseX, mouseY);
	mVelocity.y += gravity;
	mVelocity *= friction;
	mPosition += mVelocity;
}

//--------------------------------------------------------------
void ofApp::draw() {

	
		
	haikei.draw(0, 0);
	if (isshowsakura) {
		sakura.draw(mouseX, mouseY, 50, 50);
		sakura.draw(mouseX, mouseY + 50, 50, 50);
		sakura.draw(mouseX + 50, mouseY, 50, 50);
		sakura.draw(mouseX + 50, mouseY + 50, 50, 50);
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
void ofApp::mousePressed(int x, int y, int button){
	isshowsakura = true;
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	isshowsakura = false;
	isshowsakura = true;
	mVelocity = ofVec2f(0, gravity);
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

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