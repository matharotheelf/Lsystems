#include "ofApp.h"
ofPolyline line;


//--------------------------------------------------------------
void ofApp::setup(){
}

void ofApp::drawBranch(int iterationsLeft, float lineLength){
    ofDrawLine(0,0,0,-lineLength);
    if(iterationsLeft > 0){
        ofTranslate(0, -lineLength);
        ofRotateDeg(30);
        drawBranch(iterationsLeft - 1, lineLength/1.3);
        ofRotateDeg(-60);
        drawBranch(iterationsLeft - 1, lineLength/1.3);
        ofRotateDeg(30);
        ofTranslate(0, lineLength);
    }
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    drawBranch(12, 100);
}

//--------------------------------------------------------------
void ofApp::exit(){

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

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

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
