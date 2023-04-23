#include <iostream>
#include <iomanip> 
using namespace std;

int main(){

double n1, n2, n3, n4, n5, avg, avg2;

std::cout << std::setprecision(5);
cin >> n1 >> n2 >> n3 >> n4 ;

avg = (n1*2+n2*3+n3*4+n4*1)/10;

cout << fixed << setprecision(1);
cout << "Media: " << setprecision(1) << avg << endl;

if(avg>=7.0)
{
    cout << "Aluno aprovado." << endl;
}
else if( avg<5.0 )
{
    cout << "Aluno reprovado." << endl;
}
else if( avg>=5.0 && avg<=6.9 )
{
    cout << "Aluno em exame." << endl;

    cin >> setprecision(1);
    cin >> n5;

    cout << "Nota do exame: " << setprecision(1) << n5 << endl;

    avg2 = (avg+n5)/2;

    if( avg2>=5.0 )
    {
        cout << "Aluno aprovado." << endl;
        cout << "Media final: " << setprecision(1) << avg2 << endl;
    }
    else if( avg2<=4.9 )
    {
        cout << "Aluno reprovado." << endl;
        cout << "Media final: " << setprecision(1) << avg2 << endl;
    }
}

return 0;
}