#include <bits\stdc++.h>
using namespace std;
 string procesar(string f){
 		for(int i=0;i<f.size();i++){
 			if(f[i]=='a'){
 				f[i]=='b';
			 }     
		 }
	return f;	 
 }
 int main(){
 	string f;
	string r;
 		cout<<"ingrese una frase"<<endl;
 		getline(cin,f);
 			
 			r=procesar(f);
 				
 				cout<<"valor de palabra: "<<r<<endl;
 	
 	return 0;
 }
