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

// Function: func_0034ADB8
// Address: 0x34adb8 - 0x34af70
void func_0034ADB8_0x34adb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034ADB8_0x34adb8");
#endif

    switch (ctx->pc) {
        case 0x34ae00u: goto label_34ae00;
        case 0x34ae94u: goto label_34ae94;
        case 0x34aea8u: goto label_34aea8;
        case 0x34aebcu: goto label_34aebc;
        case 0x34aed0u: goto label_34aed0;
        case 0x34aee0u: goto label_34aee0;
        case 0x34aeecu: goto label_34aeec;
        case 0x34aef8u: goto label_34aef8;
        case 0x34af04u: goto label_34af04;
        case 0x34af10u: goto label_34af10;
        case 0x34af1cu: goto label_34af1c;
        case 0x34af28u: goto label_34af28;
        case 0x34af34u: goto label_34af34;
        case 0x34af40u: goto label_34af40;
        case 0x34af4cu: goto label_34af4c;
        case 0x34af54u: goto label_34af54;
        default: break;
    }

    ctx->pc = 0x34adb8u;

    // 0x34adb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34adb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34adbc: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x34adbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x34adc0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x34adc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x34adc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x34adc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34adc8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x34adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x34adcc: 0x24480d90  addiu       $t0, $v0, 0xD90
    ctx->pc = 0x34adccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 3472));
    // 0x34add0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x34add0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x34add4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x34add4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34add8: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x34add8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x34addc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x34addcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x34ade0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x34ade0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x760D98u));
    // 0x34ade4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34ADE4u;
    {
        const bool branch_taken_0x34ade4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34ADE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ADE4u;
        // 0x34ade8: 0x34a50c06  ori         $a1, $a1, 0xC06 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3078);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ade4) {
            ctx->pc = 0x34ADF8u;
            goto label_34adf8;
        }
    }
    ctx->pc = 0x34ADECu;
    // 0x34adec: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x34adecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x34adf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34ADF0u;
    {
        const bool branch_taken_0x34adf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34ADF0u;
        // 0x34adf4: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34adf0) {
            ctx->pc = 0x34AE08u;
            goto label_34ae08;
        }
    }
    ctx->pc = 0x34ADF8u;
label_34adf8:
    // 0x34adf8: 0xc0d375c  jal         func_34DD70
    ctx->pc = 0x34ADF8u;
    SET_GPR_U32(ctx, 31, 0x34AE00u);
    ctx->pc = 0x34ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34ADF8u;
    // 0x34adfc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x34ADF8u, 0x34AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE00u;
label_34ae00:
    // 0x34ae00: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x34AE00u;
    {
        const bool branch_taken_0x34ae00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AE00u;
        // 0x34ae04: 0xdfb00040  ld          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34ae00) {
            ctx->pc = 0x34AF5Cu;
            goto label_34af5c;
        }
    }
    ctx->pc = 0x34AE08u;
label_34ae08:
    // 0x34ae08: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x34ae08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x34ae0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34ae0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34ae10: 0x2442a038  addiu       $v0, $v0, -0x5FC8
    ctx->pc = 0x34ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942776));
    // 0x34ae14: 0x69050007  ldl         $a1, 0x7($t0)
    ctx->pc = 0x34ae14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x34ae18: 0x6d050000  ldr         $a1, 0x0($t0)
    ctx->pc = 0x34ae18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x34ae1c: 0x6909000f  ldl         $t1, 0xF($t0)
    ctx->pc = 0x34ae1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x34ae20: 0x6d090008  ldr         $t1, 0x8($t0)
    ctx->pc = 0x34ae20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x34ae24: 0x690a0017  ldl         $t2, 0x17($t0)
    ctx->pc = 0x34ae24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x34ae28: 0x6d0a0010  ldr         $t2, 0x10($t0)
    ctx->pc = 0x34ae28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x34ae2c: 0x8d0b0018  lw          $t3, 0x18($t0)
    ctx->pc = 0x34ae2cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x34ae30: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x34ae30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34ae34: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x34ae34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34ae38: 0xb0e90017  sdl         $t1, 0x17($a3)
    ctx->pc = 0x34ae38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34ae3c: 0xb4e90010  sdr         $t1, 0x10($a3)
    ctx->pc = 0x34ae3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34ae40: 0xb0ea001f  sdl         $t2, 0x1F($a3)
    ctx->pc = 0x34ae40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34ae44: 0xb4ea0018  sdr         $t2, 0x18($a3)
    ctx->pc = 0x34ae44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34ae48: 0xaceb0020  sw          $t3, 0x20($a3)
    ctx->pc = 0x34ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 11));
    // 0x34ae4c: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x34ae4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x34ae50: 0xace30028  sw          $v1, 0x28($a3)
    ctx->pc = 0x34ae50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 3));
    // 0x34ae54: 0x3c11000f  lui         $s1, 0xF
    ctx->pc = 0x34ae54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)15 << 16));
    // 0x34ae58: 0x36314240  ori         $s1, $s1, 0x4240
    ctx->pc = 0x34ae58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16960);
    // 0x34ae5c: 0xace2003c  sw          $v0, 0x3C($a3)
    ctx->pc = 0x34ae5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 2));
    // 0x34ae60: 0x26501020  addiu       $s0, $s2, 0x1020
    ctx->pc = 0x34ae60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4128));
    // 0x34ae64: 0xace60044  sw          $a2, 0x44($a3)
    ctx->pc = 0x34ae64u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 6));
    // 0x34ae68: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x34ae68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x34ae6c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x34ae6cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x34ae70: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x34ae70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x34ae74: 0xace60024  sw          $a2, 0x24($a3)
    ctx->pc = 0x34ae74u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 6));
    // 0x34ae78: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x34ae78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x34ae7c: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x34ae7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x34ae80: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x34ae80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x34ae84: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x34ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x34ae88: 0xace00040  sw          $zero, 0x40($a3)
    ctx->pc = 0x34ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 0));
    // 0x34ae8c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34AE8Cu;
    SET_GPR_U32(ctx, 31, 0x34AE94u);
    ctx->pc = 0x34AE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AE8Cu;
    // 0x34ae90: 0xace00048  sw          $zero, 0x48($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34AE8Cu, 0x34AE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AE94u;
label_34ae94:
    // 0x34ae94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34ae94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34ae98: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x34ae98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34ae9c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x34ae9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x34aea0: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34AEA0u;
    SET_GPR_U32(ctx, 31, 0x34AEA8u);
    ctx->pc = 0x34AEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AEA0u;
    // 0x34aea4: 0xffb10008  sd          $s1, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34AEA0u, 0x34AEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AEA8u;
label_34aea8:
    // 0x34aea8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34aea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aeac: 0x24050041  addiu       $a1, $zero, 0x41
    ctx->pc = 0x34aeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x34aeb0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x34aeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x34aeb4: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34AEB4u;
    SET_GPR_U32(ctx, 31, 0x34AEBCu);
    ctx->pc = 0x34AEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AEB4u;
    // 0x34aeb8: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34AEB4u, 0x34AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AEBCu;
label_34aebc:
    // 0x34aebc: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x34aebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x34aec0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34aec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aec4: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x34aec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
    // 0x34aec8: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34AEC8u;
    SET_GPR_U32(ctx, 31, 0x34AED0u);
    ctx->pc = 0x34AECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AEC8u;
    // 0x34aecc: 0xffb10028  sd          $s1, 0x28($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34AEC8u, 0x34AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AED0u;
label_34aed0:
    // 0x34aed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34aed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aed4: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x34aed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
    // 0x34aed8: 0xc0d70e8  jal         func_35C3A0
    ctx->pc = 0x34AED8u;
    SET_GPR_U32(ctx, 31, 0x34AEE0u);
    ctx->pc = 0x34AEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AED8u;
    // 0x34aedc: 0xffb10038  sd          $s1, 0x38($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C3A0u, 0x34AED8u, 0x34AEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AEE0u;
label_34aee0:
    // 0x34aee0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34aee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aee4: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34AEE4u;
    SET_GPR_U32(ctx, 31, 0x34AEECu);
    ctx->pc = 0x34AEE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AEE4u;
    // 0x34aee8: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34AEE4u, 0x34AEECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AEECu;
label_34aeec:
    // 0x34aeec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34aeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aef0: 0xc0d7130  jal         func_35C4C0
    ctx->pc = 0x34AEF0u;
    SET_GPR_U32(ctx, 31, 0x34AEF8u);
    ctx->pc = 0x34AEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AEF0u;
    // 0x34aef4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C4C0u, 0x34AEF0u, 0x34AEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AEF8u;
label_34aef8:
    // 0x34aef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34aef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aefc: 0xc0d7132  jal         func_35C4C8
    ctx->pc = 0x34AEFCu;
    SET_GPR_U32(ctx, 31, 0x34AF04u);
    ctx->pc = 0x34AF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AEFCu;
    // 0x34af00: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C4C8u, 0x34AEFCu, 0x34AF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF04u;
label_34af04:
    // 0x34af04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34af04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34af08: 0xc0d7138  jal         func_35C4E0
    ctx->pc = 0x34AF08u;
    SET_GPR_U32(ctx, 31, 0x34AF10u);
    ctx->pc = 0x34AF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF08u;
    // 0x34af0c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C4E0u, 0x34AF08u, 0x34AF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF10u;
label_34af10:
    // 0x34af10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34af10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34af14: 0xc0d713e  jal         func_35C4F8
    ctx->pc = 0x34AF14u;
    SET_GPR_U32(ctx, 31, 0x34AF1Cu);
    ctx->pc = 0x34AF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF14u;
    // 0x34af18: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C4F8u, 0x34AF14u, 0x34AF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF1Cu;
label_34af1c:
    // 0x34af1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34af1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34af20: 0xc0d7144  jal         func_35C510
    ctx->pc = 0x34AF20u;
    SET_GPR_U32(ctx, 31, 0x34AF28u);
    ctx->pc = 0x34AF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF20u;
    // 0x34af24: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C510u, 0x34AF20u, 0x34AF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF28u;
label_34af28:
    // 0x34af28: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34af28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34af2c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34AF2Cu;
    SET_GPR_U32(ctx, 31, 0x34AF34u);
    ctx->pc = 0x34AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF2Cu;
    // 0x34af30: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34AF2Cu, 0x34AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF34u;
label_34af34:
    // 0x34af34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34af34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34af38: 0xc0d714a  jal         func_35C528
    ctx->pc = 0x34AF38u;
    SET_GPR_U32(ctx, 31, 0x34AF40u);
    ctx->pc = 0x34AF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF38u;
    // 0x34af3c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C528u, 0x34AF38u, 0x34AF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF40u;
label_34af40:
    // 0x34af40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34af40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34af44: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x34AF44u;
    SET_GPR_U32(ctx, 31, 0x34AF4Cu);
    ctx->pc = 0x34AF48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF44u;
    // 0x34af48: 0x2405003d  addiu       $a1, $zero, 0x3D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x34AF44u, 0x34AF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF4Cu;
label_34af4c:
    // 0x34af4c: 0xc0d8254  jal         func_360950
    ctx->pc = 0x34AF4Cu;
    SET_GPR_U32(ctx, 31, 0x34AF54u);
    ctx->pc = 0x34AF50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AF4Cu;
    // 0x34af50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360950u, 0x34AF4Cu, 0x34AF54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AF54u;
label_34af54:
    // 0x34af54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34af54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34af58: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x34af58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34af5c:
    // 0x34af5c: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x34af5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34af60: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x34af60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34af64: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34af64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34af68: 0x3e00008  jr          $ra
    ctx->pc = 0x34AF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AF68u;
        // 0x34af6c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AF70u;
}
