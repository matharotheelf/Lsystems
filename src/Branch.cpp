//
//  Branch.cpp
//  LSystemsGenerator
//
//  Created by thomas lawrence on 19/11/2023.
//

#include "Branch.hpp"

//--------------------------------------------------------------
Branch::Branch(float cLength, float cAngle, int cChildGenerations, ofVec2f cBasePosition, ofVec2f cEndPosition, ofVec2f cBaseDirection) {
    basePosition = cBasePosition;
    endPosition = cEndPosition;
    baseDirection = cBaseDirection;
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

    ofVec2f newBaseDirection1 = baseDirection;
    newBaseDirection1.rotate(angle);
    ofVec2f newEndPosition1 = endPosition + length*newBaseDirection1;
    
    ofVec2f newBaseDirection2 = baseDirection;
    newBaseDirection2.rotate(-angle);
    ofVec2f newEndPosition2 = endPosition + length*newBaseDirection2;

    Branch childBranch1(length*0.5, angle, childGenerations - 1, endPosition, newEndPosition1, newBaseDirection1);
    
    childBranches.push_back(childBranch1);
    
    Branch childBranch2(length*0.5, angle, childGenerations - 1, endPosition, newEndPosition2, newBaseDirection2);
    
    childBranches.push_back(childBranch2);
}
