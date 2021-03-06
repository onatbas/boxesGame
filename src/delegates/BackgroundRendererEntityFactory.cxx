//
// Created by Onat Bas on 03/01/17.
//

#include <view/PNGLoader.hxx>
#include "BackgroundRendererEntityFactory.hxx"
#include "EntityFactory.hxx"
#include "components/BackgroundComponent.hxx"
#include "components/Scale.hxx"
#include "systems/GameBeginZoomOut.hxx"
#include <view/PNGDrawer.hxx>
#include <view/WindowUpdater.hxx>
#include <view/PNGDimensionGetter.hxx>

BackgroundRendererEntityFactory::BackgroundRendererEntityFactory(const std::string &pathToPng, EntityFactory *factory) {
    auto e = factory->entities.create();
    e.assign<BackgroundComponent>(pathToPng);
    e.assign<Scale>(1);
    e.assign<GameBeginZoomOut>(500, 0.25, 0.60);
}


