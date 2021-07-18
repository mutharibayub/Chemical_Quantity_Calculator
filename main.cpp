//Mutharib(i200476) assignment 1

#include <iostream>
using namespace std;
int main(){
	
	int vol;		//vol is the volume of the second solution(in litres)
	float chemical=0;	//chemical is the total volume of the chemical in the final solution
	cout<<"Enter the amount of solution (in litres):\t";
	cin>>vol;		//Getting input for the volume of second solution
	chemical=(.14*250)+(.54*vol*1000);		//Calculating the total volume of the chemical in final solution 
	cout<<"The amount of chemical in new solution is "<<chemical<<" ml"<<endl;		//The total volume of chemical is printed
	
	return 0;
}
