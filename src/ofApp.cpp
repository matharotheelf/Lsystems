#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
}

//void ofApp::drawBranch(int iterationsLeft, float lineLength){
//    ofTranslate(-ofGetWidth()/2, -ofGetHeight());
//    float lengthRatio = ofGetWidth()/(ofGetMouseX() + 1);
//    float angle = 90 * ofGetMouseY()/ofGetHeight();
//    ofTranslate(ofGetWidth()/2, ofGetHeight());
//
//    ofDrawLine(0,0,0,-lineLength);
//    if(iterationsLeft > 0){
//        ofTranslate(0, -lineLength);
//        ofRotateDeg(angle);
//        drawBranch(iterationsLeft - 1, lineLength/lengthRatio);
//        ofRotateDeg(-2*angle);
//        drawBranch(iterationsLeft - 1, lineLength/lengthRatio);
//        ofRotateDeg(angle);
//        ofTranslate(0, lineLength);
//    }
//}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofTranslate(ofGetWidth()/2, ofGetHeight());
//    drawBranch(5, 100);
    rootBranch.Draw();
}

//--------------------------------------------------------------
void ofApp::exit(){

}
