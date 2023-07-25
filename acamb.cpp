#include <bits/stdc++.h>

using namespace std;
string ProcesaPalabra(string palabra, string l);
int main(){
string word;
string letra="a";
cout<<"ingrese palabra :";
getline(cin,word)	;

cout<<ProcesaPalabra( word ,letra);
return 0;
}
string ProcesaPalabra(string palabra, string l){
	int i;	
   l="a";
	for(i=0; i< palabra.size();i++)
	{
		if(palabra[i] == l[0]  )
		{
		 palabra[i]='B';
		}
	}
return palabra;	
}