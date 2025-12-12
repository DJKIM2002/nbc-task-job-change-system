#pragma once
#include <string>
using namespace std;

// Player 추상 클래스
class Player 
{
	public:
		Player(string Nickname); // 생성자

		virtual void Attack() = 0; // 공격 함수 (순수 가상 함수)
		void PrintPlayerStatus() const; // 플레이어 상태 출력 함수 (상수 멤버 함수)

		// Getter 함수
		string GetJobName() const;
		string GetNickname() const;
		int GetLevel() const;
		int GetHP() const;
		int GetMP() const;
		int GetPower() const;
		int GetDefence() const;
		int GetAccuracy() const;
		int GetSpeed() const;

		// Setter 함수
		void SetNickname(string Nickname);
		void SetHP(int HP);
		void SetMP(int MP);
		void SetPower(int Power);
		void SetDefence(int Defence);
		void SetAccuracy(int Accuracy);
		void SetSpeed(int Speed);

	protected:
		string JobName; // 직업 이름
		string Nickname; // 닉네임
		int Level; // 레벨
		int HP; // 체력
		int MP; // 마나
		int Power; // 공격력
		int Defence; // 방어력
		int Accuracy; // 정확도
		int Speed; // 속도
};