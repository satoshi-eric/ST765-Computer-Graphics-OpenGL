//gcc main.c -o main -lopengl32 -lglu32 -lfreeglut
//./main

#include <stdlib.h>
#include <GL/glut.h>
#include <GL/freeglut.h>

static int rot = 0;
static int zoom = 1;

void init(void){
	glClearColor (0.0, 0.0, 0.0, 0.0);
	glEnable(GL_DEPTH_TEST);
}

void display(void){
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glPushMatrix();

	glRotatef ((GLfloat) rot, 0.0, 1.0, 0.0);
	glScalef (zoom, zoom, zoom);

	/* Chão */
	glColor3f(0.3,0.3,0.3);
	glPushMatrix();
	glScalef (8.0, 0.2, 10.0);
	glutSolidCube (1.0);
	glPopMatrix();

	/* Céu esquerda */
	glColor3f(0.5,0.8,1.0);
	glPushMatrix();
	glTranslatef (-4, 2.9, 0.0);
	glScalef (0.2, 6.0, 10.0);
	glutSolidCube (1.0);
	glPopMatrix();

	/*  Céu fundo */
	glColor3f(0.5,0.8,1.0);
	glPushMatrix();
	glTranslatef (0.0, 2.9, -5);
	glScalef (8.0, 6.0, 0.2);
	glutSolidCube (1.0);
	glPopMatrix();

	/* Nuvem 1 direita */
	glColor3f(0.9,0.9,0.9);
	glPushMatrix();
	glTranslatef (-3.5, 4.3, 0.3);
	glScalef (0.3, 0.3, 0.5);
	glutSolidSphere(1,100, 100);
	glPopMatrix();

	/* Nuvem 1 meio */
	glColor3f(0.9,0.9,0.9);
	glPushMatrix();
	glTranslatef (-3.5, 4.5, 0);
	glScalef (0.3, 0.4, 0.4);
	glutSolidSphere(1,100, 100);
	glPopMatrix();

	/* Nuvem 1 esquerda */
	glColor3f(0.9,0.9,0.9);
	glPushMatrix();
	glTranslatef (-3.5, 4.3, -0.3);
	glScalef (0.3, 0.3, 0.5);
	glutSolidSphere(1,100, 100);
	glPopMatrix();

	/* Base nuvem 1 */
	glColor3f(0.9,0.9,0.9);
	glPushMatrix();
	glTranslatef (-3.5, 4.23, 0);
	glScalef (0.5, 0.4, 0.8);
	glutSolidCube (1.0);
	glPopMatrix();

	/* Nuvem 2 direita */
	glColor3f(0.9,0.9,0.9);
	glPushMatrix();
	glTranslatef (-3.5, 3.3, 3.3);
	glScalef (0.3, 0.3, 0.5);
	glutSolidSphere(1,100, 100);
	glPopMatrix();

	/* Nuvem 2 meio */
	glColor3f(0.9,0.9,0.9);
	glPushMatrix();
	glTranslatef (-3.5, 3.5, 3.0);
	glScalef (0.3, 0.4, 0.4);
	glutSolidSphere(1,100, 100);
	glPopMatrix();

	/* Nuvem 2 esquerda */
	glColor3f(0.9,0.9,0.9);
	glPushMatrix();
	glTranslatef (-3.5, 3.3, 2.7);
	glScalef (0.3, 0.3, 0.5);
	glutSolidSphere(1,100, 100);
	glPopMatrix();

	/* Base nuvem 2 */
	glColor3f(0.9,0.9,0.9);
	glPushMatrix();
	glTranslatef (-3.5, 3.23, 3.0);
	glScalef (0.5, 0.4, 0.8);
	glutSolidCube (1.0);
	glPopMatrix();

	/* Nuvem 3 direita */
	glColor3f(0.9,0.9,0.9);
	glPushMatrix();
	glTranslatef (-3.5, 3.3, -3.7);
	glScalef (0.3, 0.3, 0.5);
	glutSolidSphere(1,100, 100);
	glPopMatrix();

	/* Nuvem 3 meio */
	glColor3f(0.9,0.9,0.9);
	glPushMatrix();
	glTranslatef (-3.5, 3.5, -4.0);
	glScalef (0.3, 0.4, 0.4);
	glutSolidSphere(1,100, 100);
	glPopMatrix();

	/* Nuvem 3 esquerda */
	glColor3f(0.9,0.9,0.9);
	glPushMatrix();
	glTranslatef (-3.5, 3.3, -4.3);
	glScalef (0.3, 0.3, 0.5);
	glutSolidSphere(1,100, 100);
	glPopMatrix();

	/* Base nuvem 3 */
	glColor3f(0.9,0.9,0.9);
	glPushMatrix();
	glTranslatef (-3.5, 3.23, -4.0);
	glScalef (0.5, 0.4, 0.8);
	glutSolidCube (1.0);
	glPopMatrix();

	/* Aeroporto */
	glColor3f(0.6,0.6,0.6);
	glPushMatrix();
	glTranslatef (-3, 1.1, 0);
	glScalef (1.8, 2, 4.0);
	glutSolidCube (1.0);
	glPopMatrix();

	/* Topo aeroporto */
	glColor3f(0.6,0.6,0.6);
	glPushMatrix();
	glTranslatef (-3, 1.6, 0);
	glScalef (0.3, 0.4, 0.4);
	glutSolidSphere(3,100, 100);
	glPopMatrix();

	/* Base torre */
	glColor3f(0.6,0.6,0.6);
	glPushMatrix();
	glTranslatef (-3, 1.2, 3);
	glScalef (0.6, 3, 0.6);
	glutSolidCube (1.0);
	glPopMatrix();

	/* Topo torre */
	glColor3f(0.6,0.6,0.6);
	glPushMatrix();
	glTranslatef (-3, 2.4, 3);
	glScalef (0.4, 0.26, 0.4);
	glutSolidSphere(1.6,100, 100);
	glPopMatrix();

	/* Pista */
	glColor3f(0.2,0.2,0.2);
	glPushMatrix();
	glTranslatef (0.7, 0.1, 0.0);
	glScalef (3.5, 0.01, 10.0);
	glutSolidCube (1.0);
	glPopMatrix();

	/* Corpo avião */
	glColor3f(0.2,0.2,0.9);
	glPushMatrix();
	glTranslatef (1, 0.5, -1);
	glScalef (0.15, 0.15, 0.03);
	glutSolidCylinder(2.0,70.0,20.0,10.0);
	glPopMatrix();

	/* Frente avião */
	glColor3f(0.2,0.2,0.9);
	glPushMatrix();
	glTranslatef (1, 0.5, 1);
	glScalef (0.3, 0.3, 0.7);
	glutSolidSphere(1,100, 100);
	glPopMatrix();

	/* Asa frente*/
	glColor3f(0.1,0.1,0.3);
	glPushMatrix();
	glTranslatef (1, 0.5, 0.5);
	glScalef (1.5, 0.1, 0.3);
	glutSolidSphere(1,100, 100);
	glPopMatrix();

	/* Asa trás*/
	glColor3f(0.1,0.1,0.3);
	glPushMatrix();
	glTranslatef (1, 0.5, -0.8);
	glScalef (0.8, 0.08, 0.2);
	glutSolidSphere(1,100, 100);
	glPopMatrix();

	/* Cabine */
	glColor3f(0.9,0.9,0.9);
	glPushMatrix();
	glTranslatef (1, 0.8, 0.5);
	glScalef (0.2, 0.1, 0.5);
	glutSolidSphere(1,100, 100);
	glPopMatrix();

	/* Hangar */
	glColor3f(0.1,0.1,0.1);
	glPushMatrix();
	glTranslatef (0.7, 1, -3.9);
	glScalef (4.0, 2, 2.0);
	glutSolidCube (1.0);
	glPopMatrix();

	glPopMatrix();
	glutSwapBuffers();
}

void reshape (int w, int h) {
	glViewport (0, 0, (GLsizei) w, (GLsizei) h);
	glMatrixMode (GL_PROJECTION);
	glLoadIdentity ();
	gluPerspective(65.0, (GLfloat) w/(GLfloat) h, 1.0, 50.0);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef (0.0, -3.0, -15);
}

void keyboard(unsigned char key, int x, int y) {
	switch (key) {
		case 'r':
			rot = (rot + 5) % 360;
			glutPostRedisplay();
		break;
		case 'R':
			rot = (rot - 5) % 360;
			glutPostRedisplay();
		break;
		case 'e':
			if(zoom > 1) {
				zoom -= 1;
				glutPostRedisplay();
			}
		break;
		case 'E':
			zoom += 1;
			glutPostRedisplay();
		break;
		case 27: // tecla Esc (encerra o programa)
			exit(0);
		break;
	}
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode (GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize (500, 500);
	glutInitWindowPosition (100, 100);
	glutCreateWindow (argv[0]);
	init ();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);
	glutMainLoop();

	return 0;
}