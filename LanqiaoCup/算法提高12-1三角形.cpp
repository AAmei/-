#include "iostream"
#include "cmath"
#include "iomanip"

using namespace std;

struct s_point{
	double x, y;
};
struct s_triangle{
	s_point p[3];
};

double f_perimeter(s_triangle &tri) 
{
	double perimeter = 0.0;
	perimeter = sqrt(pow(tri.p[2].x - tri.p[0].x, 2) + pow(tri.p[2].y - tri.p[0].y, 2)) +
				sqrt(pow(tri.p[1].x - tri.p[2].x, 2) + pow(tri.p[1].y - tri.p[2].y, 2)) +
				sqrt(pow(tri.p[1].x - tri.p[0].x, 2) + pow(tri.p[1].y - tri.p[0].y, 2));
	return perimeter;
}

int f_area(s_triangle &tri)
{
	double Area = 0.0;
	double p = f_perimeter(tri)/2.0;
	Area = sqrt(p * (p - sqrt(pow(tri.p[2].x - tri.p[0].x, 2) + pow(tri.p[2].y - tri.p[0].y, 2))) * 
					(p - sqrt(pow(tri.p[1].x - tri.p[2].x, 2) + pow(tri.p[1].y - tri.p[2].y, 2))) * 
					(p - sqrt(pow(tri.p[1].x - tri.p[0].x, 2) + pow(tri.p[1].y - tri.p[0].y, 2))));
	cout << setprecision(2) << setiosflags(ios::fixed) << Area <<endl;
	return 0;
} 

int outHeart(s_triangle &tri)
{
	double k1 = 0.0, k2 = 0.0, b1 = 0.0, b2 = 0.0;
	double x = 0.0, y = 0.0;
	k1 = -(tri.p[1].x -tri.p[0].x) / (tri.p[1].y -tri.p[0].y);
	k2 = -(tri.p[2].x -tri.p[1].x) / (tri.p[2].y -tri.p[1].y);
	b1 = ((tri.p[0].y + tri.p[1].y) + (tri.p[1].x -tri.p[0].x)*(tri.p[1].x +tri.p[0].x)/(tri.p[1].y -tri.p[0].y)) / 2;
	b2 = ((tri.p[2].y + tri.p[1].y) + (tri.p[2].x -tri.p[1].x)*(tri.p[2].x +tri.p[1].x)/(tri.p[2].y -tri.p[1].y)) / 2;
	x = (b2 - b1)/(k1 - k2);
	y = (k1 * b2 - k2 * b1)/(k1 - k2);
	cout << setprecision(2) << setiosflags(ios::fixed) << x << " " << y <<endl;	
	return 0;
}

int gravityHeart(s_triangle &tri)
{
	double x = 0.0, y = 0.0;
	x = (tri.p[0].x + tri.p[1].x + tri.p[2].x) / 3;
	y = (tri.p[0].y + tri.p[1].y + tri.p[2].y) / 3;
	cout << setprecision(2) << setiosflags(ios::fixed) << x << " " << y <<endl;
	return 0;
} 

int main()
{	
    s_triangle tri;
    cin >> tri.p[0].x >> tri.p[0].y;
    cin >> tri.p[1].x >> tri.p[1].y;
    cin >> tri.p[2].x >> tri.p[2].y;
    
    
	
    double perimeter = f_perimeter(tri);
    cout << setprecision(2) << setiosflags(ios::fixed) << perimeter <<endl;
    f_area(tri);
    outHeart(tri);
    gravityHeart(tri);
	return 0; 
}
