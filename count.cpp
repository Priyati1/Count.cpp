#include<iostream>
using namespace std;
int main(){
	// int count = 0;
	// char ch;
	// cin>>ch;
	// while(ch!='$'){
	// 	count++;//space will get ignored when taken input from cin>>
	// 	cin>>ch;
	// 	//if i want to count spaces also  cin.get()



	// }
	// cout<<count<<endl;
	// return 0; 
	int count = 0;
	char ch;
	ch=cin.get();
	while(ch!='$'){
		count++;//space will get ignored when taken input from cin>>
		ch=cin.get();
		//if i want to count spaces also  cin.get()
		


	}
	cout<<count<<endl;
	return 0;


}