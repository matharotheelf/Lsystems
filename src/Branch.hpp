//
//  Branch.hpp
//  LSystemsGenerator
//
//  Created by thomas lawrence on 19/11/2023.
//

#ifndef Branch_hpp
#define Branch_hpp

#include "ofMain.h"
#include <stdio.h>

#endif /* Branch_hpp */


class Branch{
    public:
        Branch(float cLength, float cAngle, int cChildGenerations, ofVec2f cBasePosition,
        ofVec2f cEndPosition, ofVec2f cBaseDirection);
        float length;
        float angle;
        int childGenerations;
        ofVec2f basePosition;
        ofVec2f endPosition;
        ofVec2f baseDirection;
        std::vector<Branch> childBranches;
        void Draw();
    private:
        void DrawChildren();
        void GenerateChildren();
    
};
