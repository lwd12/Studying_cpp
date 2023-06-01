#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;


int main(int argc, char* argv[])
{
    
    if (5!= argc) {
        cout << "Invalid Params" << endl;
        return -1;
    }


    Mat img;
    Mat img2;
    Mat img_result;
    char* option = argv[1];

    img = imread(argv[2], IMREAD_COLOR);
    img2 = imread(argv[3], IMREAD_COLOR);

  if (img.empty() || img2.empty())
    {
        cout << "이미지 파일을 읽을 수 없습니다." << endl;
        return -2;
    }

    Size size(img.rows, img.cols);
    resize(img2, img2, size);

    if (*(option + 1)='v') {
        

        vector<Mat>matrices = { img2 ,img };
        hconcat(matrices, img_result);

    }
    else if(*(option + 1) = 'h') {

       

        vector<Mat>matrices = { img2 ,img };
        vconcat(matrices, img_result);

    }

    imwrite(argv[4], img_result);
    cout << "Done" << endl;

    return 0;
    

}