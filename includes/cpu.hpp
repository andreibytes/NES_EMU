#pragma once

#include <cstdint>

#include "bus.hpp"

typedef enum {
    ACCUMULATOR, ABSOLUTE, ABSOLUTEX, ABSOLUTEY,
    IMMEDIATE, IMPLIED, INDIRECT, INDIRECT_X,
    INDIRECT_Y, RELATIVE, ZEROPAGE, ZEROPAGEX,
    ZEROPAGEY
} e_Addressing_modes;

typedef enum {
    ADC, AND, ASL, BCC,
    BCS, BEQ, BIT, BMI,
    BNE, BPL, BRK, BVC,
    BVS, CLC, CLD, CLI,
    CLV, CMP, CPX, CPY,
    DEC, DEX, DEY, EOR,
    INC, INX, INY, JMP,
    JSR, LDA, LDX, LDY,
    LSR, NOP, ORA, PHA,
    PHP, PLA, PLP, ROL, 
    ROR, RTI, RTS, SBC,
    SEC, SED, SEI, STA,
    STX, STY, TAX, TAY,
    TSX, TXA, TXS, TYA
} e_Instructions;

class CPU {
    public:
        CPU(BUS bus, bool is_debug_active);
        void step();
    private:
        void set_addressing_mode(uint8_t opcode);
        e_Instructions  get_instruction(uint8_t opcode);
        void cycle(int cycle_count);
    private:
        struct registers {
            uint16_t PC;
            uint8_t  SP;
            uint8_t  AC;
            uint8_t  IX;
            uint8_t  IY;
            uint8_t  PS;
         } m_registers;
        e_Addressing_modes m_current_addressing_mode;
        BUS m_bus;
        bool debug_set;
    private:
        void ADC(); void AND(); void ASL(); void BCC();
        void BCS(); void BEQ(); void BIT(); void BMI();
        void BNE(); void BPL(); void BRK(); void BVC();
        void BVS(); void CLC(); void CLD(); void CLI();
        void CLV(); void CMP(); void CPX(); void CPY();
        void DEC(); void DEX(); void DEY(); void EOR();
        void INC(); void INX(); void INY(); void JMP();
        void JSR(); void LDA(); void LDX(); void LDY();
        void LSR(); void NOP(); void ORA(); void PHA();
        void PHP(); void PLA(); void PLP(); void ROL();
        void ROR(); void RTI(); void RTS(); void SBC();
        void SEC(); void SED(); void SEI(); void STA();
        void STX(); void STY(); void TAX(); void TAY();
        void TSX(); void TXA(); void TXS(); void TYA();
    
};