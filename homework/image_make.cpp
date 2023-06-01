#include <opencv2/opencv.hpp>
#include <iostream>


using namespace cv;
using namespace std;


int main()
{


	Mat mat(640, 480, CV_8UC1,Scalar(255));
	Mat mat1(640, 480, CV_8UC3, Scalar(255,0,0));
	

	Mat mat2;
	mat1.copyTo(mat2);
	Mat change = mat2(Rect(0, 0, 100, 100));
	change = Scalar(0, 0, 255);


	//imwrite("C:\\Mb_lwj\\chage.jpg", mat2);

	Mat img_color;
	//img_color = imread("C:\\Mb_lwj\\lena.jpg", IMREAD_COLOR);
	//img_color = img_color(Rect(0, 0, 100, 100));

	//imwrite("C:\\Mb_lwj\\output.jpg", img_color);


	
	imshow("image", mat);
	imshow("image_blue", mat1);
	imshow("image_Red", mat2);
	//imshow("image_lena", img_color);


	waitKey(0);
	destroyAllWindows();
	


}
