#include <opencv2/opencv.hpp>
#include<iostream>

using namespace cv;
using namespace std;

int main()
{

    Mat img_gray;
    img_gray = imread("C:\\Mb_lwj\\source\\Ch11\\test2.png", IMREAD_GRAYSCALE);

    Mat kernel = getStructuringElement(MORPH_RECT, Size(3, 3));
    Mat img_result;
    morphologyEx(img_gray, img_result, MORPH_OPEN, kernel);


    //imshow("Input", img_gray);
    imshow("Result", img_result);
    waitKey(0);


    return 0;
}