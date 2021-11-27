//
//  System.h
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

#ifndef System_h
#define System_h

#if (defined _WIN64) || (defined _WIN32)
#include <conio.h>
#else
#include <termios.h>
int getch();
#endif

void cls();

void pause();

#endif /* System_h */
