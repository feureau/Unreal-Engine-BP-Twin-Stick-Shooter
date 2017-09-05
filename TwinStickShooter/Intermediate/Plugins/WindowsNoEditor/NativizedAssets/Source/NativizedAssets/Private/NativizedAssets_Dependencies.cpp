#include "NativizedAssets.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
namespace
{
	static const FBlueprintDependencyObjectRef NativizedCodeDependenties[] =
	{
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SceneComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Actor"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PlayerController"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("TimerHandle"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetArrayLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetMathLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameplayStatics"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetSystemLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PointerToUberGraphFrame"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameModeBase"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameSession"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("GameStateBase"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PlayerState"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("HUD"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SpectatorPawn"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("EnemyCharacter_BP"), TEXT("EnemyCharacter_BP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("HeroCharacter_BP"), TEXT("HeroCharacter_BP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("EnemySpawner_BP"), TEXT("EnemySpawner_BP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Animation"), TEXT("EnemyAnim_BP_Child"), TEXT("EnemyAnim_BP_Child_C"), TEXT("/Script/Engine"), TEXT("AnimBlueprintGeneratedClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/UE4_Mannequin_Mobile/Mesh"), TEXT("SK_Mannequin_Mobile"), TEXT("SK_Mannequin_Mobile"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("iDamageable_BP"), TEXT("iDamageable_BP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("BoxComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("NavArea_Obstacle"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("MaterialInstanceDynamic"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("TwinStickShooter"), TEXT("BaseCharacter_CPP"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Character"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LatentActionInfo"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetStringLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Animation"), TEXT("EnemyAnim_BP_Child"), TEXT("Default__EnemyAnim_BP_Child_C"), TEXT("/Game/Animation/EnemyAnim_BP_Child"), TEXT("EnemyAnim_BP_Child_C")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("ClothingSystemRuntime"), TEXT("ClothingSimulationFactoryNv"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("TwinStickGameMode_BP"), TEXT("TwinStickGameMode_BP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("EnemyAIController_BP"), TEXT("EnemyAIController_BP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Animation/AnimationAssets"), TEXT("Death_3"), TEXT("Death_3"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Animation/AnimationAssets"), TEXT("Death_2"), TEXT("Death_2"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Animation/AnimationAssets"), TEXT("Death_1"), TEXT("Death_1"), TEXT("/Script/Engine"), TEXT("AnimSequence")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Animation"), TEXT("HeroBlendSpace"), TEXT("HeroBlendSpace"), TEXT("/Script/Engine"), TEXT("BlendSpace")),
	FBlueprintDependencyObjectRef(TEXT("/Game/UE4_Mannequin_Mobile/Mesh"), TEXT("SK_Mannequin_Mobile_Skeleton"), TEXT("SK_Mannequin_Mobile_Skeleton"), TEXT("/Script/Engine"), TEXT("Skeleton")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("AnimNode_StateMachine"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AnimGraphRuntime"), TEXT("AnimNode_Root"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AnimGraphRuntime"), TEXT("AnimNode_BlendSpacePlayer"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("AnimNode_SequencePlayer"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AnimGraphRuntime"), TEXT("AnimNode_BlendListByInt"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("AnimNode_TransitionResult"), TEXT("/Script/CoreUObject"), TEXT("ScriptStruct")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Pawn"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("AnimInstance"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("AIAsyncTaskBlueprintProxy"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("EPathFollowingResult"), TEXT("/Script/CoreUObject"), TEXT("Enum")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("OAISimpleDelegate__DelegateSignature"), TEXT("/Script/CoreUObject"), TEXT("DelegateFunction")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Controller"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("AIBlueprintHelperLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("AIModule"), TEXT("AIController"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SpringArmComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CameraComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ArrowComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("WidgetBlueprintLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("UserWidget"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("Weapon_BP"), TEXT("Weapon_BP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("TwinStickHUDWIdget_BP"), TEXT("TwinStickHUDWIdget_BP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Animation"), TEXT("CharacterAnim_BP"), TEXT("CharacterAnim_BP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Game/TwinStickShooterSourceContent/FPWeapon/Mesh"), TEXT("SK_FPGun"), TEXT("SK_FPGun"), TEXT("/Script/Engine"), TEXT("SkeletalMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SkeletalMeshComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Blueprints"), TEXT("Projectile_BP"), TEXT("Projectile_BP_C"), TEXT("/Script/CoreUObject"), TEXT("DynamicClass")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/BasicShapes"), TEXT("Sphere"), TEXT("Sphere"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Game/Materials"), TEXT("Projectile_Mat"), TEXT("Projectile_Mat"), TEXT("/Script/Engine"), TEXT("Material")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("SphereComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("StaticMeshComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("PointLightComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("ProjectileMovementComponent"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineFonts"), TEXT("Roboto"), TEXT("Roboto"), TEXT("/Script/Engine"), TEXT("Font")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("TextBlock"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("UMG"), TEXT("ProgressBar"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("KismetTextLibrary"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("SM_SkySphere"), TEXT("SM_SkySphere"), TEXT("/Script/Engine"), TEXT("StaticMesh")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("M_Sky_Panning_Clouds2"), TEXT("M_Sky_Panning_Clouds2"), TEXT("/Script/Engine"), TEXT("Material")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Horizon_Color"), TEXT("C_Sky_Horizon_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Zenith_Color"), TEXT("C_Sky_Zenith_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor")),
	FBlueprintDependencyObjectRef(TEXT("/Engine/EngineSky"), TEXT("C_Sky_Cloud_Color"), TEXT("C_Sky_Cloud_Color"), TEXT("/Script/Engine"), TEXT("CurveLinearColor")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("CurveLinearColor"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("DirectionalLight"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("Light"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	FBlueprintDependencyObjectRef(TEXT("/Script"), TEXT("Engine"), TEXT("LightComponentBase"), TEXT("/Script/CoreUObject"), TEXT("Class")),
	};
}
const FBlueprintDependencyObjectRef& F__NativeDependencies::Get(int16 Index)
{
static const FBlueprintDependencyObjectRef& NullObjectRef = FBlueprintDependencyObjectRef();
if (Index == -1) { return NullObjectRef; }
	check((Index >= 0) && (Index < 81));
	return ::NativizedCodeDependenties[Index];
};
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
