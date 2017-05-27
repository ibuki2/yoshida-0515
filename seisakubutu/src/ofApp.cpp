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
	haikei.load ("ètÇÃîwåi.png");
	sakura.load("thEBQL02EH.jpg");

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw() {


	if (isshowsakura) {
		haikei.draw(0, 0);
		sakura.draw(mouseX, mouseY, 50, 50);
		sakura.draw(mouseX, mouseY + 50, 50, 50);
		sakura.draw(mouseX + 50, mouseY, 50, 50);
		sakura.draw(mouseX + 50, mouseY + 50, 50, 50);
		sakura.draw(mPosition, 10);
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
