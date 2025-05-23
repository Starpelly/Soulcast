#include "Engine/Core/Engine.hpp"

namespace Soulcast
{
	BackgroundLayer Scene::backgroundLayers[BACKGROUND_LAYER_COUNT];
	Object Scene::objectList[OBJECT_COUNT];
}

using namespace Soulcast;

void Scene::RenderObjects()
{
	for (int32 o = 0; o < OBJECT_COUNT; o++)
	{
		auto* object = &objectList[o];
	}
}