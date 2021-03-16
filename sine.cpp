#include <iosstream>
#include <cmath>
using namespace std;

int main (){
	int x;
	float r;
	float y;
	
	
	for (x = ; x = <= 360; x = x + 15){
		r = float (x * (3.141592 / 180.0));
		y = sin(float(r)) ;
		cout<< x << " | " << y << "\n";
		
	}
	return 0;
}
