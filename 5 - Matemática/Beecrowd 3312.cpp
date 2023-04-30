#include <iostream>
#define MAX 500
using namespace std;

//Contribution of portal GeeeksforGeeks
int multiply(int x, int res[], int res_size);
 
// This function finds factorial of large numbers
// and prints them
void factorial(int n)
{
    int res[MAX];
 
    // Initialize result
    res[0] = 1;
    int res_size = 1;
 
    // Apply simple factorial formula n! = 1 * 2 * 3
    // * 4...*n
    for (int x = 2; x <= n; x++)
        res_size = multiply(x, res, res_size);
 
    for (int i = res_size - 1; i >= 0; i--)
        cout << res[i];
}
 
// This function multiplies x with the number
// represented by res[].
// res_size is size of res[] or number of digits in the
// number represented by res[]. This function uses simple
// school mathematics for multiplication.
// This function returns the
// new value of res_size
int multiply(int x, int res[], int res_size)
{
    int carry = 0; // Initialize carry
 
    // One by one multiply n with individual digits of res[]
    for (int i = 0; i < res_size; i++) {
        int prod = res[i] * x + carry;
 
        // Store last digit of 'prod' in res[]
        res[i] = prod % 10;
 
        // Put rest in carry
        carry = prod / 10;
    }
 
    // Put carry in res and increase result size
    while (carry) {
        res[res_size] = carry % 10;
        carry = carry / 10;
        res_size++;
    }
    return res_size;
}

int main(){
	int quant, num,cont=1, teste;
    cin>>quant;
    for (int i=0; i<quant; i++){
    	cin>>num;
    	teste=num-1;
    	if(num==2){
    	cout <<"2! = ";
		factorial(num);
		cout<<"\n";
		}
    	else if(num%2!=0 && num!=1){
    	for(int x=0; x<num; x++){
    		if(num%teste==0){
    		cont++;
    		break;
			}
			teste--;    		
			cont++;
		}
		if(num==cont){;
		cout<< num<<"! = " ;
		factorial(num);
		cout<<"\n";	
		}
		teste=0;
		cont=1;
		}
	}
    return 0;

}