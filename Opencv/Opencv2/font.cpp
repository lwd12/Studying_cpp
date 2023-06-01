#include<iostream>
#include<opencv2/opencv.hpp>
#include <map>

using namespace std;
using namespace cv;

map<string, Mat> mapset;

int main() {
	
	Size size(100,100);

	Mat FontA = imread("C:\\Mb_lwj\\A.png", IMREAD_GRAYSCALE);
	resize(FontA, FontA, size);

	threshold(FontA, FontA, 127, 255, THRESH_BINARY);
	bitwise_not(FontA, FontA);

	Mat FontB = imread("C:\\Mb_lwj\\B.png", IMREAD_GRAYSCALE);
	resize(FontB, FontB, size);

	threshold(FontB, FontB, 127, 255, THRESH_BINARY);
	bitwise_not(FontB, FontB);

	Mat FontC = imread("C:\\Mb_lwj\\C.png", IMREAD_GRAYSCALE);
	resize(FontC, FontC, size);

	threshold(FontC, FontC, 127, 255, THRESH_BINARY);
	bitwise_not(FontC, FontC);


	mapset.insert({ "A", FontA });
	mapset.insert({ "B", FontB });
	mapset.insert({ "C", FontC });

	while (1) {
		//vector<string> Font;
		string text;
		Mat img;
		
			cout << "문자를 입력하세요";
			cin >> text;
			//Font.push_back(text);
			


			if (mapset.count(string(1, text[0])) > 0)
			{
				if (string(1, text[0]).size() >1) {
					vector<Mat>matrices = { mapset[string(1, text[0])],mapset[string(1, text[1])] };
					hconcat(matrices, img);
					imshow("Find", img);
				}
				else
					imshow("Find", mapset[string(1, text[0])]);


			}
			else
				cout << "\n"  << "\n";
	
		waitKey(0);
	}


	
	
}