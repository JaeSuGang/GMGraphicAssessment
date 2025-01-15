#pragma once
#include "D:\CppProjects\D3DTest\GM2DX\EngineCore\Actor.h"

class ADiamond : public AActor
{
public:
	ADiamond();

	void Tick(float fDeltaTime) override;

protected:

	std::shared_ptr<class URenderer> Renderer;
};

