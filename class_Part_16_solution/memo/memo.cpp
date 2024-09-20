#include <iostream>
#include <string> 
using namespace std;

template <class T>
class DynStack
{
private:
	struct StackNode
	{
		T value;
		StackNode* next = NULL;
	};
	StackNode* top;
public:
	DynStack() { top = NULL; }
	void push(T);
	void pop(T&);
	bool isEmpty();
};
// Member function push pushes the argument onto 
// the stack. 
template <class T>
void DynStack<T>::push(T num)
{
	StackNode* newNode;

	// Allocate a new node & store Num 
	newNode = new StackNode;
	newNode->value = num;
	// If there are no nodes in the list 
	// make newNode the first node 
	if (isEmpty())
	{
		top = newNode;
		newNode->next = NULL;
	}
	else // Otherwise, insert NewNode before top 
	{
		newNode->next = top;
		top = newNode;
	}
}

// Member function pop pops the value at the top 
// of the stack off, and copies it into the variable 
// passed as an argument. 

template <class T>
void DynStack<T>::pop(T& num)
{
	StackNode* temp;
	if (isEmpty())
	{
		cout << "The stack is empty.\n";
		return;
	}
	else // pop value off top of stack 
	{
		num = top->value;
		temp = top->next;
		delete top;
		top = temp;

	}
}

// member funciton isEmpty returns true if the stack 
// is empty, or false otherwise. 
template <class T>
bool DynStack<T>::isEmpty()
{
	if (!top) return true;
	else return false;
}




class Inventoryltem
{
private:
	long serialNum; // Serial number
	string manufactDate; // Manufacture date
	int lotNum; // Lot number 

public:
	// Default constructor 
	Inventoryltem()
	{
		serialNum = 0;
		manufactDate = "";
		lotNum = 0;
	}
	// Constructor 
	Inventoryltem(long s, string m, int lot)
	{
		serialNum = s; manufactDate = m; lotNum = lot;
	}
	void setSerialNum(long s) { serialNum = s; }
	void setManufactDate(string m) { manufactDate = m; }
	void setLotNum(int lot) { lotNum = lot; }
	long getSerialNum() { return serialNum; }
	string getManufactDate() { return manufactDate; }
	int getLotNum() const { return lotNum; }
};

int main()
{
	DynStack<Inventoryltem> stack;// create stack Inventoryltem item; 
	Inventoryltem item; // create inventory item object 
	int ch;// Menu choice   
	long serial;// Serial number
	string mDate;// Manufacture date
	int lnum; //lot number
	do
	{
		cout << "1. add a part.\n";
		cout << "2. remove a part.\n";
		cout << "3. Quit.\n";
		cout << "choose one of them(1,2,3): ";
		cin >> ch; // Validate choice 
		while (ch < 1 || ch > 3)
		{
			cout << "invalid number. Enter one of 1, 2, 3: ";
			cin >> ch;
		};
		// Act on the user's choice. 
		switch (ch)
		{
		case 1:
			cout << "\n adding a new part...\n";
			cout << "Enter the serial number : ";
			cin >> serial;
			item.setSerialNum(serial);
			cout << "Enter the manufacture date : ";
			cin >> mDate;
			item.setManufactDate(mDate);
			cout << "Enter the lot number: ";
			cin >> lnum;
			cout << endl;
			item.setLotNum(lnum);
			stack.push(item);
			break;
		case 2:
			if (stack.isEmpty())
			{
				cout << "it's empty.\n\n\n";
				break;
			}
			else stack.pop(item);
			cout << "\n removing a part...\n";
			cout << "\n This part was removed.\n";
			cout << "\t Serial number: " << item.getSerialNum() << endl;
			cout << "\t Manufacture date: " << item.getManufactDate() << endl;
			cout << "\t lot number: " << item.getLotNum() << endl;
			cout << endl;
			break;
		case 3:
			cout << "\nRemaining parts : ";
			do
			{
				stack.pop(item);

				cout << "\tSerial number: " << item.getSerialNum() << endl;
				cout << "\tManufacture date: " << item.getManufactDate() << endl;
				cout << "\tlot number: " << item.getLotNum() << endl;
				cout << endl;

			} while (!stack.isEmpty());
			break;
		}
	} while (ch != 3);

	return 0;
}