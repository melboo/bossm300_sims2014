#include "ofApp.h"
#include "ofMain.h"

//--------------------------------------------------------------
void ofApp::setup(){

	
	// macs by default run on non vertical sync, which can make animation very, very fast
	// this fixes that: 
	
	ofSetVerticalSync(true);
	
	// set background: 
	
	ofEnableAlphaBlending();
	ofBackground(30,30,30);
	
	
	// set the position of the rectangle:
	for(int i=0; i<NUM; i++)
    {
        myRectangle[i].pos.x = ofRandom(ofGetWidth());
        myRectangle[i].pos.y = ofRandom(ofGetHeight());
        myRectangle[i].catchUpSpeed = ofRandom(0.01f, 0.05f);
        myRectangle[i].color.r = ofRandom(255);
        myRectangle[i].color.g = ofRandom(255);
        myRectangle[i].color.b = ofRandom(255);
    }
	
}

//--------------------------------------------------------------
void ofApp::update(){
    
    //pos for first object
    myRectangle[0].xenoToPoint(mouseX, mouseY);
    
    for(int i=1; i<NUM; i++)
    {
        //loop pos for all other objects
        myRectangle[i].xenoToPoint(myRectangle[i-1].pos.x, myRectangle[i-1].pos.y);
    }
}

//--------------------------------------------------------------
void ofApp::draw(){
    for(int i=0; i<NUM; i++)
    {
        myRectangle[i].draw();
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){
}

//--------------------------------------------------------------
void ofApp::keyReleased  (int key){
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
void ofApp::mouseReleased(){
}
