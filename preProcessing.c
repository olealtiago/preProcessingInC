#include <stdio.h>
//
#define SCALE_CM_TO_METER_FACTOR                 100

#define HEIGHT_SQUARE_METERS(heightCmInt)        (heightCmInt*heightCmInt / SCALE_CM_TO_METER_FACTOR) 


#define CALCULATE_IMC(weightKgFloat, heightCmInt) \
		( (float) (HEIGHT_SQUARE_METERS(heightCmInt))/weightKgFloat ) //typeCast

int main(){
	int height   = 182;
	float weight = 72.5;
	float imc    = 0.0;

	imc = CALCULATE_IMC(weight, height);
	printf("IMC: %f\n", imc);
return 0;
}
