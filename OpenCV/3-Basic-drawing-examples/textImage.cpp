#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
using namespace cv;
 
int main( )
{ 
  // Create black empty images
  Mat image = Mat::zeros( 400, 400, CV_8UC3 );
   
  putText(image, "Hi all...", Point(50,100), FONT_HERSHEY_SIMPLEX, 1, Scalar(0,200,200), 4);
  imshow("Image",image);
 
  waitKey( 0 );
  return(0);
}
