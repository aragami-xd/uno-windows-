#ifndef INTERFACE_H
#define INTERFACE_H

#include <chrono>
#include <thread>
#include <iostream>
#include <Windows.h>


//user interface functions
void animationDelay(int length);        
void clearConsole();
void rgb(int color);			//linustechtips and the PCMR community will be proud
void countdownTimer(int length);

#endif