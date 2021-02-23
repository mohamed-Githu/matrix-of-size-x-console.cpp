#include <iostream>
using namespace std ;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int rows ; // Variabile inserito dall'utente
	
	cout << "Rows = " ;
	cin >> rows ;
	
	// Output
	
	for ( int x = 0 ; x < rows ; x ++ )
	{
		for ( int y = 0 ; y < rows ; y ++ )
		{
			if ( x == y || x + y == rows - 1 ) // I condizioni per stampare gli uni
			{
				cout << "1 " ;
			}
			else
			cout << "0 " ;
		}
		cout << endl ;
	}
	
	
	
	return 0;
}
