#include "PreCompile.h"
#include "Diamond.h"
#include <EngineCore/SpriteRenderer.h>
#include <EnginePlatform/EngineInput.h>
#include <EngineCore/DefaultSceneComponent.h>
#include <EngineCore/CameraActor.h>
#include <EngineCore/TimeEventComponent.h>
#include "MyCustomRenderer.h"
#include <EngineCore/Collision.h>

ADiamond::ADiamond()
{
	std::shared_ptr<UDefaultSceneComponent> Default = CreateDefaultSubObject<UDefaultSceneComponent>();
	RootComponent = Default;

	Renderer = CreateDefaultSubObject<MyCustomRenderer>();
	Renderer->SetupAttachment(RootComponent);
	Renderer->SetScale3D({ 50.0f, 50.0f, 50.0f });
}

void ADiamond::Tick(float fDeltaTime)
{
	AActor::Tick(fDeltaTime);

	FVector Rotation = { 0,0,100 * fDeltaTime };

	RootComponent->AddWorldRotation(Rotation);
}
