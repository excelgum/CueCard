#include<iostream>
#include<fstream>
#include<sstream>
#include<vector>
#include<iomanip>
#include<cstdlib>
using namespace std;
int main(){
	ifstream infile;
	infile.open("data.txt");
	string line;
	vector<string> list1;
	vector<string> list2;
	
	while(!infile.eof()){ //creates two lists from a csv file, list1 holds the name, list2 holds the definition
		getline(infile,line);
		stringstream linestream(line);
		string token;
		
		getline(linestream,token,',');
		list1.push_back(token);
		getline(linestream,token,',');
		list2.push_back(token);
	}
	
	for(int j=0;j<10;j++){ //randomly gives name and then gives it's definition
		string line;
		int i=rand()%(list1.size());
		cout<<i<<": "<<list1[i]<<endl;
		getline(cin,line);
		cout<<list2[i]<<endl<<endl;
		getline(cin,line);
	}

	return 0;
}