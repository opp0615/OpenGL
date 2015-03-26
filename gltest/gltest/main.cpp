#include <stdio.h>
#include <stdlib.h>
#include<GL\glut.h>

void mydisplay();
void init();

int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("À¯Àç¼®");
	glutDisplayFunc(mydisplay);
	init();
	glutMainLoop();

	return 0;
}


void init()
{
	glClearColor (0.0, 0.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 1.0); 
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity ();
	gluOrtho2D(-1.0, 1.0, -1.0, 1.0); 
}

void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT); 

	glColor3f(1.0, 0.0, 1.0); 
	glBegin(GL_POLYGON); 
	glVertex2f(-0.5, -0.5); 
	glVertex2f(0, -0.5);
	glVertex2f(0, 0.5);
	glVertex2f(-0.5, 0.5);
	glEnd();

	glColor3f(1.0, 1.0, 1.0); 
	glBegin(GL_POLYGON);
	glVertex2f(0.1, -0.5); 
	glVertex2f(0.5, 0.5);
	glVertex2f(0.1, 0.5);
	glEnd();

	//glFlush(); //is sigle buffer used
	glutSwapBuffers();//is double buffer used

} 
