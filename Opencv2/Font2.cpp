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

        cout << "문자를 입력하세요";
        cin >> text;
        Font.push_back(text); //문자열 입력



        if (images.count(string(1, Font[0][0])) > 0)     // 입력 받은 문자열에서 1번째 문자의 데이터가 존재 하는가?
        {
            if (Font[0].size() > 1) { // 1번째 문자열의 사이즈가 1개 이상인가?
                vector<Mat>matrices = { images[string(1, Font[0][0])],images[string(1, Font[0][1])] }; // 문자열의 첫번째 문자와 두번째 문자의 이미지 데이터를 가로로 합성
                hconcat(matrices, img);
                imshow("Find", img);
            }
            else
                imshow("Find", images[string(1, Font[0][0])]);


        }
        else
            cout << Font[0][0] << "\n" << Font.front() << "\n" << "\n"; // 제대로 입력 받지 못했을 때 받은 문자열은 무엇인가

        waitKey(0);
    }




}*/