#include <iostream>
using namespace std;
int main()
{
int size=10,counter=0; // You can change array size for any number
int i, j, data[size], no;
cout<<"Enter your data: ";
for (i=0;i<size;i++)
cin>>data[i];
cout<<"Enter number you are looking for: ";
cin>>no;
for(i = 0; i < size; ++i)
{

if (data[i]==no)
counter++;

}
if (counter>0)
cout<<no<<" was found "<<counter<<" number of times.";
else
cout<<no<<" was not found ";

return 0;
}