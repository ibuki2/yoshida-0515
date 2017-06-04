#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofSetFrameRate (60);
	//if (isshowsakura == true) {
		float px = ofRandom(0, ofGetMouseX());
		float py = ofRandom(0, ofGetMouseY());

		mPosition = ofVec2f(px, py);
	//}
	float vx = ofRandom(0, 0);
	float vy = ofRandom(0, 0);

	mVelocity = ofVec2f(vx, vy);

    isshowsakura = false;
	isreleasesakura = false;
	haikei.load ("haikei.png");
	sakura.load("thEBQL02EH.jpg");
	
}

//--------------------------------------------------------------
void ofApp::update(bool isMousePressed){
	if (isshowsakura) {
		float mouseX = ofGetMouseX();
		float mouseY = ofGetMouseY();
		ofVec2f mousePosition = ofVec2f(mouseX,mouseY);
		mPosition = mousePosition;
	//mVelocity *= friction;
	//mVelocity.y += gravity;
	//mPosition += mVelocity;
	}

	if (isreleasesakura) {
		float wave = sin(ofGetElapsedTimef());
		//mVelocity.y += gravity;
		mVelocity *= friction;
		mPosition += mVelocity;
	//	mPosition.x += wave * 20;
	}

}

//--------------------------------------------------------------
void ofApp::draw() {

	
		
	haikei.draw(0, 0,ofGetWidth(),ofGetHeight());
	//if (i==2) {
	if(isshowsakura){	
		float wave = sin(ofGetElapsedTimef());
		sakura.draw(mouseX + (wave * 30), mouseY, 60, 60);
		
	}
	//if (j==3) {
	if(isreleasesakura){
		
		//sakura.draw(mouseX + (wave * 20), mouseY, 60, 60);
		sakura.draw(mPosition, 60, 60);
		//mPosition = ofVec2f(mouseX, mouseY);
		//mVelocity.y += gravity;
		//mPosition += mVelocity;
	}
		/*sakura.draw(mouseX, mouseY + 50, 50, 50);
		sakura.draw(mouseX + 50, mouseY, 50, 50);
		sakura.draw(mouseX + 50, mouseY + 50, 50, 50);*/
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
	isreleasesakura = false;
	/*mPosition = ofVec2f(mouseX, mouseY);*/
//	i += 1;
	
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	isshowsakura = false;
	isreleasesakura = true;
	
	
	//j = i + 1;

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
//------------------------------------------------------------------
void ofApp::update(){
	if (isshowsakura) {
		float mouseX = ofGetMouseX();
		float mouseY = ofGetMouseY();
		ofVec2f mousePosition = ofVec2f(mouseX, mouseY);
		mPosition = mousePosition;
		//mVelocity *= friction;
		//mVelocity.y += gravity;
		//mPosition += mVelocity;
	}

	if (isreleasesakura) {
		float wave = sin(ofGetElapsedTimef());
		mVelocity.y += gravity;
		mVelocity *= friction;
		mPosition += mVelocity;
		mPosition.x += wave ;
	}
	//	mVelocity.y += gravity;
		//mVelocity *= friction;
		//mPosition += mVelocity;
	
}