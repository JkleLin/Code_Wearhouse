#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	double T, D, H, E, h;
	bool it, id, ih;
	char g;
	while (1) {
		it = id = ih = 0;
		cin >> g;
		if (g == 'E') break;
		else if (g == 'D') { cin >> D; id = 1; }
		else if (g == 'H') { cin >> H; ih = 1; }
		else if (g == 'T') { cin >> T; it = 1; }

		cin >> g;
		if (g == 'D') { cin >> D; id = 1; }
		else if (g == 'H') { cin >> H; ih = 1; }
		else if (g == 'T') { cin >> T; it = 1; }

		if (it && id) {
			E = 6.11 * exp(5417.7530 * ((1 / 273.16) - (1 / (D + 273.16))));
			h = (0.5555)*(E - 10.0);
			H = T + h;
		}

		if (it && ih) {
			h = H - T;
			E = h / (0.5555) + 10.0;
			D = 1 / (-(log(E / 6.11) / 5417.7530) + (1 / 273.16)) - 273.16;
		}

		if (id && ih) {
			E = 6.11*exp((5417.7530)*((1 / 273.16) - (1 / (D + 273.16))));
			h = (0.5555)*(E - 10.0);
			T = H - h;
		}

		cout << setiosflags(ios::fixed) << setprecision(1) << "T " << T << " D " << D << " H " << H << endl;
	}
	return 0;
}