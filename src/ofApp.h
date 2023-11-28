#pragma once

#include "ofMain.h"
#include "Branch.hpp"
#include "Tree.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup() override;
		void update() override;
		void draw() override;
        void exit() override;
        Tree tree = Tree(ofVec2f(512,768), 200, 30, 4);
};
