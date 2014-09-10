#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){

    obj.setSrc(0, 0);
    obj.setDst(mouseX, mouseY);
}

//--------------------------------------------------------------
void ofApp::update(){

//    pct += 0.01f;
//    if(pct < 1.0f ){
//        pct = 0.0f;
//    }
    
    pct = 0.02f;
    
    obj.updatePct(pct);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(0, 0, 0);
    obj.draw();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    obj.setDst(mouseX, mouseY);
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
