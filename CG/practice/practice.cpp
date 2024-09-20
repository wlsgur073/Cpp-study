#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

void makePPM(const std::string& filename, const std::vector<uint8_t>& pixels, const int& width, const int& height);

int main()
{
	printf("%c", 'a');
	return 0;
}

void makePPM(const std::string& filename, const std::vector<uint8_t>& pixels, const int& width, const int& height)
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