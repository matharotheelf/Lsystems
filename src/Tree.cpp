//
//  Tree.cpp
//  LSystemsGenerator
//
//  Created by thomas lawrence on 23/11/2023.

#include "Tree.hpp"
#include "Branch.hpp"

Tree::Tree(ofVec2f cRootPosition, float cBranchLength, float cBranchAngle, int cTotalBranchGenerations) {
    rootPosition = cRootPosition;
    branchLength = cBranchLength;
    branchAngle = cBranchAngle;
    totalBranchGenerations = cTotalBranchGenerations;
}

void Tree::GenerateGeneration(int generationNumber){
    if(generationNumber == 1){
        branchGeneration1 = rootBranch->GenerateChildren();
    } else if(generationNumber == 2) {
        for(Branch * branch : branchGeneration1){
            vector<Branch *> branchChildren = branch->GenerateChildren();
            branchGeneration2.insert(branchGeneration2.end(), branchChildren.begin(), branchChildren.end());
        }
    } else if(generationNumber == 3) {
        for(Branch * branch : branchGeneration2){
            vector<Branch *> branchChildren = branch->GenerateChildren();
            branchGeneration3.insert(branchGeneration3.end(), branchChildren.begin(), branchChildren.end());
        }
    } else if(generationNumber == 4) {
        for(Branch * branch : branchGeneration3){
            vector<Branch *> branchChildren = branch->GenerateChildren();
            branchGeneration4.insert(branchGeneration4.end(), branchChildren.begin(), branchChildren.end());
        }
    } else if(generationNumber == 5) {
        for(Branch * branch : branchGeneration4){
            vector<Branch *> branchChildren = branch->GenerateChildren();
            branchGeneration5.insert(branchGeneration5.end(), branchChildren.begin(), branchChildren.end());
        }
    } else if(generationNumber == 6) {
        for(Branch * branch : branchGeneration5){
            vector<Branch *> branchChildren = branch->GenerateChildren();
            branchGeneration6.insert(branchGeneration6.end(), branchChildren.begin(), branchChildren.end());
        }
    } else if(generationNumber == 7) {
        for(Branch * branch : branchGeneration6){
            vector<Branch *> branchChildren = branch->GenerateChildren();
            branchGeneration7.insert(branchGeneration7.end(), branchChildren.begin(), branchChildren.end());
        }
    } else if(generationNumber == 8) {
        for(Branch * branch : branchGeneration7){
            vector<Branch *> branchChildren = branch->GenerateChildren();
            branchGeneration8.insert(branchGeneration8.end(), branchChildren.begin(), branchChildren.end());
        }
    } else if(generationNumber == 9) {
        for(Branch * branch : branchGeneration8){
            vector<Branch *> branchChildren = branch->GenerateChildren();
            branchGeneration9.insert(branchGeneration9.end(), branchChildren.begin(), branchChildren.end());
        }
    } else if(generationNumber == 10) {
        for(Branch * branch : branchGeneration9){
            vector<Branch *> branchChildren = branch->GenerateChildren();
            branchGeneration10.insert(branchGeneration10.end(), branchChildren.begin(), branchChildren.end());
        }
    }
}

//vector<Branch *> Tree::Generation(int generationNumber){
//    switch(generationNumber) {
//        case 1:
//            return branchGeneration1;
//        case 2:
//            return branchGeneration2;
//        case 3:
//            return branchGeneration3;
//        case 4:
//            return branchGeneration4;
//        case 5:
//            return branchGeneration5;
//        case 6:
//            return branchGeneration6;
//        case 7:
//            return branchGeneration7;
//        case 8:
//            return branchGeneration8;
//        case 9:
//            return branchGeneration9;
//        case 10:
//            return branchGeneration9;
//        default:
//            throw std::invalid_argument("Not a valid generation number");
//    }
//}

void Tree::GenerateRoot(){
    ofVec2f branchEnd = rootPosition + branchLength*ofVec2f(0,-1);
    static Branch branch = Branch(branchLength, branchAngle, 5, rootPosition, branchEnd, ofVec2f(0,-1));
 
    rootBranch = &branch;
}

void Tree::DrawTree(){
    rootBranch->Draw();

    for(vector<Branch *>* generation : generations){
        for(Branch * branch : *generation){
            branch->Draw();
        }
    }
}
