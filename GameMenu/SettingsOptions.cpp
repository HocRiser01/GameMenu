//
//  SettingsOptions.cpp
//  GameMenu
//
//  Created by HocRiser on 2021/11/26.
//  Copyright 2021 HocRiser. All rights reserved.
//

#include <iostream>
#include "SettingsOptions.h"

int VolumnOpt::volumn = 0;
int ResolutionOpt::resolution = 0;

void VolumnOpt::inactive(){
    std::cout << "      [";
    for (int i = 0; i < 10; i ++){
        if (i <= volumn)
            std::cout << "===";
        else
            std::cout << "    ";
    }
    std::cout << ']' << std::endl;
}

void VolumnOpt::active(){
    std::cout << "==>  [";
    for (int i = 0; i < 10; i ++){
        if (i <= volumn)
            std::cout << "===";
        else
            std::cout << "    ";
    }
    std::cout << ']' << std::endl;
}

void VolumnOpt::louder(){
    if (volumn < 9) volumn ++;
}

void VolumnOpt::lower(){
    if (volumn > 0) volumn --;
}

void VolumnOpt::work(char op){
    if (op == 'd') louder();
    if (op == 'a') lower();
}

void ResolutionOpt::inactive(){
    switch (resolution){
        case 0:
            std::cout << "     > 1920×1080    1920×1200    1680×1050    1440×900" << std::endl;
            break;
        case 1:
            std::cout << "        1920×1080 > 1920×1200    1680×1050    1440×900" << std::endl;
            break;
        case 2:
            std::cout << "        1920×1080    1920×1200 > 1680×1050    1440×900" << std::endl;
            break;
        case 3:
            std::cout << "        1920×1080    1920×1200    1680×1050 > 1440×900" << std::endl;
            break;
    }
}

void ResolutionOpt::active(){
    switch (resolution){
        case 0:
            std::cout << "==> > 1920×1080    1920×1200    1680×1050    1440×900" << std::endl;
            break;
        case 1:
            std::cout << "==>    1920×1080 > 1920×1200    1680×1050    1440×900" << std::endl;
            break;
        case 2:
            std::cout << "==>    1920×1080    1920×1200 > 1680×1050    1440×900" << std::endl;
            break;
        case 3:
            std::cout << "==>    1920×1080    1920×1200    1680×1050 > 1440×900" << std::endl;
            break;
    }
}

void ResolutionOpt::upper(){
    if (resolution < 3) resolution ++;
}

void ResolutionOpt::lower(){
    if (resolution > 0) resolution --;
}

void ResolutionOpt::work(char op){
    if (op == 'd') upper();
    if (op == 'a') lower();
}

void QuitSettingsOpt::inactive(){
    std::cout << "        Quit" << std::endl;
}

void QuitSettingsOpt::active(){
    std::cout << "==>    Quit" << std::endl;
}
