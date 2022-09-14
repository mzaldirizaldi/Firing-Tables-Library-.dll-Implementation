import com.sun.jna.Library;
import com.sun.jna.Native;
import com.sun.jna.Platform;
import java.util.Scanner;

import Main.SharedObject;

class Main {
		public interface SharedObject extends Library {
		public double angle_parabola_mortar (double a, double b);
	}
		
		public static void main(String[] args) {
		SharedObject lib = (SharedObject) Native.loadLibrary
		("lib-mortar-firing.dll", SharedObject.class);
		Scanner myObj = new Scanner(System.in);
			
			char c = 'y';
			while (c == 'y') {
				System.out.println("Enter firing distance (100m - 6500m): ");
				double a = myObj.nextDouble();
				
				if (a < 100) {
					System.out.println("Distance is too close.");
				}
				
				else if (a <= 450) {
				double b = 67.08203932499369;
				System.out.println("Ammo: 0");
				System.out.println("Distance: " + a + " metres.");
				System.out.println("Velocity: " + b + " m.s.");
				System.out.println("Elevation angle: " + lib.angle_parabola_mortar(a, b) + " degrees.");
				}

				else if (a <= 800) {
				double b = 89.44271909999159;
				System.out.println("Ammo: 1");
				System.out.println("Distance: " + a + " metres.");
				System.out.println("Velocity: " + b + " m.s.");
				System.out.println("Elevation angle: " + lib.angle_parabola_mortar(a, b) + " degrees.");
				}
				
				else if (a <= 1350) {
				double b = 116.1895003862225;
				System.out.println("Ammo: 2");
				System.out.println("Distance: " + a + " metres.");
				System.out.println("Velocity: " + b + " m.s.");
				System.out.println("Elevation angle: " + lib.angle_parabola_mortar(a, b) + " degrees.");
				}
				
				else if (a <= 2600) {
				double b = 161.245154965971;
				System.out.println("Ammo: 3");
				System.out.println("Distance: " + a + " metres.");
				System.out.println("Velocity: " + b + " m.s.");
				System.out.println("Elevation angle: " + lib.angle_parabola_mortar(a, b) + " degrees.");
				}

				else if (a <= 3700) {
				double b = 192.3538406167134;
				System.out.println("Ammo: 4");
				System.out.println("Distance: " + a + " metres.");
				System.out.println("Velocity: " + b + " m.s.");
				System.out.println("Elevation angle: " + lib.angle_parabola_mortar(a, b) + " degrees.");
				}
				
				else if (a <= 4700) {
				double b = 216.794833886788;
				System.out.println("Ammo: 5");
				System.out.println("Distance: " + a + " metres.");
				System.out.println("Velocity: " + b + " m.s.");
				System.out.println("Elevation angle: " + lib.angle_parabola_mortar(a, b) + " degrees.");
				}

				else if (a <= 5600) {
				double b = 236.6431913239846;
				System.out.println("Ammo: 6");
				System.out.println("Distance: " + a + " metres.");
				System.out.println("Velocity: " + b + " m.s.");
				System.out.println("Elevation angle: " + lib.angle_parabola_mortar(a, b) + " degrees.");
				}
				
				else if (a <= 6300) {
				double b = 250.9980079602227;
				System.out.println("Ammo: 7");
				System.out.println("Distance: " + a + " metres.");
				System.out.println("Velocity: " + b + " m.s.");
				System.out.println("Elevation angle: " + lib.angle_parabola_mortar(a, b) + " degrees.");
				}	
				
				else if (a <= 6500) {
				double b = 254.9509756796392;
				System.out.println("Ammo: 8");
				System.out.println("Distance: " + a + " metres.");
				System.out.println("Velocity: " + b + " m.s.");
				System.out.println("Elevation angle: " + lib.angle_parabola_mortar(a, b) + " degrees.");
				}	
				
				else if (a > 6500) {
					System.out.println("Distance is too far.");
				}
				
			System.out.println("Refire? (y/n): ");
			c = myObj.next().charAt(0);
			if (c=='n') {
				break;
			}
			}
		}
}
