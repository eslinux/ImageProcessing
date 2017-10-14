#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
 
using namespace std;
using namespace cv;
 
int main( int argc, char** argv )
 {
   
     Mat src = imread( "../image/lena.jpg", 1 );
     Mat dst;
 
     //Apply bilateral filter
     bilateralFilter ( src, dst, 15, 80, 80 );
     imshow("source", src);
     imshow("result", dst);  
 
     waitKey(0);
     return 0;
 }
