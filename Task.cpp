#include<iostream>
using namespace std;



int detoOctal(int N)
{
 if (N==0)
    {
        return 0;
    }

 else 
 {  if(N>0)
    //detoOctal(N/8);
    return N%8+10*detoOctal(N/8);

 }   

}
int main()
{   int N=69;
    cout<< "Octal equivalent of "<< N <<" is "<< detoOctal(N);

return 0;
}
