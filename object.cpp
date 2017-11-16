#include<iostream>
using namespace std;
class house
{
int money;
public:
void input()
    {
	cout<<"enter the money :";
	cin>>money;
	 }	
	
void output()
{
	cout<<"money is "<<money;
	}	

};
main()
{
	int i;
	house ammi,abbu,me;
	input(me);
	input(ammi);
	input(abbu);
	output(me);
	output(ammi);
	output(abbu);
	
}
