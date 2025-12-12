#pragma once
#include "Player.h"
using namespace std;

// Thief 클래스 정의 (Player 클래스 상속)
class Thief: public Player 
{
	public:
		Thief(string Nickname); // 생성자
		void Attack() override; // 공격 함수 재정의
};