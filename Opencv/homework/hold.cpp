/*#include <opencv2/opencv.hpp>
#include <iostream>


using namespace cv;
using namespace std;

static void on_trackbar(int, void*) {

}



int main()
{

    namedWindow("Canny");

    
    createTrackbar("low threshold", "Canny", 0, 1000, on_trackbar);
    createTrackbar("high threshold", "Canny", 0, 1000, on_trackbar);


    setTrackbarPos("low threshold", "Canny", 50);
    setTrackbarPos("high threshold", "Canny", 150);


    Mat img_frame;
    VideoCapture cap("C:\\Mb_lwj\\vtest.avi");
    float fps = (cap.get(CAP_PROP_FPS));

  

    while (1)
    {
        int low = getTrackbarPos("low threshold", "Canny");
        int high = getTrackbarPos("high threshold", "Canny");

        bool ret = cap.read(img_frame); //영상을 제대로 작동할수 없을 때 
        if (!ret)
        {
            cout << "캡쳐 실패" << endl;
            return -1;
        }
        cvtColor(img_frame, img_frame, COLOR_BGR2GRAY);

       
        Mat img_canny;
        Canny(img_frame, img_canny, low, high);


        imshow("Canny", img_canny);


        if (waitKey(1) == 27)
            break;
    }





        destroyAllWindows();
   
    return 0;
}
*/