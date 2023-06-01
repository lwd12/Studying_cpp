/*#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;


int main(int argc, char* argv[])
{

    if (5 != argc) {
        cout << "Invalid Params" << endl;
        return -1;
    }


    Mat img;
    Mat img2;
    img = imread(argv[3], IMREAD_COLOR);
    img2 = imread(argv[4], IMREAD_COLOR);

    int row = img.rows;
    int col = img.cols;
    Size size(row, col);
    resize(img2, img2, size);

    if (img.empty()||img2.empty())
    {
        cout << "이미지 파일을 읽을 수 없습니다." << endl;
        return -2;
    }


    if (argv[2] == "- v") {
        Mat img_Canny;
        Canny(img, img_Canny, 90, 180);

        vector<Mat>matrices = { img ,img_Canny };

        Mat img_result;
        hconcat(matrices, img_result);
        imshow("img_result", img_result);

    }
    else {
        Mat img_Canny;
        Canny(img, img_Canny, 90, 180);

        vector<Mat>matrices = { img ,img_Canny };

        Mat img_result;
        vconcat(matrices, img_result);
        imshow("img_result", img_result);
    }


    imwrite("argv[5]", img);

    cout << "Done" << endl;

    return 0;

}*/