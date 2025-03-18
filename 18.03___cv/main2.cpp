#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    cv::Mat img = cv::imread("/home/stud-24/Downloads/witch-king.jpg", cv::IMREAD_COLOR);
    

    if(img.empty())
    {
        std::cerr << "cannot load image\n";
        return -1;
    }

    int x = 100;
    int y = 50;

    int width = 200;
    int height = 100;

    cv::Mat cropped = img(cv::Rect(x, y, width, height));

    cv::imshow("King of Angmar", cropped);

    cv::waitKey(0);

    cv::destroyAllWindows();

    return 0;
}