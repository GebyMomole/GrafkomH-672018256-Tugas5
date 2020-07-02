#include <Windows.h>
#include<glut.h>


void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void ukuran(int, int);

int is_depth;


void init(void) {

	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	is_depth = 1;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(9.0);
	glLineWidth(6.0f);

}


void ukuran(int lebar, int panjang) {
	if (panjang == 0) panjang = 1;
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(50.0, lebar / panjang, 5.0, 500.0);
	glTranslatef(0.0, -5.0, -150.0);
	glMatrixMode(GL_MODELVIEW);

}

void tampil(void) {
	 glClearColor(0.5, 0.5, 0.5, 0.5);
	if (is_depth)
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else
		glClear(GL_COLOR_BUFFER_BIT);

	glEnable(GL_DEPTH_TEST);




	//atap depan
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-23, 20, 20);
	glVertex3f(0.0, 40, 20);
	glVertex3f(23, 20,20);
	glEnd();

	//pintu
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-4.0, -20.0, 20.0);
	glVertex3f(-4.0, -1.0, 20.0);
	glVertex3f(4.0, -1.0, 20.0);
	glVertex3f(4.0, -20.0, 20.0);
	glEnd();


	//jendela kiri
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-12.0, -10.0, 20.0);
	glVertex3f(-12.0, -1.0, 20.0);
	glVertex3f(-7.0, -1.0, 20.0);
	glVertex3f(-7.0, -10.0, 20.0);
	glEnd();



	//jendela kanan
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(12.0, -10.0, 20.0);
	glVertex3f(12.0, -1.0, 20.0);
	glVertex3f(7.0, -1.0, 20.0);
	glVertex3f(7.0, -10.0, 20.0);
	glEnd();

	 //atap belakang
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-23, 20, -20);
	glVertex3f(0.0, 40, -20);
	glVertex3f(23, 20, -20);
	glEnd();

	//depan
	glBegin(GL_QUADS);
	glColor3f(0.5, 1.0, 1.0);
	glVertex3f(-20.0, -20.0, 20.0);
	glVertex3f(-20.0, 20.0, 20.0);
	glVertex3f(20.0, 20.0, 20.0);
	glVertex3f(20.0, -20.0, 20.0);
	glEnd();

	//jendela belakang1
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(18.0, 18.0, -20.0);
	glVertex3f(18.0, 17.0, -20.0);
	glVertex3f(12.0, 17.0, -20.0);
	glVertex3f(12.0, 18.0, -20.0);
	glEnd();

	//jendela belakang2
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(18.0, 15.0, -20.0);
	glVertex3f(18.0, 14.0, -20.0);
	glVertex3f(12.0, 14.0, -20.0);
	glVertex3f(12.0, 15.0, -20.0);
	glEnd();

	//jendela belakang3
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(18.0, 12.0, -20.0);
	glVertex3f(18.0, 11.0, -20.0);
	glVertex3f(12.0, 11.0, -20.0);
	glVertex3f(12.0, 12.0, -20.0);
	glEnd();


	//belakang
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 0.0);
	glVertex3f(-20.0, -20.0, -20.0);
	glVertex3f(-20.0, 20.0, -20.0);
	glVertex3f(20.0, 20.0, -20.0);
	glVertex3f(20.0, -20.0, -20.0);
	glEnd();

	//jendela kanan1
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(20.0, 5.0, 10.0);
	glVertex3f(20.0, -10.0, 10.0);
	glVertex3f(20.0, -10.0, 15.0);
	glVertex3f(20.0, 5.0, 15.0);
	glEnd();

	//jendela kanan2
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(20.0, 5.0, 5.0);
	glVertex3f(20.0, -10.0, 5.0);
	glVertex3f(20.0, -10.0, -0.0);
	glVertex3f(20.0, 5.0, -0.0);
	glEnd();

	//jendela kanan3
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(20.0, 5.0, -5.0);
	glVertex3f(20.0, -10.0, -5.0);
	glVertex3f(20.0, -10.0, -10.0);
	glVertex3f(20.0, 5.0, -10.0);
	glEnd(); 

	//kanan
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(20.0, 20.0, 20.0);
	glVertex3f(20.0, -20.0, 20.0);
	glVertex3f(20.0, -20.0, -20.0);
	glVertex3f(20.0, 20.0, -20.0);
	glEnd();

	//jendela kiri1
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-20.0, 5.0, 10.0);
	glVertex3f(-20.0, -10.0, 10.0);
	glVertex3f(-20.0, -10.0, 15.0);
	glVertex3f(-20.0, 5.0, 15.0);
	glEnd();


	//jendela kiri2
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-20.0, 5.0, 5.0);
	glVertex3f(-20.0, -10.0, 5.0);
	glVertex3f(-20.0, -10.0, -0.0);
	glVertex3f(-20.0, 5.0, -0.0);
	glEnd();

	//jendela kiri3
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-20.0, 5.0, -5.0);
	glVertex3f(-20.0, -10.0, -5.0);
	glVertex3f(-20.0, -10.0, -10.0);
	glVertex3f(-20.0, 5.0, -10.0);
	glEnd();

	//kiri
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(-20.0, 20.0, 20.0);
	glVertex3f(-20.0, -20.0, 20.0);
	glVertex3f(-20.0, -20.0, -20.0);
	glVertex3f(-20.0, 20.0, -20.0);
	glEnd();

	//bawah
	glBegin(GL_QUADS);
	glColor3f(0.0, 1.5, 0.0);
	glVertex3f(-20.0, -20.0, 20.0);
	glVertex3f(20.0, -20.0, 20.0);
	glVertex3f(20.0, -20.0, -20.0);
	glVertex3f(-20.0, -20.0, -20.0);
	glEnd();

	//atap kanan
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(-0.0, 10.0 + 30.0, 20.0);
	glVertex3f(23.0, -20.0 + 40.0, 20.0);
	glVertex3f(23.0, -20.0 + 40.0, -20.0);
	glVertex3f(-0.0, 10.0 + 30.0, -20.0);
	glEnd();

	//atap kanan
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 0.0);
	glVertex3f(0.0, 10.0 + 30.0, 20.0);
	glVertex3f(-23.0, -20.0 + 40.0, 20.0);
	glVertex3f(-23.0, -20.0 + 40.0, -20.0);
	glVertex3f(0.0, 10.0 + 30.0, -20.0);
	glEnd();

	glutSwapBuffers();
}

void keyboard(unsigned char keybor, int x, int y) {

	switch (keybor)
	{

	case 's':
	case 'S':
		glRotatef(2.0, 0.0, 1.0, 0.0);
		break;
	case 'a':
	case 'A':
		glRotatef(-2.0, 0.0, 1.0, 0.0);
		break;

	}
	tampil();


}




int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("TUGAS RUMAH");
	init();
	glutDisplayFunc(tampil);
	glutKeyboardFunc(keyboard);
	glutReshapeFunc(ukuran);
	glutMainLoop();
	return 0;
}

