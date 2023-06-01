/**
 This function converts a color to a character. Based off:
 http://paulbourke.net/dataformats/asciiart/
 @Param 1:	The color
 @Return:	The character
 */

/*
#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

#include <string>
#include <iostream>     
#include <fstream>      

using namespace std;
using namespace sf;




	//��� ����
char colorToChar(Color C, int type = 2) {

    //  ��� = (2 * Red + 5 * Green + 1 * Blue) / 8
    int tempInt = (2 * C.r + 4 * C.g + C.b) / 8;    //convert the pizel to black and white (get the intensity of the color)

    //������ ���� ��ο� �ͺ��� �������� ���� ���� �ͱ��� �����ϱ� ���� ���� ���
    string CHARACTERS;

    switch (type) {
    case 1:
        CHARACTERS = "$@&X?����0?8#1���/|(){}[]?li-_?��%*��+��~<>!;:,^��`'.�� ";   
        break;
    case 2:
        CHARACTERS = "@#%*=+-:. ";                                      
        break;
    case 3:
        CHARACTERS = "$?.  ";                                            
        break;
    }


    int tempIndex = int((tempInt / 255.0) * CHARACTERS.length());

    return (CHARACTERS[tempIndex]);
}





int main() {

    cout << ". . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .\n";

    string imagePath;
    cout << "��ȯ�Ϸ��� �̹��� ������ �ּҸ� �Է��ϼ��� ->";
    getline(cin, imagePath);

   Image img;
    if (!img.loadFromFile(imagePath.c_str())) {
        return EXIT_FAILURE;
    }
    else {
        cout << "�̹��� ���: " << imagePath << "\n";
    }

    string textFilePath = imagePath;

    for (int i = 0; i < 3; i++) {
        textFilePath.pop_back();      
    }
    textFilePath.append("txt");       

    ofstream outputTextFile(textFilePath, ios::trunc);	//�ؽ�Ʈ ���� ���� �Ұ�
    if (!outputTextFile) {
        cout << "�ؽ�Ʈ ������ ������ ���߽��ϴ�. :(\n";
        return EXIT_FAILURE;
    }
    else {
        cout << "�ؽ�Ʈ ���� ���� �ּ�: " << textFilePath << "\n";
    }
    cout << "\n. . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . . .\n";

    int pixelsPerLetter;
    cout << "Pixels per letter: ";
    cin >> pixelsPerLetter;
    while (pixelsPerLetter > 100 || pixelsPerLetter < 1) {
        cout << "\tError: 1���� 100������ �����մϴ� �ٽ��ϼ���: ";
        cin >> pixelsPerLetter;
    }

    int type;
    cout << "\n1. Complex:\t $@&X?����0?8#1���/|(){}[]?li-_?��%*��+��~<>!;:,^��`'.�� ";
    cout << "\n2. Simple:\t @#%*=+-:. ";
    cout << "\n3. Currency:\t $?.  ";
    cout << "\n - Choose a scale: ";
    cin >> type;

    while (type > 3 || type < 1) {
        cout << "\tError: 1���� 3������ �����մϴ� �ٽ��ϼ���: ";
        cin >> pixelsPerLetter;
    }

    Color tempColor;
    for (int y = 0; y < img.getSize().y; y = y + pixelsPerLetter) {
        for (int x = 1; x < img.getSize().x; x = x + pixelsPerLetter) {
            tempColor = img.getPixel(x, y);
            outputTextFile << colorToChar(tempColor, type) << " ";
        }
        outputTextFile << "\n";
    }

    outputTextFile.close();
    std::cout << "\n�����߽��ϴ� ������ ����Ǿ����ϴ�: " << textFilePath << "\n\n";

    return EXIT_SUCCESS;
}


*/