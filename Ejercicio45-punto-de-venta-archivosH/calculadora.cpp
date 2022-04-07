/* 
    Autor:       Jonatan Amaya
    Universidad: UNAH-VS
    Carrera:     Licenciatura en Informatica Administrativa
    Hora:        19:00 - 20:00
    Catedratico: Master Billy Fernandez
    Clase:       Lenguaje de Programacion I
*/ 
int sumar (int a, int b)
{
    return a + b;
} 
int restar (int a, int b)
{
    return a - b;
}
int calcular(int a, int b, char operador)
{
    if (operador == '+')
    {
    return sumar(a, b);  
    }
    throw "operdor no valido";
}