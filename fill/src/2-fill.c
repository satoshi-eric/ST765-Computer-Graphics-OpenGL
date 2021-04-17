// gcc main.c -o main.exe -lfreeglut -lopengl32 -lglu32
#include <gl/freeglut.h>

GLenum displayMode = GL_LINE_STRIP;

void setOrangeColor() { glColor3f(1, 0.5, 0); }
void setWhiteColor() { glColor3f(1, 1, 1); }

void display(void) 
{
    // Malaha possui Um pixel para a direita para endireitá-la
    glClearColor(0, 0, 0, 0);
    glClear(GL_COLOR_BUFFER_BIT);
    for (int i=0; i<25; i++)
    {
        for(int j=0; j<25; j++)
        {
            glColor3f(1, 1, 1);
            glBegin(GL_LINE_LOOP);
                glVertex2i(0+j*10 + 1, 0 +i*10);
                glVertex2i(0+j*10 + 1, 10+i*10);
                glVertex2i(5+j*10 + 1, 5 +i*10);        
            glEnd();
            glBegin(GL_LINE_LOOP);
                glVertex2i(0 + j*10 + 1, 0+i*10);
                glVertex2i(5 + j*10 + 1, 5+i*10);
                glVertex2i(10+ j*10 + 1, 0+i*10);
            glEnd();
            glBegin(GL_LINE_LOOP);
                glVertex2i(10 + j*10 + 1, 0 +i*10);
                glVertex2i(5  + j*10 + 1, 5 +i*10);
                glVertex2i(10 + j*10 + 1, 10+i*10);
            glEnd();
            glBegin(GL_LINE_LOOP);
                glVertex2i(10 + j*10 + 1, 10+i*10);
                glVertex2i(0  + j*10 + 1, 10+i*10);
                glVertex2i(5  + j*10 + 1, 5 +i*10);
            glEnd();
        }
    }

    // Desenhando o peixe
    setOrangeColor();
    glBegin(displayMode);
        glVertex2i(60+1, 90);   
        glVertex2i(30+1, 60);   
        glVertex2i(30+1, 170);  
        glVertex2i(60+1, 140);  
    glEnd();
    
    setOrangeColor();
    glBegin(displayMode);
        glVertex2i(60+1 , 90);
        glVertex2i(60+1 , 140);
        glVertex2i(80+1 , 160);
        glVertex2i(120+1, 160);
        glVertex2i(140+1, 180);
        glVertex2i(160+1, 160);
        glVertex2i(170+1, 160);
        glVertex2i(170+1, 70);
        glVertex2i(80+1 , 70);
        glVertex2i(60+1 , 90);
    glEnd();
    
    setOrangeColor();
    glBegin(displayMode);
        glVertex2i(170+1, 160);
        glVertex2i(190+1, 160);
        glVertex2i(190+1, 140);
        glVertex2i(170+1, 140);
        glVertex2i(170+1, 160);
    glEnd();

    setOrangeColor();
    glBegin(displayMode);
        glVertex2i(170+1, 120);
        glVertex2i(190+1, 120);
        glVertex2i(190+1, 70);
        glVertex2i(120+1, 70);
    glEnd();

    setOrangeColor();
    glBegin(displayMode);
        glVertex2i(180+1, 70);
        glVertex2i(210+1, 70);
        glVertex2i(230+1, 90);
        glVertex2i(210+1, 110);
        glVertex2i(180+1, 110);
        glVertex2i(180+1, 70);
    glEnd();

    setOrangeColor();
    glBegin(displayMode);
        glVertex2i(190+1, 110);
        glVertex2i(190+1, 160);
        glVertex2i(200+1, 160);
        glVertex2i(200+1, 160);
        glVertex2i(230+1, 130);
        glVertex2i(210+1, 110);
    glEnd();
    
    setWhiteColor();
    glBegin(displayMode);
        glVertex2i(120+1, 70);
        glVertex2i(160+1, 70);
        glVertex2i(160+1, 160);
        glVertex2i(120+1, 160);
        glVertex2i(120+1, 70);
    glEnd();

    glFlush();
    
}

void keyboard(unsigned char key, int x, int y)
{
    if (key == 27)  
        exit(0);
    
}

void mouse(int button, int state, int x, int y) 
{
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
    {
        displayMode = displayMode ==  GL_LINE_STRIP ? GL_POLYGON : GL_LINE_STRIP;
    }
    glutPostRedisplay();
}

int main(int argc, char **argv)
{
    // Criando setup para criação da janela
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 0);
    glutCreateWindow("Preenchimento de regioes");

    // Setup para fundo da imagem
    glClearColor(1, 1, 1, 1);
    glOrtho(0, 256, 0, 256, -1, 1);
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMainLoop();
    return 0;
}