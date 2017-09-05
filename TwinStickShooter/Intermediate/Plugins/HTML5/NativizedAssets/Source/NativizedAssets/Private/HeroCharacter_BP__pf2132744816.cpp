#include "NativizedAssets.h"
#include "HeroCharacter_BP__pf2132744816.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/Engine/Classes/Engine/InputAxisDelegateBinding.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/GameFramework/SpringArmComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/Engine/Classes/Vehicles/TireType.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsSettingsEnums.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea_Obstacle.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/RecastNavMesh.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavFilters/NavigationQueryFilter.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Types/SlateEnums.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationSystem.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationPath.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavMeshBoundsVolume.h"
#include "Runtime/Engine/Classes/AI/Navigation/CrowdManagerBase.h"
#include "Runtime/AIModule/Classes/Navigation/CrowdManager.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "TwinStickGameMode_BP__pf2132744816.h"
#include "Weapon_BP__pf2132744816.h"
#include "TwinStickHUDWIdget_BP__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/ClothingSystemRuntime/Public/ClothingSimulationFactory.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactoryInterface.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/UMG/Public/Blueprint/WidgetBlueprintLibrary.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "EnemyCharacter_BP__pf2132744816.h"
#include "EnemySpawner_BP__pf2132744816.h"
#include "Runtime/Engine/Classes/Kismet/KismetArrayLibrary.h"
#include "Runtime/Engine/Classes/Components/BoxComponent.h"
#include "Runtime/AIModule/Classes/Blueprint/AIBlueprintHelperLibrary.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "CharacterAnim_BP__pf1804850088.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
AHeroCharacter_BP_C__pf2132744816::AHeroCharacter_BP_C__pf2132744816(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (AHeroCharacter_BP_C__pf2132744816::StaticClass() == GetClass()))
	{
		AHeroCharacter_BP_C__pf2132744816::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	auto __Local__0 = CastChecked<UCapsuleComponent>(GetDefaultSubobjectByName(TEXT("CollisionCylinder")));
	auto __Local__1 = CastChecked<UCharacterMovementComponent>(GetDefaultSubobjectByName(TEXT("CharMoveComp")));
	static TWeakObjectPtr<UProperty> __Local__3{};
	const UProperty* __Local__2 = __Local__3.Get();
	if (nullptr == __Local__2)
	{
		__Local__2 = (UNavMovementComponent::StaticClass())->FindPropertyByName(FName(TEXT("bUseAccelerationForPaths")));
		check(__Local__2);
		__Local__3 = __Local__2;
	}
	(((UBoolProperty*)__Local__2)->SetPropertyValue_InContainer((__Local__1), false, 0));
	auto __Local__4 = CastChecked<USkeletalMeshComponent>(GetDefaultSubobjectByName(TEXT("CharacterMesh0")));
	__Local__4->AnimClass = UCharacterAnim_BP_C__pf1804850088::StaticClass();
	__Local__4->SkeletalMesh = CastChecked<USkeletalMesh>(CastChecked<UDynamicClass>(AHeroCharacter_BP_C__pf2132744816::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	auto& __Local__5 = (*(AccessPrivateProperty<USceneComponent* >((__Local__4), USceneComponent::__PPO__AttachParent() )));
	__Local__4->RelativeLocation = FVector(0.000000, 0.000000, -90.000000);
	__Local__4->RelativeRotation = FRotator(0.000000, -90.000229, 0.000000);
	bpv__SpringArm__pf = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	bpv__HeroCamera__pf = CreateDefaultSubobject<UCameraComponent>(TEXT("HeroCamera"));
	bpv__GunTemp__pf = CreateDefaultSubobject<UArrowComponent>(TEXT("GunTemp"));
	bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__SpringArm__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__SpringArm__pf->TargetArmLength = 600.000000f;
	bpv__SpringArm__pf->bDoCollisionTest = false;
	bpv__SpringArm__pf->bInheritPitch = false;
	bpv__SpringArm__pf->bInheritYaw = false;
	bpv__SpringArm__pf->bInheritRoll = false;
	bpv__SpringArm__pf->RelativeRotation = FRotator(-64.999985, 0.000000, 0.000000);
	bpv__HeroCamera__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__HeroCamera__pf->AttachToComponent(bpv__SpringArm__pf, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__GunTemp__pf->CreationMethod = EComponentCreationMethod::Native;
	bpv__GunTemp__pf->AttachToComponent(__Local__0, FAttachmentTransformRules::KeepRelativeTransform );
	bpv__GunTemp__pf->RelativeLocation = FVector(0.000000, 61.000000, 10.000000);
	if(!bpv__GunTemp__pf->IsTemplate())
	{
		bpv__GunTemp__pf->BodyInstance.FixupData(bpv__GunTemp__pf);
	}
	bpv__DynaxMat__pfT = nullptr;
	bpv__Weapon__pf = nullptr;
	bpv__GameMode__pf = nullptr;
	auto& __Local__6 = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )));
	auto& __Local__7 = (*(AccessPrivateProperty<UCharacterMovementComponent* >((this), ACharacter::__PPO__CharacterMovement() )));
	auto& __Local__8 = (*(AccessPrivateProperty<UCapsuleComponent* >((this), ACharacter::__PPO__CapsuleComponent() )));
	Tags = TArray<FName> ();
	Tags.Reserve(1);
	Tags.Add(FName(TEXT("FriendlyActor")));
}
void AHeroCharacter_BP_C__pf2132744816::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
	if(bpv__SpringArm__pf)
	{
		bpv__SpringArm__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__HeroCamera__pf)
	{
		bpv__HeroCamera__pf->CreationMethod = EComponentCreationMethod::Native;
	}
	if(bpv__GunTemp__pf)
	{
		bpv__GunTemp__pf->CreationMethod = EComponentCreationMethod::Native;
	}
}
void AHeroCharacter_BP_C__pf2132744816::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	// List of all referenced converted classes
	InDynamicClass->ReferencedConvertedFields.Add(ATwinStickGameMode_BP_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(AWeapon_BP_C__pf2132744816::StaticClass());
	InDynamicClass->ReferencedConvertedFields.Add(UTwinStickHUDWIdget_BP_C__pf2132744816::StaticClass());
	extern UClass* Z_Construct_UClass_UiDamageable_BP_C();
	InDynamicClass->ReferencedConvertedFields.Add(Z_Construct_UClass_UiDamageable_BP_C());
	InDynamicClass->ReferencedConvertedFields.Add(UCharacterAnim_BP_C__pf1804850088::StaticClass());
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__9 = NewObject<USceneComponent>(InDynamicClass, USceneComponent::StaticClass(), TEXT("DefaultSceneRoot_GEN_VARIABLE"));
	InDynamicClass->ComponentTemplates.Add(__Local__9);
	auto __Local__10 = NewObject<UInputAxisDelegateBinding>(InDynamicClass, UInputAxisDelegateBinding::StaticClass(), TEXT("InputAxisDelegateBinding_3"));
	InDynamicClass->DynamicBindingObjects.Add(__Local__10);
	__Local__10->InputAxisDelegateBindings = TArray<FBlueprintInputAxisDelegateBinding> ();
	__Local__10->InputAxisDelegateBindings.AddUninitialized(4);
	FBlueprintInputAxisDelegateBinding::StaticStruct()->InitializeStruct(__Local__10->InputAxisDelegateBindings.GetData(), 4);
	auto& __Local__11 = __Local__10->InputAxisDelegateBindings[0];
	__Local__11.InputAxisName = FName(TEXT("MoveUp"));
	__Local__11.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0"));
	auto& __Local__12 = __Local__10->InputAxisDelegateBindings[1];
	__Local__12.InputAxisName = FName(TEXT("MoveRight"));
	__Local__12.FunctionNameToBind = FName(TEXT("InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1"));
	auto& __Local__13 = __Local__10->InputAxisDelegateBindings[2];
	__Local__13.InputAxisName = FName(TEXT("LookRight"));
	__Local__13.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookRight_K2Node_InputAxisEvent_6"));
	auto& __Local__14 = __Local__10->InputAxisDelegateBindings[3];
	__Local__14.InputAxisName = FName(TEXT("LookUp"));
	__Local__14.FunctionNameToBind = FName(TEXT("InpAxisEvt_LookUp_K2Node_InputAxisEvent_3"));
}
void AHeroCharacter_BP_C__pf2132744816::bpf__ExecuteUbergraph_HeroCharacter_BP__pf_0(int32 bpp__EntryPoint__pf)
{
	UTwinStickHUDWIdget_BP_C__pf2132744816* bpfv__CallFunc_Create_ReturnValue__pf{};
	AGameModeBase* bpfv__CallFunc_GetGameMode_ReturnValue__pf{};
	FTransform bpfv__CallFunc_GetTransform_ReturnValue__pf{};
	FTransform bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf{};
	AActor* bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf{};
	AWeapon_BP_C__pf2132744816* bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 11:
			{
				__StateStack.Push(16);
				__StateStack.Push(18);
			}
		case 12:
			{
				if(IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf = UGameplayStatics::BeginDeferredActorSpawnFromClass(this, AWeapon_BP_C__pf2132744816::StaticClass(), bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf, ESpawnActorCollisionHandlingMethod::Undefined, ((AActor*)nullptr));
			}
		case 13:
			{
				if(IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
				{
					bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->USceneComponent::K2_GetComponentToWorld();
				}
				bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf = CastChecked<AWeapon_BP_C__pf2132744816>(UGameplayStatics::FinishSpawningActor(bpfv__CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue__pf, bpfv__CallFunc_K2_GetComponentToWorld_ReturnValue__pf), ECastCheckedType::NullAllowed);
			}
		case 14:
			{
				bpv__Weapon__pf = bpfv__CallFunc_FinishSpawningActor_ReturnValue__pf;
			}
		case 15:
			{
				if(IsValid(bpv__Weapon__pf))
				{
					bpv__Weapon__pf->AActor::K2_AttachToComponent((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() ))), FName(TEXT("Gun_hand_rSocket")), EAttachmentRule::SnapToTarget, EAttachmentRule::KeepRelative, EAttachmentRule::KeepWorld, true);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 16:
			{
				bpfv__CallFunc_Create_ReturnValue__pf = CastChecked<UTwinStickHUDWIdget_BP_C__pf2132744816>(UWidgetBlueprintLibrary::Create(this, UTwinStickHUDWIdget_BP_C__pf2132744816::StaticClass(), ((APlayerController*)nullptr)), ECastCheckedType::NullAllowed);
			}
		case 17:
			{
				if(IsValid(bpfv__CallFunc_Create_ReturnValue__pf))
				{
					bpfv__CallFunc_Create_ReturnValue__pf->UUserWidget::AddToViewport(0);
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 18:
			{
				bpfv__CallFunc_GetGameMode_ReturnValue__pf = UGameplayStatics::GetGameMode(this);
				b0l__K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP__pf = Cast<ATwinStickGameMode_BP_C__pf2132744816>(bpfv__CallFunc_GetGameMode_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 19:
			{
				bpv__GameMode__pf = b0l__K2Node_DynamicCast_AsTwin_Stick_Game_Mode_BP__pf;
			}
		case 20:
			{
				bpfv__CallFunc_GetTransform_ReturnValue__pf = AActor::GetTransform();
				if(IsValid(bpv__GameMode__pf))
				{
					bpv__GameMode__pf->bpv__PlayerSpawnTransformLocation__pf = bpfv__CallFunc_GetTransform_ReturnValue__pf;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 32:
			{
				__CurrentState = 11;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void AHeroCharacter_BP_C__pf2132744816::bpf__ExecuteUbergraph_HeroCharacter_BP__pf_1(int32 bpp__EntryPoint__pf)
{
	AController* bpfv__CallFunc_GetController_ReturnValue__pf{};
	FVector bpfv__CallFunc_MakeVector_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	bool bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 4:
			{
				__CurrentState = 5;
				break;
			}
		case 5:
			{
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(b0l__K2Node_InputAxisEvent_AxisValue3__pf, b0l__K2Node_InputAxisEvent_AxisValue4__pf, 0.000000);
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_MakeVector_ReturnValue__pf);
				bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf = UKismetMathLibrary::Greater_FloatFloat(bpfv__CallFunc_VSize_ReturnValue__pf, 0.250000);
				if (!bpfv__CallFunc_Greater_FloatFloat_ReturnValue__pf)
				{
					__CurrentState = 8;
					break;
				}
			}
		case 6:
			{
				bpfv__CallFunc_GetController_ReturnValue__pf = APawn::GetController();
				bpfv__CallFunc_MakeVector_ReturnValue__pf = UKismetMathLibrary::MakeVector(b0l__K2Node_InputAxisEvent_AxisValue3__pf, b0l__K2Node_InputAxisEvent_AxisValue4__pf, 0.000000);
				bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_MakeVector_ReturnValue__pf);
				if(IsValid(bpfv__CallFunc_GetController_ReturnValue__pf))
				{
					bpfv__CallFunc_GetController_ReturnValue__pf->SetControlRotation(bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf);
				}
			}
		case 7:
			{
				if (!isDead)
				{
					__CurrentState = 10;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 8:
			{
				if (!isDead)
				{
					__CurrentState = 9;
					break;
				}
				__CurrentState = -1;
				break;
			}
		case 9:
			{
				if(IsValid(bpv__Weapon__pf))
				{
					bpv__Weapon__pf->bpf__ReleaseTrigger__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 10:
			{
				if(IsValid(bpv__Weapon__pf))
				{
					bpv__Weapon__pf->bpf__PullTrigger__pf();
				}
				__CurrentState = -1;
				break;
			}
		case 21:
			{
				__CurrentState = 5;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AHeroCharacter_BP_C__pf2132744816::bpf__ExecuteUbergraph_HeroCharacter_BP__pf_2(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf{};
	APlayerController* bpfv__CallFunc_GetPlayerController_ReturnValue__pf{};
	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__CurrentState = 2;
				break;
			}
		case 2:
			{
				if(IsValid(bpv__GameMode__pf))
				{
					bpv__GameMode__pf->bpf__RespawnPlayer__pf();
				}
			}
		case 3:
			{
				if(IsValid(bpv__Weapon__pf))
				{
					bpv__Weapon__pf->K2_DestroyActor();
				}
				K2_DestroyActor();
				__CurrentState = -1;
				break;
			}
		case 24:
			{
				__CurrentState = 25;
				break;
			}
		case 25:
			{
				CalculateHealth(b0l__K2Node_Event_Delta_Health__pf);
			}
		case 26:
			{
				bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf = UKismetStringLibrary::Conv_FloatToString(health);
				UKismetSystemLibrary::PrintString(this, bpfv__CallFunc_Conv_FloatToString_ReturnValue__pf, true, true, FLinearColor(0.000000,0.660000,1.000000,1.000000), 2.000000);
			}
		case 27:
			{
				if (!isDead)
				{
					__CurrentState = -1;
					break;
				}
			}
		case 28:
			{
				bpfv__CallFunc_GetPlayerController_ReturnValue__pf = UGameplayStatics::GetPlayerController(this, 0);
				DisableInput(bpfv__CallFunc_GetPlayerController_ReturnValue__pf);
			}
		case 29:
			{
				UKismetSystemLibrary::Delay(this, 3.000000, FLatentActionInfo(1, -278081417, TEXT("ExecuteUbergraph_HeroCharacter_BP_2"), this));
				__CurrentState = -1;
				break;
			}
		default:
			break;
		}
	} while( __CurrentState != -1 );
}
void AHeroCharacter_BP_C__pf2132744816::bpf__ExecuteUbergraph_HeroCharacter_BP__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 30);
	// optimized KCST_UnconditionalGoto
	AddMovementInput(FVector(1.000000,0.000000,0.000000), b0l__K2Node_InputAxisEvent_AxisValue__pf, false);
	return; //KCST_EndOfThread
}
void AHeroCharacter_BP_C__pf2132744816::bpf__ExecuteUbergraph_HeroCharacter_BP__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 22);
	// optimized KCST_UnconditionalGoto
	AddMovementInput(FVector(0.000000,1.000000,0.000000), b0l__K2Node_InputAxisEvent_AxisValue2__pf, false);
	return; //KCST_EndOfThread
}
void AHeroCharacter_BP_C__pf2132744816::bpf__ReceiveBeginPlay__pf()
{
	bpf__ExecuteUbergraph_HeroCharacter_BP__pf_0(32);
}
void AHeroCharacter_BP_C__pf2132744816::bpf__InpAxisEvt_MoveUp_K2Node_InputAxisEvent_0__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_HeroCharacter_BP__pf_3(30);
}
void AHeroCharacter_BP_C__pf2132744816::bpf__EffectxHealth__pfT(float bpp__DeltaxHealth__pfT)
{
	b0l__K2Node_Event_Delta_Health__pf = bpp__DeltaxHealth__pfT;
	bpf__ExecuteUbergraph_HeroCharacter_BP__pf_2(24);
}
void AHeroCharacter_BP_C__pf2132744816::bpf__InpAxisEvt_MoveRight_K2Node_InputAxisEvent_1__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue2__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_HeroCharacter_BP__pf_4(22);
}
void AHeroCharacter_BP_C__pf2132744816::bpf__InpAxisEvt_LookUp_K2Node_InputAxisEvent_3__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue3__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_HeroCharacter_BP__pf_1(4);
}
void AHeroCharacter_BP_C__pf2132744816::bpf__InpAxisEvt_LookRight_K2Node_InputAxisEvent_6__pf(float bpp__AxisValue__pf)
{
	b0l__K2Node_InputAxisEvent_AxisValue4__pf = bpp__AxisValue__pf;
	bpf__ExecuteUbergraph_HeroCharacter_BP__pf_1(21);
}
void AHeroCharacter_BP_C__pf2132744816::bpf__UserConstructionScript__pf()
{
	UMaterialInstanceDynamic* bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf{};
	if(IsValid((*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))))
	{
		bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf = (*(AccessPrivateProperty<USkeletalMeshComponent* >((this), ACharacter::__PPO__Mesh() )))->CreateDynamicMaterialInstance(0, ((UMaterialInterface*)nullptr));
	}
	bpv__DynaxMat__pfT = bpfv__CallFunc_CreateDynamicMaterialInstance_ReturnValue__pf;
	if(IsValid(bpv__DynaxMat__pfT))
	{
		bpv__DynaxMat__pfT->UMaterialInstanceDynamic::SetVectorParameterValue(FName(TEXT("BodyColor")), FLinearColor(0.258535,0.524373,0.859375,1.000000));
	}
}
void AHeroCharacter_BP_C__pf2132744816::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{19, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SkeletalMesh /Game/UE4_Mannequin_Mobile/Mesh/SK_Mannequin_Mobile.SK_Mannequin_Mobile 
	};
	for(const FCompactBlueprintDependencyData CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(
			F__NativeDependencies::Get(CompactData.ObjectRefIndex)
			,CompactData.ClassDependency
			,CompactData.CDODependency
			,CompactData.ObjectRefIndex
		));
	} 
}
void AHeroCharacter_BP_C__pf2132744816::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{20, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/iDamageable_BP.iDamageable_BP_C 
		{51, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SpringArmComponent 
		{52, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.CameraComponent 
		{53, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.ArrowComponent 
		{0, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, true, false)},  //  Class /Script/Engine.SceneComponent 
		{23, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.MaterialInstanceDynamic 
		{1, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Actor 
		{2, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.PlayerController 
		{9, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameModeBase 
		{48, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Controller 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{24, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/TwinStickShooter.BaseCharacter_CPP 
		{25, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Character 
		{6, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{54, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.WidgetBlueprintLibrary 
		{55, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{27, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{26, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.LatentActionInfo 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{29, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/ClothingSystemRuntime.ClothingSimulationFactoryNv 
		{22, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.NavArea_Obstacle 
		{50, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/AIModule.AIController 
		{30, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/TwinStickGameMode_BP.TwinStickGameMode_BP_C 
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlueprintGeneratedClass /Game/Blueprints/Weapon_BP.Weapon_BP_C 
		{57, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  WidgetBlueprintGeneratedClass /Game/Blueprints/TwinStickHUDWIdget_BP.TwinStickHUDWIdget_BP_C 
		{58, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimBlueprintGeneratedClass /Game/Animation/CharacterAnim_BP.CharacterAnim_BP_C 
	};
	for(const FCompactBlueprintDependencyData CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(
			F__NativeDependencies::Get(CompactData.ObjectRefIndex)
			,CompactData.ClassDependency
			,CompactData.CDODependency
			,CompactData.ObjectRefIndex
		));
	} 
}
struct FRegisterHelper__AHeroCharacter_BP_C__pf2132744816
{
	FRegisterHelper__AHeroCharacter_BP_C__pf2132744816()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Blueprints/HeroCharacter_BP"), &AHeroCharacter_BP_C__pf2132744816::__StaticDependenciesAssets);
	}
	static FRegisterHelper__AHeroCharacter_BP_C__pf2132744816 Instance;
};
FRegisterHelper__AHeroCharacter_BP_C__pf2132744816 FRegisterHelper__AHeroCharacter_BP_C__pf2132744816::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
