#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b, int *c, int *d){
	int temp;
	int N = 4;
	for(int i = 1;i < N;i++){
		int x = rand()%6 + 1;
		switch(x){
			case 1:
				temp = *a;
				*a = *b;
				*b = temp;
				break;
			case 2:
				temp = *a;
				*a = *c;
				*c = temp;
				break;
			case 3:
				temp = *a;
				*a = *d;
				*d = temp;
				break;
			case 4:
				temp = *b;
				*b = *c;
				*c = temp;
				break;
			case 5:
				temp = *b;
				*b = *d;
				*d = temp;
				break;
			case 6:
				temp = *c;
				*c = *d;
				*d = temp;
				break;
		}
	}
}
