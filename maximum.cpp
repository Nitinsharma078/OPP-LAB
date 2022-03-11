#include<iostream>
using namespace std;
int main ()
{
int x,y,z;
cout<<"Enter three number";
cin>>x>>y>>z;
if(x>y)
{
    if(x>z)
    {
        cout<<"Largest number is"<<x;
    }
    else{
        cout<<"Largest number is "<<z;
    }

}
else if(y>x){

    if(y>z){
        cout<<"Largest number is"<<y;
    }
    else{
        cout<<"Largset number is "<<z;
    }
}


return 0;
}