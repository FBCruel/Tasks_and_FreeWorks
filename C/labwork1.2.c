#include <stdio.h>
#include <math.h>

int main(void){
	/*
	//question1
	float a, b;
	printf("enter the length of a and b sides: ");
	scanf("%f %f", &a, &b);
	
	printf("hypotenuse = %.2f\n\n",sqrt((a * a) + (b * b)));
	
	//question2
	float c;
	printf("enter the length one side of equilateral triangle: ");
	scanf("%f", &c);
	
	printf("area = %.2f\n\n", (sqrt(3) / 4) * (c * c));
	
	//question3
	float r, angle, rate, area, PI;
	PI = 3.14;
	printf("enter the angle of part and radius of circle: ");
	scanf("%f %f", &angle, &r);
	
	rate = 360 / angle;
	area = PI * (r * r);
	printf("area of the part is = %.2f\n\n", area / rate);
	
	//question4
	float e, r, t, p, p0;
	e = 2,71;
	t = 10;
	printf("enter the starting population and rate of growth: ");
	scanf("%f %f", &p0, &r);
	
	p = p0 + pow(e, r * t);
	printf("%.2f\n\n", p);
	*/
	//question5
	//1 derece = pi / 180 radyan
	double tanx, tany, tanz, sinx, siny, sinz, sin2x, sin2y, sin2z, cosx, cosy, cosz, x, y, z, angleX, angleY, angleZ;
	printf("enter the sides of triangle: ");
	scanf("%lf %lf %lf", &x, &y, &z);
	
	cosx = ((x * x) - (y * y) - (z * z)) / (-2 * y * z);
	cosy = ((y * y) - (x * x) - (z * z)) / (-2 * x * z);
	cosz = ((z * z) - (x * x) - (y * y)) / (-2 * x * y);

	angleX = acos(cosx) / (3.14 / 180);
	angleY = acos(cosy) / (3.14 / 180);
	angleZ = acos(cosz) / (3.14 / 180);
	printf("your angles are %.0lf %.0lf %.0lf", angleX, angleY, angleZ);
	
	/*
	sin2x = 1 - (cosx * cosx);
	sin2y = 1 - (cosy * cosy);
	sin2z =	1 - (cosz * cosz);
	sinx = sqrt(sin2x);
	siny = sqrt(sin2y);
	sinz = sqrt(sin2z);
	
	tanx = sinx / cosx;
	tany = siny / cosy;
	tanz = sinz / cosz;
	
	angleX = atan(tanx) / (3.14 / 180);
	angleY = atan(tany) / (3.14 / 180);
	angleZ = atan(tanz) / (3.14 / 180);
	
	printf("your angles are %.0lf %.0lf %.0lf", angleX, angleY, angleZ);
	*/
	return 0;
}
