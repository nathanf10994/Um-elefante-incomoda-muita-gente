/*
Pequeno projeto que simula a cantiga infantil "Um elefante incomoda muita gente"
Developed by Nathan Ferreira
GitHub: nathanf10994
*/

#include <iostream>
#include <windows.h>
#include <locale.h>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int num, contador, inc, pg;
	
	do{
		
		system("cls");
		
		num=1;
		
		cout<<"\nDigite o número de elefantes que deseja: ";
		cin>>contador;
		
		while(num<contador){
			
			cout<<"\n\n"<<num;
			
			if(num==1) cout<<" elefante incomoda";
			else cout<<" elefantes incomodam";
			
			cout<<" muita gente."<<endl;
			cout<<++num<<" elefantes";
			
			inc=0;
			
			while(inc<num){
				cout<<" incomodam";
				inc++;
			}
			
			cout<<" muito mais! \n\n";
		}
		
		cout<<"\n\n\nQuer repetir a brincadeira?";
		cout<<"\nDigite 1 para SIM, e qualquer outro número para NÃO: ";
		cin>>pg;
	}while(pg==1);
	
	system("cls");
	
	cout<<"\n\n\n==================================================";
	cout<<"\n\nObrigado por brincar com a gente! :)";
	cout<<"\n\n==================================================\n\n\n";
	
	return 0;
	
}