//
//  PinballChinoManager.h
//  chinoPinball
//
//  Created by Kuba on 28/12/13.
//
//  Description: La clase mas basica que actualiza el mundo, el estado del juego, y puede crear/tener mas de un escenario.
//

#pragma once

#include "ofMain.h"
#include "ofxBullet.h"
#include "Scenario.h"
#include "GameStatusDisplay.h"

class PinballChinoManager {
    
public:
    
    PinballChinoManager();
    
	void setup();
	void update();
	void draw();
    
    ofxBulletWorldRigid     world;
	//ofCamera                camera;
    ofEasyCam				camera;
	ofLight					light;
    
    Scenario                myScenario;
    GameStatusDisplay       statusDisplay;
    
 
    
};
