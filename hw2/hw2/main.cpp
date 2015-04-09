#include <stdio.h>
#include<GL\glut.h>
#include<GL\GLU.h>
#include<GL\GL.h>

void init();
void mydisplay();
void keyboradControl(unsigned char key, int x, int y);
void mouseControl(int button, int state, int x, int y);
void mouseMotionControl(int x, int y);

int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("À¯Àç¼®");
	glutDisplayFunc(mydisplay);
	init();
	//input event control
	glutKeyboardFunc(keyboradControl);
	glutMouseFunc(mouseControl);
	glutMotionFunc(mouseMotionControl);

	glutMainLoop();

	return 0;
}


void init()
{
	glClearColor (1.0, 1.0, 1.0, 1.0);
	glColor4f(1.0, 1.0, 1.0,1.0); 
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity ();
	gluOrtho2D(-1.0, 1.0, -1.0, 1.0); 
}


void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT); 

	
	glBegin(GL_POLYGON);
	glColor4f(1.0, 0.0, 0.0 ,1.0); 
	glVertex2f(-0.5, -0.5); 
	glColor4f(0.0, 1.0, 0.0 ,1.0); 
	glVertex2f(0, -0.5);
	glColor4f(0.0, 0.0, 1.0 ,1.0); 
	glVertex2f(0, 0.5);
	glEnd();

	glutSwapBuffers();
}

void keyboradControl(unsigned char key, int x, int y)
{

}
void mouseControl(int button, int state, int x, int y)
{

}
void mouseMotionControl(int x, int y)
{

}
