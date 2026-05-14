#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "COABaseCharacter.generated.h"

UCLASS()
class DEMOGAME1_API ACOABaseCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ACOABaseCharacter();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "COA")
	bool bDead;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "COA")
	float Health;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "COA")
	float MaxHealth;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "COA")
	float HealingRate;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "COA")
	float WalkingSpeed;

	UFUNCTION(BlueprintPure, Category = "COA")
	float GetHealthPercent() const;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};