#include<iostream>
#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main(){
    /**
     * CV_8UC3 means we use unsigned char types that are 8 bit long,
     * and each pixel has three of these to form the three channels.
     * The cv::Scalar is four element short vector.
     */
    // Mat M(2, 2, CV_8UC3, Scalar(0, 0, 255));
    // cout << M << endl;

    /**
     * Use C/C++ arrays and initialize via constructor
     * More than one dimensions
     */
    // int sz[3] = {2,2,2};
    // Mat L(3,sz, CV_8UC(1), Scalar::all(0));
    // // cout << L << endl; // error: assert m.dims <= 2

    /**
     * You cannot initialize the matrix values with this construction. 
     * It will only reallocate its matrix data memory if the new size will not fit into the old one.
     */
    // Mat M;
    // M.create(4,4, CV_8UC(2));
    // cout << "M = "<< endl << " "  << M << endl << endl;

    /**
     * MATLAB style initializer
     */
    // Mat E = Mat::eye(4, 4, CV_64F);
    // cout << "E = " << endl << " " << E << endl << endl;
    // Mat O = Mat::ones(2, 2, CV_32F);
    // cout << "O = " << endl << " " << O << endl << endl;
    // Mat Z = Mat::zeros(3,3, CV_8UC1);
    // cout << "Z = " << endl << " " << Z << endl << endl;

    /**
     * C++ Style
     */
    // Mat C = (Mat_<double>(3,3) << 0, -1, 0, -1, 5, -1, 0, -1, 0);
    // cout << "C = " << endl << " " << C << endl << endl;
    // Mat C = (Mat_<double>({0, -1, 0, -1, 5, -1, 0, -1, 0})).reshape(3);
    // cout << "C = " << endl << " " << C << endl << endl;
    // // Clone a row
    // Mat RowClone = C.row(1).clone();
    // cout << "RowClone = " << endl << " " << RowClone << endl << endl;

    /**
     * Output formatting
     */
    Mat C = (Mat_<double>({0, -1, 0, -1, 5, -1, 0, -1, 0})).reshape(3);
    cout << "C (numpy)   = " << endl << format(C, Formatter::FMT_NUMPY ) << endl << endl;

}