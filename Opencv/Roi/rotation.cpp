/*#innclude<opencv2 / opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;

int main() {
	Mat img = imread("C:\\Mb_lwj\\lena.jpg");

	int row = img.rows;
	int col = img.cols;

	//Mat M = getRotationMatrix2D(Point(row/2, col/2), 270, 0.7); //���� ������ 0.7��� ���� 270�� ȸ��

	
	Mat img_rotate;

	rotate(img, img_rotate, ROTATE_90_CLOCKWISE); //rotate �Լ� �̿� ȸ��

	//Size size(row * 2, col * 2);
	
	//warpAffine(img, img_rotate, M, Size(row,col)); //warpAffine�Լ� �̿� ȸ��
	
	imshow("img", img_rotate);
	
	imwrite("C:\\Mb_lwj\\lenalotate.jpg", img_rotate);



	waitKey(0);



}*/