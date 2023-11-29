#include <cstddef>

enum offsets : ptrdiff_t
{
	PersistentLevel = 0x30,
	Uworld = 0xEE9ED98,
	OwningGameInstance = 0x1b8, 
	PlayerCameraManager = 0x348, 
	local_players = 0x38,   
	AcknowledgedPawn = 0x338, 
	PlayerState = 0x2B0, 
	PlayerController = 0x30, 
	PlayerArray = 0x2A8, 
	RootComponent = 0x198, 
	RelativeLocation = 0x128, 
	AActor = 0x98,   
	CurrentWeapon = 0x948, 
	WeaponData = 0x450, 
	mesh = 0x318, 
	levels = 0x170,
	namestruct = 0xAE0,
	Tier = 0x73, 
	WorldSettings = 0x150,
	GameStates = 0x158,
	TeamID = 0x10d0,
	GameState = 0x158, 
	ReviveFromDBNOTime = 0x46d8,
};


//class APlayerState
//{
//public:
//
//	int TeamIndex()
//	{
//		return Rpm<int>((uintptr_t)this + offsets::TeamID);
//
//	}
//
//};
//
//class ARootComponent
//{
//public:
//
//	Vector3 RelativeLocation()
//	{
//		return Rpm<Vector3>((uintptr_t)this + offsets::RelativeLocation);
//	}
//
//};
//
//class AFortWeapon
//{
//public:
//
//
//};
//
//class AFortPawn
//{
//public:
//
//	uint64_t Mesh()
//	{
//		return Rpm<uint64_t>((uintptr_t)this + offsets::mesh);
//	}
//
//	auto WasRecentlyRendered(float Tolerance = 0.015f) -> bool
//	{
//		auto fLastSubmitTime = Rpm<float>(this->Mesh() + 0x360);
//		auto fLastRenderTimeOnScreen = Rpm<float>(this->Mesh() + 0x368);
//		bool OverlappingBuildings = Rpm<BYTE>((uintptr_t)this + 0x1b10);
//		return fLastRenderTimeOnScreen + Tolerance >= fLastSubmitTime && !OverlappingBuildings;
//	}
//
//
//	//Vector3 GetBone(int id)
//	//{
//	//	int is_cached = Rpm<int>(this->Mesh() + 0x648);
//	//	auto bone_transform = Rpm<FTransform>(Rpm<uintptr_t>(this->Mesh() + 0x10 * is_cached + 0x600) + 0x60 * id);
//
//	//	FTransform ComponentToWorld = Rpm<FTransform>(this->Mesh() + 0x240); //0x240 = ComponentToWorldOffset, doesnt change a lot
//
//	//	D3DMATRIX Matrix;
//	//	Matrix = MatrixMultiplication(bone_transform.ToMatrixWithScale(), ComponentToWorld.ToMatrixWithScale());
//
//	//	return Vector3(Matrix._41, Matrix._42, Matrix._43);
//	//}
//
//	APlayerState* PlayerState()
//	{
//		if (!(uintptr_t)this) return 0;
//		return (APlayerState*)Rpm<uintptr_t>((uintptr_t)this + offsets::PlayerState);
//	}
//
//	ARootComponent* RootComponent()
//	{
//		if (!(uintptr_t)this) return 0;
//		return (ARootComponent*)Rpm<uintptr_t>((uintptr_t)this + offsets::RootComponent);
//	}
//};
//
//class APlayerController
//{
//public:
//	AFortPawn* AcknowledgedPawn()
//	{
//		if (!(uintptr_t)this) return 0;
//		return (AFortPawn*)Rpm<uintptr_t>((uintptr_t)(this + offsets::AcknowledgedPawn));
//	}
//};
//
//class ULocalPlayer {
//public:
//	
//
//	APlayerController* PlayerController()
//	{
//		return (APlayerController*)Rpm<uintptr_t>((uintptr_t)this + 0x30);
//	}
//};
//
//class ULocalPlayers {
//public:
//	ULocalPlayer* LocalPlayer()
//	{
//		return (ULocalPlayer*)Rpm<uintptr_t>((uintptr_t)this);
//	}
//};
//
//class ULevel {
//public:
//	uintptr_t AWorldSettings() {
//		return Rpm<uintptr_t>((uintptr_t)this + offsets::WorldSettings);
//	}
//};
//
//class UGameInstance {
//public:
//	ULocalPlayers* LocalPlayers()
//	{
//		return (ULocalPlayers*)Rpm<uintptr_t>((uintptr_t)this + 0x38);
//	}
//};
//
//class AGameStateBase {
//public:
//	uintptr_t PlayerArray()
//	{
//		return (Rpm<uintptr_t>((uintptr_t)this + offsets::GameStates));
//	}
//
//};
//
//class UWorld
//{
//public:
//	UGameInstance* GameInstance()
//	{
//		return (UGameInstance*)Rpm<uintptr_t>((uintptr_t)this + offsets::OwningGameInstance);
//	}
//
//	AGameStateBase* GameSate()
//	{
//		return (AGameStateBase*)Rpm<uintptr_t>((uintptr_t)this + offsets::GameStates);
//	}
//
//	ULevel* PersistentLevel()
//	{
//		return (ULevel*)Rpm<uintptr_t>((uintptr_t)this + 0x30);
//	}
//
//};