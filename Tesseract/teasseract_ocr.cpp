#define _CRT_SECURE_NO_WARNINGS
#define NOMINMAX

#include <windows.h>
#include <opencv2/opencv.hpp>
#include <iostream>
#include <leptonica/allheaders.h>
#include <tesseract/baseapi.h>


using namespace std;
using namespace cv;


char* UTF8ToANSI(const char* pszCode)
{
    BSTR    bstrWide;
    char* pszAnsi;
    int     nLength;

    // Get nLength of the Wide Char buffer
    nLength = MultiByteToWideChar(CP_UTF8, 0, pszCode, strlen(pszCode) + 1,
        NULL, NULL);
    bstrWide = SysAllocStringLen(NULL, nLength);

    // Change UTF-8 to Unicode (UTF-16)
    MultiByteToWideChar(CP_UTF8, 0, pszCode, strlen(pszCode) + 1, bstrWide, nLength);

    // Get nLength of the multi byte buffer
    nLength = WideCharToMultiByte(CP_ACP, 0, bstrWide, -1, NULL, 0, NULL, NULL);
    pszAnsi = new char[nLength];

    // Change from unicode to mult byte
    WideCharToMultiByte(CP_ACP, 0, bstrWide, -1, pszAnsi, nLength, NULL, NULL);
    SysFreeString(bstrWide);

    return pszAnsi;
}

int main()
{
    const char* input_image = "C:/image.jpg";

    Mat imageColor = imread(input_image, IMREAD_COLOR);
    Mat imageGray = imread(input_image, IMREAD_GRAYSCALE);
    Mat img_binary = imread(input_image, 0);

    if (imageColor.empty() || imageGray.empty()) {
        cout << input_image
            << " 이미지를 불러오는 데 문제가 생겼습니다." << endl;
        return -1;
    }

    double threshold = 100;

    for (int row = 0; row < 100; row++) {
        for (int col = 0; col < 100; col++) {
            if (imageGray.at<uchar>(row, col) > threshold) {
                img_binary.at<uchar>(row, col) = 255;
            }
            else {
                img_binary.at<uchar>(row, col) = 0;
            }
        }
        cout << "\n" << endl;
    }

    namedWindow(input_image, WINDOW_NORMAL);
    namedWindow(input_image, WINDOW_AUTOSIZE);
    imshow(input_image, imageColor);
   
    imshow("binary", img_binary);

    waitKey(0);
    
    destroyWindow(input_image);

  /*  // tesseract api 설정
    tesseract::TessBaseAPI* api = new tesseract::TessBaseAPI();
    if (api->Init("C:/Program Files/Tesseract-OCR/tessdata", "kor")) {
        return -1;
    }

    // 이미지 설정
    Pix* image = pixRead(input_image);
    api->SetImage(image);

    std::string utf_text = api->GetUTF8Text();
    std::string text = UTF8ToANSI(utf_text.c_str());

    std::cout << text << std::endl;

    */
}

