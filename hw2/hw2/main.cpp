#include <stdio.h>
#include<GL\glut.h>
#include<GL\GLU.h>
#include<GL\GL.h>

const GLfloat orthoWidth = 1.0;
const GLfloat orthoHeight = 1.0;
const int redBoxWidth = 55;
const int redBoxHeight = 55;

void init();
void mydisplay();
void keyboradControl(unsigned char key, int x, int y);
void mouseControl(int button, int state, int x, int y);
void mouseMotionControl(int x, int y);

int mouseCurButton = 0;
int mouseCurPositionX = 0;
int mouseCurPositionY = 0;

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
	glutCreateWindow("121536 유재석");
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
	switch (key)
	{
	case '1':
		PayPhoneColor[0] = 0.0;
		PayPhoneColor[1] = 1.0;
		PayPhoneColor[2] = 1.0;

		for(int i=0;i<3;i++)
		{
			ParkColor[i]		   =1.0;
			PostOfficeColor[i] 	   =1.0;
			PoliceStationColor[i]  =1.0;
			LibraryColor[i] 	   =1.0;
			ApartmentsColor[i] 	   =1.0;
			SchoolColor[i] 		   =1.0;
			BankColor[i] 		   =1.0;
			ShopColor[i] 		   =1.0;
			SupermarketColor[i]	   =1.0;
			CoffeShopColor[i] 	   =1.0;
		}
		glutPostRedisplay();
		break;
	case '2':
		ParkColor[0] = 0.0;
		ParkColor[1] = 1.0;
		ParkColor[2] = 1.0;

		for(int i=0;i<3;i++)
		{
			PayPhoneColor[i]       =1.0;
			PostOfficeColor[i] 	   =1.0;
			PoliceStationColor[i]  =1.0;
			LibraryColor[i] 	   =1.0;
			ApartmentsColor[i] 	   =1.0;
			SchoolColor[i] 		   =1.0;
			BankColor[i] 		   =1.0;
			ShopColor[i] 		   =1.0;
			SupermarketColor[i]	   =1.0;
			CoffeShopColor[i] 	   =1.0;
		}
		glutPostRedisplay();
		break;
	case '3':
		PostOfficeColor[0] = 0.0;
		PostOfficeColor[1] = 1.0;
		PostOfficeColor[2] = 1.0;

		for(int i=0;i<3;i++)
		{
			PayPhoneColor[i]       =1.0;
			ParkColor[i]		   =1.0;
			PoliceStationColor[i]  =1.0;
			LibraryColor[i] 	   =1.0;
			ApartmentsColor[i] 	   =1.0;
			SchoolColor[i] 		   =1.0;
			BankColor[i] 		   =1.0;
			ShopColor[i] 		   =1.0;
			SupermarketColor[i]	   =1.0;
			CoffeShopColor[i] 	   =1.0;
		}
		glutPostRedisplay();
		break;
	case '4':
		PoliceStationColor[0] = 0.0;
		PoliceStationColor[1] = 1.0;
		PoliceStationColor[2] = 1.0;

		for(int i=0;i<3;i++)
		{
			PayPhoneColor[i]       =1.0;
			ParkColor[i]		   =1.0;
			PostOfficeColor[i] 	   =1.0;
			LibraryColor[i] 	   =1.0;
			ApartmentsColor[i] 	   =1.0;
			SchoolColor[i] 		   =1.0;
			BankColor[i] 		   =1.0;
			ShopColor[i] 		   =1.0;
			SupermarketColor[i]	   =1.0;
			CoffeShopColor[i] 	   =1.0;
		}
		glutPostRedisplay();
		break;
	case '5':
		LibraryColor[0] = 0.0;
		LibraryColor[1] = 1.0;
		LibraryColor[2] = 1.0;

		for(int i=0;i<3;i++)
		{
			PayPhoneColor[i]       =1.0;
			ParkColor[i]		   =1.0;
			PostOfficeColor[i] 	   =1.0;
			PoliceStationColor[i]  =1.0;
			ApartmentsColor[i] 	   =1.0;
			SchoolColor[i] 		   =1.0;
			BankColor[i] 		   =1.0;
			ShopColor[i] 		   =1.0;
			SupermarketColor[i]	   =1.0;
			CoffeShopColor[i] 	   =1.0;
		}
		glutPostRedisplay();
		break;
	case '6':
		ApartmentsColor[0] = 0.0;
		ApartmentsColor[1] = 1.0;
		ApartmentsColor[2] = 1.0;

		for(int i=0;i<3;i++)
		{
			PayPhoneColor[i]       =1.0;
			ParkColor[i]		   =1.0;
			PostOfficeColor[i] 	   =1.0;
			PoliceStationColor[i]  =1.0;
			LibraryColor[i] 	   =1.0;
			SchoolColor[i] 		   =1.0;
			BankColor[i] 		   =1.0;
			ShopColor[i] 		   =1.0;
			SupermarketColor[i]	   =1.0;
			CoffeShopColor[i] 	   =1.0;
		}
		glutPostRedisplay();
		break;
	case '7':
		SchoolColor[0] = 0.0;
		SchoolColor[1] = 1.0;
		SchoolColor[2] = 1.0;

		for(int i=0;i<3;i++)
		{
			PayPhoneColor[i]       =1.0;
			ParkColor[i]		   =1.0;
			PostOfficeColor[i] 	   =1.0;
			PoliceStationColor[i]  =1.0;
			LibraryColor[i] 	   =1.0;
			ApartmentsColor[i] 	   =1.0;
			BankColor[i] 		   =1.0;
			ShopColor[i] 		   =1.0;
			SupermarketColor[i]	   =1.0;
			CoffeShopColor[i] 	   =1.0;
		}
		glutPostRedisplay();
		break;
	case '8':
		BankColor[0] = 0.0;
		BankColor[1] = 1.0;
		BankColor[2] = 1.0;

		for(int i=0;i<3;i++)
		{
			PayPhoneColor[i]       =1.0;
			ParkColor[i]		   =1.0;
			PostOfficeColor[i] 	   =1.0;
			PoliceStationColor[i]  =1.0;
			LibraryColor[i] 	   =1.0;
			ApartmentsColor[i] 	   =1.0;
			SchoolColor[i] 		   =1.0;
			ShopColor[i] 		   =1.0;
			SupermarketColor[i]	   =1.0;
			CoffeShopColor[i] 	   =1.0;
		}
		glutPostRedisplay();
		break;
	case '9':
		ShopColor[0] = 0.0;
		ShopColor[1] = 1.0;
		ShopColor[2] = 1.0;

		for(int i=0;i<3;i++)
		{
			PayPhoneColor[i]       =1.0;
			ParkColor[i]		   =1.0;
			PostOfficeColor[i] 	   =1.0;
			PoliceStationColor[i]  =1.0;
			LibraryColor[i] 	   =1.0;
			ApartmentsColor[i] 	   =1.0;
			SchoolColor[i] 		   =1.0;
			BankColor[i] 		   =1.0;
			SupermarketColor[i]	   =1.0;
			CoffeShopColor[i] 	   =1.0;
		}
		glutPostRedisplay();
		break;
	case '0':
		SupermarketColor[0] = 0.0;
		SupermarketColor[1] = 1.0;
		SupermarketColor[2] = 1.0;

		for(int i=0;i<3;i++)
		{
			PayPhoneColor[i]       =1.0;
			ParkColor[i]		   =1.0;
			PostOfficeColor[i] 	   =1.0;
			PoliceStationColor[i]  =1.0;
			LibraryColor[i] 	   =1.0;
			ApartmentsColor[i] 	   =1.0;
			SchoolColor[i] 		   =1.0;
			BankColor[i] 		   =1.0;
			ShopColor[i] 		   =1.0;
			CoffeShopColor[i] 	   =1.0;
		}
		glutPostRedisplay();
		break;
	case 'e':
		CoffeShopColor[0] = 0.0;
		CoffeShopColor[1] = 1.0;
		CoffeShopColor[2] = 1.0;

		for(int i=0;i<3;i++)
		{
			PayPhoneColor[i]       =1.0;
			ParkColor[i]		   =1.0;
			PostOfficeColor[i] 	   =1.0;
			PoliceStationColor[i]  =1.0;
			LibraryColor[i] 	   =1.0;
			ApartmentsColor[i] 	   =1.0;
			SchoolColor[i] 		   =1.0;
			BankColor[i] 		   =1.0;
			ShopColor[i] 		   =1.0;
			SupermarketColor[i]	   =1.0;
		}
		glutPostRedisplay();
		break;

	case 'c':
		for(int i=0;i<3;i++)
		{
			PayPhoneColor[i]       =1.0;
			ParkColor[i]		   =1.0;
			PostOfficeColor[i] 	   =1.0;
			PoliceStationColor[i]  =1.0;
			LibraryColor[i] 	   =1.0;
			ApartmentsColor[i] 	   =1.0;
			SchoolColor[i] 		   =1.0;
			BankColor[i] 		   =1.0;
			ShopColor[i] 		   =1.0;
			SupermarketColor[i]	   =1.0;
			CoffeShopColor[i]      =1.0;
		}
		glutPostRedisplay();
		break;


	default:
		break;
	}
}
void mouseControl(int button, int state, int x, int y)
{
	switch (button)
	{
	case GLUT_LEFT_BUTTON:
		if(state == GLUT_DOWN)
		{
			mouseCurButton = button;
			mouseCurPositionX = x;
			mouseCurPositionY = y;

			if(80 <=x && x<=80+redBoxWidth && 625<=y && y<=625+redBoxHeight)
			{
				PayPhoneColor[0] = 0.0;
				PayPhoneColor[1] = 1.0;
				PayPhoneColor[2] = 1.0;

				for(int i=0;i<3;i++)
				{
					ParkColor[i]		   =1.0;
					PostOfficeColor[i] 	   =1.0;
					PoliceStationColor[i]  =1.0;
					LibraryColor[i] 	   =1.0;
					ApartmentsColor[i] 	   =1.0;
					SchoolColor[i] 		   =1.0;
					BankColor[i] 		   =1.0;
					ShopColor[i] 		   =1.0;
					SupermarketColor[i]	   =1.0;
					CoffeShopColor[i] 	   =1.0;
				}
				glutPostRedisplay();
			}

			else if(160 <=x && x<=160+redBoxWidth && 625<=y && y<=625+redBoxHeight)
			{
				ParkColor[0] = 0.0;
				ParkColor[1] = 1.0;
				ParkColor[2] = 1.0;

				for(int i=0;i<3;i++)
				{
					PayPhoneColor[i]       =1.0;
					PostOfficeColor[i] 	   =1.0;
					PoliceStationColor[i]  =1.0;
					LibraryColor[i] 	   =1.0;
					ApartmentsColor[i] 	   =1.0;
					SchoolColor[i] 		   =1.0;
					BankColor[i] 		   =1.0;
					ShopColor[i] 		   =1.0;
					SupermarketColor[i]	   =1.0;
					CoffeShopColor[i] 	   =1.0;
				}
				glutPostRedisplay();
			}
			else if(240 <=x && x<=240+redBoxWidth && 625<=y && y<=625+redBoxHeight)
			{
				PostOfficeColor[0] = 0.0;
				PostOfficeColor[1] = 1.0;
				PostOfficeColor[2] = 1.0;

				for(int i=0;i<3;i++)
				{
					PayPhoneColor[i]       =1.0;
					ParkColor[i]		   =1.0;
					PoliceStationColor[i]  =1.0;
					LibraryColor[i] 	   =1.0;
					ApartmentsColor[i] 	   =1.0;
					SchoolColor[i] 		   =1.0;
					BankColor[i] 		   =1.0;
					ShopColor[i] 		   =1.0;
					SupermarketColor[i]	   =1.0;
					CoffeShopColor[i] 	   =1.0;
				}
				glutPostRedisplay();
			}
			else if(320 <=x && x<=320+redBoxWidth && 625<=y && y<=625+redBoxHeight)
			{
				PoliceStationColor[0] = 0.0;
				PoliceStationColor[1] = 1.0;
				PoliceStationColor[2] = 1.0;

				for(int i=0;i<3;i++)
				{
					PayPhoneColor[i]       =1.0;
					ParkColor[i]		   =1.0;
					PostOfficeColor[i] 	   =1.0;
					LibraryColor[i] 	   =1.0;
					ApartmentsColor[i] 	   =1.0;
					SchoolColor[i] 		   =1.0;
					BankColor[i] 		   =1.0;
					ShopColor[i] 		   =1.0;
					SupermarketColor[i]	   =1.0;
					CoffeShopColor[i] 	   =1.0;
				}
				glutPostRedisplay();
			}
			else if(400 <=x && x<=400+redBoxWidth && 625<=y && y<=625+redBoxHeight)
			{
				LibraryColor[0] = 0.0;
				LibraryColor[1] = 1.0;
				LibraryColor[2] = 1.0;

				for(int i=0;i<3;i++)
				{
					PayPhoneColor[i]       =1.0;
					ParkColor[i]		   =1.0;
					PostOfficeColor[i] 	   =1.0;
					PoliceStationColor[i]  =1.0;
					ApartmentsColor[i] 	   =1.0;
					SchoolColor[i] 		   =1.0;
					BankColor[i] 		   =1.0;
					ShopColor[i] 		   =1.0;
					SupermarketColor[i]	   =1.0;
					CoffeShopColor[i] 	   =1.0;
				}
				glutPostRedisplay();
			}
			else if(480 <=x && x<=480+redBoxWidth && 625<=y && y<=625+redBoxHeight)
			{
				ApartmentsColor[0] = 0.0;
				ApartmentsColor[1] = 1.0;
				ApartmentsColor[2] = 1.0;

				for(int i=0;i<3;i++)
				{
					PayPhoneColor[i]       =1.0;
					ParkColor[i]		   =1.0;
					PostOfficeColor[i] 	   =1.0;
					PoliceStationColor[i]  =1.0;
					LibraryColor[i] 	   =1.0;
					SchoolColor[i] 		   =1.0;
					BankColor[i] 		   =1.0;
					ShopColor[i] 		   =1.0;
					SupermarketColor[i]	   =1.0;
					CoffeShopColor[i] 	   =1.0;
				}
				glutPostRedisplay();
			}
			else if(560 <=x && x<=560+redBoxWidth && 625<=y && y<=625+redBoxHeight)
			{
				SchoolColor[0] = 0.0;
				SchoolColor[1] = 1.0;
				SchoolColor[2] = 1.0;

				for(int i=0;i<3;i++)
				{
					PayPhoneColor[i]       =1.0;
					ParkColor[i]		   =1.0;
					PostOfficeColor[i] 	   =1.0;
					PoliceStationColor[i]  =1.0;
					LibraryColor[i] 	   =1.0;
					ApartmentsColor[i] 	   =1.0;
					BankColor[i] 		   =1.0;
					ShopColor[i] 		   =1.0;
					SupermarketColor[i]	   =1.0;
					CoffeShopColor[i] 	   =1.0;
				}
				glutPostRedisplay();
			}
			else if(640 <=x && x<=640+redBoxWidth && 625<=y && y<=625+redBoxHeight)
			{
				BankColor[0] = 0.0;
				BankColor[1] = 1.0;
				BankColor[2] = 1.0;

				for(int i=0;i<3;i++)
				{
					PayPhoneColor[i]       =1.0;
					ParkColor[i]		   =1.0;
					PostOfficeColor[i] 	   =1.0;
					PoliceStationColor[i]  =1.0;
					LibraryColor[i] 	   =1.0;
					ApartmentsColor[i] 	   =1.0;
					SchoolColor[i] 		   =1.0;
					ShopColor[i] 		   =1.0;
					SupermarketColor[i]	   =1.0;
					CoffeShopColor[i] 	   =1.0;
				}
				glutPostRedisplay();
			}
			else if(720 <=x && x<=720+redBoxWidth && 625<=y && y<=625+redBoxHeight)
			{
				ShopColor[0] = 0.0;
				ShopColor[1] = 1.0;
				ShopColor[2] = 1.0;

				for(int i=0;i<3;i++)
				{
					PayPhoneColor[i]       =1.0;
					ParkColor[i]		   =1.0;
					PostOfficeColor[i] 	   =1.0;
					PoliceStationColor[i]  =1.0;
					LibraryColor[i] 	   =1.0;
					ApartmentsColor[i] 	   =1.0;
					SchoolColor[i] 		   =1.0;
					BankColor[i] 		   =1.0;
					SupermarketColor[i]	   =1.0;
					CoffeShopColor[i] 	   =1.0;
				}
				glutPostRedisplay();
			}
			else if(800 <=x && x<=800+redBoxWidth && 625<=y && y<=625+redBoxHeight)
			{
				SupermarketColor[0] = 0.0;
				SupermarketColor[1] = 1.0;
				SupermarketColor[2] = 1.0;

				for(int i=0;i<3;i++)
				{
					PayPhoneColor[i]       =1.0;
					ParkColor[i]		   =1.0;
					PostOfficeColor[i] 	   =1.0;
					PoliceStationColor[i]  =1.0;
					LibraryColor[i] 	   =1.0;
					ApartmentsColor[i] 	   =1.0;
					SchoolColor[i] 		   =1.0;
					BankColor[i] 		   =1.0;
					ShopColor[i] 		   =1.0;
					CoffeShopColor[i] 	   =1.0;
				}
				glutPostRedisplay();
			}
			else if(880 <=x && x<=880+redBoxWidth && 625<=y && y<=625+redBoxHeight)
			{
				CoffeShopColor[0] = 0.0;
				CoffeShopColor[1] = 1.0;
				CoffeShopColor[2] = 1.0;

				for(int i=0;i<3;i++)
				{
					PayPhoneColor[i]       =1.0;
					ParkColor[i]		   =1.0;
					PostOfficeColor[i] 	   =1.0;
					PoliceStationColor[i]  =1.0;
					LibraryColor[i] 	   =1.0;
					ApartmentsColor[i] 	   =1.0;
					SchoolColor[i] 		   =1.0;
					BankColor[i] 		   =1.0;
					ShopColor[i] 		   =1.0;
					SupermarketColor[i]	   =1.0;
				}
				glutPostRedisplay();
			}
		}
		break;


	case GLUT_RIGHT_BUTTON:
		if(state==GLUT_DOWN)
		{
			mouseCurButton = button;
			mouseCurPositionX = x;
			mouseCurPositionY = y;
		}
		break;
	default:
		break;
	}
}
void mouseMotionControl(int x, int y)
{
	if(mouseCurButton == GLUT_RIGHT_BUTTON)
	{

		int vectorY =0;

		vectorY = (y - mouseCurPositionY);

		if(vectorY >0)//위에서 아래로
		{

			//짝수번 색 바꿈
			ParkColor[0]		   =0.0;

			PoliceStationColor[0]  =0.0;

			ApartmentsColor[0] 	   =0.0;

			BankColor[0]           =0.0;

			SupermarketColor[0]	   =0.0;



			for(int i=0;i<3;i++)//홀수번 색 없앰
			{
				PayPhoneColor[i]       =1.0;

				PostOfficeColor[i] 	   =1.0;

				LibraryColor[i] 	   =1.0;

				SchoolColor[i] 		   =1.0;

				ShopColor[i] 		   =1.0;

				CoffeShopColor[i] 	   =1.0;
			}

			glutPostRedisplay();
		}

		else//아래에서 위로
		{
			//홀수번 색 바꿈
			PayPhoneColor[0]       =0.0;

			PostOfficeColor[0] 	   =0.0;

			LibraryColor[0] 	   =0.0;

			SchoolColor[0] 		   =0.0;

			ShopColor[0] 		   =0.0;

			CoffeShopColor[0] 	   =0.0;


			for(int i=0;i<3;i++)//짝수번 색 없앰
			{
				
				ParkColor[i]		   =1.0;
				
				PoliceStationColor[i]  =1.0;
				
				ApartmentsColor[i] 	   =1.0;
				
				BankColor[i]           =1.0;
				
				SupermarketColor[i]	   =1.0;
				
			}

			glutPostRedisplay();
		}
	}
<<<<<<< HEAD
	mouseCurPositionY = y;//기준점을 현재 마우스 커서로 변경
=======
	mouseCurPositionX = x;//기준점을 현재 마우스 커서로 변경
>>>>>>> origin/master
}
