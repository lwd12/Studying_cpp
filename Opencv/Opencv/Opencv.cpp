/*#include <iostream>
using namespace std;
#define LOW 4
#define COL 5


typedef struct OX { 
	char data[LOW][COL] = { 0x00, }; // data배열을 선언하고 16진수 값으로 초기화

	void show() {
		for (int i = 0; i < LOW; i++) {
			for (int u = 0; u < COL; u++) {
				cout << data[i][u];
			}
			cout << endl;
		}
		cout << endl;
	}
};

struct OX c;

void sqare() { //data 배열 전부 'O'으로 입력
	
	for (int i = 0; i < LOW; i++) {
		for (int u = 0; u < COL; u++)
		{
			c.data[i][u] = 'O';

		}
		
	}
	
}


void xsqare() { // data 배열중 0,0~1,1까지 'X'으로 변경
	
	for (int i = 0; i < LOW; i++) {
		for (int u = 0; u < COL; u++) {
			if (u < 2 && i < 2) {
				c.data[i][u] = 'X';
			}
		}
		
	}
	
}

void osquare() { //xsqare()에서 변경 한 부분을 반대로 변경
	for (int i = 0; i < LOW; i++) {
		for (int u = 0; u < COL; u++) {
			if (u < 2 && i < 2) {
				c.data[i][u] = 'O';
			}
			else
				c.data[i][u] = 'X';
			
		}
		
	}
	
}


void right(){ //osquare() 의 출력 값을 오른쪽으로 90도 회전한 상태로 출력

	char dataTrans[COL][LOW] = { 0x00, }; // 배열의 값을 바꾸기 위한 5x4배열을 생성
	for (int i = 0; i < LOW; i++) {
		for (int u = 0; u < COL; u++) {
			dataTrans[u][3 - i] = c.data[i][u]; 
		}
	}

	for (int i = 0; i < COL; i++) { //바뀐 데이터 값을 출력
		for (int u = 0; u < LOW; u++) {
			std::cout << dataTrans[i][u];
		}
		std::cout << '\n';
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
	
}*/

