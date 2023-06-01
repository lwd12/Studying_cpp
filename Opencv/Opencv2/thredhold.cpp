/*#include<iostream>
#include<opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main() {

    Mat img=imread("C:\\Mb_lwj\\blue_bird.jpg",IMREAD_COLOR);

    Size size(200, 200);
    resize(img, img, size);
 
    Mat img_hsv;
    cvtColor(img, img_hsv, COLOR_BGR2HSV);


    Mat img_mask;
    Vec3b lower_blue = Vec3b(120 - 20, 70, 0);
    Vec3b upper_blue = Vec3b(120 + 20, 255, 255);
    inRange(img_hsv, lower_blue, upper_blue, img_mask);


    Mat img_result;
    bitwise_and(img, img, img_result, img_mask);

    Mat thre;
    cvtColor(img_result, thre, COLOR_BGR2GRAY);
    threshold(thre, thre, 50, 255, THRESH_BINARY);



    imshow("Color", img);
    imshow("Result", img_result);
    imshow("gray", thre);

    waitKey(0);
    destroyAllWindows();

   
    return 0;
}*/