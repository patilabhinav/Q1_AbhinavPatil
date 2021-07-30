#include<iostream>
using namespace std;


void printArraystring(string,int);
int a;

void sort(string s[], int n)
{
	for (int i=1 ;i<n; i++)
	{
		string temp = s[i];


		int j = i - 1;
		while (j >= 0 && temp.length() < s[j].length())
		{
			s[j+1] = s[j];
			j--;
		}
		s[j+1] = temp;
	}
}


void printArraystring(string str[], int n)
{
    if(a<=0)
    {
       cout<<"Invalid input";

    }
    else
	for (int i=0; i<n; i++)
		cout << str[i] << " ";
}


int main()
{

    cin>>a;
	string arr[] = {"I", "Like", "to", "dance"};
	int n = sizeof(arr)/sizeof(arr[0]);

	sort(arr, n);


	printArraystring(arr, n);

	return 0;
}
