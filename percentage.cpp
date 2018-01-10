//this is a percentage ca;lculator
//Calculating the percentage of any number

#include<iostream>
using namespace std;

int main()
{
		int percent, total;
		long double result;

		cout<<"Enter percentage of a number: "; //taking in the value over 100
		cin>>percent;
		cout<<"Enter the total number you want ot find percent of: "; //the total number to get of
		cin>>total;

		result = (percent * total)/ 100; //formular for the percentage

		cout<<"The result of " <<percent <<"% of "<<total <<" = " << result <<"\n";



		//testing "even" number

		int num;
		cout<<"Enter a number to test if it is even or not: ";
		cin>>num;
		if (num % 2 == 0)
			cout<<num <<" is an even number"; //ends even number test


	return 0;

}