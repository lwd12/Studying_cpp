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
	const char* data[LOW][COL] = { 000000,};// data�迭�� �����ϰ� 000000���� �ʱ�ȭ

	void show() { //�迭 ó������ ������ ������ �� ȣ��
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

	for (int i = 0; i < LOW; i++) {	//data �迭 ���� FFFFFF���� �Է�
		for (int u = 0; u < COL; u++)
		{
			c.data[i][u] = "FFFFFF";

		}

	}

}


void xsqare() { // data �迭�� 0,0~1,1���� 000000���� ����

	for (int i = 0; i < LOW; i++) {
		for (int u = 0; u < COL; u++) {	
			if (u < 2 && i < 2) {
				c.data[i][u] = "000000";
			}
		}

	}

}

void osquare() { //xsqare()���� ���� �� �κ��� �ݴ�� ����
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


void right() {	//osquare() �� ��� ���� ���������� 90�� ȸ���� ���·� ���
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

