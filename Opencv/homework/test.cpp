
/*#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
    const char* input_image = "C:/Mb_lwj/lena.jpg";

    Mat src = imread(input_image, IMREAD_COLOR);

    if (src.empty()) {
        cout << "Image load failed!\n";
        return -1;
    }

  
    Mat grayImage(src.rows, src.cols, CV_8UC1);

    for (int i = 0; i < src.rows; i++) {
        for (int j = 0; j < src.cols; j++) {
            Vec3b color = src.at<Vec3b>(i, j);
            int blue = color.val[0];
            int green = color.val[1];
            int red = color.val[2];
            int gray = (blue + green + red) / 3;
            grayImage.at<uchar>(i, j) = gray;
        }
    }

    double threshold = 127;
    Mat imagegray= imread(input_image, IMREAD_GRAYSCALE);
    Mat img_binary = imread(input_image, 0);

    if (imagegray.empty()) {
        cout << input_image
            << " 이미지를 불러오는 데 문제가 생겼습니다." << endl;
        return -1;
    }

    for (int row = 0; row < imagegray.rows; row++) {
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



    /*Mat lena = imread(input_image, IMREAD_COLOR);
    Mat butter = imread("C:\\Mb_lwj\\butterfly.jpg", IMREAD_COLOR);
   // imshow("mat", butter);
   // imshow("read", lena);
   

    if (lena.rows < butter.rows) {
        for (int row = 0; row < lena.rows; row++) {
            for (int col = 0; col < lena.cols; col++) {
                butter.at<Vec3b>(row, col) = lena.at<Vec3b>(row, col);
            }
            cout << "\n" << endl;
        }
    }

    else{
        for (int row = 0; row < butter.rows; row++) {
            for (int col = 0; col < butter.cols; col++) {
                lena.at<Vec3b>(row, col) = butter.at<Vec3b>(row, col);
            }
            cout << "\n" << endl;
        }
        }
        */



        
   /* VideoCapture cap("C:\\Mb_lwj\\vtest.avi");

    // 사진 불러오기
    Mat image = imread(input_image, IMREAD_COLOR);
    Size size(100,100);

    int fps = (int)cap.get(CAP_PROP_FPS);
    resize(image, image, size);
    namedWindow("Video");

    // 동영상 프레임 반복 처리
    while (1) {
        cv::Mat frame;
        cap >> frame;

        // 동영상이 끝나면 종료
        if (frame.empty()) {
            break;
        }

        // 사진 합성
        Rect copy(100,100, image.cols, image.rows);
        image.copyTo(frame(copy));

        // 화면에 표시
        imshow("Video", frame);

        int key = waitKey(1000/fps);
        if (key == 27)
            break;
    }


    cap.release();
    

    for (int r = 0; r < src.rows; r++) {
        for (int c = 0; c < src.cols; c++) {
            cv::Vec3b& p1 = src.at<cv::Vec3b>(r, c);
            cv::Vec3b& p2 = dst.at<cv::Vec3b>(r, c);

            p2[0] = 255 - p1[0];
            p2[1] = 255 - p1[1];
            p2[2] = 255 - p1[2];
        }
    }

    imshow("src", src);
    
    imshow("imagegray", img_binary);
   // imshow("mat", butter);
    
    imshow("gray", grayImage);
    waitKey(0);
    destroyAllWindows();

    



}*/