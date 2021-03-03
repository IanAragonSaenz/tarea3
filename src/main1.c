#include <stdio.h>
#include "../lib/src/distancias.h" // debes poner el path hacia donde se
//encuentran tus librerías…

int main(int argc, char *argv[]) {

	float dlrecta;
	int dhoriz, dvert, dxpm, dypm;

	dlrecta = dlr( 3, 4, 10, 12);
	printf("Distancia en linea recta: %d\n", dlrecta);
	dhoriz = dh( 3, 4, 10, 12 );
	dvert = dv( 3, 4, 10, 12 );
	printf("Distancia horizontal: %d\n", dhoriz);
	printf("Distancia vertical: %d\n", dvert);
	dxpm = xpm(2, 2, 4, 5);
	dypm = ypm(1, 3, 3, 1);
	printf("Distancia de punto en x: %d\n", dxpm);
	printf("Distancia de punto en y: %d", dypm);
	return 0;

}
