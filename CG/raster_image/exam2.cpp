#include "show_exam.h"

void exam2()
{
	std::ofstream ofile("example2.ppm"); // TODO : where is a better place to open a file?

	// Make an image
	const int image_width = 128;
	const int image_height = 128;

	std::vector<uint8_t> buffer(image_width * image_height * 3);

	for(int j = 0; j < image_height; j++)
		for (int i = 0; i < image_width; i++)
		{
			const int offset = (i + image_width * j) * 3;
			if (j > image_height / 2)
			{
				buffer[offset] = 0;
				buffer[offset+1] = 0;
				buffer[offset+2] = 255;
			}
			else
			{
				buffer[offset] = 255;
				buffer[offset+1] = 0;
				buffer[offset+2] = 0;
			}
		}

	// Write it is PPM file
	ofile << "P3\n" << image_width << ' ' << image_height << "\n" << "255\n";

	for (int j = 0; j < image_height; j++)
	{
		for (int i = 0; i < image_width; i++)
		{
			const int offset = (i + image_width * j) * 3;
			for (int c = 0; c < 3; c++)
			{
				ofile << (int)buffer[offset + c];
				if (i < image_width - 1 || c < 2)
					ofile << " ";
			}
		}
		ofile << "\n";
	}

	ofile << std::flush;
}