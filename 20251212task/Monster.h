#pragma once
#include <string>
using namespace std;

class Player; // 전방 선언

class Monster 
{
	public:
		// Monster 생성자
		Monster(string Name);

		// 몬스터의 공격 함수
		void Attack(Player* Player) const;

		// Getter 함수
		string GetName() const;
		int GetHP() const;
		int GetPower() const;
		int GetDefence() const;
		int GetSpeed() const;

		// Setter 함수
		void SetName(string Name);
		void SetHP(int HP);
		void SetPower(int Power);
		void SetDefence(int Defence);
		void SetSpeed(int Speed);

	protected:
		string Name; // 몬스터의 이름
		int HP; // 몬스터의 HP
		int Power; // 몬스터의 공격력
		int Defence; // 몬스터의 방어력
		int Speed; // 몬스터의 스피드
};