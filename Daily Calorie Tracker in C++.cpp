#include<iostream>
using namespace std ;

int highest(int arr[] , int size ){
	
	int max = arr[0];
	for(int i=0 ; i<size ; i++){
		if(max<arr[i])
		max=arr[i];
		
	}
	return max;

}

int main(){
int meals ;
cout<<"Enter number of calories meals : ";
cin>>meals;
int calories[meals];
double total , aver;
int hCal;
for(int i=0 ; i<meals; i++){
	sara:
	cout<<"Enter calories for meal "<<(i+1)<<" : ";
	int value;
	cin>>value;
	if(value>=100&&value<=2000)
	calories[i]=value;
	else{
	cout<<"\nError : Calories must be between 100 and 2000!"<<endl;
	goto sara;}
}
cout<<"-----------------------------------------";
for(int i=0 ; i<meals ; i++){
	total+=calories[i];
}
cout<<"\nTotal calories : "<<total;
aver=total/meals;
cout<<"\nAverage calories : "<<aver;

int Highest=highest(calories , meals);
cout<<"\nHighest calories : "<<Highest;
cout<<"\nAll calories :";
for(int i=0 ; i<meals ; i++){
	cout<<calories[i]<<" ";
}



	
	return 0 ;
}
