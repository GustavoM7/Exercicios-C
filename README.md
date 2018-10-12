# Exercicios-C

#### Assuntos
- Lista 1: *Variáveis, Operadores e Condicionais*
- Lista 2: *Laços, Funções e Ponteiros*
- Lista 3: *Vetores, Alocação Dinâmica e Cadeia de Caracteres*
- Lista 4: *Tipos Estruturados e Tipos Abstratos de Dados* (fazendo)

#### Comandos (GNU/Linux)
- Compilação simples:

	*~$ gcc nome_arquivo.c -o nomeexecutavel.bin*

- Compilação com parâmetro:

	*~$ gcc nome_arquivo.c -o nomeexecutavel.bin -lm*

- *Uso de depuração*:

	*~$ gcc nome_arquivo.c -o nomeexecutavel.bin -g*

	*~$ gdb nomeexecutavel.bin*

	*(gdb) run* 

- Compilação em objeto:

	*~$ gcc -c nome_arquivo.c -o nomeobjeto.o*

- Gerar executável com ligação de objetos:

	*~$ gcc -o nome_executavel.bin objeto1.o objeto2.o objeto3.o*
