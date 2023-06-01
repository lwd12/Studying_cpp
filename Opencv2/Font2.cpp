/*#include <opencv2/opencv.hpp>
#include <map>
#include <iostream>

using namespace std;
using namespace cv;


int main(int argc, char* argv[])
{
    Size size(100,100);

    Mat image1 = (Mat_<uchar>(8,8) <<0,   0,   0,   1,   0,   0,   0,   0,
                                     0,   0,   0,   1,   1,   0,   0,   0,
                                     0,   0,   1,   0,   1,   1,   0,   0,
                                     0,   1,   0,   0,   0,   1,   1,   0,
                                     0,   1,   0,   0,   0,   0,   1,   0,
                                     0,   1,   1,   1,   1,   1,   1,   0,
                                     1,   0,   0,   0,   0,   0,   0,   1,
                                     1,   0,   0,   0,   0,   0,   0,   1 );


    Mat image2 = Mat_<uchar>({ 8,8 }, { 1,   1,   1,   1,   1,   1,   0,   0,
                                        1,   0,   0,   0,   0,   0,   1,   0,
                                        1,   0,   0,   0,   0,   0,   1,   0,
                                        1,   0,   0,   1,   1,   1,   0,   0,
                                        1,   0,   0,   0,   0,   0,   1,   1,
                                        1,   0,   0,   0,   0,   0,   0,   1,
                                        0,   0,   0,   0,   0,   1,   1,   0,
                                        0,   1,   1,   1,   0,   0,   0,   0 });

    Mat image3 = Mat_<uchar>({ 8,8 },{ 0,   0,   1,   1,   1,   1,   0,   0,
                                       0,   1,   0,   0,   0,   0,   0,   1,
                                       1,   0,   0,   0,   0,   0,   0,   0,
                                       1,   0,   0,   0,   0,   0,   0,   0,
                                       1,   0,   0,   0,   0,   0,   0,   0,
                                       0,   1,   0,   0,   0,   0,   0,   1,
                                       0,   0,   1,   0,   0,   0,   1,   0,
                                       0,   0,   0,   1,   1,   1,   0,   0 });


    
  
    //resize(image1, image1, size);
    threshold(image1, image1, 0, 255, THRESH_BINARY);
    //bitwise_not(image1, image1);

    //resize(image2, image2, size);
    threshold(image2, image2, 0,255, THRESH_BINARY);
    //bitwise_not(image2, image2);

    //resize(image3, image3, size);
    threshold(image3, image3, 0,255, THRESH_BINARY);
    //bitwise_not(image3, image3);

    map<string,Mat> images;
    images["A"] = image1;
    images["B"] = image2;
    images["C"] = image3;

    while (1) {
        vector<string> Font;
        string text;
        Mat img;

        cout << "���ڸ� �Է��ϼ���";
        cin >> text;
        Font.push_back(text); //���ڿ� �Է�



        if (images.count(string(1, Font[0][0])) > 0)     // �Է� ���� ���ڿ����� 1��° ������ �����Ͱ� ���� �ϴ°�?
        {
            if (Font[0].size() > 1) { // 1��° ���ڿ��� ����� 1�� �̻��ΰ�?
                vector<Mat>matrices = { images[string(1, Font[0][0])],images[string(1, Font[0][1])] }; // ���ڿ��� ù��° ���ڿ� �ι�° ������ �̹��� �����͸� ���η� �ռ�
                hconcat(matrices, img);
                imshow("Find", img);
            }
            else
                imshow("Find", images[string(1, Font[0][0])]);


        }
        else
            cout << Font[0][0] << "\n" << Font.front() << "\n" << "\n"; // ����� �Է� ���� ������ �� ���� ���ڿ��� �����ΰ�

        waitKey(0);
    }




}*/