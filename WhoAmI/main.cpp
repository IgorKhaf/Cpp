#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

void showImage(const String&);

int main() {
    showImage("image.jpg");
    showImage("image.jpg");
    showImage("image.jpg");
    showImage("image.jpg");
    return 0;
}

void showImage(const String& jpgName)
{
  destroyWindow("PicWindow");

  Mat image = imread(jpgName, IMREAD_COLOR);
  if(!image.data) {
    std::cout << "Could not open or find the image" << jpgName << std::endl;
    return;
  }

  namedWindow("PicWindow", WINDOW_AUTOSIZE);
  inshow("PicWindow", image);
  waitKey(50);
}