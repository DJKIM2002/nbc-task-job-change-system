#include "Monster.h"
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

// Monster 클래스의 생성자 구현
Monster::Monster(string Name)
{
	this->Name = Name;
	HP = 10;
	Power = 30;
	Defence = 10;
	Speed = 10;
}

// Getter 함수 구현
string Monster::GetName() const
{
	return Name;
}
int Monster::GetHP() const
{
	return HP;
}
int Monster::GetPower() const
{
	return Power;
}
int Monster::GetDefence() const
{
	return Defence;
}
int Monster::GetSpeed() const
{
	return Speed;
}

// Setter 함수 구현
void Monster::SetName(string Name)
{
	this->Name = Name;
}
void Monster::SetHP(int HP)
{
	this->HP = HP;
}
void Monster::SetPower(int Power)
{
	this->Power = Power;
}
void Monster::SetDefence(int Defence)
{
	this->Defence = Defence;
}
void Monster::SetSpeed(int Speed)
{
	this->Speed = Speed;
}

// 몬스터의 공격 함수 구현
void Monster::Attack(Player* Player) const
{
	int damage = Power - Player->GetDefence();
	if(damage <= 0) {
		damage = 1;
	}
	cout << Name << "이(가) " << "[" << Player->GetJobName() << "] " << Player->GetNickname() << "에게 " << damage << "만큼 데미지를 입혔다!\n";
	Player->SetHP(Player->GetHP() - damage);
	
	if(Player->GetHP() > 0) 
	{
		cout << "[" << Player->GetJobName() << "] "<< Player->GetNickname() << "의 남은 HP :" << Player->GetHP() << "\n";
	} else 
	{
		cout << "[" << Player->GetJobName() << "] "<< Player->GetNickname() << "이(가) 기절했다!\n";
	}
}