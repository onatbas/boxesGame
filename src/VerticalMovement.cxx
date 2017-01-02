//
// Created by Onat Bas on 02/01/17.
//

#include "VerticalMovement.hxx"

VerticalMovement::VerticalMovement(int currentHeight, int moveByUnit) : currentHeight(currentHeight),
                                                                        moveByUnit(moveByUnit) {
}

bool VerticalMovement::operator==(const VerticalMovement &rhs) const {
    return currentHeight == rhs.currentHeight && moveByUnit == rhs.moveByUnit;
}

bool VerticalMovement::operator!=(const VerticalMovement &rhs) const {
    return !(rhs == *this);
}
