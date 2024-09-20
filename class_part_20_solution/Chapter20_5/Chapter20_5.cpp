#include <iostream>
#include <ctime>
#include <string>

#include <boost/asio.hpp>

using boost::asio::ip::tcp;

int main()
{
	try
	{
		boost::asio::io_service io_service;
		tcp::socket sock(io_service);

		tcp::endpoint endpoint(tcp::v4(), 13);
		tcp::acceptor acceptor(io_service, endpoint);

		std::cout << "Chat Server started" << std::endl;

		for (;;)
		{
			const std::string message_to_send = "Welcome to the chat service";

			boost::asio::ip::tcp::iostream stream;

			std::cout << "check 1" << std::endl;

			boost::system::error_code ec;
			acceptor.accept(*stream.rdbuf(), ec);

			std::cout << "check 2" << std::endl;

			if (!ec) // TODO : how to take care of multiple clients? Multi-threading?
			{
				//receive message from client
				std::string line;
				std::getline(stream, line);
				std::cout << line << std::endl;

				// send message to client
				stream << message_to_send;
				stream << std::endl;	// send std::endl to end getline of client

				// send message to client
				while (1)
				{
					std::getline(stream, line);
					std::cout << "Clinet : " << line << std::endl;
					{
						std::getline(std::cin, line);
						stream << line;
						stream << std::endl;
					}
					sock.read_some(boost::asio::buffer(line), ec);
					if (ec == boost::asio::error::eof) 
					{ 
						stream.clear();
						sock.close();
						return;
					}
				}
			}
		}
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}