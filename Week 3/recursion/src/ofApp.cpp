#include "ofApp.h"
void ofApp::drawCircle (float x, float y, float diam){
    
    ofDrawEllipse (x, y, diam, diam);
    diam = diam*.7;
    if(diam>5){
        drawCircle (x, y, diam);
    }

}
void ofApp::drawBranch (float length, float theta){
    

    ofDrawLine(0, 0, 0, -length);
    
    ofTranslate(0, -length);
    length = length*0.5;
  
    
    if(length>2){
    ofPushMatrix();
    //ofTranslate (0, -length);
    ofRotate (theta);
    drawBranch (length, theta);
    ofPopMatrix();
    
    ofPushMatrix();
    //ofTranslate (0, -length);
    ofRotate (-theta);
    drawBranch (length, theta);
    ofPopMatrix();
        }
}

//--------------------------------------------------------------
void ofApp::setup(){

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    //ofSetResolution(100);
    ofSetColor(255);
    ofNoFill();
    drawCircle(ofGetWidth()/2, ofGetHeight()/2, 500);
ofSetColor(255, 0, 0);
    ofTranslate(ofGetWidth()/2, ofGetHeight());
     ofLine(0, 0, 0, -200);
     ofTranslate(0,-200);
    ofRotate(60);
     ofLine(0, 0, 0, -200);
    
    ofTranslate(ofGetWidth()/2, ofGetHeight());
    //drawBranch (200,40);
    drawBranch (400, cos(ofGetElapsedTimef())*100);
    drawBranch (200,30);
    

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
