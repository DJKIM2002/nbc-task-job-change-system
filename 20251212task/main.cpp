#include "Player.h"
#include "Warrior.h"
#include "Magician.h"
#include "Thief.h"
#include "Archer.h"
#include "Monster.h"
#include <iostream>
#include <string>
using namespace std;

// 메인 함수
int main() {
	string Jobs[] = {"전사", "마법사", "도적", "궁수"};
	string Nickname;

	Player* Player = nullptr;

	cout << "* 닉네임을 입력해주세요: ";
	cin >> Nickname;

	cout << "<전직 시스템>" << endl;
	cout << Nickname << "님, 환영합니다!" << endl;
	cout << "* 원하시는 직업을 선택해주세요." << endl;

	for(int i = 0; i < 4; i++) 
	{
		cout << (i + 1) << ". " << Jobs[i] << endl;
	}

	cout << "선택 : ";
	char JobChoice;
	cin >> JobChoice;

	switch(JobChoice) 
	{
		case '1':
			Player = new Warrior(Nickname);
			break;
		case '2':
			Player = new Magician(Nickname);
			break;
		case '3':
			Player = new Thief(Nickname);
			break;
		case '4':
			Player = new Archer(Nickname);
			break;
		default:
			cout << "잘못된 입력입니다." << endl;
			return 1;
	}

	// Player->Attack();
	Player->PrintPlayerStatus();

	// 몬스터 생성
	Monster* Slime = new Monster("슬라임");

	cout << "\n<몬스터 출현> " << Slime->GetName() << "\n";
	cout << "\n전투 시작!\n";

	while(Slime->GetHP() > 0 && Player->GetHP() > 0)
	{
		cout << "\n<플레이어의 공격>\n";
		Player->Attack(Slime);

		if(Slime->GetHP() > 0)
		{
			cout << "\n<몬스터의 반격>\n";
			Slime->Attack(Player);
		} else {
			break;
		}
	}

	// 동적 할당 해제
	if (Player != nullptr) 
	{
		delete Player;
	}

	if(Slime != nullptr)
	{
		delete Slime;
	}

	return 0;
}