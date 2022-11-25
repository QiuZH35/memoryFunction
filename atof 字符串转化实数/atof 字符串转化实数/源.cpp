#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <Cstring>
#include <sstream>
#include <regex>
using namespace std;


vector<string> split(const string& str)
{
    vector<string> res;
 
    regex reg("(\\d+)|(-\\d+)");
    sregex_token_iterator pos(str.cbegin(), str.cend(), reg,0);
    decltype(pos)end;
    for(;pos !=end;++pos)
       res.push_back(pos->str());
    return res;
}

int main()
{
	string str= "L-6666sfasdfss";

    cout << stod(split(str)[0]) << " ";//<< stod(split(str)[1]) << endl;
        int num = stod(split(str)[0]); //+stod(split(str)[1]);
        int en = 1;
    switch (en)
    {
    case  1||2 :
        cout << num;
        break;

    }
	return 0;
}