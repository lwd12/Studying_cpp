/*#include <opencv2/opencv.hpp>
#include <iostream>


using namespace cv;
using namespace std;


int main()
{
	Mat img_color;


	img_color = imread("lena.jpg", IMREAD_COLOR);
	if (img_color.empty())
	{
		cout << "이미지 파일을 읽을 수 없습니다." << endl;
		return -1;
	}


	namedWindow("Color");
	imshow("Color", img_color);

	waitKey(0);
	destroyAllWindows();

}
*/