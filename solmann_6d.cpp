// Kristjan Solmann 10b 

#include<iostream>
#include<clocale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "");
	
	int i;
	int temp;
	int n;
	
	cout << "Siia programmi saad sa sisestada kasvavas järjekorras niipalju naturaalarve" << endl;
	cout << "kui tahad ja siis veel lisaks ühe suvalise arvu." << endl;
	cout << "Praegu aga kirjuta mitu arvu sa sisestad KOOS suvalise arvuga" << endl;
	cin >> n;
	
	int arvud[n];
	
	for(i = 0; i < n; i++ ){
		
		cout << "kirjuta naturaalarv" << endl;
		cin >> arvud[i];
		
		if(i != 0){
		
		    if(arvud[i] <= arvud[i - 1]){
			
			    break;
			
		    }	
		}
	}
	
	for(;i > 0; i--){
		
		if(arvud[i] <= arvud[i - 1]){
			
			temp = arvud[i - 1];
			arvud[i - 1] = arvud[i];
			arvud[i] = temp;
		}
	}
	
	for(i = 0; i < n; i++){
		
		cout << arvud[i] << " ";
		
	}
	
	cin.ignore();
	return 0;
	
}
