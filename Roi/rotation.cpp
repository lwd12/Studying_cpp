/*#innclude<opencv2 / opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main() {
	Mat img = imread("C:\\Mb_lwj\\lena.jpg");

	int row = img.rows;
	int col = img.cols;

	//Mat M = getRotationMatrix2D(Point(row/2, col/2), 270, 0.7); //원본 사진을 0.7배로 변경 270도 회전

	
	Mat img_rotate;

	rotate(img, img_rotate, ROTATE_90_CLOCKWISE); //rotate 함수 이용 회전

	//Size size(row * 2, col * 2);
	
	//warpAffine(img, img_rotate, M, Size(row,col)); //warpAffine함수 이용 회전
	
	imshow("img", img_rotate);
	
	imwrite("C:\\Mb_lwj\\lenalotate.jpg", img_rotate);



	waitKey(0);



}*/