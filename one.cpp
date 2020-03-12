#include <iostream>
using namespace std;


void printnumber (int arg[], int length){
	for (int i = 0; i<length; i++)
	{
		cout << arg[i]<< " ";
		
	}

}

int main()
{
	string name;
	string color;
	string age;
	std::cout << "What's your name?\n";
	getline(cin, name);
	cout << "Nice to meet you, "<< name<<"\n";
	cout << "Can you also tell us your age? \n";
	getline(cin, age);
	cout << "I am of the same age, almost...\n";
	cout << "Perfect.....\nWhat's your favorite color?\n";
	getline(cin, color);
	cout << name << ", That's great!\nWe are on the same board...\nHow cool is that!!\n";
	cout << "Have a great day!!\n\n ";

	int myflr[] = {12, 13, 14, 15, 16, 17};
	printnumber(myflr, 6);
	cout<<endl;
	return 0;
}

