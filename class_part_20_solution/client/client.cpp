#include <iostream>
#include <string>
#include <boost/asio.hpp>
#include <sstream>

using boost::asio::ip::tcp;


int main(int argc, char* argv[])
{
	boost::asio::io_service io_service;
	boost::system::error_code ec;
	boost::asio::ip::tcp::socket rd(io_service);

	try
	{
		if (argc != 2)
		{
			std::cerr << "Usage : client <host>" << std::endl;
			return 1;
		}

		tcp::iostream stream(argv[1], std::to_string(int(13))); // port number 13
		if (!stream)
		{
			std::cout << "Unable to connect: " << stream.error().message() << std::endl;
			return 1;
		}

		// send message to server
		stream << "clinet joined";
		stream << std::endl; // send new-line to end receiver'stream getline

		// receive message from server
		std::string line;
		std::getline(stream, line);
		std::cout << line << std::endl;

		// send message to server
		while (1)
		{
			std::getline(std::cin, line);
			stream << line;
			stream << std::endl;

			if (line == "out")
			{
				stream << "Clinet left.\n";
				break; 
			}

			{
				//boost::asio::read(rd, boost::asio::buffer(line), ec);
				std::getline(stream, line);
				std::cout << "Server : " << line << std::endl;
			}
		}
	}
	catch (std::exception& e)
	{
		std::cout << "Exception: " << e.what() << std::endl;
	}
	return 0;
}