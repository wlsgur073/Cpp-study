#include <iostream>
#include <thread>
#include <mutex>
#include <chrono>
#include <atomic>

using namespace std;

int shared_memory(0);

int main()
{
	auto count_func = []() {
		for (int i = 0; i < 1000; ++i)
		{
			//this_thread::sleep_for(chrono::microseconds(1));
			
			shared_memory++;
		}
	};
	
	thread t1 = thread(count_func);
	thread t2 = thread(count_func);

	t1.join();
	t2.join();

	cout << "After" << endl;
	cout << shared_memory << endl;
	return 0;
}