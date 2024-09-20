#include <boost/asio.hpp>
#include <iostream>

#pragma warning (disable : 4996);

constexpr char SERVER_IP[] = "127.0.0.1";
constexpr unsigned short PORT_NUMBER = 1234;

int main() {
    boost::asio::io_service io_service;
    boost::asio::ip::tcp::endpoint endpoint(boost::asio::ip::tcp::v4(), PORT_NUMBER);
    boost::asio::ip::tcp::acceptor acceptor(io_service, endpoint);

    boost::asio::ip::tcp::socket socket(io_service);
    acceptor.accept(socket);

    std::cout << "Client Enter" << std::endl;

    while (1)
    {
        std::array<char, 128> buf;
        buf.assign(0);
        boost::system::error_code error;
        size_t len = socket.read_some(boost::asio::buffer(buf), error);

        if (error) {
            if (error == boost::asio::error::eof) {
                std::cout << "Connect lost client" << std::endl;
            }
            else {
                std::cout << "error No: " << error.value() << "error Message: "
                    << error.message() << std::endl;
            }
            break;
        }

        std::cout << "Client's message: " << &buf[0] << std::endl;
        char echoMessage[128] = { 0, };
        sprintf_s(echoMessage, 128 - 1, "%s", &buf[0]);
        int nMsgLen = strnlen_s(echoMessage, 128 - 1);

        boost::system::error_code ignored_error;
        socket.write_some(boost::asio::buffer(echoMessage, nMsgLen), ignored_error);
        std::cout << "Client's Message: " << echoMessage << std::endl;
    }
    getchar();
    return 0;
}