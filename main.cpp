#include <iostream>
using namespace std;

/* UTILIZZO CLASSI C++ */
	
	class triangolo {
		public:
		int x;
		int y;
		int j;
		int h;	
		
		int area(){
			return x+h/2;
		}
		
	};



int main(int argc, char** argv) {
	
	

	// struct per triangolo.1 
	triangolo triangolo1;
	
	triangolo1.x = 10;
	triangolo1.y = 20;
	triangolo1.j = 20;
	triangolo1.h = 13;
	
	// stampaggio dei valori

	cout << "Base:" << triangolo1.x ; 
	cout << "\nLato 1: " << triangolo1.y; 
	cout << "\nLato 2:" << triangolo1.h;
	cout <<"\nArea Triangolo:" << triangolo1.area(); 
	
	return 0;
}
