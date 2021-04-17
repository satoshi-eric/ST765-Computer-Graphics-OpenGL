#include <GL/glut.h>
#include <stdlib.h>

// prototipos das funcoes
void init(void);
void display(void);
void keyboard(unsigned char key, int x, int y);

// funcao principal
int main(int argc, char** argv){
glutInit(&argc, argv);                         // inicializa o glut
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);  // especifica uso de cores e buffers
glutInitWindowSize (256, 256);                 // especifica as dimensoes da janela
glutInitWindowPosition (100, 100);             // especifica aonde a janela aparece na tela
glutCreateWindow ("Desenhando uma linha");     // cria a janela
init();
glutDisplayFunc(display);                      // funcao que sera redesenhada pelo GLUT
glutKeyboardFunc(keyboard);                    // funcoes de teclado
glutMainLoop();                                // mostra todas as janelas criadas
return 0;
}

// definicao de cada funcao

void init(void){
  glClearColor(0.0, 0.0, 1.0, 1.0);    // cor de fundo
  glOrtho (0, 256, 0, 256, -1 ,1);     // modo de projecao ortogonal
} 

void display(void)
{
  glClear(GL_COLOR_BUFFER_BIT);               // limpa a janela
  glLineWidth(4.0); 
  glColor3f (1.0, 0.0, 0.0);                  // cor da linha
  // glBegin(GL_LINES);
  // glVertex2i(10, 10);
  // glVertex2i(10, 110);
  // glVertex2i(10, 110);
  // glVertex2i(110, 110);
  // glVertex2i(110, 110);
  // glVertex2i(110, 10);
  // glVertex2i(110, 10);
  // glVertex2i(10, 10);
  // glEnd();
  glBegin(GL_QUADS);
  glVertex2i(10, 10);
  glVertex2i(10, 110);
  glVertex2i(110, 110);
  glVertex2i(110, 10);
  glEnd();
  glFlush();
}

void keyboard(unsigned char key, int x, int y){
  switch (key) {
  case 'e':                                         // tecla Esc (encerra o programa)
	  exit(0);
	  break;
  case 'E':
    exit(0);
    break;
  }
}

/*

QUESTÃO 1
Substitua as coordenadas do ponto (200, 10) por (400,10). O que acontece? Justifique
  A reta sai para fora da tela pois a tela possui um tamanho de 256x256 pixels e a 
  reta possui um componete x de 400 pixels, fazendo a reta sair da tela

QUESTÃO 2
Como alterar a cor de fundo da janela gráfica de branca para azul? Apresente o comando
  glClearColor(0.0, 0.0, 1.0) onde os parâmetros são RGB e colocamos 1 para o blue tornando a janela azul

QUESTÃO 3
Desenhe um quadrado a partir da junção de 4 linhas.Apresente o trecho de código.Na sequência, 
desenhe um quadrado similar (mesmo valorde lado) por meio da substituição de 
“glBegin(GL_LINES); ”por “glBegin(GL_QUADS);”
  Código para GL_LINES
    glBegin(GL_LINES);
    glVertex2i(10, 10);
    glVertex2i(10, 110);
    glVertex2i(10, 110);
    glVertex2i(110, 110);
    glVertex2i(110, 110);
    glVertex2i(110, 10);
    glVertex2i(110, 10);
    glVertex2i(10, 10);
    glEnd();
  Código para GL_QUADS
    glBegin(GL_QUADS);
    glVertex2i(10, 10);
    glVertex2i(10, 110);
    glVertex2i(110, 110);
    glVertex2i(110, 10);
    glEnd();

QUESTÃO 4
Qual comando deve ser utilizado, e em que posição devo incluí-lo, para preencher o quadrado 
com a cor vermelho?
  A função glColor3f especifica a cor que deve ser preenchida. Para mudar o quadrado para vermelho, 
  passamos os parâmetros de RGB glColor3f(1.0, 0.0, 0.0)

QUESTÃO 5
Qual tecla deve ser escolhida para encerrar o programa? Altere esse trecho de código de 
modo que o programa seja encerrado teclando “e” ou “E”.
  A tecla que encerra o programa é a tecla 'esc' especificada pelo número 27 da tabela ASCII. 
  Código com alteração:
    void keyboard(unsigned char key, int x, int y){
      switch (key) {
      case 'e':                                         // tecla Esc (encerra o programa)
        exit(0);
        break;
      case 'E':
        exit(0);
        break;
      }
    }

*/