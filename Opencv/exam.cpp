/*#include <iostream>

int main()
{
    char data[4][5] = { 0x00, };
    memset(data, 'o', sizeof(data));

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << data[i][j];
        }
        std::cout << '\n';
    }

    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            data[i][j] = 'x';

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << data[i][j];
        }
        std::cout << '\n';
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            data[i][j] = (data[i][j] == 'o' ? 'x' : 'o');
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            std::cout << data[i][j];
        }
        std::cout << '\n';
    }

    char dataTrans[5][4] = { 0x00, };
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            dataTrans[j][4 - i - 1] = data[i][j];
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << dataTrans[i][j];
        }
        std::cout << '\n';
    }

}*/
