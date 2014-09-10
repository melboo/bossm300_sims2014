

#include "xeno.h"


//------------------------------------------------------------------
xeno::xeno(){

}

//------------------------------------------------------------------
void xeno::draw() {
	ofFill();
	ofSetRectMode(OF_RECTMODE_CENTER); // center around the position
    ofSetColor(color);
    ofRect(pos.x, pos.y, 20,20);
}

//------------------------------------------------------------------
void xeno::xenoToPoint(float catchX, float catchY){
	pos.x = catchUpSpeed * catchX + (1-catchUpSpeed) * pos.x;
	pos.y = catchUpSpeed * catchY + (1-catchUpSpeed) * pos.y;
}
