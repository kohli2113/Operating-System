#include <bits/stdc++.h> 
using namespace std;

void EnterDetails();
void check(int,int); 

int IngredientCalc(int process, int need) 
{ 
	int Recq_Ingredient = 0; 
	Recq_Ingredient = process*(need - 1)+1; 
	return Recq_Ingredient; 
} 

int chef, Ingredient_need;
int main() 
{ 

    EnterDetails();
	cout << "Ingredients that need to be there so that
     N Chef can make there dishes with No Deadlock should >=:"<<IngredientCalc(chef, Ingredient_need);
	return 0; 
} 

void EnterDetails()
{
	cout<<"Enter The Number of chef: ";
	cin>>chef;
	cout<<endl;
	cout<<"Enter The Number of Ingredient needed by Each chef to make there dishes: ";
	cin>>Ingredient_need;
	cout<<endl;	
	check(chef,Ingredient_need);	
}

void check(int x,int y)
{
if(x<=0 || y<=0)
    {
    	cout<<"Invalid Entry";
    	cout<<"Enter the valid Entry"; 
    	cout<<endl;
    	EnterDetails();	
	}
}