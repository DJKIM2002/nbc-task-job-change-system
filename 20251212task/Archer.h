#pragma once
#include "Player.h"
using namespace std;

// Archer 클래스 정의 (Player 클래스 상속)
class Archer: public Player 
{
	public:
		Archer(string Nickname); // 생성자
		void Attack() override; // 공격 함수 재정의
};