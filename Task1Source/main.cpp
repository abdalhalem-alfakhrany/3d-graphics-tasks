#include <iostream>
#include "glut.h"

void renderScene(void) {

	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_LINES);

	// First Line
	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(400.0f, 400.0f);

	// Second Line
	glColor3f(1.0f, 0.0f, 1.0f);
	glVertex2f(140.0f, 0.0f);
	glVertex2f(180.0f, 250.0f);

	// Third Line
	glColor3f(1.0f, 1.0f, 0.0f);
	glVertex2f(400.0f, 420.0f);
	glVertex2f(400.0f, 50.0f);

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
