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

    double angle = 180.0;

    cv::Point2f center(img.cols / 2.0, img.rows / 2.0);

    cv::Mat rotation_matrix = cv::getRotationMatrix2D(center, angle, 1.0);

    cv::Mat rotated;

    cv::warpAffine(img, rotated, rotation_matrix, img.size());

    cv::imshow("King of Angmar", rotated);

    cv::waitKey(0);

    cv::destroyAllWindows();

    return 0;
}