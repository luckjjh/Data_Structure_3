//2016742039 정정현
#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

int main() 
{
	int inputPW;
	string inputData;
	cin >> inputPW>>inputData;
	const static int sizePW = inputPW;
	string tempString;
	unordered_map <string, int>table;
	//tempString = inputData.substr(0, sizePW);//문자열일부를 반환하는 method
	int value = 1;
	for (int i = 0; i < inputData.length()-sizePW+1; i++) {
		tempString = inputData.substr(i, sizePW);
		if (table.find(tempString) == table.end()) {
			table[tempString] = value;
		}
		else {
			table[tempString]++;
		}
	}
	unordered_map <string, int>::iterator it;
	string maxS;
	int maxF=1;
	for (it = table.begin(); it != table.end(); it++) {
		if (it->second > maxF) {
			maxS = it->first;
			maxF = it->second;
		}
	}
	cout << "password is : " << maxS << endl;
	/*cout << "sizePW string / frequently" << endl;
	for (it = table.begin(); it != table.end(); it++) {
		if(maxF<=it->second)
			cout << it->first << " " << it->second << endl;
	}출력되는 key와 같은 value를 갖는 key가 없는지 확인하는 코드*/
	return 0;
}