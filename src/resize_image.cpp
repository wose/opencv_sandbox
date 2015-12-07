#include <stdio.h>
#include <opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(int argc, char** argv )
{
    if ( argc != 3 )
    {
        printf("usage: resize_image <Source_Image_Path> <Dest_Image_Path>\n");
        return -1;
    }

    Mat src, dst;
    src = imread( argv[1], 1 );

    if (!src.data)
    {
        printf("No image data \n");
        return -1;
    }

    resize(src(Rect(200, 200, 100, 100)), dst, Size(), 10.0, 10.0, INTER_NEAREST);

    try {
        imwrite(argv[2], dst);
    }
    catch (runtime_error& ex) {
        fprintf(stderr, "Exception converting image to PNG format: %s\n", ex.what());
        return 1;
    }

    fprintf(stdout, "resized image to PNG file.\n");

    return 0;
}
