#include "../../MarlinCore.h"
#include "../../inc/MarlinConfigPre.h"
#include "../../inc/MarlinConfig.h"

#if ENABLED(MULTIBOARD)

#include "multiboard_core.h"

Multiboard multiboard;

void Multiboard::set_fan_speed(uint8_t slave_fan_id,uint8_t fan_speed){
    
    PORT_REDIRECT(SerialMask::All);
    SERIAL_ECHOLNPGM("SLAVE FAN SPEED SET", fan_speed);

}

#endif