/*#include <opencv2/opencv.hpp>


using namespace cv;


int main()
{

	Mat img_background, img_object;
	img_background = imread("C:\\Users\\c2eri\\OneDrive\\바탕 화면\\소스코드\\Ch6\\6.2\\background.png", IMREAD_GRAYSCALE);
	img_object = imread("C:\\Users\\c2eri\\OneDrive\\바탕 화면\\소스코드\\Ch6\\6.2\\object.png", IMREAD_GRAYSCALE);



	Mat img_sub;
	subtract(img_object, img_background, img_sub);


	Mat img_binary;
	threshold(img_sub, img_binary, 50, 255, THRESH_BINARY);


	imshow("background", img_background);
	imshow("object", img_object);
	imshow("sub", img_sub);
	imshow("binary", img_binary);
	waitKey(0);


	return 0;

	


	}
	*/
