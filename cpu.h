#ifndef CPU_H
#define CPU_H

#include <stdint.h>

typedef struct registers {
    union {
        struct {
            uint8_t A;
            uint8_t F;
        };
        uint16_t AF;
    };
    union {
        struct {
            uint8_t B;
            uint8_t C;
        };
        uint16_t BC;
    };
    union {
        struct {
            uint8_t D;
            uint8_t E;
        };
        uint16_t DE;
    };
    union {
        struct {
            uint8_t H;
            uint8_t L;
        };
        uint16_t HL;
    };
    uint16_t SP;
    uint16_t PC;
} reg;



#endif