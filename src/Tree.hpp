//
//  Tree.hpp
//  LSystemsGenerator
//
//  Created by thomas lawrence on 23/11/2023.
//

#ifndef Tree_hpp
#define Tree_hpp

#include <stdio.h>
#include "ofMain.h"

#endif /* Tree_hpp */

class Branch;

class Tree{
    public:
        Tree(ofVec2f rootPosition, float cBranchLength, float cBranchAngle, int totalBranchGenerations);
        ofVec2f rootPosition;
        float branchLength;
        float branchAngle;
        int totalBranchGenerations;
        void GenerateRoot();
        void GenerateGeneration(int generationNumber);
        void DrawTree();
        Branch * rootBranch;
        vector<Branch *> branchGeneration1;
        vector<Branch *> branchGeneration2;
        vector<Branch *> branchGeneration3;
        vector<Branch *> branchGeneration4;
        vector<Branch *> branchGeneration5;
        vector<Branch *> branchGeneration6;
        vector<Branch *> branchGeneration7;
        vector<Branch *> branchGeneration8;
        vector<Branch *> branchGeneration9;
        vector<Branch *> branchGeneration10;
        vector<Branch *>* generations[10] = {
            &branchGeneration1,
            &branchGeneration2,
            &branchGeneration3,
            &branchGeneration4,
            &branchGeneration5,
            &branchGeneration6,
            &branchGeneration7,
            &branchGeneration8,
            &branchGeneration9,
            &branchGeneration10
        };
        vector<Branch *> Generation(int generationNumber);
};
