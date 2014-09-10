#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
    
    // macs by default run on non vertical sync, which can make animation very, very fast
	// this fixes that:
	
	ofSetVerticalSync(true);
	
	// set background:
	
	ofEnableAlphaBlending();
	ofBackground(30,30,30);

    obj.setSrc(0, ofGetHeight()*0.5);
    obj.setDst(ofGetWidth(), ofGetHeight()*0.5);
    
    //fastest 0.03f
    acc = 0.03f;
    
}

//--------------------------------------------------------------
void ofApp::update(){

    pct += acc;
    if(pct > 1.0f ){
        pct = 0.0f;
    }
    
    obj.updatePct(pct);
    cout << acc << endl;
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
    obj.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == 357) {
        acc = acc + 0.001f;
    }
    
    if(key == 359) {
        acc = acc - 0.001f;
    }
    
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
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
