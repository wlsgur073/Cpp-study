#include "show_exam.h"

void writePPM3(const std::string& filename, const std::vector<uint8_t>& pixels, const int& width, const int& height);

void exam5()
{
	const std::string filename = "example5.ppm";

	const int image_width = 128;
	const int image_height = 128;

	std::vector<uint8_t> buffer(image_width * image_height * 3);

	for (int i = 0; i < image_height; i++)
		for (int j = 0; j < image_width; j++)
		{
			const int offset = (j + image_width * i) * 3;
			if (j >= i)
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
	writePPM3(filename, buffer, image_width, image_height);
}

void writePPM3(const std::string& filename, const std::vector<uint8_t>& pixels, const int& width, const int& height)
{
	std::ofstream ofile(filename);

	ofile << "P3\n" << width << ' ' << height << "\n" << "255\n";

	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			const int offset = (j + width * i) * 3;
			for (int c = 0; c < 3; c++)
			{
				ofile << (int)pixels[offset + c];
				if (j < width - 1 || c < 2)
					ofile << " ";
			}
		}
		ofile << "\n";
	}

	ofile << std::flush;
}