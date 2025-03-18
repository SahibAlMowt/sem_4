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

    cv::imshow("King of Angmar", img);

    cv::waitKey(0);

    cv::destroyAllWindows();

    return 0;
}