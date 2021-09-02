#include "main.hpp"

using namespace std;

int main(int argc, char **argv){
	cout<<"CS3241 Lab 1\n\n";
    srand((uint32_t)time(NULL));
    printControls();

	pglInit();
	init();
        while (aptMainLoop())
        {
             pglSelectScreen(GFX_TOP, GFX_LEFT);
             display();
             reshape();
             pglSwapBuffers();
        }
        pglExit();
	return 0;
}
