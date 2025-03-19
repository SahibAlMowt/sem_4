#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
    cv::Mat image = cv::imread("/home/stud-24/Downloads/witch-king.jpg", cv::IMREAD_COLOR);
    

    if(!image.data)
    {
        std::cerr << "can not create image\n";
        return -1;
    }

    cv::Point p1(100, 100);
    cv::Point p2(400, 400);

    int thickness = 4;

    cv::rectangle(image, p1, p2, cv::Scalar(0, 0, 0), thickness, cv::LINE_8);

    cv::imshow ("output", image);

    cv::waitKey(0);

    return 0;
}