#include <boost/asio.hpp>
#include <iostream>

#pragma warning (disable : 4996)

constexpr char SERVER_IP[] = "127.0.0.1";
constexpr unsigned short PORT_NUMBER = 1234;

int main() {
    boost::asio::io_service io_service;
    boost::asio::ip::tcp::endpoint endpoint(boost::asio::ip::address::from_string(SERVER_IP),
        PORT_NUMBER);

    boost::system::error_code connect_error;
    boost::asio::ip::tcp::socket socket(io_service);
    socket.connect(endpoint, connect_error);

    if (connect_error) {
        std::cout << "Connection fail. error No: " << connect_error.value()
            << ", Message: " << connect_error.message() << std::endl;
    }
    else {
        std::cout << "Connection Success" << std::endl;
    }

    while (1)
    {
        char message[128] = { 0, };
        std::cin >> message;
        int nMsgLen = strnlen_s(message, 128 - 1);
        boost::system::error_code ignored_error;
        socket.write_some(boost::asio::buffer(message, nMsgLen), ignored_error);

        std::cout << "Sent Message: " << message << std::endl;

        std::array<char, 128> buf;
        buf.assign(0);
        boost::system::error_code error;
        size_t len = socket.read_some(boost::asio::buffer(buf), error);

        if (error) {
            if (error == boost::asio::error::eof) {
                std::cout << "Connection cut off" << std::endl;
            }
            else {
                std::cout << "Error No: " << error.value() << "error Message: "
                    << error.message().c_str() << std::endl;
            }
            break;
        }
        std::cout << "Server Message: " << &buf[0] << std::endl;
    }
    if (socket.is_open()) {
        socket.close();
    }
    getchar();
    return 0;
}