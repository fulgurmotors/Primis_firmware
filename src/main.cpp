#include<iostream>
#include "main.hpp"
#include "BLC/battery.hpp"
extern "C" {
#include <pigpio.h>
}

int main(int argc, char* argv[]){
    char deviceName[] = "dev/tty/...";

    int a = batteryPercentage(deviceName);
}
