#include<iostream>
#include<vector>
#include<string>

using namespace std;
using std::string;

int main(){
    string s1 = {"het"};

    //length & size the same thing for a string 
    cout << s1.length() << endl;
    cout << s1.size() << endl;

    //concatenation of string
    string concat = s1 + "." + "is my birth name";
    cout << concat << endl;

    //replace
    string rep = concat.replace(3,1,"dani ");
    cout << rep << endl;
}