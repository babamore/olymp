#include <iostream>

using namespace std;

int main() {


	int h, w, x, y, i , j;
	int o[1002][1002];


	cin >> w >> h;
	
	
	
	for (x = 0; x < w; x++) {
		for (y = 0; y < h; y++) {
			o[y][x] = 0;
		}
	}

	int ax, ay, bx, by , k;
	bool stop;

	int dx[4] = { 1, 0, -1, 0 };
	int dy[4] = { 0, 1, 0, -1 };

	cin >> ax >> ay >> bx >> by;
	o[ay][ax] = 1;
	int d = 1;
    
	
	do {
		stop = true;
		for (y = 0; y < h; y++) {
			for (x = 0; x < w; x++) {
				if (o[y][x] == d) {
					for (k = 0; k < 4; ++k) {
						int iy = y + dy[k], ix = x + dx[k];
						if (o[iy][ix] == 0 && iy >= 0 && iy < h && ix >= 0 && ix < w) {
							stop = false;
							o[iy][ix] = d + 1;
						}
					}
				}
			}
		}
		d++;
	} while (!stop && o[by][bx] == 0);
	cout << d-2;
	return 0;
}
