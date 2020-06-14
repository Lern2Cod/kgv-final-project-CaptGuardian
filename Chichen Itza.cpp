

#include <iostream>
#include <glut.h>

float fx = 2.5, fy = 2, fz = 5.5; // koordinat posisi yang memandang (from where)
float tx = 0, ty = 0, tz = 0; // koordinat tujuan pandang (to where)
//float sudut = 0;
float yp = 0;
void LV()
{
	gluLookAt(fx, fy, fz, // melihat dari mana
		tx, ty, tz, // melihat ke mana
		0, 1, 0); // up vector
	GLfloat light_position[] = { 0, 50, 100, 0.0 }; // Posisi sumber cahaya
	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE);
	glEnable(GL_LIGHTING); //pencahayaan
	glEnable(GL_LIGHT0); //pencahayaan
	glEnable(GL_DEPTH_TEST);//efek 3d
	glEnable(GL_COLOR_MATERIAL); //mewarnai benda 
}
void lapis1()
{
	glBegin(GL_POLYGON); //tutup atas
	glColor3ub(166, 165, 159);
	glVertex3f(-1.8, -0.7, -1.7); glVertex3f(1.8, -0.7, -1.7);
	glVertex3f(1.8, -0.7, 2.2); glVertex3f(-1.8, -0.7, 2.2);
	glEnd();
	glBegin(GL_POLYGON); //belakang
	glColor3ub(215, 215, 215);
	glVertex3f(-1.8, -0.7, -1.7); glVertex3f(1.8, -0.7, -1.7);
	glVertex3f(2, -1, -2); glVertex3f(-2, -1, -2);
	glEnd();
	glBegin(GL_POLYGON); //tutup bawah
	glColor3ub(166, 165, 159);
	glVertex3f(-2, -1, -2); glVertex3f(2, -1, -2);
	glVertex3f(2, -1, 2.5); glVertex3f(-2, -1, 2.5);
	glEnd();
	glBegin(GL_POLYGON); //depan
	glColor3ub(215, 215, 215);
	glVertex3f(-1.8, -0.7, 2.2); glVertex3f(1.8, -0.7, 2.2);
	glVertex3f(2, -1, 2.5); glVertex3f(-2, -1, 2.5);
	glEnd();
	glBegin(GL_POLYGON); //kanan
	glColor3ub(172, 174, 156);
	glVertex3f(1.8, -0.7, 2.2); glVertex3f(1.8, -0.7, -1.7);
	glVertex3f(2, -1, -2); glVertex3f(2, -1, 2.5);
	glEnd();
	glBegin(GL_POLYGON); //kiri
	glColor3ub(172, 174, 156);
	glVertex3f(-1.8, -0.7, 2.2); glVertex3f(-1.8, -0.7, -1.7);
	glVertex3f(-2, -1, -2); glVertex3f(-2, -1, 2.5);
	glEnd();
	
}
void lapis2()
{
	glBegin(GL_POLYGON); //tutup atas
	glColor3ub(166, 165, 159);
	glVertex3f(-1.5, -0.4, -1.3); glVertex3f(1.5, -0.4, -1.3);
	glVertex3f(1.5, -0.4, 1.8); glVertex3f(1.5, -0.4, 1.8);
	glEnd();
	glBegin(GL_POLYGON); //belakang
	glColor3ub(215, 215, 215);
	glVertex3f(-1.5, -0.4, -1.3); glVertex3f(1.5, -0.4, -1.3);
	glVertex3f(1.7, -0.7, -1.6); glVertex3f(-1.7, -0.7, -1.6);
	glEnd();
	glBegin(GL_POLYGON); //tutup bawah
	glColor3ub(166, 165, 159);
	glVertex3f(-1.7, -0.7, -1.6); glVertex3f(1.7, -0.7, -1.6);
	glVertex3f(1.7, -0.7, 2.1); glVertex3f(-1.7, -0.7, 2.1);
	glEnd();
	glBegin(GL_POLYGON); //depan
	glColor3ub(215, 215, 215);
	glVertex3f(-1.5, -0.4, 1.8); glVertex3f(1.5, -0.4, 1.8);
	glVertex3f(1.7, -0.7, 2.1); glVertex3f(-1.7, -0.7, 2.1);
	glEnd();
	glBegin(GL_POLYGON); //kanan
	glColor3ub(172, 174, 156);
	glVertex3f(1.5, -0.4, 1.8); glVertex3f(1.5, -0.4, -1.3);
	glVertex3f(1.7, -0.7, -1.6); glVertex3f(1.7, -0.7, 2.1);
	glEnd();
	glBegin(GL_POLYGON); //kiri
	glColor3ub(172, 174, 156);
	glVertex3f(-1.5, -0.4, 1.8); glVertex3f(-1.5, -0.4, -1.3);
	glVertex3f(-1.7, -0.7, -1.6); glVertex3f(-1.7, -0.7, 2.1);
	glEnd();

}
void lapis3()
{
	glBegin(GL_POLYGON); //tutup atas
	glColor3ub(166, 165, 159);
	glVertex3f(-1.2, -0.1, -0.9); glVertex3f(1.2, -0.1, -0.9);
	glVertex3f(1.2, -0.1, 1.4); glVertex3f(-1.2, -0.1, 1.4);
	glEnd();
	glBegin(GL_POLYGON); //belakang
	glColor3ub(215, 215, 215);
	glVertex3f(-1.2, -0.1, -0.9); glVertex3f(1.2, -0.1, -0.9);
	glVertex3f(1.4, -0.4, -1.2); glVertex3f(-1.4, -0.4, -1.2);
	glEnd();
	glBegin(GL_POLYGON); //tutup bawah
	glColor3ub(166, 165, 159);
	glVertex3f(-1.4, -0.4, -1.2); glVertex3f(1.4, -0.4, -1.2);
	glVertex3f(1.4, -0.4, 1.7); glVertex3f(-1.4, -0.4, 1.7);
	glEnd();
	glBegin(GL_POLYGON); //depan
	glColor3ub(215, 215, 215);
	glVertex3f(-1.2, -0.1, 1.4); glVertex3f(1.2, -0.1, 1.4);
	glVertex3f(1.4, -0.4, 1.7); glVertex3f(-1.4, -0.4, 1.7);
	glEnd();
	glBegin(GL_POLYGON); //kanan
	glColor3ub(172, 174, 156);
	glVertex3f(1.2, -0.1, 1.4); glVertex3f(1.2, -0.1, -0.9);
	glVertex3f(1.4, -0.4, -1.2); glVertex3f(1.4, -0.4, 1.7);
	glEnd();
	glBegin(GL_POLYGON); //kiri
	glColor3ub(172, 174, 156);
	glVertex3f(-1.2, -0.1, 1.4); glVertex3f(-1.2, -0.1, -0.9);
	glVertex3f(-1.4, -0.4, -1.2); glVertex3f(-1.4, -0.4, 1.7);
	glEnd();

}
void lapis4()
{
	glBegin(GL_POLYGON); //tutup atas
	glColor3ub(166, 165, 159);
	glVertex3f(-0.9, 0.2, -0.5); glVertex3f(0.9, 0.2, -0.5);
	glVertex3f(0.9, 0.2, 1); glVertex3f(-0.9, 0.2, 1);
	glEnd();
	glBegin(GL_POLYGON); //belakang
	glColor3ub(215, 215, 215);
	glVertex3f(-0.9, 0.2, -0.5); glVertex3f(0.9, 0.2, -0.5);
	glVertex3f(1.1, -0.1, -0.8); glVertex3f(-1.1, -0.1, -0.8);
	glEnd();
	glBegin(GL_POLYGON); //tutup bawah
	glColor3ub(166, 165, 159);
	glVertex3f(-1.1, -0.1, -0.8); glVertex3f(0.9, 0.2, -0.5);
	glVertex3f(1.1, -0.1, 1.3); glVertex3f(-1.1, -0.1, 1.3);
	glEnd();
	glBegin(GL_POLYGON); //depan
	glColor3ub(215, 215, 215);
	glVertex3f(-0.9, 0.2, 1); glVertex3f(0.9, 0.2, 1);
	glVertex3f(1.1, -0.1, 1.3); glVertex3f(-1.1, -0.1, 1.3);
	glEnd();
	glBegin(GL_POLYGON); //kanan
	glColor3ub(172, 174, 156);
	glVertex3f(0.9, 0.2, 1); glVertex3f(0.9, 0.2, -0.5);
	glVertex3f(1.1, -0.1, -0.8); glVertex3f(1.1, -0.1, 1.3);
	glEnd();
	glBegin(GL_POLYGON); //kiri
	glColor3ub(172, 174, 156);
	glVertex3f(-0.9, 0.2, 1); glVertex3f(-0.9, 0.2, -0.5);
	glVertex3f(-1.1, -0.1, -0.8); glVertex3f(-1.1, -0.1, 1.3);
	glEnd();

}
void lapis5()
{
	glBegin(GL_POLYGON); //tutup atas
	glColor3ub(166, 165, 159);
	glVertex3f(-0.6, 0.5, -0.1); glVertex3f(0.6, 0.5, -0.1);
	glVertex3f(0.6, 0.5, 0.6); glVertex3f(-0.6, 0.5, 0.6);
	glEnd();
	glBegin(GL_POLYGON); //belakang
	glColor3ub(215, 215, 215);
	glVertex3f(-0.6, 0.5, -0.1); glVertex3f(0.6, 0.5, -0.1);
	glVertex3f(0.8, 0.2, -0.4); glVertex3f(-0.8, 0.2, -0.4);
	glEnd();
	glBegin(GL_POLYGON); //tutup bawah
	glColor3ub(166, 165, 159);
	glVertex3f(0.8, 0.2, -0.4); glVertex3f(0.8, 0.2, -0.4);
	glVertex3f(0.8, 0.2, 0.9); glVertex3f(-0.8, 0.2, 0.9);
	glEnd();
	glBegin(GL_POLYGON); //depan
	glColor3ub(215, 215, 215);
	glVertex3f(-0.6, 0.5, 0.6); glVertex3f(0.6, 0.5, 0.6);
	glVertex3f(0.8, 0.2, 0.9); glVertex3f(-0.8, 0.2, 0.9);
	glEnd();
	glBegin(GL_POLYGON); //kanan
	glColor3ub(172, 174, 156);
	glVertex3f(0.6, 0.5, 0.6); glVertex3f(0.6, 0.5, -0.1);
	glVertex3f(0.8, 0.2, -0.4); glVertex3f(0.8, 0.2, 0.9);
	glEnd();
	glBegin(GL_POLYGON); //kiri
	glColor3ub(172, 174, 156);
	glVertex3f(-0.6, 0.5, 0.6); glVertex3f(-0.6, 0.5, -0.1);
	glVertex3f(-0.8, 0.2, -0.4); glVertex3f(-0.8, 0.2, 0.9);
	glEnd();

}


void puncak()
{
	glBegin(GL_POLYGON); //tutup atas
	glColor3ub(166, 165, 159);
	glVertex3f(-0.3, 0.8, 0); glVertex3f(0.3, 0.8, 0);
	glVertex3f(0.3, 0.8, 0.5); glVertex3f(-0.3, 0.8, 0.5);
	glEnd();
	glBegin(GL_POLYGON); //belakang
	glColor3ub(215, 215, 215);
	glVertex3f(-0.3, 0.8, 0); glVertex3f(0.3, 0.8, 0);
	glVertex3f(0.3, 0.5, 0); glVertex3f(-0.3, 0.5, 0);
	glBegin(GL_POLYGON); //tutup bawah
	glColor3ub(166, 165, 159);
	glVertex3f(0.3, 0.5, 0); glVertex3f(0.3, 0.5, 0);
	glVertex3f(0.3, 0.5, 0.5); glVertex3f(-0.3, 0.5, 0.5);
	glEnd();
	glBegin(GL_POLYGON); //depan
	glColor3ub(215, 215, 215);
	glVertex3f(-0.3, 0.8, 0.5); glVertex3f(0.3, 0.8, 0.5);
	glVertex3f(0.3, 0.5, 0.5); glVertex3f(-0.3, 0.5, 0.5);
	glEnd();
	glBegin(GL_POLYGON); //kanan
	glColor3ub(172, 174, 156);
	glVertex3f(0.3, 0.8, 0.5); glVertex3f(0.3, 0.8, 0);
	glVertex3f(0.3, 0.5, 0); glVertex3f(0.3, 0.5, 0.5);
	glEnd();
	glBegin(GL_POLYGON); //kiri
	glColor3ub(172, 174, 156);
	glVertex3f(-0.3, 0.8, 0.5); glVertex3f(-0.3, 0.8, 0);
	glVertex3f(-0.3, 0.5, 0); glVertex3f(-0.3, 0.5, 0.5);
	glEnd();
	glBegin(GL_POLYGON); //pintu depan
	glColor3ub(0, 0, 0);
	glVertex3f(-0.1, 0.6, 0.5); glVertex3f(0.1, 0.6, 0.5);
	glVertex3f(0.1, 0.5, 0.5); glVertex3f(-0.1, 0.5, 0.5);
	glEnd();
	glBegin(GL_POLYGON); //pintu kanan
	glColor3ub(0, 0, 0);
	glVertex3f(0.1, 0.6, 0.5); glVertex3f(0.1, 0.6, 0);
	glVertex3f(0.1, 0.5, 0); glVertex3f(0.1, 0.5, 0.5);
	glEnd();
}
void tanggadepan()
{
	glBegin(GL_POLYGON); //belakang
	glVertex3f(-0.3, 0.5, 0.6); glVertex3f(0.3, 0.5, 0.6);
	glVertex3f(0.3, -1, 0.6); glVertex3f(-0.3, -1, 0.6);
	glEnd();
	glBegin(GL_POLYGON); //depan
	glColor3ub(118, 118, 118);
	glVertex3f(-0.3, 0.5, 0.6); glVertex3f(0.3, 0.5, 0.6);
	glVertex3f(0.3, -1, 2.7); glVertex3f(-0.3, -1, 2.7);
	glEnd();
	glBegin(GL_POLYGON); //kanan
	glColor3ub(118, 118, 118);
	glVertex3f(0.3, 0.8, 0.5); glVertex3f(0.3, 0.8, 0);
	glVertex3f(0.3, 0.5, 0); glVertex3f(0.3, 0.5, 0.5);
	glEnd();
	glBegin(GL_POLYGON); //kiri
	glColor3ub(118, 118, 118);
	glVertex3f(-0.3, 0.5, 0.6); glVertex3f(-0.3, -1, 0.6);
	glVertex3f(-0.3, -1, 2.7); 
	glEnd();
}
void tanggakanan()
{
	glBegin(GL_POLYGON); //belakang
	glColor3ub(118, 118, 118);
	glVertex3f(0.6, 0.5, 0.6); glVertex3f(0.6, 0.5, -0.1);
	glVertex3f(-0.3, -1, -0.1);
	glEnd();
	glBegin(GL_POLYGON); //depan
	glColor3ub(118, 118, 118);
	glVertex3f(0.6, 0.5, 0.6); glVertex3f(2.2, -1, 0.6);
	glVertex3f(0.6, -1, 0.6);
	glEnd();
	glBegin(GL_POLYGON); //kanan
	glColor3ub(118, 118, 118);
	glVertex3f(0.6, 0.5, 0.6); glVertex3f(0.6, 0.5, -0.1);
	glVertex3f(2.2, -1, -0.1); glVertex3f(2.2, -1, 0.6);
	glEnd();
	glBegin(GL_POLYGON); //kiri
	glColor3ub(118, 118, 118);
	glVertex3f(0.6, 0.5, 0.6); glVertex3f(0.6, 0.5, -0.1);
	glVertex3f(-0.3, -1, -0.1); glVertex3f(0.6, -1, 0.6);
	glEnd();
}

void tanggakiri()
{

	glBegin(GL_POLYGON); //belakang
	glColor3ub(118, 118, 118);
	glVertex3f(-0.6, 0.5, -0.1); glVertex3f(-0.6, -1, -0.1);
	glVertex3f(-2.2, -1, -0.1);
	glEnd();
	glBegin(GL_POLYGON); //depan
	glColor3ub(118, 118, 118);
	glVertex3f(-0.6, 0.5, 0.6); glVertex3f(-0.6, -1, 0.6);
	glVertex3f(-2.2, -1, 0.6);
	glEnd();
	glBegin(GL_POLYGON); //kanan
	glColor3ub(118, 118, 118);
	glVertex3f(-0.6, 0.5, 0.6); glVertex3f(-0.6, 0.5, -0.1);
	glVertex3f(-0.6, -1, -0.1); glVertex3f(-0.6, -1, 0.6);
	glEnd();
	glBegin(GL_POLYGON); //kiri
	glColor3ub(118, 118, 118);
	glVertex3f(-0.6, 0.5, 0.6); glVertex3f(-0.6, 0.5, -0.1);
	glVertex3f(-2.2, -1, -0.1); glVertex3f(-2.2, -1, 0.6);
	glEnd();
}

void tanggabelakang()
{
	glBegin(GL_POLYGON); //belakang
	glColor3ub(118, 118, 118);
	glVertex3f(-0.3, 0.5, -0.1); glVertex3f(0.3, 0.5, -0.1);
	glVertex3f(0.3, -1, -2.2); glVertex3f(-0.3, -1, -2.2);
	glEnd();
	glBegin(GL_POLYGON); //depan
	glColor3ub(118, 118, 118);
	glVertex3f(-0.3, 0.5, -0.1); glVertex3f(0.3, 0.5, -0.1);
	glVertex3f(0.3, -1, -0.1); glVertex3f(-0.3, -1, -0.1);
	glEnd();
	glBegin(GL_POLYGON); //kanan
	glColor3ub(118, 118, 118);
	glVertex3f(0.3, 0.5, -0.1); glVertex3f(0.3, -1, -2.2);
	glVertex3f(0.3, -1, -0.1);
	glEnd();
	glBegin(GL_POLYGON); //kiri
	glColor3ub(118, 118, 118);
	glVertex3f(-0.3, 0.5, -0.1); glVertex3f(-0.3, -1, -2.2);
	glVertex3f(-0.3, -1, -0.1);
	glEnd();
}

void tampil()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glLoadIdentity();
	LV();
	lapis1();
	lapis2();
	lapis3();
	lapis4();
	lapis5();
	puncak();
	tanggadepan();
	tanggakanan();
	tanggakiri();
	tanggabelakang();
	
	glutSwapBuffers();
}
void reshape(int w, int h)
{
	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(75, (GLsizei)w / (GLsizei)h, 1, 300);
	glMatrixMode(GL_MODELVIEW);
}
void timer(int value) //putara
{
	yp += 10;
	if (yp >= 360) {
		yp = 0;
	}
	glutPostRedisplay();
	glutTimerFunc(100, timer, 0); //10 ms - 1000/10 = 100 fps
}
void keyboard1(unsigned char key, int x, int y)
{
	switch (key)
	{
	case 'w':
		fy += 2;
		break;
	case 's':
		fy -= 2;
		break;
	case 'a':
		fx -= 2;
		break;
	case 'd':
		fx += 2;
		break;
	case 'o':
		fz -= 2;
		break;
	case 'l':
		fz += 2;
		break;
	case 27:
		exit(0);
		break;
	}
}
void keyboard2(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_PAGE_UP:
		tz -= 2;
		break;
	case GLUT_KEY_PAGE_DOWN:
		tz += 2;
		break;
	case GLUT_KEY_RIGHT:
		tx += 2;
		break;
	case GLUT_KEY_LEFT:
		tx -= 2;
		break;
	case GLUT_KEY_UP:
		ty += 2;
		break;
	case GLUT_KEY_DOWN:
		ty -= 2;
		break;
	}
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowPosition(50, 10);
	glutInitWindowSize(500, 500);
	glutCreateWindow("3D || KGV");
	glClearColor(1, 1, 1, 1);
	glOrtho(-2, 2, -2, 2, -2, 2);
	glutDisplayFunc(tampil);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard1);
	glutSpecialFunc(keyboard2);
	glutTimerFunc(1, timer, 0);
	glutMainLoop();
}