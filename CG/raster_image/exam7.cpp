#include "show_exam.h"

void writePPM5(const std::string& filename, const std::vector<uint8_t>& pixels, const int& width, const int& height);

void exam7()
{
	const std::string filename = "example7.ppm";

	const int image_width = 128;
	const int image_height = 128;

	std::vector<uint8_t> buffer(image_width * image_height * 3);

	for (int i = 0; i < image_height; i++)
		for (int j = 0; j < image_width; j++)
		{
			const float a = (float)i;
			const int offset = (j + image_width * i) * 3;
			buffer[offset] = (uint8_t)(255 - a) ;
			buffer[offset + 1] = 0;
			buffer[offset + 2] = (uint8_t)(0 + a); 
		}
	/*
	const float alpha = (float)j / (image_height - 1);// 0.0f <= alpha <= 1.0f
        for(int i = 0; i < image_width; i++)
        {
            const int offset = (i + image_width*j)*3;
            buffer[offset] = static_cast<uint8_t>(255 * (1.0f - alpha));
            buffer[offset+1] = 0;
            buffer[offset+2] = static_cast<uint8_t>(255 * alpha);
        }
	*/
	
	writePPM5(filename, buffer, image_width, image_height);
}

void writePPM5(const std::string& filename, const std::vector<uint8_t>& pixels, const int& width, const int& height)
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