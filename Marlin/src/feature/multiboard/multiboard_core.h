#pragma once

#include "../../inc/MarlinConfigPre.h"
#include "../../MarlinCore.h"

class Multiboard {

    public:
       
        static void set_fan_speed(uint8_t slave_fan_id,uint8_t fan_speed);
        static void init();
        
        static void isr();
    private:



};

extern Multiboard multiboard;

