#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
    string textline;
    cout << "-------------------- BOOM ---------------------" << endl;
    while(getline(source,textline)){
        dest << textline << endl;
    }
    cout << "-------------------- HA!! ---------------------" << endl;

    source.close();
    dest.close();
	return 0;
}