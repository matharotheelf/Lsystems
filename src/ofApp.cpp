#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    tree.GenerateRoot();
    tree.GenerateGeneration(1);
    tree.GenerateGeneration(2);
    tree.GenerateGeneration(3);
    tree.GenerateGeneration(4);
    tree.GenerateGeneration(5);
    tree.GenerateGeneration(6);
    tree.GenerateGeneration(7);
    tree.GenerateGeneration(8);
    tree.GenerateGeneration(9);
    tree.GenerateGeneration(10);
}

void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
    tree.DrawTree();
}

//--------------------------------------------------------------
void ofApp::exit(){

}
