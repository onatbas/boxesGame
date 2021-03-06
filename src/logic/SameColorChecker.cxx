//
// Created by Onat Bas on 02/01/17.
//

#include "AdjacentNeighbourCounter.hxx"

bool SameColorChecker::isSameColor(Colors color, const StackSet &set, const BoxPosition &position) const {
    TileExistsChecker checker;
    const auto exists = checker.tileExists(set, position);
    return exists && (set[position.getX()][position.getY()].getColor() == color);
}