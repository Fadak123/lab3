#include <iostream>
using namespace std;
int main()
{
int i, j, size=5; // You can change array size for any number
string data[size], name,temp;
bool ordered=false;
cout<<"Enter names: ";
for (i=0;i<size;i++)
cin>>data[i];
if (size < 2)
cout<<"nothing to sort!!";
else
{
for(i = 0; i < size-1 && ordered==false ; ++i) //Why do we
check ordered bool flag?
{

ordered=true;
for(j = 0; j < size-1;++j)

if(data[j].compare(data[j+1])>0)
{

ordered=false;
temp = data[j];
data[j] = data[j+1];
data[j+1] = temp;
}
}
cout<<"\nItems in ordered:\n";
for (int i=0;i<size;i++)
cout<<data[i]<<"\t";
}
return 0;}