#include <cmath>
#include <iostream>

using namespace std;

double phi(double x){
	return 0.5*(1.0 + erf(0.5*sqrt(2.0)*x));
}

double norm_erfc(double x){
	double a1 = -1.26551223;
	double a2 = 1.00002368;
	double a3 = 0.37409196;
	double a4 = 0.09678418;
	double a5 = -0.18628806; 
	double a6 = 0.27886807;
	double a7 = -1.13520398; 
	double a8 = 1.48851587;
	double a9 = -0.82215223; 
	double a10 = 0.17087277;

	double value = 0;
	if(x>0)	{
		double b=1/(1+0.5*x);
		value= b*exp((-x*x) +a1+b*(a2+b*(a3+b*(a4+b*(a5+b*(a6+b*(a7+b*(a8+b*(a9+b*a10)))))))));
	}
	if(x<0){
		value=2-erfc(-x);
	}
	return value;
}



int main(int argc, char** argv){
	double x = 0;
	
	for (int i = 1; i < argc; i++){
		x = atof(argv[i]);
		cout << x << ":" << phi(x) << endl;
	}
	cout << 1 << ":" << phi(1) << endl;
	return 0;
}