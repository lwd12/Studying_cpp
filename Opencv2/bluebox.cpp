/*#include <opencv2/opencv.hpp>
#include <iostream>
#include <conio.h>

using namespace std;
using namespace cv;

#define UP 0x260000
#define DOWN 0x280000
#define RIGHT  0x270000
#define LEFT 0x250000
#define ESC 27

int main() {


	//namedWindow("Window");
	
	int width = 256;
	int height = 256;

	Mat mat(width, height, CV_8UC3, Scalar(255, 0, 0));
	Rect rect(128, 128, 32, 32);
    
    while (char(waitKey(1)) != 'q')
    {

        Mat mat(width, height, CV_8UC3, Scalar(255, 0, 0));
        rectangle(mat, rect, Scalar(0, 0, 255), -1);

       
        imshow("Window", mat);
        
     
        int key =  waitKeyEx();
        //int chr;
        //chr = waitKey();



        //if (chr == 0 || chr == 0xe0)
          //  chr = waitKey();
        switch (key)
        {
        case UP:  // up 
            
            rect.y -= 10;
            break;

        case DOWN:  // down 
            rect.y += 10;
            break;

        case LEFT:  // left 
            rect.x -= 10;
            break;

        case RIGHT:  // right 
            rect.x += 10;
            break;
        }

        if (rect.y < 0) {
            rect.y = 0;
            rect.y += 5;
        }
        if (rect.y > height - 32) {
            rect.y = height - 32;
            rect.y -= 5;
        }
        if (rect.x > height-32) {
            rect.x = height - 32;
            rect.x -= 5;
        }
        if (rect.x < 0) {
            rect.x = 0;
            rect.x += 5;
        }


    }
    
    return 0;
}
*/