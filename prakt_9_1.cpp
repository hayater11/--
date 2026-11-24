#include <fstream>
#include <string>
#include <cctype>
using namespace std;
int main(){ ifstream in("input.txt"); ofstream out("output.txt"); string s((istreambuf_iterator<char>(in)),{}); const string bad="user agreement"; for(char c:s){ bool remove=false; for(char b:bad) if(tolower((unsigned char)c)==tolower((unsigned char)b)){remove=true;break;} if(!remove) out<<c; } }