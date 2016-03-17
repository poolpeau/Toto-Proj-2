//
//  Mirror.cpp
//  MidtermProject
//
//  Created by TtTtTtTtT on 15/03/16.
//
//


#include "Mirror.hpp"

void Mirror::drawRectangle (float x, float y, float diam ){


    ofSetRectMode(OF_RECTMODE_CENTER);
    
    //ofGetRectMode(OF_RECTMODE_CENTER);
    ofDrawRectangle (x, y, diam, diam);
    
    diam = diam*.9;
    if(diam>0.1){
        drawRectangle(x, y, diam);
        ofPushMatrix();
        //ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
        ofRotate(-diam);
        ofRotate(x/3);
        //ofRotate(sin(ofGetElapsedTimef())*250);
        ofRotate(150.0 * ofGetElapsedTimef()/1.5);
        ofDrawCircle(0+diam/0.9,200, 50);
        ofDrawRectangle(0,0,(ofRandom(30,30)),130);
        ofPopMatrix();
    }
  
  
    
}


void Mirror::drawBranch (float length, float theta){
    
    
    ofDrawRectangle(0, 0, 0, -length);
    
    
//    //ofTranslate(0, -length);
//    //length = length/0.5;
//    
//    
//    if(length>3){
//        ofPushMatrix();
//        //ofTranslate (0, length);
    
//        ofRotate (*theta);
//        drawBranch (length, theta);
//        ofPopMatrix();
//        
//        ofPushMatrix();
//
//        //ofRotate(sin(ofGetElapsedTimef())*250);
//        drawBranch (-length, -theta);
//        ofPopMatrix();
//    }
}



