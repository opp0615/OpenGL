#include <stdio.h>
#include <stdlib.h>
#include<GL\glut.h>
#include<GL\GL.h>
#include<GL\GLU.h>

void mydisplay();
void init();
void mouse(int button, int state, int x, int y);
void keyboard(unsigned char key, int x, int y);
void mouseMotion(int x, int y);

float f1=1.0,f2=1.0,f3=1.0;
float s1=1.0,s2=1.0,s3=1.0;
float t1=1.0,t2=1.0,t3=1.0;

int mouseCurButton = 0;
int mouseCurPositionX = 0;
int mouseCurPositionY = 0;

int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("유재석");
	glutDisplayFunc(mydisplay);
	init();
	//input event control
	glutKeyboardFunc(keyboard);
	glutMouseFunc(mouse);
	glutMotionFunc(mouseMotion);

	glutMainLoop();

	return 0;
}


void init()
{
	glClearColor (1.0, 1.0, 0.0, 1.0);
	glColor3f(1.0, 1.0, 1.0); 
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity ();
	gluOrtho2D(-1.0, 1.0, -1.0, 1.0); 
}

void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT); 

	glColor3f(f1,f2,f3); 
	glBegin(GL_POLYGON); 
	glVertex2f(-0.5, -0.5); 
	glVertex2f(0, -0.5);
	glVertex2f(0, 0.5);
	glEnd();

	glColor3f(s1,s2,s3); 
	glBegin(GL_POLYGON); 
	glVertex2f(-1, 1); 
	glVertex2f(-1, 0.5);
	glVertex2f(0, 0.5);
	glVertex2f(0, 1);
	glEnd();

	glColor3f(t1,t2,t3); 
	glBegin(GL_POLYGON); 
	glVertex2f(0.1, -0.3);
	glVertex2f(0.6, -0.3); 
	glVertex2f(0.5, 0.3);
	glVertex2f(0.1, 0.5);
	glEnd();



	//glFlush(); //is sigle buffer used
	glutSwapBuffers();//is double buffer used

} 


void mouse(int button, int state, int x, int y)
{
	switch (button)
	{
	case GLUT_LEFT_BUTTON:
		if(state == GLUT_DOWN)
		{

			mouseCurButton = button;
			mouseCurPositionX = x;
			mouseCurPositionY = y;


			if(x<250)//왼쪽 윈도우
			{
				s1=0.0, s2=0.0, s3=1.0;
				f1=0.0, f2=0.0, f3=1.0;
				t1=0.0, t2=0.0, t3=1.0;

				glutPostRedisplay();
			}

			else//오른쪽 윈도우
			{
				s1=1.0, s2=0.0, s3=0.0;
				f1=1.0, f2=0.0, f3=0.0;
				t1=1.0, t2=0.0, t3=0.0;

				glutPostRedisplay();
			}					   
		}

		else if(state == GLUT_UP)
		{

		}
		break;

	case GLUT_MIDDLE_BUTTON:

		break;

	case GLUT_RIGHT_BUTTON:
		if(state == GLUT_DOWN)
		{
			mouseCurButton = button;
			mouseCurPositionX = x;
			mouseCurPositionY = y;

			if(y < 250) //위쪽 윈도우
			{
				s1=1.0, s2=1.0, s3=1.0;
				f1=1.0, f2=1.0, f3=1.0;
				t1=1.0, t2=1.0, t3=1.0;

				glutPostRedisplay();
			}

			else
			{
				s1=0.0, s2=0.0, s3=0.0;
				f1=0.0, f2=0.0, f3=0.0;
				t1=0.0, t2=0.0, t3=0.0;

				glutPostRedisplay();
			}
		}

	default:
		break;
	}
}
//키보드를 R을 누르면 1번만 빨간색 G를 누르면 2번째만 초록 B를 누르면 3번째만 파란색
void keyboard(unsigned char key, int x, int y)
{
	switch (key)
	{

	case 'r': case 'R':
		f1=1.0, f2=0.0, f3=0.0;
		s1=1.0, s2=1.0, s3= 1.0;
		t1=1.0, t2=1.0, t3=1.0;
		glutPostRedisplay(); //input 이벤트를 받고나서 강제적으로 reflash를 해줌

		break;

	case 'g': case'G':
		s1=0.0, s2=1.0, s3= 0.0;
		f1=1.0, f2=1.0, f3=1.0;
		t1=1.0, t2=1.0, t3=1.0;
		glutPostRedisplay();
		break;

	case 'b': case 'B':
		t1=0.0, t2=0.0, t3=1.0;
		f1=1.0, f2=1.0, f3=1.0;
		s1=1.0, s2=1.0, s3= 1.0;

		glutPostRedisplay();
		break;

	default:
		break;
	}
}


void mouseMotion(int x, int y)
{
	if(mouseCurButton == GLUT_LEFT_BUTTON)
	{
		int vectorX =0;

		vectorX = (x - mouseCurPositionX);

		if(vectorX > 0)
		{
			f1=1.0, f2=0.0, f3=0.0;
			s1=1.0, s2=0.0, s3=0.0;
			t1=1.0, t2=0.0, t3=0.0;
			glutPostRedisplay();
		}

		else
		{
			f1=0.0, f2=1.0, f3=0.0;
			s1=0.0, s2=1.0, s3=0.0;
			t1=0.0, t2=1.0, t3=0.0;
			glutPostRedisplay();
		}
	}

	mouseCurPositionX = x;//마우스의 위치로 기준점을 업데이트 해줌
	
	/*
	if(mouseCurButton == GLUT_RIGHT_BUTTON)
	{

	}

	*/
}