#include <iostream>
using namespace std;
#define LOW 4
#define COL 5

/*typedef struct RGB {
	char Red[2] = {0x00,0xff};
	char Blue[2] = { 0x00,0xff };
	char Green[2] = { 0x00,0xff };

};*/

typedef struct OX { 
	struct RGB;
	const char* data[LOW][COL] = { 000000,};// data배열을 선언하고 000000으로 초기화

	void show() { //배열 처음부터 끝까지 데이터 값 호출
		for (int i = 0; i < LOW; i++) {
			for (int u = 0; u < COL; u++) {
				cout << data[i][u];
				cout << " ";
			}
			cout << endl;
		}
		cout << endl;
	}
};

struct OX c;

void sqare() {

	for (int i = 0; i < LOW; i++) {	//data 배열 전부 FFFFFF으로 입력
		for (int u = 0; u < COL; u++)
		{
			c.data[i][u] = "FFFFFF";

		}

	}

}


void xsqare() { // data 배열중 0,0~1,1까지 000000으로 변경

	for (int i = 0; i < LOW; i++) {
		for (int u = 0; u < COL; u++) {	
			if (u < 2 && i < 2) {
				c.data[i][u] = "000000";
			}
		}

	}

}

void osquare() { //xsqare()에서 변경 한 부분을 반대로 변경
	for (int i = 0; i < LOW; i++) {
		for (int u = 0; u < COL; u++) {
			if (u < 2 && i < 2) {
				c.data[i][u] = "FFFFFF";
			}
			else
				c.data[i][u] = "000000";

		}

	}

}


void right() {	//osquare() 의 출력 값을 오른쪽으로 90도 회전한 상태로 출력
	const char* change[COL][LOW] = { 0x00 };
	for (int i = 0; i < COL; i++) {
		for (int u = 0; u < LOW; u++) {
			if (i < 2 && u>1)
				change[i][u] = "000000";
			else
				change[i][u] = "FFFFFF";
			
		}

	}
	for (int i = 0; i < COL; i++) {
		for (int u = 0; u < LOW; u++) {
			cout << change[i][u];
			cout << " ";
		}
		cout << endl;
	}

}

int main()
{
	sqare();
	c.show();
	xsqare();
	c.show();
	osquare();
	c.show();

	right();


}

