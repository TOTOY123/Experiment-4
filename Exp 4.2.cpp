#include<iostream>

using namespace std;

int main()
{
int array[10], size, a, b, c;

cout << "Enter array size: ";
cin >> size;
cout << "Enter values: "; 

for (a=0; a<size; a++)
{
cin >> array[a];
}
cout << endl;
for (a=0; a<size; a++)
{
for (b=a+1; b<size; b++)
	{
	if (array[a]>array[b])
		{
	c=array[a];
	array[a]=array[b];
	array[b]=c;
		}
	}
}
cout << "Sorted Numbers: ";
for (a=0; a<size; a++)
{
	cout << array[a] << " ";
}


return 0;
}
