#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

void showImage(const String&, const String&);

int main() {
  
  int choice = 0;
  do {
    std::cout << "Ask me about: \n";
    std::cout << "1. Where I am from. \n";
    std::cout << "2. My first university. \n";
    std::cout << "3. The place I like to visit. \n";
    std::cout << "4. Exit. \n";
    std::cin >> choice;
    if (choice == 1){
      std::cout << "I am from Saint Peterburg Russia. \n";
      showImage("/Users/igorkhafizov/Documents/College/Winter_2025/C++/WhoAmI/image1.jpg", "Saint Peterburg Russia");
    }
    else if (choice == 2){
      std::cout << "I drop off the university of Aerospace and Instrumentation after three years of study. \n";
      showImage("/Users/igorkhafizov/Documents/College/Winter_2025/C++/WhoAmI/image2.jpg", "University of Aerospace and Instrumentation");
    }
    else if (choice == 3){
      showImage("/Users/igorkhafizov/Documents/College/Winter_2025/C++/WhoAmI/image3.jpeg", "Alki Beach Seattle");
    }
    else if (choice == 4){
      break;
    }
    else {
      std::cout << "Invalid choice. \n";
    }
  } while (choice !=4);
  
  
    // showImage("image.jpg");
    return 0;
}

void showImage(const String& jpgName, const String& text)
{
  destroyWindow("PicWindow");

  Mat image = imread(jpgName, IMREAD_COLOR);
  if(!image.data) {
    std::cout << "Could not open or find the image" << jpgName << std::endl;
    return;
  }

  Point origin(50, 50);
  int fontFace = FONT_HERSHEY_SIMPLEX;
  double fontScale = 1;
  Scalar color(0,255,0);
  int thickness = 2;

  putText(image, text, origin, fontFace, fontScale, color, thickness);

  namedWindow("PicWindow", WINDOW_AUTOSIZE);
  imshow("PicWindow", image);
  waitKey(0);
}