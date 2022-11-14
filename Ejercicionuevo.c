package com.mouredev.weeklychallenge2022

/*
 * Reto #0
 * EL FAMOSO "FIZZ BUZZ"
 * Fecha publicaci�n enunciado: 27/12/21
 * Fecha publicaci�n resoluci�n: 03/01/22
 * Dificultad: F�CIL
 * Enunciado: Escribe un programa que muestre por consola (con un print) los n�meros de 1 a 100 (ambos incluidos y con un salto de l�nea entre cada impresi�n), sustituyendo los siguientes:
 * - M�ltiplos de 3 por la palabra "fizz".
 * - M�ltiplos de 5 por la palabra "buzz".
 * - M�ltiplos de 3 y de 5 a la vez por la palabra "fizzbuzz".
 *
 * Informaci�n adicional:
 * - Usa el canal de nuestro discord (https://mouredev.com/discord) "??reto-semanal" para preguntas, dudas o prestar ayuda a la acomunidad.
 * - Puedes hacer un Fork del repo y una Pull Request al repo original para que veamos tu soluci�n aportada.
 * - Revisar� el ejercicio en directo desde Twitch el lunes siguiente al de su publicaci�n.
 * - Subir� una posible soluci�n al ejercicio el lunes siguiente al de su publicaci�n.
 *
 */

fun main() {

    for (index in 1..100) {
        val divisibleByThree = index % 3 == 0
        val divisibleByFive = index % 5 == 0
        if (divisibleByThree && divisibleByFive) {
            println("fizzbuzz")
        } else if (divisibleByThree) {
            println("fizz")
        } else if (divisibleByFive) {
            println("buzz")
        } else {
            println(index)
        }
    }
}


