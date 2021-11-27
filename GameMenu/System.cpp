//
//  System.cpp
//  GameMenu
//
//  Created by HocRiser on 2021/11/27.
//  Copyright 2021 HocRiser. All rights reserved.
//

// https://blog.csdn.net/shawnkong/article/details/36658177

#include <cstdio>
#include <cstdlib>
#include "System.h"

#if (defined _WIN64) || (defined _WIN32)

void cls(){
    system("cls");
}

#else

int getch(){
    struct termios tm, tm_old;
    int fd = 0, ch;
    if (tcgetattr(fd, &tm) < 0) {
        return -1;
    }
    tm_old = tm;
    cfmakeraw(&tm);
    if (tcsetattr(fd, TCSANOW, &tm) < 0) {
        return -1;
    }
    ch = getchar();
    if (tcsetattr(fd, TCSANOW, &tm_old) < 0) {
        return -1;
    }
    return ch;
}

void cls(){
    system("clear");
}

#endif

void pause(){
    getch();
}
