#pragma once
#include "Player.h"
#include <string>
using namespace std;

class Monster;

// Thief 클래스 정의 (Player 클래스 상속)
class Thief: public Player 
{
	public:
		Thief(string Nickname); // 생성자
		void Attack() override; // 공격 함수 재정의
		void Attack(Monster* Monster) override; // 몬스터 공격 함수 재정의
};