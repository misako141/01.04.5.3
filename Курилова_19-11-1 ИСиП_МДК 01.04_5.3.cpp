#include <iostream>
#include <cstdlib>
#include <ctime>
#include <time.h> 

using namespace std;
int random(int b){
int rn = (rand() % b);
return rn;	
}
int main()
{
	setlocale(0,"");
srand((time(NULL)));
char *ar[51] = {"à", "á", "â", "ã", "ä", "å", "¸", "æ", "ç", "è", "é", "ê", "ë", "ì", "í", "î", "ï", "ð", "ñ",
        "ò", "ó", "ô", "õ", "ö", "÷", "ø", "ù", "ú", "û", "ü", "ý", "þ", "ÿ", "!", ".", ",", "?",":","*","(",")","+","=","_","-","%","#","/","¹",";","@"};
	string a = "";
	string b = "";
	int ars = 51;

	for(int i=0;i<6;i++){
		
		int rand = random(ars);
		a += ar[rand];
	}
	 cout << a << endl;
	for(int j=0;j<10;j++){
		a = "";
		for(int i=0;i<6;i++){
		
		int rand = random(ars);
		a += ar[rand];
		}
		b+=a + " ";
	}
	cout << b << endl;	
return 0;
}
