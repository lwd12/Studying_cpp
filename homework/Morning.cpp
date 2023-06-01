/*#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
    const char* input_image = "C:/Mb_lwj/lena.jpg"; // �̹��� ���� ����

    Mat src = imread(input_image, IMREAD_COLOR);//�÷��� �ҷ�����

    if (src.empty()) {//������ �ҷ����� ��������
        cout << " �̹����� �ҷ����� �� ������ ������ϴ�." << endl;
        return -1;
    }


    Mat grayImage(src.rows, src.cols, CV_8UC1); //ä�� 1���� ��ü ����

    for (int i = 0; i < src.rows; i++) {// ��� ȭ������ ����
        for (int j = 0; j < src.cols; j++) {
            Vec3b color = src.at<Vec3b>(i, j);
            int blue = color.val[0];
            int green = color.val[1];
            int red = color.val[2];
            int gray = (blue + green + red) / 3;
            grayImage.at<uchar>(i, j) = gray;
        }
    }

    double threshold = 127; //����ȭ �ϱ����� ������
    Mat imagegray = imread(input_image, IMREAD_GRAYSCALE);
    Mat img_binary = imread(input_image, 0);

    if (imagegray.empty()) {//������ �ҷ����� ���Ҷ�
        cout << input_image
            << " �̹����� �ҷ����� �� ������ ������ϴ�." << endl;
        return -1;
    }

    for (int row = 0; row < imagegray.rows; row++) { // �������� �������� ����ȭ
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