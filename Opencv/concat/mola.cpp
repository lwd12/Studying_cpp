#include <iostream>
#include <opencv2/opencv.hpp>

/*using namespace std;
using namespace cv;

int main(int argc, char* argv[]) {

    const double filter[2][2] = { 1.0, 1.0 , 1.0, 1.0 };

    Mat imgSrc = imread("C:\\Mb_lwj\\lena.jpg", cv::IMREAD_GRAYSCALE);

    if (imgSrc.empty()) {
        cout << "Image load failed!\n";
        return -1;
    }

    resize(imgSrc, imgSrc, Size(256, 256));
    imshow("Source 128x128", imgSrc);

    Mat imgOut(128, 128, CV_8UC1, Scalar(255, 0, 0));

    for (int r = 0; r < imgOut.rows; r++) {
        for (int c = 0; c < imgOut.cols; c++) {
            uchar& value = imgOut.at<uchar>(r, c);
            value
                = (uchar)((imgSrc.at<uchar>(r * 2, c * 2) * filter[0][0]
                    + imgSrc.at<uchar>(r * 2, c * 2 + 1) * filter[0][1]
                    + imgSrc.at<uchar>(r * 2 + 1, c * 2) * filter[1][0]
                    + imgSrc.at<uchar>(r * 2 + 1, c * 2 + 1) * filter[1][1]) / 4.);
        }
    }

    imshow("Output", imgOut);

    waitKey(0);

    return 0;
}*/
