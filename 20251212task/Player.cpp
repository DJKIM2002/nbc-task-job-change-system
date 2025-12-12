#include "Player.h"
#include <iostream>
using namespace std;

// Player 클래스의 생성자 구현
Player::Player(string Nickname) 
{
	this->Nickname = Nickname;
	Level = 1;
	HP = 100;
	MP = 50;
	Power = 10;
	Defence = 5;
	Accuracy = 80;
	Speed = 10;
}

// Getter 함수 구현
string Player::GetJobName() const 
{
	return JobName;
}
string Player::GetNickname() const 
{
	return Nickname;
}
int Player::GetLevel() const 
{
	return Level;
}
int Player::GetHP() const 
{
	return HP;
}
int Player::GetMP() const 
{
	return MP;
}
int Player::GetPower() const 
{
	return Power;
}
int Player::GetDefence() const 
{
	return Defence;
}
int Player::GetAccuracy() const 
{
	return Accuracy;
}
int Player::GetSpeed() const 
{
	return Speed;
}

// Setter 함수 구현
void Player::SetNickname(string Nickname) 
{
	this->Nickname = Nickname;
}
void Player::SetHP(int HP) 
{
	this->HP = HP;
}
void Player::SetMP(int MP) 
{
	this->MP = MP;
}
void Player::SetPower(int Power) 
{
	this->Power = Power;
}
void Player::SetDefence(int Defence) 
{
	this->Defence = Defence;
}
void Player::SetAccuracy(int Accuracy) 
{
	this->Accuracy = Accuracy;
}
void Player::SetSpeed(int Speed) 
{
	this->Speed = Speed;
}

// printPlayerStatus 함수 구현
void Player::PrintPlayerStatus() const
{
	cout << "------------------------------------" << endl;
	cout << "* 현재 능력치" << endl;
	cout << "닉네임: " << Nickname << endl;
	cout << "Lv. " << Level << endl;
	cout << "직업: " << JobName << endl;
	cout << "HP: " << HP << endl;
	cout << "MP: " << MP << endl;
	cout << "공격력: " << Power << endl;
	cout << "방어력: " << Defence << endl;
	cout << "정확도: " << Accuracy << endl;
	cout << "속도: " << Speed << endl;
	cout << "------------------------------------" << endl;
}