#include <iostream>

using namespace std;


int factoriel(int);

int main()
{
    //setting value for n,k
    int n=6,k=4;

    cout<<factoriel(n)/(factoriel(n-k)*factoriel(k));

    return 0;

}

int factoriel(int num)
{
    if(num==1)return 1;

    return num*factoriel(num-1);
}
