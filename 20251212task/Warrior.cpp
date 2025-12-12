#include "Warrior.h"
#include "Monster.h"
#include <iostream>
#include <string>
using namespace std;

// Warrior 클래스의 생성자 구현
Warrior::Warrior(string Nickname): Player(Nickname) 
{
	JobName = "전사";
	HP = 150;
	MP = 30;
	Power = 20;
	Defence = 10;
	Accuracy = 70;
	Speed = 15;
}

// Warrior 클래스의 공격 함수 구현
void Warrior::Attack() {
	cout << "[" << JobName << "] "<< Nickname << "님의 검 휘두르기 공격!\n";
}

// Warrior 클래스의 몬스터 공격 함수
void Warrior::Attack(Monster* Monster) {
	int Damage = Power - Monster->GetDefence();
	if(Damage <= 0) {
		Damage = 1;
	}
	cout << "[" << JobName << "] "<< Nickname << "님이 " << Monster->GetName() << "에게 검 휘두르기 공격!\n";
	cout << "* " << Monster->GetName() << "에게 검으로 " << Damage << "의 피해를 입혔다!\n";
	Monster->SetHP(Monster->GetHP() - Damage);
	if(Monster->GetHP() > 0) {
		cout << Monster->GetName() << "의 남은 HP : " << Monster->GetHP() << "\n";
	} else {
		cout << "[" << JobName << "] "<< Nickname << "님의 승리! " << Monster->GetName() << "을(를) 물리쳤다!\n";
	}
}