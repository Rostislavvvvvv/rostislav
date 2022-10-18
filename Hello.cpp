#include<iostream>
#include<cmath>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    std::vector<string>s;
    while(std::cin >> str){
        s.push_back(str);
    }
    for(auto i : s){
        std::cout << i << " ";
    }
}
// hello
