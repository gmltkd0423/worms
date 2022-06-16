#pragma once
#include "Enums.h"
#include<GameEngine/GameEngineActor.h>

// Ό³Έν :
class LargeCloud	:public GameEngineActor
{
public:
	// constrcuter destructer
	LargeCloud();
	~LargeCloud();

	// delete Function
	LargeCloud(const LargeCloud& _Other) = delete;
	LargeCloud(LargeCloud&& _Other) noexcept = delete;
	LargeCloud& operator=(const LargeCloud& _Other) = delete;
	LargeCloud& operator=(LargeCloud&& _Other) noexcept = delete;

protected:
	void Start() override;
	void Update() override;
	void Render() override;
private:
	GameEngineRenderer* CloudRenderer_;
	float4 CloudDir_;
	float CloudSpeed_;
	float MySpeed_;
	int WindDir_;


public:
	inline void SetLargeCloudDir(int  _WindDir, float _CloudSpeed)
	{
		CloudSpeed_ = MySpeed_;
		WindDir_ = _WindDir;
		CloudSpeed_ += _CloudSpeed;
	}

	inline void SetSpeed(float _Speed)
	{
		CloudSpeed_ = _Speed;
		MySpeed_ = _Speed;
	}
};

