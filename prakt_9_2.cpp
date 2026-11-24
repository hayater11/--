#include <fstream>
#include <string>
using namespace std;
int main(){ifstream a("input1.txt"),b("input2.txt"); string x,y; getline(a,x); getline(b,y); ofstream out("output.txt"); out<<(x.find(y)!=string::npos?"yes":"no");}