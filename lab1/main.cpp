#include "main.hpp"

using namespace std;

int main(int argc, char **argv){
	cout<<"CS3241 Lab 1\n\n";
    srand((uint32_t)time(NULL));
    printControls();

	pglInit();
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize (600, 600);
	glutInitWindowPosition (50, 50);
	glutCreateWindow (argv[0]);
	init ();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	//glutMouseFunc(mouse);
	glutKeyboardFunc(keyboard);
	glutMainLoop();

	return 0;
}
