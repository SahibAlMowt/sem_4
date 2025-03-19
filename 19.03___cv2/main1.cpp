#include <iostream>
#include <opencv2/opencv.hpp>

int main()
{
    cv::VideoCapture video("/home/stud-24/Downloads/Lord of the Rings_ The Return of the King (2003) - I Am No Man Scene _ Movieclips.mp4");

    if(!video.isOpened())
    {
        std::cerr << "can not open video\n";
        return -1;
    }

    cv::Mat frame;
    while(video.read(frame))
    {
        cv::imshow("King of Angmar", frame);

        if(cv::waitKey(35) == 'q')
        {
            break;
        }
    }

    video.release();
    cv::destroyAllWindows();

    return 0;
}