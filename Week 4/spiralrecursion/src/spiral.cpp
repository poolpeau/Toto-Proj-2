//
//  spiral.cpp
//  spiralrecursion
//
//  Created by TtTtTtTtT on 23/02/16.
//
//

#include "spiral.hpp"

//void Spiral::setup() {

  //  cout<<"spiraling"<< endl;
//};

void Spiral::setup()
{
    posX= 200;
    posY= 100;
    posX2 = 00;
    posY2 = 00;
    radius = 200;
    
   r = ofRandom(0,255);
   g = ofRandom (0,255);
   b = ofRandom (0,255);
 
    ofSetColor(r, g, b);

    
} ;

void Spiral::draw()

{
    ofPushMatrix;
    ofTranslate (ofGetWidth()/2,
                 ofGetHeight()/2);
                 //----
stripePattern (1/tan(ofGetElapsedTimef())*2500);
  
    
    //----
    
   

        
    

} ;

void Spiral::update()
{
    
}
void Spiral::stripePattern (float x)
{
    //ofSetColor(240, 230, 10);
    
    r = ofRandom (0,255);
    g =  100;
    b = ofRandom (180);
    
    ofSetColor(r, g, b);
 
    ofSetLineWidth(0.6);
   
    //length *= 0.2;
    //ofDrawLine(0,500,0,100);
    //if (length>1){
    for(x=-50; x< ofGetWidth(); x= x+0.44){
        ofPushMatrix();
        ofTranslate (x*20,0);
        ofRotate(x/1);
        //ofRotate(150.0 * ofGetElapsedTimef());
        ofRotate(sin( ofGetElapsedTimef()) * 250);
        ofDrawLine(0,-380,0,180);
        //stripePattern (x, length);
        ofPopMatrix();
        //}
     
        }
    
    

    
    //int i=300;
   // i= i+4;
    
    //ofRotate(i*5);
   // for(int x=0; x< ofGetWidth(); x= x+20){
       // ofDrawLine(x,200,x,500);
    
    
}








