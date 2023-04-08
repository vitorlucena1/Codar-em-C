#include <iostream>
#include <iomanip>
using namespace std;

int main(){
 
 float cotacao, result;
 int n;
 
 cin >> cotacao >> n;
 
 result = (cotacao * n);
 
 cout <<fixed;
 
 cout << setprecision(2)<<result <<"\n";
 
    return 0;
}