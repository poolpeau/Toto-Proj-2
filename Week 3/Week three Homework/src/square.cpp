//
//  square.cpp
//  Week three Homework
//
//  Created by TtTtTtTtT on 09/02/16.
//
//

#include "square.hpp"

void Square::cube() {

    cout<<"cubing" << endl;
    
    r = ofRandom(0,255);
    g = ofRandom (0,255);
    b = ofRandom (0,255);
    ofSetColor(r, g, b);
    ofNoFill();
    
    ofDrawRectangle(ofGetMouseX()/2, ofGetMouseY()/3,300,400);

}

void Square::cuby()  {
    
    cout<<"cubying" << endl;

    
    r = ofRandom(0,255);
    g = ofRandom (0,255);
    b = ofRandom (0,255);
    ofFill();
    
    
    ofDrawSphere(ofGetMouseX()/1, ofGetMouseY()/1,30,50);


}

void Square::rotate() {

    cout<<"roating" << endl;
    

    
    r = ofRandom(0,255);
    g = ofRandom (0,255);
    b = ofRandom (0,255);
    ofSetColor(r, g, b);
    ofFill();

    
    
    
    ofDrawTriangle(300,400,500,100,110,90);
  
   
    
}
