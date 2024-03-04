#include <iostream>
using namespace std;
int main()
{
int size=10; // You can change array size for any number
int i, j;
string data[size], name;
cout<<"Enter names: ";
for (i=0;i<size;i++)
cin>>data[i];
cout<<"Enter name you are looking for: ";
cin>>name;
for(i = 0; i < size; ++i)
{
if (data[i]==name)
cout<<name<<"was found in location "<<(i+1)<<endl;
}
return 0;
}