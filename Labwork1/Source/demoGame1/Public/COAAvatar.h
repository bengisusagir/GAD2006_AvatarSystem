#pragma once

#include "CoreMinimal.h"
#include "COABaseCharacter.h"
#include "COAAvatar.generated.h"

UCLASS()
class DEMOGAME1_API ACOAAvatar : public ACOABaseCharacter
{
	GENERATED_BODY()

public:
	ACOAAvatar();

	// Stamina system (Avatar-only feature)
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
	float GetStaminaPercent() const;

protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

public:
	UFUNCTION(BlueprintCallable, Category = "COA")
	void UpdateSpeed();

private:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float Value);
	void MoveRight(float Value);

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class USpringArmComponent* SpringArm;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UCameraComponent* Camera;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float SprintSpeed = 800.0f;

	void SprintPressed();
	void SprintReleased();
};