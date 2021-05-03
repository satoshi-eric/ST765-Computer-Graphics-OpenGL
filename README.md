# ST765-Computer-Graphics-OpenGL
Repositório para atividades práticas da disciplina ST765 - Computação gráfica da Unicamp com com o OpenGL.

## Instalando OpenGL no Windows
Para OpenGL no Windows, instalar o MimGW via [sourcefourge](https://sourceforge.net/projects/mingw/) ou [chocolatery](https://chocolatey.org/install).

Na pasta `dependencies` estão todos os arquivos necessários para o desenvolvimento com OpenGL.
- Todos os arquivos da pasta `dependencies/GL` devem ser colocados na pasta `mingw64\x86_64-w64-mingw32\include\GL`
- Na pasta `dependencies/lib`, há arquivos para 32-bit e 64-bit. Colocar os arquivos na pasta `mingw64/lib` dependendo da arquitetura do compilador.
- Na pasta `bin`, há arquivos `.ddl` para 32-bit e 64-bit. Colocar os arquivos na pasta `C:\Windows\System32` dependendo da arquitetura do sistema operacional

## Estrutura dos diretórios
Os diretórios de atividades estão organizados em
- **bin:** Contém todos os binários compilados: um `main.o` e um `main.exe`
- **src:** Contém o código fonte. Haverá um código `main.c` que será compilado e podem haver outras bibliotecas estáticas `.h`
- **doc:** Contém `docs`, `pdfs`, `imagens`, etc, necessários às atividades
Outros diretórios terão suas próprias estruturas

<!--
## Rodando os programas
Dentro do diretório raíz do repositório, há uma script `run.ps1`. Instruções de uso serão dadas quando tentar rodá-lo. Para usá-lo, use o comando
```powershell
./run.ps1 -name [name] -option [option]
```
- **[name]:** Nome do diretório do programa
- **[option]:** Uma das 3 opções a seguir:
  - **build:** compila o programa do diretório `[name]/src` e o coloca no diretório `[name]/bin`
  - **run:** roda o programa do diretório `[name]/bin`
  - **remove:** remove todos os arquivos do diretório `[name]/bin`
    
-->
    
Programas desenvolvidos:
1. line
2. fill
3. airplane
