#include "show_exam.h"

void exam1()
{
    std::ofstream ofile("example1.ppm");

    const int image_width = 2;
    const int image_height = 2;

    ofile << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    ofile << 255 << " " << 0 << " " << 0 << " ";
    ofile << 0 << " " << 255 << " " << 0 << '\n';
    ofile << 0 << " " << 0 << " " << 255 << " ";
    ofile << 0 << " " << 0 << " " << 0 << '\n';
    ofile << std::flush;
}