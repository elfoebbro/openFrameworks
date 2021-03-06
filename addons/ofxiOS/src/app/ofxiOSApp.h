/*
 *  ofxiOSApp.h
 *  MSA Labs Vol. 1
 *
 *  Created by Mehmet Akten on 14/07/2009.
 *  Copyright 2009 MSA Visuals Ltd.. All rights reserved.
 *
 */

#pragma once

#include "ofMain.h"
#include "ofEvents.h"
#include "ofxiOSAlerts.h"
#include "ofxMultiTouch.h"

class ofxiOSApp : public ofSimpleApp, public ofxiOSAlertsListener, public ofxMultiTouchListener {
	
public:
	virtual void setup() {};
	virtual void update() {};
	virtual void draw() {};
	virtual void exit() {};

	virtual void touchDown(int x, int y, int id) {};
	virtual void touchMoved(int x, int y, int id) {};
	virtual void touchUp(int x, int y, int id) {};
	virtual void touchDoubleTap(int x, int y, int id) {};
	virtual void touchCancelled(int x, int y, int id) {};
	
	virtual void lostFocus() {}
	virtual void gotFocus() {}
	virtual void gotMemoryWarning() {}

	virtual void touchDown(ofTouchEventArgs & touch) {
		touchDown(touch.x, touch.y, touch.id);
	};
	virtual void touchMoved(ofTouchEventArgs & touch) {
		touchMoved(touch.x, touch.y, touch.id);
	};
	virtual void touchUp(ofTouchEventArgs & touch) {
		touchUp(touch.x, touch.y, touch.id);
	};
	virtual void touchDoubleTap(ofTouchEventArgs & touch) {
		touchDoubleTap(touch.x, touch.y, touch.id);
	};
	virtual void touchCancelled(ofTouchEventArgs & touch) {
		touchCancelled(touch.x, touch.y, touch.id);
	};

};

OF_DEPRECATED_MSG("ofxiPhoneApp is deprecated, use ofxiOSApp instead.", typedef ofxiOSApp ofxiPhoneApp);

