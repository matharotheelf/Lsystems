//
//  Branch.cpp
//  LSystemsGenerator
//
//  Created by thomas lawrence on 19/11/2023.
//

#include "Branch.hpp"

//--------------------------------------------------------------
Branch::Branch(float cLength, float cAngle, int cChildGenerations, ofVec2f cBasePosition, ofVec2f cEndPosition) {
    basePosition = cBasePosition;
    endPosition = cEndPosition;
    childGenerations = cChildGenerations;
    length = cLength;
    angle = cAngle;
    
    GenerateChildren();
}

void Branch::Draw(){
    ofDrawLine(basePosition, endPosition);
    DrawChildren();
}

void Branch::DrawChildren(){
    for (Branch childBranch : childBranches) {
        childBranch.Draw();
    }
}

void Branch::GenerateChildren(){
    if(childGenerations == 0) return;

    ofVec2f newEndPosition1 = endPosition + length*ofVec2f(0, -1).rotate(angle);
    ofVec2f newEndPosition2 = endPosition + length*ofVec2f(0, -1).rotate(-angle);
    
    Branch childBranch1(length*0.5, angle, childGenerations - 1, endPosition, newEndPosition1);
    
    childBranches.push_back(childBranch1);
    
    Branch childBranch2(length*0.5, angle, childGenerations - 1, endPosition, newEndPosition2);
    
    childBranches.push_back(childBranch2);
}
