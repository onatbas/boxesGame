//
// Created by Onat Bas on 05/01/17.
//

#include "MouseClickTracker.hxx"
#include "DrawPosition.hxx"
#include "BoxPositionCalculator.hxx"
#include "MouseClicked.hxx"
#include "Box.hxx"
#include <iostream>

using namespace entityx;

MouseClickTracker::MouseClickTracker(GameLooper *looper, EntityFactory *factory, Dimension windowDimensions)
        : looper(*looper) {
    looper->observe(SDL_MOUSEBUTTONDOWN, 0, [=](const char* data){
        const SDL_Event *e = (SDL_Event *)data;
        const SDL_MouseButtonEvent &button = e->button;
        const DrawPosition &clickPosition = DrawPosition(button.x, button.y);

        BoxPositionCalculator calculator;
        BoxPosition boxPosition = calculator.clickToBox(clickPosition, windowDimensions);

        looper->sendSignal(BOXESEVENT_BOX_CLICKED, 0, (char*)&boxPosition);
    });
}
