//
//  Branch.cpp
//  LSystemsGenerator
//
//  Created by thomas lawrence on 19/11/2023.
//

#include "Branch.hpp"

//--------------------------------------------------------------
Branch::Branch(float cLength, float cAngle, int cGenerationNumber, ofVec2f cBasePosition, ofVec2f cEndPosition, ofVec2f cBaseDirection) {
    basePosition = cBasePosition;
    endPosition = cEndPosition;
    baseDirection = cBaseDirection;
    generationNumber = cGenerationNumber;
    length = cLength;
    angle = cAngle;
}

void Branch::Draw(){
    ofDrawLine(basePosition, endPosition);
}

vector<Branch *> Branch::GenerateChildren(){
    vector<Branch *> childBranches;
    
    ofVec2f newBaseDirection1 = baseDirection;
    newBaseDirection1.rotate(angle);
    ofVec2f newEndPosition1 = endPosition + length*newBaseDirection1;
    
    ofVec2f newBaseDirection2 = baseDirection;
    newBaseDirection2.rotate(-angle);
    ofVec2f newEndPosition2 = endPosition + length*newBaseDirection2;

    Branch *childBranch1 = new Branch(length*0.5, angle, generationNumber + 1, endPosition, newEndPosition1, newBaseDirection1);
    
    childBranches.push_back(childBranch1);
    
    Branch *childBranch2 = new Branch(length*0.5, angle, generationNumber + 1, endPosition, newEndPosition2, newBaseDirection2);
    
    childBranches.push_back(childBranch2);
    
    return childBranches;
}
