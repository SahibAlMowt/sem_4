#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>

int main()
{
    cv::Mat image(500, 500, CV_8UC3, cv::Scalar(255, 255, 255));

    if(!image.data)
    {
        std::cerr << "can not create image\n";
        return -1;
    }

    cv::Point p1(100, 100);
    cv::Point p2(400, 400);

    int thickness = -1;  // -1 for fill picture 

    cv::rectangle(image, p1, p2, cv::Scalar(0, 0, 0), thickness, cv::LINE_8);

    cv::imshow ("output", image);

    cv::waitKey(0);

    return 0;
}