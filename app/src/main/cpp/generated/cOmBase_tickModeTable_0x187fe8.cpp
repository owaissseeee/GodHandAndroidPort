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

// Function: cOmBase_tickModeTable
// Address: 0x187fe8 - 0x188118
void cOmBase_tickModeTable_0x187fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_tickModeTable_0x187fe8");
#endif

    switch (ctx->pc) {
        case 0x187fe8u: goto label_187fe8;
        case 0x187fecu: goto label_187fec;
        case 0x187ff0u: goto label_187ff0;
        case 0x187ff4u: goto label_187ff4;
        case 0x187ff8u: goto label_187ff8;
        case 0x187ffcu: goto label_187ffc;
        case 0x188000u: goto label_188000;
        case 0x188004u: goto label_188004;
        case 0x188008u: goto label_188008;
        case 0x18800cu: goto label_18800c;
        case 0x188010u: goto label_188010;
        case 0x188014u: goto label_188014;
        case 0x188018u: goto label_188018;
        case 0x18801cu: goto label_18801c;
        case 0x188020u: goto label_188020;
        case 0x188024u: goto label_188024;
        case 0x188028u: goto label_188028;
        case 0x18802cu: goto label_18802c;
        case 0x188030u: goto label_188030;
        case 0x188034u: goto label_188034;
        case 0x188038u: goto label_188038;
        case 0x18803cu: goto label_18803c;
        case 0x188040u: goto label_188040;
        case 0x188044u: goto label_188044;
        case 0x188048u: goto label_188048;
        case 0x18804cu: goto label_18804c;
        case 0x188050u: goto label_188050;
        case 0x188054u: goto label_188054;
        case 0x188058u: goto label_188058;
        case 0x18805cu: goto label_18805c;
        case 0x188060u: goto label_188060;
        case 0x188064u: goto label_188064;
        case 0x188068u: goto label_188068;
        case 0x18806cu: goto label_18806c;
        case 0x188070u: goto label_188070;
        case 0x188074u: goto label_188074;
        case 0x188078u: goto label_188078;
        case 0x18807cu: goto label_18807c;
        case 0x188080u: goto label_188080;
        case 0x188084u: goto label_188084;
        case 0x188088u: goto label_188088;
        case 0x18808cu: goto label_18808c;
        case 0x188090u: goto label_188090;
        case 0x188094u: goto label_188094;
        case 0x188098u: goto label_188098;
        case 0x18809cu: goto label_18809c;
        case 0x1880a0u: goto label_1880a0;
        case 0x1880a4u: goto label_1880a4;
        case 0x1880a8u: goto label_1880a8;
        case 0x1880acu: goto label_1880ac;
        case 0x1880b0u: goto label_1880b0;
        case 0x1880b4u: goto label_1880b4;
        case 0x1880b8u: goto label_1880b8;
        case 0x1880bcu: goto label_1880bc;
        case 0x1880c0u: goto label_1880c0;
        case 0x1880c4u: goto label_1880c4;
        case 0x1880c8u: goto label_1880c8;
        case 0x1880ccu: goto label_1880cc;
        case 0x1880d0u: goto label_1880d0;
        case 0x1880d4u: goto label_1880d4;
        case 0x1880d8u: goto label_1880d8;
        case 0x1880dcu: goto label_1880dc;
        case 0x1880e0u: goto label_1880e0;
        case 0x1880e4u: goto label_1880e4;
        case 0x1880e8u: goto label_1880e8;
        case 0x1880ecu: goto label_1880ec;
        case 0x1880f0u: goto label_1880f0;
        case 0x1880f4u: goto label_1880f4;
        case 0x1880f8u: goto label_1880f8;
        case 0x1880fcu: goto label_1880fc;
        case 0x188100u: goto label_188100;
        case 0x188104u: goto label_188104;
        case 0x188108u: goto label_188108;
        case 0x18810cu: goto label_18810c;
        case 0x188110u: goto label_188110;
        case 0x188114u: goto label_188114;
        default: break;
    }

    ctx->pc = 0x187fe8u;

label_187fe8:
    // 0x187fe8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x187fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_187fec:
    // 0x187fec: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x187fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_187ff0:
    // 0x187ff0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x187ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_187ff4:
    // 0x187ff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_187ff8:
    // 0x187ff8: 0xc06ddac  jal         func_1B76B0
label_187ffc:
    if (ctx->pc == 0x187FFCu) {
        ctx->pc = 0x187FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187FF8u;
        // 0x187ffc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188000u;
        goto label_188000;
    }
    ctx->pc = 0x187FF8u;
    SET_GPR_U32(ctx, 31, 0x188000u);
    ctx->pc = 0x187FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187FF8u;
    // 0x187ffc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x187FF8u, 0x188000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188000u;
label_188000:
    // 0x188000: 0x50400040  beql        $v0, $zero, . + 4 + (0x40 << 2)
label_188004:
    if (ctx->pc == 0x188004u) {
        ctx->pc = 0x188004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188000u;
        // 0x188004: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188008u;
        goto label_188008;
    }
    ctx->pc = 0x188000u;
    {
        const bool branch_taken_0x188000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188000) {
            ctx->pc = 0x188004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188000u;
            // 0x188004: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188104u;
            goto label_188104;
        }
    }
    ctx->pc = 0x188008u;
label_188008:
    // 0x188008: 0x86020602  lh          $v0, 0x602($s0)
    ctx->pc = 0x188008u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1538)));
label_18800c:
    // 0x18800c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_188010:
    if (ctx->pc == 0x188010u) {
        ctx->pc = 0x188010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18800Cu;
        // 0x188010: 0x96030602  lhu         $v1, 0x602($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1538)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188014u;
        goto label_188014;
    }
    ctx->pc = 0x18800Cu;
    {
        const bool branch_taken_0x18800c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18800Cu;
        // 0x188010: 0x96030602  lhu         $v1, 0x602($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1538)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18800c) {
            ctx->pc = 0x18801Cu;
            goto label_18801c;
        }
    }
    ctx->pc = 0x188014u;
label_188014:
    // 0x188014: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x188014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_188018:
    // 0x188018: 0xa6020602  sh          $v0, 0x602($s0)
    ctx->pc = 0x188018u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1538), (uint16_t)GPR_U32(ctx, 2));
label_18801c:
    // 0x18801c: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x18801cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_188020:
    // 0x188020: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x188020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_188024:
    // 0x188024: 0x24473318  addiu       $a3, $v0, 0x3318
    ctx->pc = 0x188024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 13080));
label_188028:
    // 0x188028: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x188028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18802c:
    // 0x18802c: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x18802cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_188030:
    // 0x188030: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x188030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_188034:
    // 0x188034: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x188034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_188038:
    // 0x188038: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x188038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_18803c:
    // 0x18803c: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x18803cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_188040:
    // 0x188040: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x188040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_188044:
    // 0x188044: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x188044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_188048:
    // 0x188048: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x188048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18804c:
    // 0x18804c: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x18804cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_188050:
    // 0x188050: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x188050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_188054:
    // 0x188054: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x188054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_188058:
    // 0x188058: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x188058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18805c:
    // 0x18805c: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x18805cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_188060:
    // 0x188060: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x188060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_188064:
    // 0x188064: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x188064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_188068:
    // 0x188068: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x188068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18806c:
    // 0x18806c: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x18806cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_188070:
    // 0x188070: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x188070u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_188074:
    // 0x188074: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x188074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_188078:
    // 0x188078: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x188078u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_18807c:
    // 0x18807c: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_188080:
    if (ctx->pc == 0x188080u) {
        ctx->pc = 0x188080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18807Cu;
        // 0x188080: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188084u;
        goto label_188084;
    }
    ctx->pc = 0x18807Cu;
    {
        const bool branch_taken_0x18807c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x188080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18807Cu;
        // 0x188080: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18807c) {
            ctx->pc = 0x1880B0u;
            goto label_1880b0;
        }
    }
    ctx->pc = 0x188084u;
label_188084:
    // 0x188084: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x188084u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_188088:
    // 0x188088: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x188088u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18808c:
    // 0x18808c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_188090:
    // 0x188090: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x188090u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_188094:
    // 0x188094: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x188094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_188098:
    // 0x188098: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18809c:
    // 0x18809c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18809cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1880a0:
    // 0x1880a0: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x1880a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_1880a4:
    // 0x1880a4: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1880a4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1880a8:
    // 0x1880a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1880ac:
    if (ctx->pc == 0x1880ACu) {
        ctx->pc = 0x1880ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880A8u;
        // 0x1880ac: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880B0u;
        goto label_1880b0;
    }
    ctx->pc = 0x1880A8u;
    {
        const bool branch_taken_0x1880a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880A8u;
        // 0x1880ac: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880a8) {
            ctx->pc = 0x1880BCu;
            goto label_1880bc;
        }
    }
    ctx->pc = 0x1880B0u;
label_1880b0:
    // 0x1880b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1880b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1880b4:
    // 0x1880b4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1880b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1880b8:
    // 0x1880b8: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x1880b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1880bc:
    // 0x1880bc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1880bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1880c0:
    // 0x1880c0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1880c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_1880c4:
    // 0x1880c4: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1880c8:
    if (ctx->pc == 0x1880C8u) {
        ctx->pc = 0x1880C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880C4u;
        // 0x1880c8: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880CCu;
        goto label_1880cc;
    }
    ctx->pc = 0x1880C4u;
    {
        const bool branch_taken_0x1880c4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1880C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880C4u;
        // 0x1880c8: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880c4) {
            ctx->pc = 0x1880E0u;
            goto label_1880e0;
        }
    }
    ctx->pc = 0x1880CCu;
label_1880cc:
    // 0x1880cc: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1880ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1880d0:
    // 0x1880d0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1880d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1880d4:
    // 0x1880d4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1880d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1880d8:
    // 0x1880d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1880dc:
    if (ctx->pc == 0x1880DCu) {
        ctx->pc = 0x1880DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880D8u;
        // 0x1880dc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880E0u;
        goto label_1880e0;
    }
    ctx->pc = 0x1880D8u;
    {
        const bool branch_taken_0x1880d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1880DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880D8u;
        // 0x1880dc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1880d8) {
            ctx->pc = 0x1880E4u;
            goto label_1880e4;
        }
    }
    ctx->pc = 0x1880E0u;
label_1880e0:
    // 0x1880e0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1880e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1880e4:
    // 0x1880e4: 0xc0f809  jalr        $a2
label_1880e8:
    if (ctx->pc == 0x1880E8u) {
        ctx->pc = 0x1880E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880E4u;
        // 0x1880e8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880ECu;
        goto label_1880ec;
    }
    ctx->pc = 0x1880E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1880ECu);
        ctx->pc = 0x1880E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880E4u;
        // 0x1880e8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1880E4u, 0x1880ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1880ECu;
label_1880ec:
    // 0x1880ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1880ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1880f0:
    // 0x1880f0: 0xc0aa1fa  jal         func_2A87E8
label_1880f4:
    if (ctx->pc == 0x1880F4u) {
        ctx->pc = 0x1880F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880F0u;
        // 0x1880f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1880F8u;
        goto label_1880f8;
    }
    ctx->pc = 0x1880F0u;
    SET_GPR_U32(ctx, 31, 0x1880F8u);
    ctx->pc = 0x1880F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1880F0u;
    // 0x1880f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x1880F0u, 0x1880F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1880F8u;
label_1880f8:
    // 0x1880f8: 0xc06ddb6  jal         func_1B76D8
label_1880fc:
    if (ctx->pc == 0x1880FCu) {
        ctx->pc = 0x1880FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1880F8u;
        // 0x1880fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188100u;
        goto label_188100;
    }
    ctx->pc = 0x1880F8u;
    SET_GPR_U32(ctx, 31, 0x188100u);
    ctx->pc = 0x1880FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1880F8u;
    // 0x1880fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1880F8u, 0x188100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x188100u;
label_188100:
    // 0x188100: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x188100u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_188104:
    // 0x188104: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x188104u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_188108:
    // 0x188108: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x188108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18810c:
    // 0x18810c: 0x3e00008  jr          $ra
label_188110:
    if (ctx->pc == 0x188110u) {
        ctx->pc = 0x188110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18810Cu;
        // 0x188110: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188114u;
        goto label_188114;
    }
    ctx->pc = 0x18810Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18810Cu;
        // 0x188110: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18810Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188114u;
label_188114:
    // 0x188114: 0x0  nop
    ctx->pc = 0x188114u;
    // NOP
    ctx->pc = 0x188118u;
}
