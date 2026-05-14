#include "COABaseCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

ACOABaseCharacter::ACOABaseCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	bDead = false;
    Health = 100.0f;
    MaxHealth = 100.0f;
    HealingRate = 0.0f;
    WalkingSpeed = 400.0f;

	GetCharacterMovement()->bOrientRotationToMovement = true;
	GetCharacterMovement()->RotationRate = FRotator(0.0f, 540.0f, 0.0f);
	GetCharacterMovement()->MaxWalkSpeed = WalkingSpeed;
}

void ACOABaseCharacter::BeginPlay()
{
	Super::BeginPlay();
}

void ACOABaseCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!bDead)
	{
        Health = FMath::Min(MaxHealth, Health + HealingRate * DeltaTime);
	}
}

float ACOABaseCharacter::GetHealthPercent() const
{
	return (MaxHealth > 0.0f) ? (Health / MaxHealth) : 0.0f;
}