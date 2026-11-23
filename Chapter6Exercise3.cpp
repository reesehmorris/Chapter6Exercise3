#include <iostream>
#include <iomanip>
using namespace std;

double fallingDistance(double time)
{
	const double gravity = 9.8;
	return 0.5 * gravity * time * time;
}

int main()
{
	cout << "Time (s)\tDistance (m)\n";

	cout << fixed << setprecision(1);

	for (int t = 1; t <= 10; t++)
	{
		cout << setw(5) << t << "\t\t"
			<< setw(8) << fallingDistance(t) << endl;
	}

	return 0;
}