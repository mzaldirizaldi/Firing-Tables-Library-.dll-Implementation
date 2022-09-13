#include<stdio.h>
#include<windows.h>
#include<stdlib.h>

int main() {
	HANDLE lib;
	double (*angle_parabola_mortar) (double, double);
	
	lib = LoadLibrary("lib-mortar-firing.dll");
	
	if(lib > (void*) HINSTANCE_ERROR) {
		angle_parabola_mortar = (double(*) (double, double)) GetProcAddress(lib, "angle_parabola_mortar");
		
		double a;
	 	double g = 10;
	 	char c ='y';
	 	while (c == 'y'){
	 		printf("Enter firing distance (100m - 6500m): ");
	 		scanf("%lf", &a);
	 		system("cls");
	 		
	 		if (a < 100) {
	 			printf("Distance is too close.\n\n");
			 }
			
			else if (a <= 450 ) {
				double b = 67.08203932499369; //velocity (sqrt of distance * gravity)
				printf("Ammo: 0\n");
				printf("Distance: %.2lf\n", a);
				printf("Velocity: %.2lf\n", b);
				printf("Elevation angle: %.2lf\n\n", angle_parabola_mortar(a,b));
			}
			else if (a <= 800) {
				double b = 89.44271909999159; //velocity (sqrt of distance * gravity)
				printf("Ammo: 1\n");
				printf("Distance: %.2lf\n", a);
				printf("Velocity: %.2lf\n", b);
				printf("Elevation angle: %.2lf\n\n", angle_parabola_mortar(a,b));
			}
			else if (a <= 1350) {
				double b = 116.1895003862225; //velocity (sqrt of distance * gravity)
				printf("Ammo: 2\n");
				printf("Distance: %.2lf\n", a);
				printf("Velocity: %.2lf\n", b);
				printf("Elevation angle: %.2lf\n\n", angle_parabola_mortar(a,b));
			}
			else if (a <= 2600) {
				double b = 161.245154965971; //velocity (sqrt of distance * gravity)
				printf("Ammo: 3\n");
				printf("Distance: %.2lf\n", a);
				printf("Velocity: %.2lf\n", b);
				printf("Elevation angle: %.2lf\n\n", angle_parabola_mortar(a,b));
			}

			else if (a <= 3700) {
				double b = 192.3538406167134; //velocity (sqrt of distance * gravity)
				printf("Ammo: 4\n");
				printf("Distance: %.2lf\n", a);
				printf("Velocity: %.2lf\n", b);
				printf("Elevation angle: %.2lf\n\n", angle_parabola_mortar(a,b));
			}
			
			else if (a <= 4700) {
				double b = 216.794833886788; //velocity (sqrt of distance * gravity)
				printf("Ammo: 5\n");
				printf("Distance: %.2lf\n", a);
				printf("Velocity: %.2lf\n", b);
				printf("Elevation angle: %.2lf\n\n", angle_parabola_mortar(a,b));
			}
			
			else if (a <= 5600) {
				double b = 236.6431913239846; //velocity (sqrt of distance * gravity)
				printf("Ammo: 6\n");
				printf("Distance: %.2lf\n", a);
				printf("Velocity: %.2lf\n", b);
				printf("Elevation angle: %.2lf\n\n", angle_parabola_mortar(a,b));
			}
			
			else if (a <= 6300) {
				double b = 250.9980079602227; //velocity (sqrt of distance * gravity)
				printf("Ammo: 7\n");
				printf("Distance: %.2lf\n", a);
				printf("Velocity: %.2lf\n", b);
				printf("Elevation angle: %.2lf\n\n", angle_parabola_mortar(a,b));
			}
			
			else if (a <= 6500) {
				double b = 254.9509756796392; //velocity (sqrt of distance * gravity)
				printf("Ammo: 8\n");
				printf("Distance: %.2lf\n", a);
				printf("Velocity: %.2lf\n", b);
				printf("Elevation angle: %.2lf\n\n", angle_parabola_mortar(a,b));
			}
			
			else if (a > 6500) {
				printf("Distance is too far.\n\n");
			}
			
			printf("Refire?(y/n): ");
			scanf(" %c", &c);
			system("cls");
			if (c=='n') {
				break;
			}
		 } 
		} else {
			printf("Has failed to access \"lib-mortar-firing.dll\".");
		}
		return 0;
}
