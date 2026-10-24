#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00386FA0
// Address: 0x386fa0 - 0x3870e0
void func_00386FA0_0x386fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00386FA0_0x386fa0");
#endif

    switch (ctx->pc) {
        case 0x386fc8u: goto label_386fc8;
        case 0x386fe8u: goto label_386fe8;
        case 0x387004u: goto label_387004;
        case 0x38703cu: goto label_38703c;
        case 0x387094u: goto label_387094;
        default: break;
    }

    ctx->pc = 0x386fa0u;

    // 0x386fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x386fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x386fa4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x386fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x386fa8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x386fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x386fac: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x386facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x386fb0: 0x49403  sra         $s2, $a0, 16
    ctx->pc = 0x386fb0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 4), 16));
    // 0x386fb4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x386fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x386fb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x386fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386fbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x386fc0: 0xc0e1d0c  jal         func_387430
    ctx->pc = 0x386FC0u;
    SET_GPR_U32(ctx, 31, 0x386FC8u);
    ctx->pc = 0x386FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386FC0u;
    // 0x386fc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387430u, 0x386FC0u, 0x386FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386FC8u;
label_386fc8:
    // 0x386fc8: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x386FC8u;
    {
        const bool branch_taken_0x386fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FC8u;
        // 0x386fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386fc8) {
            ctx->pc = 0x3870C4u;
            goto label_3870c4;
        }
    }
    ctx->pc = 0x386FD0u;
    // 0x386fd0: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x386fd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x386fd4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x386fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x386fd8: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x386FD8u;
    {
        const bool branch_taken_0x386fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FD8u;
        // 0x386fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386fd8) {
            ctx->pc = 0x3870C4u;
            goto label_3870c4;
        }
    }
    ctx->pc = 0x386FE0u;
    // 0x386fe0: 0xc0dde66  jal         func_377998
    ctx->pc = 0x386FE0u;
    SET_GPR_U32(ctx, 31, 0x386FE8u);
    ctx->pc = 0x377998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377998u, 0x386FE0u, 0x386FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386FE8u;
label_386fe8:
    // 0x386fe8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x386fe8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386fec: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x386FECu;
    {
        const bool branch_taken_0x386fec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x386FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FECu;
        // 0x386ff0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386fec) {
            ctx->pc = 0x386FFCu;
            goto label_386ffc;
        }
    }
    ctx->pc = 0x386FF4u;
    // 0x386ff4: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x386FF4u;
    {
        const bool branch_taken_0x386ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x386FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386FF4u;
        // 0x386ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386ff4) {
            ctx->pc = 0x3870C4u;
            goto label_3870c4;
        }
    }
    ctx->pc = 0x386FFCu;
label_386ffc:
    // 0x386ffc: 0xc0ddffe  jal         func_377FF8
    ctx->pc = 0x386FFCu;
    SET_GPR_U32(ctx, 31, 0x387004u);
    ctx->pc = 0x387000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386FFCu;
    // 0x387000: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377FF8u, 0x386FFCu, 0x387004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387004u;
label_387004:
    // 0x387004: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x387004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x387008: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x387008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38700c: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x38700cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x387010: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x387010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x387014: 0x92240006  lbu         $a0, 0x6($s1)
    ctx->pc = 0x387014u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x387018: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x387018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38701c: 0xc71025  or          $v0, $a2, $a3
    ctx->pc = 0x38701cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x387020: 0xa2030009  sb          $v1, 0x9($s0)
    ctx->pc = 0x387020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 3));
    // 0x387024: 0xa2040008  sb          $a0, 0x8($s0)
    ctx->pc = 0x387024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x387028: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x387028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x38702c: 0xa605000a  sh          $a1, 0xA($s0)
    ctx->pc = 0x38702cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x387030: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x387030u;
    {
        const bool branch_taken_0x387030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x387034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387030u;
        // 0x387034: 0xa612000c  sh          $s2, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387030) {
            ctx->pc = 0x387090u;
            goto label_387090;
        }
    }
    ctx->pc = 0x387038u;
    // 0x387038: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x387038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
label_38703c:
    // 0x38703c: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x38703cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x387040: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x387040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x387044: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x387044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x387048: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x387048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x38704c: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x38704cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x387050: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x387050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x387054: 0x68c8001f  ldl         $t0, 0x1F($a2)
    ctx->pc = 0x387054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x387058: 0x6cc80018  ldr         $t0, 0x18($a2)
    ctx->pc = 0x387058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x38705c: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x38705cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x387060: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x387060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x387064: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x387064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x387068: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x387068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38706c: 0xb0e50017  sdl         $a1, 0x17($a3)
    ctx->pc = 0x38706cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x387070: 0xb4e50010  sdr         $a1, 0x10($a3)
    ctx->pc = 0x387070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x387074: 0xb0e8001f  sdl         $t0, 0x1F($a3)
    ctx->pc = 0x387074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x387078: 0xb4e80018  sdr         $t0, 0x18($a3)
    ctx->pc = 0x387078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38707c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x38707cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x387080: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x387080u;
    {
        const bool branch_taken_0x387080 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x387084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387080u;
        // 0x387084: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387080) {
            ctx->pc = 0x38703Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38703c;
        }
    }
    ctx->pc = 0x387088u;
    // 0x387088: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x387088u;
    {
        const bool branch_taken_0x387088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387088u;
        // 0x38708c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387088) {
            ctx->pc = 0x3870C4u;
            goto label_3870c4;
        }
    }
    ctx->pc = 0x387090u;
label_387090:
    // 0x387090: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x387090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
label_387094:
    // 0x387094: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x387094u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x387098: 0xdcc40008  ld          $a0, 0x8($a2)
    ctx->pc = 0x387098u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x38709c: 0xdcc50010  ld          $a1, 0x10($a2)
    ctx->pc = 0x38709cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3870a0: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x3870a0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3870a4: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x3870a4u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x3870a8: 0xfce40008  sd          $a0, 0x8($a3)
    ctx->pc = 0x3870a8u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 8), GPR_U64(ctx, 4));
    // 0x3870ac: 0xfce50010  sd          $a1, 0x10($a3)
    ctx->pc = 0x3870acu;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 5));
    // 0x3870b0: 0xfce80018  sd          $t0, 0x18($a3)
    ctx->pc = 0x3870b0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 8));
    // 0x3870b4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3870b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3870b8: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x3870B8u;
    {
        const bool branch_taken_0x3870b8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x3870BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3870B8u;
        // 0x3870bc: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3870b8) {
            ctx->pc = 0x387094u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387094;
        }
    }
    ctx->pc = 0x3870C0u;
    // 0x3870c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3870c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3870c4:
    // 0x3870c4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3870c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3870c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3870c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3870cc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3870ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3870d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3870d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3870d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3870D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3870D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3870D4u;
        // 0x3870d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3870D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3870DCu;
    // 0x3870dc: 0x0  nop
    ctx->pc = 0x3870dcu;
    // NOP
    ctx->pc = 0x3870e0u;
}
