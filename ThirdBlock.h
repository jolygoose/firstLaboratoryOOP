#pragma once

#ifndef _THIRDBLOCK_H_
#define _THIRDBLOCK_H_

enum class ThirdBlockTasks
{
	Second = 49,
	Third = 50,
	Fourth = 51,
	Exit = 27
};

double GetPower(double base, int exponent);

void DemoGetPower(double base, int exponent);

void RoundToTens(int& value);

void ThirdBlockMain();

#endif // !_THIRDBLOCK_H_