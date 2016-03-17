#include "ofApp.h"
void ofApp::diamond(ofPoint center, float width, float height){
       //line 1
    ofLine(center.x - width/2, center.y, center.x, center.y-height/2);
    
    // line 2
    ofLine(center.x, center.y-height/2, center.x+width/2, center.y);
    
    //line 3
    ofLine(center.x+width/2, center.y, center.x, center.y+height/2);
    
    //line 4
    ofLine(center.x, center.y + height/2, center.x - width/2, center.y);
     }
//--------------------------------------------------------------
void ofApp::setup(){
    //stops it from drawing continuous background
    ofSetBackgroundAuto(false);
    circleX = 0;
    center.x =ofGetWidth()/2;
    center.y = ofGetHeight()/2;
    height = 300;
    width = 300;

}

//--------------------------------------------------------------
void ofApp::update(){
    circleX = circleX + 1;
}

//--------------------------------------------------------------
void ofApp::draw(){
    //change the background of color
    //ofBackground(3);
    //set color for drawing
    ofSetColor(255, 0, 0);
    ofEllipse(circleX, ofGetHeight()/2, 200, 200);
    //add text to the screen
    ofDrawBitmapString("Hello World", 100, 100);
    


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
