#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    //Spiral.name == "toto";
    
    ofBackground(0,250,0);
    //ofBackgroundGradient(ofColor(100), ofColor(200));
    //light.setPosition (400,200,700);
    //light.enable(); //Enabling light source;
    
    //light.draw();{
    
    // ofDrawSphere(1000,1000,1000,1000);
    
    //};
    //lightStatic.enable();
    //lightStatic.setPosition(ofVec3f(200,0,200));
    //lightStatic.draw();
   
    float angle = 10.0;
    

    
    
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
    
}

//--------------------------------------------------------------

/* void ofApp:: stripePattern(){
 
 ofSetColor( ofColor::black);
 ofSetLineWidth (3.0);
 for (int= -50; i<50; i++) {
 ofPushMatrix();
 ofTranslate (i*20,0);
 ofLine (0, -100, 0, 100);
 ofPopMatrix();
 }
 
 } */

//--------------------------------------------------------------
void ofApp::draw(){
    
    
    ofBackgroundGradient(ofColor(200), ofColor(0));
    
    spiral.draw();
    
    /*ofPushMatrix();
     ofTranslate (ofGetWidth () /2,
     ofGetHeight () /2);
     //----
     stripePattern ();
     //----
     ofPopMatrix;*/
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
    }

