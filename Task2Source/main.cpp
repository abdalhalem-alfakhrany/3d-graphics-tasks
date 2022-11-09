#include <iostream>
#include "glut.h"

void renderScene(void) {

	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);

	// First Triangle
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(15.0f, 15.0f);
	glVertex2f(45.0f, 15.0f);
	glVertex2f(45.0f, 45.0f);

	// Second Triangle
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(5.0f, 300.0f);
	glVertex2f(30.0f, 350.0f);
	glVertex2f(55.0f, 390.0f);

	// Third Triangle
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(200.0f, 10.0f);

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2f(390.0f, 40.0f);

	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex2f(350.0f, 50.0f);

	// Forth Triangle
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(300.0f, 300.0f);

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(380.0f, 300.0f);

	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(300.0f, 380.0f);

	glEnd();

	glFlush();
}

int main(int argc, char* argv[]) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	float screenWidth = glutGet(GLUT_SCREEN_WIDTH);
	float screenHight = glutGet(GLUT_SCREEN_HEIGHT);
	//printf("%f %f", screenWidth, screenWidth);
	glutInitWindowPosition((screenWidth / 2) - 200, (screenHight / 2) - 200);
	glutCreateWindow("Task1");

	gluOrtho2D(0.0f, 400.0f, 400.0f, 0.0f);
	glutDisplayFunc(renderScene);

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glutMainLoop();

	return 0;
}
