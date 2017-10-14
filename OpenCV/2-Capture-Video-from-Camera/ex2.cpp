
#if 0

#include "opencv2/opencv.hpp"
using namespace cv;

int main(int argc, const char** argv)
{

    VideoCapture cap;
    if(argc < 2){

        cap.open(0); // open the default camera /dev/video0
    }else{

        cap.open(argv[1]); // open video file
    }

    if(!cap.isOpened())  // check if we succeeded
        return -1;

    namedWindow("Video", 1);
    Mat frame;
    while(1)
    {
        cap >> frame;         // get a new frame from camera
        imshow("Video", frame);

        // Press 'c' to escape
        if(waitKey(30) == 'c') break;
    }
    return 0;
}


#else

#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
using namespace cv;

int main( int argc, const char** argv )
{
    CvCapture* capture;
    Mat frame;

    // Read the video stream
    capture = cvCaptureFromCAM( 0 );
    namedWindow("Video",CV_WINDOW_AUTOSIZE);
    if( capture )
    {
        while( true )
        {
            frame = cvQueryFrame( capture );
            imshow("Video",frame);

            // Press 'c' to escape
            int c = waitKey(10);
            if( (char)c == 'c' ) { break; }
        }
    }
    return 0;
}

#endif
