#include "NativizedAssets.h"
#include "CharacterAnim_BP__pf1804850088.h"
#include "GeneratedCodeHelpers.h"
#include "Animation/BlendProfile.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimNode_AssetPlayerBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/BlendSpaceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
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
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
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
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
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
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreas/NavArea.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
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
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/AnimGraphRuntime/Public/AnimNodes/AnimNode_BlendListBase.h"
#include "TwinStickShooter/BaseCharacter_CPP.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Animation/BlendSpace.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
UCharacterAnim_BP_C__pf1804850088::UCharacterAnim_BP_C__pf1804850088(const FObjectInitializer& ObjectInitializer) : Super()
{
	if(HasAnyFlags(RF_ClassDefaultObject) && (UCharacterAnim_BP_C__pf1804850088::StaticClass() == GetClass()))
	{
		UCharacterAnim_BP_C__pf1804850088::__CustomDynamicClassInitialization(CastChecked<UDynamicClass>(GetClass()));
	}
	
	bpv__AnimGraphNode_Root_BC6D52CF47617E9A56B583B9E6697649__pf.Result.LinkID = 9;
	bpv__AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__0 = bpv__AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__0.SourcePropertyName = FName(TEXT("Is Dead"));
	__Local__0.DestProperty = FindFieldChecked<UBoolProperty>(FAnimNode_TransitionResult::StaticStruct(), TEXT("bCanEnterTransition"));
	__Local__0.Size = 1;
	bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.BlendPose = TArray<FPoseLink> ();
	bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.BlendPose.AddUninitialized(3);
	FPoseLink::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.BlendPose.GetData(), 3);
	auto& __Local__1 = bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.BlendPose[0];
	__Local__1.LinkID = 5;
	auto& __Local__2 = bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.BlendPose[1];
	__Local__2.LinkID = 4;
	auto& __Local__3 = bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.BlendPose[2];
	__Local__3.LinkID = 3;
	bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.BlendTime = TArray<float> ();
	bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.BlendTime.Reserve(3);
	bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.BlendTime.Add(0.100000f);
	bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.BlendTime.Add(0.100000f);
	bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.BlendTime.Add(0.100000f);
	bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(1);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 1);
	auto& __Local__4 = bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__4.SourcePropertyName = FName(TEXT("Death animation selector"));
	__Local__4.DestProperty = FindFieldChecked<UIntProperty>(FAnimNode_BlendListByInt::StaticStruct(), TEXT("ActiveChildIndex"));
	__Local__4.Size = 4;
	bpv__AnimGraphNode_SequencePlayer_B51D3B6941047FFD184293841EF4F5BE__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UCharacterAnim_BP_C__pf1804850088::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_B51D3B6941047FFD184293841EF4F5BE__pf.bLoopAnimation = false;
	bpv__AnimGraphNode_SequencePlayer_E709CDC940FBF8F7A0EED28FC9327729__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UCharacterAnim_BP_C__pf1804850088::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_E709CDC940FBF8F7A0EED28FC9327729__pf.bLoopAnimation = false;
	bpv__AnimGraphNode_SequencePlayer_A38CA2A3408F57E155793DB0C3CCB45B__pf.Sequence = CastChecked<UAnimSequenceBase>(CastChecked<UDynamicClass>(UCharacterAnim_BP_C__pf1804850088::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_SequencePlayer_A38CA2A3408F57E155793DB0C3CCB45B__pf.bLoopAnimation = false;
	bpv__AnimGraphNode_StateResult_A385F11C46942C275C78ADA80EA7E746__pf.Result.LinkID = 2;
	bpv__AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf.BlendSpace = CastChecked<UBlendSpaceBase>(CastChecked<UDynamicClass>(UCharacterAnim_BP_C__pf1804850088::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed);
	bpv__AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf.EvaluateGraphExposedInputs.CopyRecords = TArray<FExposedValueCopyRecord> ();
	bpv__AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf.EvaluateGraphExposedInputs.CopyRecords.AddUninitialized(2);
	FExposedValueCopyRecord::StaticStruct()->InitializeStruct(bpv__AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf.EvaluateGraphExposedInputs.CopyRecords.GetData(), 2);
	auto& __Local__5 = bpv__AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf.EvaluateGraphExposedInputs.CopyRecords[0];
	__Local__5.SourcePropertyName = FName(TEXT("Direction"));
	__Local__5.DestProperty = FindFieldChecked<UFloatProperty>(FAnimNode_BlendSpacePlayer::StaticStruct(), TEXT("X"));
	__Local__5.Size = 4;
	auto& __Local__6 = bpv__AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf.EvaluateGraphExposedInputs.CopyRecords[1];
	__Local__6.SourcePropertyName = FName(TEXT("Speed"));
	__Local__6.DestProperty = FindFieldChecked<UFloatProperty>(FAnimNode_BlendSpacePlayer::StaticStruct(), TEXT("Y"));
	__Local__6.Size = 4;
	bpv__AnimGraphNode_StateResult_E1E8E8C04C28A2F0952ACC935CF2042E__pf.Result.LinkID = 7;
	bpv__Speed__pf = 0.000000f;
	bpv__Direction__pf = 0.000000f;
	bpv__IsxDead__pfT = false;
	bpv__Deathxanimationxselector__pfTT = 0;
}
void UCharacterAnim_BP_C__pf1804850088::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
void UCharacterAnim_BP_C__pf1804850088::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__7 = NewObject<UAnimClassData>(InDynamicClass, TEXT("AnimClassData"));
	__Local__7->BakedStateMachines = TArray<FBakedAnimationStateMachine> ();
	__Local__7->BakedStateMachines.AddUninitialized(1);
	FBakedAnimationStateMachine::StaticStruct()->InitializeStruct(__Local__7->BakedStateMachines.GetData(), 1);
	auto& __Local__8 = __Local__7->BakedStateMachines[0];
	__Local__8.MachineName = FName(TEXT("Character State Machine"));
	__Local__8.InitialState = 0;
	__Local__8.States = TArray<FBakedAnimationState> ();
	__Local__8.States.AddUninitialized(2);
	FBakedAnimationState::StaticStruct()->InitializeStruct(__Local__8.States.GetData(), 2);
	auto& __Local__9 = __Local__8.States[0];
	__Local__9.StateName = FName(TEXT("Locomotion"));
	__Local__9.Transitions = TArray<FBakedStateExitTransition> ();
	__Local__9.Transitions.AddUninitialized(1);
	FBakedStateExitTransition::StaticStruct()->InitializeStruct(__Local__9.Transitions.GetData(), 1);
	auto& __Local__10 = __Local__9.Transitions[0];
	__Local__10.CanTakeDelegateIndex = 8;
	__Local__10.TransitionIndex = 0;
	__Local__9.StateRootNodeIndex = 1;
	__Local__9.PlayerNodeIndices = TArray<int32> ();
	__Local__9.PlayerNodeIndices.Reserve(1);
	__Local__9.PlayerNodeIndices.Add(2);
	auto& __Local__11 = __Local__8.States[1];
	__Local__11.StateName = FName(TEXT("Dead"));
	__Local__11.StateRootNodeIndex = 3;
	__Local__11.PlayerNodeIndices = TArray<int32> ();
	__Local__11.PlayerNodeIndices.Reserve(3);
	__Local__11.PlayerNodeIndices.Add(4);
	__Local__11.PlayerNodeIndices.Add(5);
	__Local__11.PlayerNodeIndices.Add(6);
	__Local__8.Transitions = TArray<FAnimationTransitionBetweenStates> ();
	__Local__8.Transitions.AddUninitialized(1);
	FAnimationTransitionBetweenStates::StaticStruct()->InitializeStruct(__Local__8.Transitions.GetData(), 1);
	auto& __Local__12 = __Local__8.Transitions[0];
	__Local__12.PreviousState = 0;
	__Local__12.NextState = 1;
	__Local__12.CrossfadeDuration = 0.200000f;
	__Local__12.BlendMode = EAlphaBlendOption::HermiteCubic;
	__Local__7->TargetSkeleton = CastChecked<USkeleton>(CastChecked<UDynamicClass>(UCharacterAnim_BP_C__pf1804850088::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed);
	__Local__7->RootAnimNodeIndex = 9;
	__Local__7->RootAnimNodeProperty = InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Root_BC6D52CF47617E9A56B583B9E6697649"));
	__Local__7->AnimNodeProperties = TArray<UStructProperty*> ();
	__Local__7->AnimNodeProperties.Reserve(10);
	__Local__7->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_Root_BC6D52CF47617E9A56B583B9E6697649")));
	__Local__7->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346")));
	__Local__7->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9")));
	__Local__7->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_B51D3B6941047FFD184293841EF4F5BE")));
	__Local__7->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_E709CDC940FBF8F7A0EED28FC9327729")));
	__Local__7->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_SequencePlayer_A38CA2A3408F57E155793DB0C3CCB45B")));
	__Local__7->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_A385F11C46942C275C78ADA80EA7E746")));
	__Local__7->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F")));
	__Local__7->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateResult_E1E8E8C04C28A2F0952ACC935CF2042E")));
	__Local__7->AnimNodeProperties.Add(InDynamicClass->FindStructPropertyChecked(TEXT("AnimGraphNode_StateMachine_6A15B18945429A9ABCF39D9A19820951")));
	InDynamicClass->AnimClassImplementation = __Local__7;
}
void UCharacterAnim_BP_C__pf1804850088::bpf__ExecuteUbergraph_CharacterAnim_BP__pf_0(int32 bpp__EntryPoint__pf)
{
	APawn* bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf{};
	FRotator bpfv__CallFunc_GetControlRotation_ReturnValue__pf(EForceInit::ForceInit);
	bool bpfv__CallFunc_IsValid_ReturnValue__pf{};
	FVector bpfv__CallFunc_GetVelocity_ReturnValue__pf(EForceInit::ForceInit);
	FRotator bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf(EForceInit::ForceInit);
	float bpfv__CallFunc_VSize_ReturnValue__pf{};
	FRotator bpfv__CallFunc_NormalizedDeltaRotator_ReturnValue__pf(EForceInit::ForceInit);
	int32 bpfv__CallFunc_RandomInteger_ReturnValue__pf{};
	TArray< int32, TInlineAllocator<8> > __StateStack;

	int32 __CurrentState = bpp__EntryPoint__pf;
	do
	{
		switch( __CurrentState )
		{
		case 1:
			{
				__StateStack.Push(3);
			}
		case 2:
			{
				if (!b0l__Temp_bool_Has_Been_Initd_Variable__pf)
				{
					__CurrentState = 6;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 3:
			{
				if (!b0l__Temp_bool_IsClosed_Variable__pf)
				{
					__CurrentState = 4;
					break;
				}
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 4:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
			}
		case 5:
			{
				bpfv__CallFunc_RandomInteger_ReturnValue__pf = UKismetMathLibrary::RandomInteger(3);
				bpv__Deathxanimationxselector__pfTT = bpfv__CallFunc_RandomInteger_ReturnValue__pf;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 6:
			{
				b0l__Temp_bool_Has_Been_Initd_Variable__pf = true;
			}
		case 7:
			{
				if (!false)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 8:
			{
				b0l__Temp_bool_IsClosed_Variable__pf = true;
				__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
				break;
			}
		case 14:
			{
				__CurrentState = 15;
				break;
			}
		case 15:
			{
				bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf = TryGetPawnOwner();
				bpfv__CallFunc_IsValid_ReturnValue__pf = UKismetSystemLibrary::IsValid(bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf);
				if (!bpfv__CallFunc_IsValid_ReturnValue__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 16:
			{
				bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf = TryGetPawnOwner();
				if(IsValid(bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf))
				{
					bpfv__CallFunc_GetVelocity_ReturnValue__pf = bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf->GetVelocity();
				}
				bpfv__CallFunc_VSize_ReturnValue__pf = UKismetMathLibrary::VSize(bpfv__CallFunc_GetVelocity_ReturnValue__pf);
				bpv__Speed__pf = bpfv__CallFunc_VSize_ReturnValue__pf;
			}
		case 17:
			{
				bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf = TryGetPawnOwner();
				if(IsValid(bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf))
				{
					bpfv__CallFunc_GetControlRotation_ReturnValue__pf = bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf->APawn::GetControlRotation();
				}
				if(IsValid(bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf))
				{
					bpfv__CallFunc_GetVelocity_ReturnValue__pf = bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf->GetVelocity();
				}
				bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf = UKismetMathLibrary::Conv_VectorToRotator(bpfv__CallFunc_GetVelocity_ReturnValue__pf);
				bpfv__CallFunc_NormalizedDeltaRotator_ReturnValue__pf = UKismetMathLibrary::NormalizedDeltaRotator(bpfv__CallFunc_Conv_VectorToRotator_ReturnValue__pf, bpfv__CallFunc_GetControlRotation_ReturnValue__pf);
				UKismetMathLibrary::BreakRotator(bpfv__CallFunc_NormalizedDeltaRotator_ReturnValue__pf, /*out*/ b0l__CallFunc_BreakRotator_Roll__pf, /*out*/ b0l__CallFunc_BreakRotator_Pitch__pf, /*out*/ b0l__CallFunc_BreakRotator_Yaw__pf);
				bpv__Direction__pf = b0l__CallFunc_BreakRotator_Yaw__pf;
			}
		case 18:
			{
				bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf = TryGetPawnOwner();
				b0l__K2Node_DynamicCast_AsBase_Character_CPP__pf = Cast<ABaseCharacter_CPP>(bpfv__CallFunc_TryGetPawnOwner_ReturnValue__pf);
				b0l__K2Node_DynamicCast_bSuccess__pf = (b0l__K2Node_DynamicCast_AsBase_Character_CPP__pf != nullptr);;
				if (!b0l__K2Node_DynamicCast_bSuccess__pf)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
			}
		case 19:
			{
				bool  __Local__13 = false;
				bpv__IsxDead__pfT = ((IsValid(b0l__K2Node_DynamicCast_AsBase_Character_CPP__pf)) ? (b0l__K2Node_DynamicCast_AsBase_Character_CPP__pf->isDead) : (__Local__13));
			}
		case 20:
			{
				if (!bpv__IsxDead__pfT)
				{
					__CurrentState = (__StateStack.Num() > 0) ? __StateStack.Pop(/*bAllowShrinking=*/ false) : -1;
					break;
				}
				__CurrentState = 1;
				break;
			}
		default:
			check(false); // Invalid state
			break;
		}
	} while( __CurrentState != -1 );
}
void UCharacterAnim_BP_C__pf1804850088::bpf__ExecuteUbergraph_CharacterAnim_BP__pf_1(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 21);
	// optimized KCST_UnconditionalGoto
	bpv__AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf.ActiveChildIndex = bpv__Deathxanimationxselector__pfTT;
	return; //KCST_EndOfThread
}
void UCharacterAnim_BP_C__pf1804850088::bpf__ExecuteUbergraph_CharacterAnim_BP__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	bpv__AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf.X = bpv__Direction__pf;
	bpv__AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf.Y = bpv__Speed__pf;
	return; //KCST_EndOfThread
}
void UCharacterAnim_BP_C__pf1804850088::bpf__ExecuteUbergraph_CharacterAnim_BP__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 13);
	// optimized KCST_UnconditionalGoto
	bpv__AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf.bCanEnterTransition = bpv__IsxDead__pfT;
	return; //KCST_EndOfThread
}
void UCharacterAnim_BP_C__pf1804850088::bpf__BlueprintUpdateAnimation__pf(float bpp__DeltaTimeX__pf)
{
	b0l__K2Node_Event_DeltaTimeX__pf = bpp__DeltaTimeX__pf;
	bpf__ExecuteUbergraph_CharacterAnim_BP__pf_0(14);
}
void UCharacterAnim_BP_C__pf1804850088::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendSpacePlayer_8B656F3B4204114B9FA8E698BC9DB38F__pf()
{
	bpf__ExecuteUbergraph_CharacterAnim_BP__pf_2(11);
}
void UCharacterAnim_BP_C__pf1804850088::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_BlendListByInt_C632EB4943D644601A50EBAD0DA508B9__pf()
{
	bpf__ExecuteUbergraph_CharacterAnim_BP__pf_1(21);
}
void UCharacterAnim_BP_C__pf1804850088::bpf__EvaluateGraphExposedInputs_ExecuteUbergraph_CharacterAnim_BP_AnimGraphNode_TransitionResult_ECDBEBD64B432FE2AD6EDAB46CCBE346__pf()
{
	bpf__ExecuteUbergraph_CharacterAnim_BP__pf_3(13);
}
void UCharacterAnim_BP_C__pf1804850088::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{32, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Animation/AnimationAssets/Death_3.Death_3 
		{33, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Animation/AnimationAssets/Death_2.Death_2 
		{34, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  AnimSequence /Game/Animation/AnimationAssets/Death_1.Death_1 
		{35, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  BlendSpace /Game/Animation/HeroBlendSpace.HeroBlendSpace 
		{36, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Skeleton /Game/UE4_Mannequin_Mobile/Mesh/SK_Mannequin_Mobile_Skeleton.SK_Mannequin_Mobile_Skeleton 
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
void UCharacterAnim_BP_C__pf1804850088::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_StateMachine 
		{38, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_Root 
		{39, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendSpacePlayer 
		{40, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_SequencePlayer 
		{41, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/AnimGraphRuntime.AnimNode_BlendListByInt 
		{42, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.AnimNode_TransitionResult 
		{24, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/TwinStickShooter.BaseCharacter_CPP 
		{43, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.Pawn 
		{5, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetMathLibrary 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{44, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.AnimInstance 
		{8, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
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
struct FRegisterHelper__UCharacterAnim_BP_C__pf1804850088
{
	FRegisterHelper__UCharacterAnim_BP_C__pf1804850088()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/Animation/CharacterAnim_BP"), &UCharacterAnim_BP_C__pf1804850088::__StaticDependenciesAssets);
	}
	static FRegisterHelper__UCharacterAnim_BP_C__pf1804850088 Instance;
};
FRegisterHelper__UCharacterAnim_BP_C__pf1804850088 FRegisterHelper__UCharacterAnim_BP_C__pf1804850088::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
