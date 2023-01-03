#include <iostream>

#include <windows.h>
using namespace std;






int main(){
	
	cout << "\t\t  ====================================================================\n";
	cout << "\t\t=     this program print prime colored distribution                    =\n";
	cout << "\t\t  ====================================================================\n";

	  HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	  CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
	  WORD saved_attributes;
	  
		 /* Save current attributes */
	  GetConsoleScreenBufferInfo(hConsole, &consoleInfo);
	  saved_attributes = consoleInfo.wAttributes;
	  
		// prepare consol colors 
	  SetConsoleTextAttribute(hConsole, 23);
	 
	 
  int prime = 1;
 
	for (int i=0; i<120*50; i++)
	{
		prime = 1;
				
			
			if (i == 0 || i == 1){
				
				prime = 0;
			}
		
		
			
		for (int k=2; k<i; k++){
				
		
				if (i % k == 0){
					
					prime = 0;
					break;
				}
					
				
		}
		
		if (prime){
		SetConsoleTextAttribute(hConsole, 23);
		cout << "*" ;
		}else{
		SetConsoleTextAttribute(hConsole, 20);
		cout << " ";
		}
	}
	
	SetConsoleTextAttribute(hConsole, saved_attributes);
	//system("Color 0C");
    return 0;

}