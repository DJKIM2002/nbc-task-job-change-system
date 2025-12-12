#include "Magician.h"
#include "Monster.h"
#include <iostream>
#include <string>
using namespace std;

// Magician 클래스의 생성자 구현
Magician::Magician(string Nickname): Player(Nickname)
{
	JobName = "마법사";
	HP = 80;
	MP = 120;
	Power = 25;
	Defence = 5;
	Accuracy = 85;
	Speed = 12;
}

// Magician 클래스의 공격 함수 구현
void Magician::Attack() 
{
	cout << "[" << JobName << "] "<< Nickname << "님의 마법 공격!\n";
}

// Magician 클래스의 몬스터 공격 함수 구현
void Magician::Attack(Monster* Monster)
{
	int Damage = Power - Monster->GetDefence();
	if(Damage <= 0) {
		Damage = 1;
	}
	cout << "[" << JobName << "] "<< Nickname << "님이 " << Monster->GetName() << "에게 마법 공격!\n";
	cout << "* " << Monster->GetName() << "에게 마법으로 " << Damage << "의 피해를 입혔다!\n";
	Monster->SetHP(Monster->GetHP() - Damage);
	if(Monster->GetHP() > 0) {
		cout << Monster->GetName() << "의 남은 HP : " << Monster->GetHP() << "\n";
	} else {
		cout << "[" << JobName << "] "<< "님의 승리! " << Monster->GetName() << "을(를) 물리쳤다!\n";
	}
}