//
//  Alien.cpp
//  manyClasses
//
//  Created by TtTtTtTtT on 10/02/16.
//
//

#include "Alien.hpp"


Alien::Alien() {
    
    //xPos= ofRandom(0,ofGetWidth());
    //yPos = ofRandom (0, ofGetHeight());
    
    velX= ofRandom(-3,3);
    velY = ofRandom (-3,3);
    r = ofRandom(255);
    g = ofRandom(255);
    b =ofRandom(255);
     diam = 100;

}


void Alien::setup(float _x,float _y) {
    xPos = _x;
    yPos = _y;

    

}

void Alien::draw() {
    ofSetColor (r, g, b);
    ofFill();
    ofDrawEllipse(xPos,yPos, diam, diam);

}

void Alien::update() {
    
    xPos+= velX; //xPOs = xPOs+velX
    yPos+=velY;
    
    if(xPos>ofGetWidth()|| xPos<0){
        velX= -velX;
}
    if(yPos>ofGetWidth()|| yPos<0){
        velY= -velY;
    }
}
    