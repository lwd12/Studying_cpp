/*#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
    const char* input_image = "C:/Mb_lwj/lena.jpg"; // 이미지 파일 저장

    Mat src = imread(input_image, IMREAD_COLOR);//컬러로 불러오기

    if (src.empty()) {//파일을 불러오지 못했을때
        cout << " 이미지를 불러오는 데 문제가 생겼습니다." << endl;
        return -1;
    }


    Mat grayImage(src.rows, src.cols, CV_8UC1); //채널 1개의 개체 생성

    for (int i = 0; i < src.rows; i++) {// 흑백 화면으로 변경
        for (int j = 0; j < src.cols; j++) {
            Vec3b color = src.at<Vec3b>(i, j);
            int blue = color.val[0];
            int green = color.val[1];
            int red = color.val[2];
            int gray = (blue + green + red) / 3;
            grayImage.at<uchar>(i, j) = gray;
        }
    }

    double threshold = 127; //이진화 하기위한 기준점
    Mat imagegray = imread(input_image, IMREAD_GRAYSCALE);
    Mat img_binary = imread(input_image, 0);

    if (imagegray.empty()) {//사진을 불러오지 못할때
        cout << input_image
            << " 이미지를 불러오는 데 문제가 생겼습니다." << endl;
        return -1;
    }

    for (int row = 0; row < imagegray.rows; row++) { // 기준점을 바탕으로 이진화
        for (int col = 0; col < imagegray.cols; col++) {
            if (imagegray.at<uchar>(row, col) > threshold) {
                img_binary.at<uchar>(row, col) = 255;
            }
            else {
                img_binary.at<uchar>(row, col) = 0;
            }
        }
        cout << "\n" << endl;
    }

    Mat img_Canny;
    Canny(grayImage, img_Canny, 90, 180);

    vector<Mat>matrices = { grayImage ,img_Canny };

    Mat img_result;
    hconcat(matrices, img_result);



    imshow("src", src);
    imshow("img_result", img_result);

 

   // imshow("imagegray", img_binary);
   
    //imshow("gray", grayImage);




    waitKey(0);
    destroyAllWindows();


}*/