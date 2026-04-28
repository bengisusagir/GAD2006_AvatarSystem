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

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "COA")
	float Stamina = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "COA")
	float MaxStamina = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "COA")
	float StaminaGainRate = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "COA")
	float StaminaDrainRate = 20.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "COA")
	bool bStaminaDrained = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "COA")
	bool bSprinting = false;

	UFUNCTION(BlueprintPure, Category = "COA")
	float GetHealthPercent() const;

	UFUNCTION(BlueprintPure, Category = "COA")
	float GetStaminaPercent() const;

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
};