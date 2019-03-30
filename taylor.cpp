
#include<iostream>
using namespace std;
//recursive function to calculate e^x.
//from taylor series e^x = 1+x+x^2/2!+......upto n terms.
float e(int x, int n)
{
     static float p=1;
     static float f=1;
      float r;

    if(n == 0)
        return 1;
    r = e(x,n-1);
    //p calculate power term.
    //f calculate factorial term.
    p = p*x;
    f = f*n;
    return r+p/f;


}
int main()
{
    int x,n;
    cin>>x>>n;
    //calling e function with values x and n.
    cout<<e(x,n);
    return 0;
}
