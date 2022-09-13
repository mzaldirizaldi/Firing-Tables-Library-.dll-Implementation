#include<iostream>
#include<windows.h>
using namespace std;

int main() {
	HINSTANCE lib;
	 double (*angle_parabola_mortar) (double, double);
	 
	 lib = LoadLibrary("lib-mortar-firing.dll");
	 
	 if (lib > (void*) HINSTANCE_ERROR) {
	 	angle_parabola_mortar = (double(*) (double, double)) GetProcAddress(lib, "angle_parabola_mortar");
	 	
	 	double a;
	 	double g = 10;
	 	char c ='y';
	 	while (c == 'y') {
	 		cout << "Enter firing distance (100m - 6500m): ";
	 		cin >> a;
			system("CLS");
			
	 		if (a < 100) {
	 			cout << "Distance is too close." << endl << endl;
			 }
			
			else if (a <= 450 ) {
				double b = 67.08203932499369; //velocity (sqrt of distance * gravity)
				cout << "Ammo: 0" << endl;
				cout << "Distance: " << a << " metres."<<endl;
				cout << "Velocity: " << b << " m/s."<< endl;
				cout << "Elevation angle: " << angle_parabola_mortar(a, b) << " degrees." << endl << endl;
			}
			else if (a <= 800) {
				double b = 89.44271909999159; //velocity (sqrt of distance * gravity)
				cout << "Ammo: 1" << endl;
				cout << "Distance: " << a << " metres."<<endl;
				cout << "Velocity: " << b << " m/s."<< endl;
				cout << "Elevation angle: " << angle_parabola_mortar(a, b) << " degrees." << endl << endl;
			}
			else if (a <= 1350) {
				double b = 116.1895003862225; //velocity (sqrt of distance * gravity)
				cout << "Ammo: 2" << endl;
				cout << "Distance: " << a << " metres."<<endl;
				cout << "Velocity: " << b << " m/s."<< endl;
				cout << "Elevation angle: " << angle_parabola_mortar(a, b) << " degrees." << endl << endl;
			}
			else if (a <= 2600) {
				double b = 161.245154965971; //velocity (sqrt of distance * gravity)
				cout << "Ammo: 3" << endl;
				cout << "Distance: " << a << " metres."<<endl;
				cout << "Velocity: " << b << " m/s."<< endl;
				cout << "Elevation angle: " << angle_parabola_mortar(a, b) << " degrees." << endl << endl;
			}

			else if (a <= 3700) {
				double b = 192.3538406167134; //velocity (sqrt of distance * gravity)
				cout << "Ammo: 4" << endl;
				cout << "Distance: " << a << " metres."<<endl;
				cout << "Velocity: " << b << " m/s."<< endl;
				cout << "Elevation angle: " << angle_parabola_mortar(a, b) << " degrees." << endl << endl;
			}
			
			else if (a <= 4700) {
				double b = 216.794833886788; //velocity (sqrt of distance * gravity)
				cout << "Ammo: 5" << endl;
				cout << "Distance: " << a << " metres."<<endl;
				cout << "Velocity: " << b << " m/s."<< endl;
				cout << "Elevation angle: " << angle_parabola_mortar(a, b) << " degrees." << endl << endl;
			}
			
			else if (a <= 5600) {
				double b = 236.6431913239846; //velocity (sqrt of distance * gravity)
				cout << "Ammo: 6" << endl;
				cout << "Distance: " << a << " metres."<<endl;
				cout << "Velocity: " << b << " m/s."<< endl;
				cout << "Elevation angle: " << angle_parabola_mortar(a, b) << " degrees." << endl << endl;
			}
			
			else if (a <= 6300) {
				double b = 250.9980079602227; //velocity (sqrt of distance * gravity)
				cout << "Ammo: 7" << endl;
				cout << "Distance: " << a << " metres."<<endl;
				cout << "Velocity: " << b << " m/s."<< endl;
				cout << "Elevation angle: " << angle_parabola_mortar(a, b) << " degrees." << endl << endl;
			}
			
			else if (a <= 6500) {
				double b = 254.9509756796392; //velocity (sqrt of distance * gravity)
				cout << "Ammo: 8" << endl;
				cout << "Distance: " << a << " metres."<<endl;
				cout << "Velocity: " << b << " m/s."<< endl;
				cout << "Elevation angle: " << angle_parabola_mortar(a, b) << " degrees." << endl << endl;
			}
			
			else if (a > 6500) {
				cout << "Distance is too far." << endl << endl;
			}
			 
			
			
		cout << "Refire? (y/n): ";
		cin >> c;
		system("CLS");
		if (c == 'n') {
		 	break;
		 }
		}
	 } 
	else {
	cout <<"Has failed to access \"lib-mortar-firing.dll\".";
	}
	return 0;
}
