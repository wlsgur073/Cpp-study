#include "show_exam.h"

void writePPM2(const std::string& filename, const std::vector<uint8_t>& pixels, const int& width, const int& height);

void exam4()
{
	const std::string filename = "example4.ppm";

	// Make an image
	const int image_width = 128;
	const int image_height = 128;

	std::vector<uint8_t> buffer(image_width * image_height * 3);

	for (int j = 0; j < image_height; j++)
		for (int i = 0; i < image_width; i++)
		{
			const int offset = (i + image_width * j) * 3;
			if (i > image_width / 2)
			{
				buffer[offset] = 0;
				buffer[offset + 1] = 0;
				buffer[offset + 2] = 255;
			}
			else
			{
				buffer[offset] = 255;
				buffer[offset + 1] = 0;
				buffer[offset + 2] = 0;
			}
		}
	writePPM2(filename, buffer, image_width, image_height);
}

void writePPM2(const std::string& filename, const std::vector<uint8_t>& pixels, const int& width, const int& height)
{
	std::ofstream ofile(filename);

	// Write it is PPM file
	ofile << "P3\n" << width << ' ' << height << "\n" << "255\n";

	for (int j = 0; j < height; j++)
	{
		for (int i = 0; i < width; i++)
		{
			const int offset = (i + width * j) * 3;
			for (int c = 0; c < 3; c++)
			{
				ofile << (int)pixels[offset + c];
				if (i < width - 1 || c < 2)
					ofile << " ";
			}
		}
		ofile << "\n";
	}

	ofile << std::flush;
}