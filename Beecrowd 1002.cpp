#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
double n =3.14159, raio, area;

cin >> raio;

area = (raio*raio)*n;
cout <<fixed;

cout <<"A=" << setprecision(4) << area<<"\n";
 
    return 0;
}