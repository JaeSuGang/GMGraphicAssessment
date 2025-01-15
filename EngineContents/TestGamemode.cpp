#include "PreCompile.h"
#include "TestGamemode.h"
#include "EnginePlatform/EngineInput.h"
#include "Diamond.h"
#include "EngineCore/CameraActor.h"

ATestGameMode::ATestGameMode()
{
	GetWorld()->SpawnActor<ADiamond>();
}

ATestGameMode::~ATestGameMode()
{
}

void ATestGameMode::Tick(float _DeltaTime)
{
	AGameMode::Tick(_DeltaTime);

	if (UEngineInput::IsPress('P'))
	{
		World->GetMainCamera()->FreeCameraSwitch();
	}
}

void ATestGameMode::BeginPlay()
{
	AGameMode::BeginPlay();
}

void ATestGameMode::LevelChangeStart()
{
}
