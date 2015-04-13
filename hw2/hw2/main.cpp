#include <stdio.h>
#include<GL\glut.h>
#include<GL\GLU.h>
#include<GL\GL.h>

const GLfloat orthoWidth = 1.0;
const GLfloat orthoHeight = 1.0;

void init();
void mydisplay();
void keyboradControl(unsigned char key, int x, int y);
void mouseControl(int button, int state, int x, int y);
void mouseMotionControl(int x, int y);

GLfloat PayPhoneColor[4] = {1.0, 1.0, 1.0, 1.0};
GLfloat ParkColor[4] = {1.0, 1.0, 1.0, 1.0};
GLfloat PostOfficeColor[4] = {1.0, 1.0, 1.0, 1.0};
GLfloat PoliceStationColor[4] = {1.0, 1.0, 1.0, 1.0};
GLfloat LibraryColor[4] = {1.0, 1.0, 1.0, 1.0};
GLfloat ApartmentsColor[4] = {1.0, 1.0, 1.0, 1.0};
GLfloat SchoolColor[4] = {1.0, 1.0, 1.0, 1.0};
GLfloat BankColor[4] = {1.0, 1.0, 1.0, 1.0};
GLfloat ShopColor[4] = {1.0, 1.0, 1.0, 1.0};
GLfloat SupermarketColor[4] = {1.0, 1.0, 1.0, 1.0};
GLfloat CoffeShopColor[4] = {1.0, 1.0, 1.0, 1.0};

int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(1000,700);
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

	//Pay Phone
	glColor4fv(PayPhoneColor);
	glBegin(GL_QUADS);
	glVertex2d(0.17-orthoWidth,-0.614+orthoHeight);
	glVertex2d(0.17-orthoWidth,-0.614-0.057+orthoHeight);
	glVertex2d(0.17+0.04-orthoWidth,-0.614-0.057+orthoHeight);
	glVertex2d(0.17+0.04-orthoWidth,-0.614+orthoHeight);
	glEnd();

	glColor4f(0.0,0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(0.17-orthoWidth,-0.614+orthoHeight);
	glVertex2d(0.17-orthoWidth,-0.614-0.057+orthoHeight);
	glVertex2d(0.17+0.04-orthoWidth,-0.614-0.057+orthoHeight);
	glVertex2d(0.17+0.04-orthoWidth,-0.614+orthoHeight);
	glEnd();

	//Park
	glColor4fv(ParkColor);
	glBegin(GL_QUADS);
	glVertex2d(0.27-orthoWidth,-0.186+orthoHeight);
	glVertex2d(0.27-orthoWidth,-0.186-0.571+orthoHeight);
	glVertex2d(0.27+0.45-orthoWidth,-0.186-0.571+orthoHeight);
	glVertex2d(0.27+0.45-orthoWidth,-0.186+orthoHeight);
	glEnd();

	glColor4f(0.0,0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(0.27-orthoWidth,-0.186+orthoHeight);
	glVertex2d(0.27-orthoWidth,-0.186-0.571+orthoHeight);
	glVertex2d(0.27+0.45-orthoWidth,-0.186-0.571+orthoHeight);
	glVertex2d(0.27+0.45-orthoWidth,-0.186+orthoHeight);
	glEnd();

	//Post Office  
	glColor4fv(PostOfficeColor);
	glBegin(GL_QUADS);
	glVertex2d(0.75-orthoWidth,-0.386+orthoHeight);
	glVertex2d(0.75-orthoWidth,-0.386-0.371+orthoHeight);
	glVertex2d(0.75+0.29-orthoWidth,-0.386-0.371+orthoHeight);
	glVertex2d(0.75+0.29-orthoWidth,-0.386+orthoHeight);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2d(0.75-orthoWidth,-0.386+orthoHeight);
	glVertex2d(0.75+0.290-orthoWidth,-0.386+orthoHeight);
	glVertex2d(0.75+0.145-orthoWidth,-0.386+0.257+orthoHeight);
	glEnd();

	glColor4f(0.0,0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(0.75-orthoWidth,-0.386+orthoHeight);
	glVertex2d(0.75-orthoWidth,-0.386-0.371+orthoHeight);
	glVertex2d(0.75+0.29-orthoWidth,-0.386-0.371+orthoHeight);
	glVertex2d(0.75+0.29-orthoWidth,-0.386+orthoHeight);
	glEnd();

	glBegin(GL_LINE_LOOP);
	glVertex2d(0.75-orthoWidth,-0.386+orthoHeight);
	glVertex2d(0.75+0.290-orthoWidth,-0.386+orthoHeight);
	glVertex2d(0.75+0.145-orthoWidth,-0.386+0.257+orthoHeight);
	glEnd();

	//Police Station 
	glColor4fv(PoliceStationColor);
	glBegin(GL_QUADS);
	glVertex2d(1.06-orthoWidth,-0.1+orthoHeight);
	glVertex2d(1.06-orthoWidth,-0.1-0.657+orthoHeight);
	glVertex2d(1.06+0.32-orthoWidth,-0.1-0.657+orthoHeight);
	glVertex2d(1.06+0.32-orthoWidth,-0.1+orthoHeight);
	glEnd();

	glColor4f(0.0,0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(1.06-orthoWidth,-0.1+orthoHeight);
	glVertex2d(1.06-orthoWidth,-0.1-0.657+orthoHeight);
	glVertex2d(1.06+0.32-orthoWidth,-0.1-0.657+orthoHeight);
	glVertex2d(1.06+0.32-orthoWidth,-0.1+orthoHeight);
	glEnd();

	//Library 
	glColor4fv(LibraryColor);
	glBegin(GL_QUADS);
	glVertex2d(1.42-orthoWidth,-0.243+orthoHeight);
	glVertex2d(1.42-orthoWidth,-0.243-0.514+orthoHeight);
	glVertex2d(1.42+0.2-orthoWidth,-0.243-0.514+orthoHeight);
	glVertex2d(1.42+0.2-orthoWidth,-0.243+orthoHeight);
	glEnd();

	glColor4f(0.0,0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(1.42-orthoWidth,-0.243+orthoHeight);
	glVertex2d(1.42-orthoWidth,-0.243-0.514+orthoHeight);
	glVertex2d(1.42+0.2-orthoWidth,-0.243-0.514+orthoHeight);
	glVertex2d(1.42+0.2-orthoWidth,-0.243+orthoHeight);
	glEnd();

	//Apartments 
	glColor4fv(ApartmentsColor);
	glBegin(GL_QUADS);
	glVertex2d(1.65-orthoWidth,-0.1+orthoHeight);
	glVertex2d(1.65-orthoWidth,-0.1-0.657+orthoHeight);
	glVertex2d(1.65+0.32-orthoWidth,-0.1-0.657+orthoHeight);
	glVertex2d(1.65+0.32-orthoWidth,-0.1+orthoHeight);
	glEnd();

	glColor4f(0.0,0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(1.65-orthoWidth,-0.1+orthoHeight);
	glVertex2d(1.65-orthoWidth,-0.1-0.657+orthoHeight);
	glVertex2d(1.65+0.32-orthoWidth,-0.1-0.657+orthoHeight);
	glVertex2d(1.65+0.32-orthoWidth,-0.1+orthoHeight);
	glEnd();

	//School 
	glColor4fv(SchoolColor);
	glBegin(GL_QUADS);
	glVertex2d(0.15-orthoWidth,-1.0+orthoHeight);
	glVertex2d(0.15-orthoWidth,-1.0-0.457+orthoHeight);
	glVertex2d(0.15+0.38-orthoWidth,-1.0-0.457+orthoHeight);
	glVertex2d(0.15+0.38-orthoWidth,-1.0+orthoHeight);
	glEnd();

	glColor4f(0.0,0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(0.15-orthoWidth,-1.0+orthoHeight);
	glVertex2d(0.15-orthoWidth,-1.0-0.457+orthoHeight);
	glVertex2d(0.15+0.38-orthoWidth,-1.0-0.457+orthoHeight);
	glVertex2d(0.15+0.38-orthoWidth,-1.0+orthoHeight);
	glEnd();

	//Bank 
	glColor4fv(BankColor);
	glBegin(GL_QUADS);
	glVertex2d(0.56-orthoWidth,-1.0+orthoHeight);
	glVertex2d(0.56-orthoWidth,-1.0-0.457+orthoHeight);
	glVertex2d(0.56+0.22-orthoWidth,-1.0-0.457+orthoHeight);
	glVertex2d(0.56+0.22-orthoWidth,-1.0+orthoHeight);
	glEnd();

	glColor4f(0.0,0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(0.56-orthoWidth,-1.0+orthoHeight);
	glVertex2d(0.56-orthoWidth,-1.0-0.457+orthoHeight);
	glVertex2d(0.56+0.22-orthoWidth,-1.0-0.457+orthoHeight);
	glVertex2d(0.56+0.22-orthoWidth,-1.0+orthoHeight);
	glEnd();

	//Shop 
	glColor4fv(ShopColor);
	glBegin(GL_QUADS);
	glVertex2d(0.8-orthoWidth,-1+orthoHeight);
	glVertex2d(0.8-orthoWidth,-1-0.286+orthoHeight);
	glVertex2d(0.8+0.17-orthoWidth,-1-0.286+orthoHeight);
	glVertex2d(0.8+0.17-orthoWidth,-1+orthoHeight);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2d(0.97-orthoWidth,-1+orthoHeight);
	glVertex2d(0.97-orthoWidth,-1-0.571+orthoHeight);
	glVertex2d(0.97+0.16-orthoWidth,-1-0.571+orthoHeight);
	glVertex2d(0.97+0.16-orthoWidth,-1+orthoHeight);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2d(1.13-orthoWidth,-1+orthoHeight);
	glVertex2d(1.13-orthoWidth,-1-0.429+orthoHeight);
	glVertex2d(1.13+0.19-orthoWidth,-1-0.429+orthoHeight);
	glVertex2d(1.13+0.19-orthoWidth,-1+orthoHeight);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2d(1.32-orthoWidth,-1+orthoHeight);
	glVertex2d(1.32-orthoWidth,-1-0.74+orthoHeight);
	glVertex2d(1.32+0.19-orthoWidth,-1-0.74+orthoHeight);
	glVertex2d(1.32+0.19-orthoWidth,-1+orthoHeight);
	glEnd();

	glColor4f(0.0,0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(0.8-orthoWidth,-1+orthoHeight);
	glVertex2d(0.8-orthoWidth,-1-0.286+orthoHeight);
	glVertex2d(0.8+0.17-orthoWidth,-1-0.286+orthoHeight);
	glVertex2d(0.8+0.17-orthoWidth,-1+orthoHeight);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2d(0.97-orthoWidth,-1+orthoHeight);
	glVertex2d(0.97-orthoWidth,-1-0.571+orthoHeight);
	glVertex2d(0.97+0.16-orthoWidth,-1-0.571+orthoHeight);
	glVertex2d(0.97+0.16-orthoWidth,-1+orthoHeight);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2d(1.13-orthoWidth,-1+orthoHeight);
	glVertex2d(1.13-orthoWidth,-1-0.429+orthoHeight);
	glVertex2d(1.13+0.19-orthoWidth,-1-0.429+orthoHeight);
	glVertex2d(1.13+0.19-orthoWidth,-1+orthoHeight);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2d(1.32-orthoWidth,-1+orthoHeight);
	glVertex2d(1.32-orthoWidth,-1-0.74+orthoHeight);
	glVertex2d(1.32+0.19-orthoWidth,-1-0.74+orthoHeight);
	glVertex2d(1.32+0.19-orthoWidth,-1+orthoHeight);
	glEnd();



	//Supermarket 
	glColor4fv(SupermarketColor);
	glBegin(GL_QUADS);
	glVertex2d(1.52-orthoWidth,-1.0+orthoHeight);
	glVertex2d(1.52-orthoWidth,-1.0-0.514+orthoHeight);
	glVertex2d(1.52+0.19-orthoWidth,-1.0-0.514+orthoHeight);
	glVertex2d(1.52+0.19-orthoWidth,-1.0+orthoHeight);
	glEnd();
	glBegin(GL_QUADS);
	glVertex2d(1.71-orthoWidth,-1.0+orthoHeight);
	glVertex2d(1.71-orthoWidth,-1.0-0.257+orthoHeight);
	glVertex2d(1.71+0.26-orthoWidth,-1.0-0.257+orthoHeight);
	glVertex2d(1.71+0.26-orthoWidth,-1.0+orthoHeight);
	glEnd();

	glColor4f(0.0,0.0,0.0,1.0);
	glBegin(GL_LINE_STRIP);
	glVertex2d(1.52+0.19-orthoWidth,-1.0+orthoHeight);
	glVertex2d(1.52-orthoWidth,-1.0+orthoHeight);
	glVertex2d(1.52-orthoWidth,-1.0-0.514+orthoHeight);
	glVertex2d(1.52+0.19-orthoWidth,-1.0-0.514+orthoHeight);
	glVertex2d(1.71-orthoWidth,-1.0-0.257+orthoHeight);	
	glEnd();
	glBegin(GL_LINE_STRIP);
	
	glVertex2d(1.71-orthoWidth,-1.0-0.257+orthoHeight);
	glVertex2d(1.71+0.26-orthoWidth,-1.0-0.257+orthoHeight);
	glVertex2d(1.71+0.26-orthoWidth,-1.0+orthoHeight);
	glVertex2d(1.71-orthoWidth,-1.0+orthoHeight);
	glEnd();

	//Coffee Shop
	glColor4fv(CoffeShopColor);
	glBegin(GL_QUADS);
	glVertex2d(1.75-orthoWidth,-1.314+orthoHeight);
	glVertex2d(1.75-orthoWidth,-1.314-0.371+orthoHeight);
	glVertex2d(1.75+0.22-orthoWidth,-1.314-0.371+orthoHeight);
	glVertex2d(1.75+0.22-orthoWidth,-1.314+orthoHeight);
	glEnd();

	glColor4f(0.0,0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(1.75-orthoWidth,-1.314+orthoHeight);
	glVertex2d(1.75-orthoWidth,-1.314-0.371+orthoHeight);
	glVertex2d(1.75+0.22-orthoWidth,-1.314-0.371+orthoHeight);
	glVertex2d(1.75+0.22-orthoWidth,-1.314+orthoHeight);
	glEnd();

	//Red Box
	glColor4f(1.0,0.0,0.0,1.0);
	glBegin(GL_LINE_LOOP);
	glVertex2d(0.16-orthoWidth,-1.786+orthoHeight);
	glVertex2d(0.16-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(0.16+0.11-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(0.16+0.11-orthoWidth,-1.786+orthoHeight);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2d(0.32-orthoWidth,-1.786+orthoHeight);
	glVertex2d(0.32-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(0.32+0.11-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(0.32+0.11-orthoWidth,-1.786+orthoHeight);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2d(0.48-orthoWidth,-1.786+orthoHeight);
	glVertex2d(0.48-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(0.48+0.11-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(0.48+0.11-orthoWidth,-1.786+orthoHeight);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2d(0.64-orthoWidth,-1.786+orthoHeight);
	glVertex2d(0.64-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(0.64+0.11-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(0.64+0.11-orthoWidth,-1.786+orthoHeight);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2d(0.8-orthoWidth,-1.786+orthoHeight);
	glVertex2d(0.8-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(0.8+0.11-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(0.8+0.11-orthoWidth,-1.786+orthoHeight);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2d(0.96-orthoWidth,-1.786+orthoHeight);
	glVertex2d(0.96-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(0.96+0.11-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(0.96+0.11-orthoWidth,-1.786+orthoHeight);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2d(1.12-orthoWidth,-1.786+orthoHeight);
	glVertex2d(1.12-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(1.12+0.11-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(1.12+0.11-orthoWidth,-1.786+orthoHeight);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2d(1.28-orthoWidth,-1.786+orthoHeight);
	glVertex2d(1.28-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(1.28+0.11-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(1.28+0.11-orthoWidth,-1.786+orthoHeight);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2d(1.44-orthoWidth,-1.786+orthoHeight);
	glVertex2d(1.44-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(1.44+0.11-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(1.44+0.11-orthoWidth,-1.786+orthoHeight);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2d(1.6-orthoWidth,-1.786+orthoHeight);
	glVertex2d(1.6-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(1.6+0.11-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(1.6+0.11-orthoWidth,-1.786+orthoHeight);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2d(1.76-orthoWidth,-1.786+orthoHeight);
	glVertex2d(1.76-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(1.76+0.11-orthoWidth,-1.786-0.157+orthoHeight);
	glVertex2d(1.76+0.11-orthoWidth,-1.786+orthoHeight);
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
