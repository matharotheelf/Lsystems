#pragma once

#include "ofMain.h"
#include "Branch.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup() override;
		void update() override;
		void draw() override;
        void exit() override;
        Branch rootBranch = Branch(100, 30, 5, ofVec2f(0, 0), ofVec2f(0,-100), ofVec2f(0,-1));
};
