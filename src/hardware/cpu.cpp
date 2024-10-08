#include "cpu.hpp"

e_Instructions CPU::get_instruction(uint8_t opcode){
    switch (opcode)
    {
    case 0x00:
        return e_Instructions::BRK;
        break;
    case 0x10:
        return e_Instructions::BPL;
        break;
    case 0x20:
        return e_Instructions::JSR;
        break;
    case 0x30:
        return e_Instructions::BMI;
        break;
    case 0x40:
        return e_Instructions::RTI;
        break;
    case 0x50:
        return e_Instructions::BVC;
        break;
    case 0x60:
        return e_Instructions::RTS;
        break;
    case 0x70:
        return e_Instructions::BVS;
        break;
    case 0x90:
        return e_Instructions::BCC;
        break;
    case 0xA0:
        return e_Instructions::LDY;
        break;
    case 0xB0:
        return e_Instructions::BCS;
        break;
    case 0xC0:
        return e_Instructions::CPY;
        break;
    case 0xD0:
        return e_Instructions::BNE;
        break;
    case 0xE0:
        return e_Instructions::CPX;
        break;
    case 0xF0:
        return e_Instructions::BEQ;
        break;
    case 0x01:
        return e_Instructions::ORA;
        break;
    case 0x11:
        return e_Instructions::ORA;
        break;
    case 0x21:
        return e_Instructions::AND;
        break;
    case 0x31:
        return e_Instructions::AND;
        break;
    case 0x41:
        return e_Instructions::EOR;
        break;
    case 0x51:
        return e_Instructions::EOR;
        break;
    case 0x61:
        return e_Instructions::ADC;
        break;
    case 0x71:
        return e_Instructions::ADC;
        break;
    case 0x81:
        return e_Instructions::STA;
        break;
    case 0x91:
        return e_Instructions::STA;
        break;
    case 0xA1:
        return e_Instructions::LDA;
        break;
    case 0xB1:
        return e_Instructions::LDA;
        break;
    case 0xC1:
        return e_Instructions::CMP;
        break;
    case 0xD1:
        return e_Instructions::CMP;
        break;
    case 0xE1:
        return e_Instructions::SBC;
        break;
    case 0xF1:
        return e_Instructions::SBC;
        break;
    case 0xA2:
        return e_Instructions::LDX;
        break;
    case 0x24:
        return e_Instructions::BIT;
        break;
    case 0x84:
        return e_Instructions::STY;
        break;
    case 0x94:
        return e_Instructions::STY;
        break;
    case 0xA4:
        return e_Instructions::LDY;
        break;
    case 0xB4:
        return e_Instructions::LDY;
        break;
    case 0xC4:
        return e_Instructions::CPY;
        break;
    case 0xE4:
        return e_Instructions::CPX;
        break;
    case 0x00:
        return e_Instructions::BRK;
        break;
    case 0x00:
        return e_Instructions::BRK;
        break;
    case 0x00:
        return e_Instructions::BRK;
        break;
    case 0x00:
        return e_Instructions::BRK;
        break;
    case 0x00:
        return e_Instructions::BRK;
        break;
    case 0x00:
        return e_Instructions::BRK;
        break;
    case 0x00:
        return e_Instructions::BRK;
        break;
    case 0x00:
        return e_Instructions::BRK;
        break;
    case 0x00:
        return e_Instructions::BRK;
        break;
    case 0x00:
        return e_Instructions::BRK;
        break;
    default:
        break;
    }
}
