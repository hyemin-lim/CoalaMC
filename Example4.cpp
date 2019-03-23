#include<CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")
#include <math.h>

int main()
{
	BlockID obsidian = createBlock(BLOCK_OBSIDIAN);
	BlockID emerald = createBlock(BLOCK_EMERALD);
	BlockID glowstone = createBlock(BLOCK_GLOWSTONE);
	BlockID glass = createBlock(BLOCK_GLASS);

	int px, py, pz;
	getPlayerLocation(&px, &py, &pz);

	double pi = 3.14159265358979323846;
	double dir = getPlayerDirection();
	double radian = dir * pi / 180.;

	int dx = -50 * sin(radian);
	int dz = 50 * cos(radian);

	px += dx;
	pz += dz;

	int x, y, z;

	for (x = 0; x < 15; x++) {
		for (z = 0; z < 15; z++) {
			for (y = 0; y < 15; y++) {

				locateBlock(obsidian, px + x, py, pz + z);
				locateBlock(emerald, px - 1, py, pz + z);
				locateBlock(emerald, px + 15, py, pz + z);
				locateBlock(emerald, px + x, py, pz + 15);
				locateBlock(emerald, px + x, py, pz - 1);
				locateBlock(glowstone, px + (x / 1.2), py + 1, pz + (z / 1.2));
				locateBlock(glass, px + (x / 1.5), py + 2, pz + (z / 1.5));
				locateBlock(glowstone, px + (x / 2), py + 3, pz + (z / 2));
				locateBlock(glass, px + (x / 2.5), py + 4, pz + (z / 2.5));
				locateBlock(glowstone, px + (x / 3), py + 5, pz + (z / 3));





			}


		}

	}



}
