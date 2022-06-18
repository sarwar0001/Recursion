#include <iostream>
using namespace std;
int fac(int num)
{
    if(num==0)
    {
        return 1;
    }
    return num*fac(num-1);
}

    

int main() {
    int num;
    cin>>num;
    int fact=fac(num);
    cout<<fact;
    return 0;
}