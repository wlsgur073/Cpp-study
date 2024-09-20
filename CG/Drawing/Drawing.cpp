#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

void drawPixel(const int& i, const int& j, const int& r, const int& g, const int& b, const int& width, vector<uint8_t>& buffer);
void makePPM(const string& filename, vector<uint8_t>& pixels, const int& width, const int& height);

int main()
{
	const string filename = "exam1.ppm";

	const int width = 64;
	const int height = 64;
	vector<uint8_t> buffer(width * height * 3);
	fill(buffer.begin(), buffer.end(), 255);
	
	for (int i = 0; i < width; i++) drawPixel(i, 0, 0, 0, 0, width, buffer);
	for (int i = 0; i < width; i++) drawPixel(i, height - 1, 0, 0, 0, width, buffer);
	for (int j = 0; j < height; j++) drawPixel(0, j, 0, 0, 0, width, buffer);
	for (int j = 0; j < height; j++) drawPixel(width - 1, j, 0, 0, 0, width, buffer);
	for (int i = 0; i < std::min(width, height); i++) drawPixel(i, i, 0, 0, 0, width, buffer);//It's ok if you assumed width == height.
	for (int i = 0; i < std::min(width, height); i++) drawPixel(i, height - 1 - i, 0, 0, 0, width, buffer);

	makePPM(filename, buffer, width, height);

	return 0;
}

void drawPixel(const int& i, const int& j, const int& r, const int& g, const int& b, const int& width, vector<uint8_t>& buffer)
{
	const int offset = (j + width * i) * 3;
	buffer[offset] = r;
	buffer[offset + 1] = b;
	buffer[offset + 2] = g;
}

void makePPM(const string& filename, vector<uint8_t>& pixels, const int& width, const int& height)
{
	ofstream ofile(filename);

	ofile << "P3\n" << width << ' ' << height << "\n255\n";

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
		ofile << '\n';
	}
	ofile << flush;
}