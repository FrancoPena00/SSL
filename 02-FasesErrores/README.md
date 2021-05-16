1b. Analizar contenido de hello2.i 
    hello2.i contiene toda la biblioteca stdio.h ya que el preprocesador se encarga de reemplazar el include por toda la biblioteca. Tambien se ve como el preprocesador quita el comentario (medio) y lo reemplaza por un espacio. Ademas se ve como se invoca a otras bibliotecas y se indica apartir de que archivo fuente se preprocesó

1d. Investigar int printf(const char * restric s, ...);
    Esa expresion de printf es como esta definada en el contrato (stdio.h) donde const char quiza no tiene tanta relevancia, es un tipo de dato.Pero * restric s indica que el objecto apuntado por s solo será apuntado por s, es decir nadie podra acceder a *s excepto s.

1e. Indicar diferencias entre hello3.c y hello3.i
    Las diferencias son pocas, lo que respecta al main son nulas. En el hello3.i en el inicio del archivo se agregaron las referencia al archivo fuente y al CLI 

2.c Indicar brevemente el objetvo del lenguaje ensamblador (hello4.s)
    El lenguaje ensamblador es un intermediario entre el archivo fuente preprocesado y el codigo objeto que es el que entiende el procesador. Basicamente el lenguaje ensamblador muestra todas las instrucciones del programa de una manera que todavia nosotros lo podamos entender y saber que linea se corresponde con la de nuestro archivo fuente. Si bien el codigo ensamblador no es obligatorio pero este favorece a que nuestro programa sea portable porque nosotros podriamos compilar nuestro archivo fuente en cualquier maquina y el compilador en este caso se encargaria de generar un codigo ensamblador que nuestra maquina entienda sin tener que modificar nuestro archivo fuente.

3.c Analizar resultado del ejecutable hello5.exe
    El resultado no es el esperado y ademas va cambiando ya que nunca le cambiamos el valor al argumento que luego se muestra por consola. Por ende, el parametro toma valores de espacios de memorias ya pisados o no de manera que el resultado será impredecible.

5.b Explicar porque funciona hello7.exe
    Funciona porque el linker agrega la biblioteca estandar, por eso no es necesaria agregarla en el archivo fuente

6.b Como se puede generar un programa apartir de dos archivos fuente
    gcc -std=c18 archivofuente1.c archivofuente2.c -o nombre_del_ejecutable

6.c Que ocurre si eliminamos o agregamos argumentos de la invocacion de prontf 
    Si agregamos parámetros no va a pasar nada ya que prontf invoca a printf. En el caso de eliminar parámetros como mucho nos pasará algo similar 3.c. No habrá error, pero si eliminamos el argumento numerico que luego printf usa para agregarlo a la cadena de char entonces simplemente aparecerá un numero aleatorio.

6.d Que ocurre si eliminamos o agregamos argumentos de la invocacion de prontf pero ahora con contrato
    gcc client.c provider.c -o name_of_executable 
    Si eliminamos : ERROR- too few arguments to function 'prontf'
    Si agregamos  : ERROR- too many arguments to function 'prontf'
    Directamente no genera ejecutable y devuelve un error, como debe ser ya que no se esta cumpliendo el contrato
    iv. Que ventaja da incluir el contrato en los clientes y en el proveedor.
        La ventaja es que se debe cumplir, en el caso de los clientes, la invocacion a raja tabla con respecto a la cantidad de argumentos y al tipo de dato. En el proveedor tambien es una ventaja porque el proveedor tambien se puede equivocar al querer implementar la funcion por eso tener que respetar el contrato le puede servir de ayuda.


