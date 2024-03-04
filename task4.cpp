#include <iostream>
using namespace std;
int main()
{
int size=10; // You can change array size for any number
int i, j, data[size], temp; // temp variable should be same type
as the array type
bool ordered=false;
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
if(data[j] < data[j+1])
{

ordered=false;
temp = data[j];
data[j] = data[j+1];
data[j+1] = temp;
}
}
cout<<"\nItems in descending order:\n";
for (i=0;i<size;i++)
cout<<data[i]<<"\t";
}
return 0;
}