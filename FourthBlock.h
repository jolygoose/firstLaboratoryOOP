#pragma once

#ifndef _FOURTHBLOCK_H_
#define _FOURTHBLOCK_H_

enum class FourthBlockTasks
{
	First = 49,
	Second = 50,
	Third = 51,
	Fourth = 52,
	Fifth = 53,
	Sixth = 54,
	Seventh = 55,
	Eighth = 56,
	Exit = 27
};

void FooFirst(double a);

void FooSecond(double& a);

void FooThird(double* a);

void FourthBlockMain();

#endif // !_FOURTHBLOCK_H_