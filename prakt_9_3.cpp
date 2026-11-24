#include <fstream>
#include <string>
using namespace std;
string bin(unsigned long long n){if(!n)return "0";string r;while(n){r.push_back(char('0'+n%2));n/=2;} reverse(r.begin(),r.end());return r;}
int main(){ifstream in("input.txt");ofstream out("output.txt");string s;getline(in,s);for(size_t i=0;i<s.size();){if(isdigit((unsigned char)s[i])){unsigned long long n=0;while(i<s.size()&&isdigit((unsigned char)s[i]))n=n*10+s[i++]-'0';out<<bin(n);}else out<<s[i++];}}