//Siddharth Thakur

#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>

using namespace std;
int main(){
	string choice="no";
	ifstream fin("input.txt");
	do{
		string str;
		fin>>str;
		string str1="";
		int count=0;
		cout<<"\nWelcome to HangMan! Guess the Word: "<<endl;
		for(int i=0;i<str.length();i++)
			str1+="X";
		while(count!=7&&str1!=str){
			cout<<"\n"<<str1<<endl<<endl;
			cout<<"Enter Guessed Letter: ";
			char ch;
			cin>>ch;
			int i;
			for(i=0;i<str.length();i++){
				if(str[i]==ch&&str1[i]!=ch){
					cout<<"Correct Guess!"<<endl;
					str1[i]=ch;
					break;
				}
			}
			if(i==str.length()){
				cout<<"Guess Incorrect!"<<endl;
				count++;
					if(count>=1)
						cout<<" o "<<endl;
					if(count>=2)
						cout<<'/';
					if(count>=3)
						cout<<'|';
					if(count>=4)
						cout<<"\\"<<endl;
					if(count>=5)
						cout<<" | "<<endl;
					if(count>=6)
						cout<<"/";
					if(count>=7)
						cout<<" \\"<<endl;
			}
		}
		if(str1==str)
			cout<<"Congratulations!!! You guessed my word: "<<str<<"\nPlay Again? yes/no"<<endl;
		else
			cout<<"You are Hanged!! The Word is: "<<str<<"\nWant to Play Again? yes/no"<<endl;
		cin>>choice;
	}while(choice=="yes");
}