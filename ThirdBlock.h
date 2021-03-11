#pragma once

#ifndef _THIRDBLOCK_H_
#define _THIRDBLOCK_H_

/// @brief Перечисление пунктов меню третьего блока заданий
enum class ThirdBlockTasks
{
	Second = 49,
	Third = 50,
	Fourth = 51,
	Exit = 27
};

/// @brief Рекурсивная функция, возводящая поступающее на вход число в 
/// поступающую на вход степень
/// 
/// @param base - основание
/// @param exponent - степень
/// 
/// @return Результат возведения числа в степень
double Power(double base, int exponent);

/// @brief Функция, обрабатывающая результат возведения числа в степень
/// 
/// @param base - основание
/// @param exponent - степень
/// 
/// @return Результат обработки
double GetPower(double base, int exponent);

/// @brief Функция, вызывающая функцию GetPower() и выводящая её результат
/// в формате 'base ^ exponent = result'
/// 
/// @param base - основание
/// @param exponent - степень
void DemoGetPower(double base, int exponent);

/// @brief Функция, округляющая поступающее на вход значение до десятков
/// 
/// @param value - число для округления
void RoundToTens(int& value);

/// @brief Функция-меню для работы с заданиями третьего блока
void ThirdBlockMain();

#endif // !_THIRDBLOCK_H_