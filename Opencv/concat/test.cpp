#include<opencv2/opencv.hpp>
#include<iostream>

using namespace std;
using namespace cv;



int main(int argc, char* argv[]) {
	Mat Filter = Mat_<double>({ 2,2 }, {2.0, -1.0, -1.0, 0}); // 2x2 더블 행렬
	//Mat output;
	const double filter[2][2] = { 1.0, 1.0 , 1.0, 1.0 }; // 2x2 더블 행렬

	const char* input_image = "C:\\Mb_lwj\\lena.jpg"; 

	Mat img = imread(input_image, IMREAD_GRAYSCALE);
	//imshow("main1", img);
	if (img.empty()) {

		cout << "Image load failed!\n";
		return -1;
	}

	Size size(256, 256);// 사이즈 256으로 재설정
	resize(img, img, size);
	
	Mat result(128,128, CV_8UC1, Scalar(255, 0, 0));
	

	//filter2D(img, output, -1, Filter/4, Point(-1, -1), (0, 0), 4);

	
	for (int i = 0; i < result.rows; i++) {
		for (int j = 0; j < result.cols; j++) {

			//result.at<Vec3b>(i, j) = ((img.at<Vec3b>(i, j) * Filter.at<Vec3b>(i, j)) + (img.at<Vec3b>(i, j) * Filter.at<Vec3b>(i, j))
				//+ (img.at<Vec3b>(i, j) * Filter.at<Vec3b>(i, j)) + (img.at<Vec3b>(i, j) * Filter.at<Vec3b>(i, j)) / 4);


			//uchar& value = result.at<uchar>(i, j);
			result.at<uchar>(i, j) =(((img.at<uchar>(2 * i, 2 * j)* filter[0][0]) + (img.at<uchar>(0, 2*j + 1) * filter[0][1])
			+ (img.at<uchar>(2 * i+1, 2 * j) * filter[1][0]) + (img.at<uchar>(2 * i + 1, 2 * j + 1) * filter[1][1]))/4);




		}
	}
	

	Mat imgOut(128, 128, CV_8UC1, Scalar(255, 0, 0));

	for (int r = 0; r < imgOut.rows; r++) { //주변 2x2 배열을 필터를 통해 값을 평균내서 압축한다.
		for (int c = 0; c < imgOut.cols; c++) {
			uchar& value = imgOut.at<uchar>(r, c);
			value = (uchar)((img.at<uchar>(r * 2, c * 2) * Filter.at<double>(0,0)
					+ img.at<uchar>(r * 2, c * 2 + 1) * Filter.at<double>(0,1)
					+ img.at<uchar>(r * 2 + 1, c * 2) * Filter.at<double>(1,0)
					+ img.at<uchar>(r * 2 + 1, c * 2 + 1) * Filter.at<double>(1,1)) / 4);
		}
	}
	
	
	imshow("main", img);
	imshow("img", result);// 배열 버전
	//imwrite("C:\\Temp\\out.jpg", output);
	imshow("img2", imgOut);// Mat 버전

	waitKey(0); 
	destroyAllWindows();
}