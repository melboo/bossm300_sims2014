#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){

    obj.setSrc(ofGetWidth()*0.10, ofGetHeight()*0.5);
    obj.setDst(ofGetWidth()*0.90, ofGetHeight()*0.5);
    //obj.setDst(mouseX, mouseY);
    
    mouseCount = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

    pct += 0.01f;
    if(pct > 1.0f ){
        pct = 0.0f;
    }
    
    //pct = (float)mouseX/ofGetWidth();
    cout << pct << endl;
    obj.updatePct(pct);
//    obj.powUpdatePct(pct, 0.3);
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
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
    if(mouseCount%2){
        obj.setDst(mouseX, mouseY);
    }else {
        
        obj.setSrc(mouseX, mouseY);
    }
    mouseCount++;
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
