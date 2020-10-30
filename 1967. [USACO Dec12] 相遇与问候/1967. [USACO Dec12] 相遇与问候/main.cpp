#include <iostream>
#include <stdio.h>
#pragma warning(disable:4996)

using namespace std;

struct Move {
	int distance;
	char direction;
};

struct People {
	struct Move *moveList;
	int Index = 0,
		MoveCount = 0,
		MoveStep = 0,
		Pos = 0;
};

struct Move a[100000];
struct Move b[100000];

void moveInit(struct People* people) {
	people->MoveCount = people->moveList[people->Index].distance;
	people->MoveStep = people->moveList[people->Index].direction == 'R' ? 1 : -1;
	people->Index++;
}

void move(struct People* people) {
	people->Pos += people->MoveStep;
	people->MoveCount--;
}

int main(void) {
	//freopen("greetings.in", "r", stdin);
	//freopen("greetings.out", "w", stdout);

	// 存数据
	int B, E;
	cin >> B >> E;

	// 声明馨馨与瑶瑶
	struct People xinxin, yaoyao;
	xinxin.moveList = a;
	yaoyao.moveList = b;


	for (int i = 0; i < B; i++) {
		cin >> xinxin.moveList[i].distance;
		cin >> xinxin.moveList[i].direction;
	}
	for (int i = 0; i < E; i++) {
		cin >> yaoyao.moveList[i].distance;
		cin >> yaoyao.moveList[i].direction;
	}

	

	// 相遇次数
	int meetcount = 0;
	bool flag = false;
	while (!(B == xinxin.Index && xinxin.MoveCount == 0) || !(E == yaoyao.Index && yaoyao.MoveCount == 0)) {
		if (!(B == xinxin.Index && xinxin.MoveCount == 0)) {
			if (xinxin.MoveCount == 0) {
				moveInit(&xinxin);
			}
			// 馨馨移动
			move(&xinxin);
		}
		
		if (!(E == yaoyao.Index && yaoyao.MoveCount == 0)) {
			if (yaoyao.MoveCount == 0) {
				moveInit(&yaoyao);
			}
			// 瑶瑶移动
			move(&yaoyao);
		}

		if (flag && xinxin.Pos != yaoyao.Pos) {
			meetcount++;
			flag = false;
		}

		if (xinxin.Pos == yaoyao.Pos) {
			flag = true;
		}
	}

	cout << meetcount;


	return 0;
}