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

// Function: BuildObjEntry_387160
// Address: 0x387160 - 0x387270
void BuildObjEntry_387160_0x387160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BuildObjEntry_387160_0x387160");
#endif

    switch (ctx->pc) {
        case 0x387180u: goto label_387180;
        case 0x3871ccu: goto label_3871cc;
        case 0x387224u: goto label_387224;
        default: break;
    }

    ctx->pc = 0x387160u;

    // 0x387160: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x387160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x387164: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x387164u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x387168: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x387168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x38716c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x38716cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x387170: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x387170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x387174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x387178: 0xc0dde66  jal         func_377998
    ctx->pc = 0x387178u;
    SET_GPR_U32(ctx, 31, 0x387180u);
    ctx->pc = 0x38717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x387178u;
    // 0x38717c: 0x48c03  sra         $s1, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377998u, 0x387178u, 0x387180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x387180u;
label_387180:
    // 0x387180: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x387180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387184: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x387184u;
    {
        const bool branch_taken_0x387184 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x387188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387184u;
        // 0x387188: 0x24c80010  addiu       $t0, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387184) {
            ctx->pc = 0x387194u;
            goto label_387194;
        }
    }
    ctx->pc = 0x38718Cu;
    // 0x38718c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x38718Cu;
    {
        const bool branch_taken_0x38718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x387190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38718Cu;
        // 0x387190: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38718c) {
            ctx->pc = 0x387254u;
            goto label_387254;
        }
    }
    ctx->pc = 0x387194u;
label_387194:
    // 0x387194: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x387194u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x387198: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x387198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38719c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x38719cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3871a0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x3871a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3871a4: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x3871a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
    // 0x3871a8: 0xa0c30008  sb          $v1, 0x8($a2)
    ctx->pc = 0x3871a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x3871ac: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3871acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x3871b0: 0xa0c40009  sb          $a0, 0x9($a2)
    ctx->pc = 0x3871b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x3871b4: 0xa4c5000a  sh          $a1, 0xA($a2)
    ctx->pc = 0x3871b4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 5));
    // 0x3871b8: 0xa4d1000c  sh          $s1, 0xC($a2)
    ctx->pc = 0x3871b8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 12), (uint16_t)GPR_U32(ctx, 17));
    // 0x3871bc: 0xa4c50000  sh          $a1, 0x0($a2)
    ctx->pc = 0x3871bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3871c0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3871C0u;
    {
        const bool branch_taken_0x3871c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3871C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3871C0u;
        // 0x3871c4: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3871c0) {
            ctx->pc = 0x387220u;
            goto label_387220;
        }
    }
    ctx->pc = 0x3871C8u;
    // 0x3871c8: 0x24e20060  addiu       $v0, $a3, 0x60
    ctx->pc = 0x3871c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
label_3871cc:
    // 0x3871cc: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x3871ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3871d0: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x3871d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3871d4: 0x68e4000f  ldl         $a0, 0xF($a3)
    ctx->pc = 0x3871d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3871d8: 0x6ce40008  ldr         $a0, 0x8($a3)
    ctx->pc = 0x3871d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3871dc: 0x68e50017  ldl         $a1, 0x17($a3)
    ctx->pc = 0x3871dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3871e0: 0x6ce50010  ldr         $a1, 0x10($a3)
    ctx->pc = 0x3871e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3871e4: 0x68e6001f  ldl         $a2, 0x1F($a3)
    ctx->pc = 0x3871e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3871e8: 0x6ce60018  ldr         $a2, 0x18($a3)
    ctx->pc = 0x3871e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3871ec: 0xb1030007  sdl         $v1, 0x7($t0)
    ctx->pc = 0x3871ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3871f0: 0xb5030000  sdr         $v1, 0x0($t0)
    ctx->pc = 0x3871f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3871f4: 0xb104000f  sdl         $a0, 0xF($t0)
    ctx->pc = 0x3871f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3871f8: 0xb5040008  sdr         $a0, 0x8($t0)
    ctx->pc = 0x3871f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3871fc: 0xb1050017  sdl         $a1, 0x17($t0)
    ctx->pc = 0x3871fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x387200: 0xb5050010  sdr         $a1, 0x10($t0)
    ctx->pc = 0x387200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x387204: 0xb106001f  sdl         $a2, 0x1F($t0)
    ctx->pc = 0x387204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x387208: 0xb5060018  sdr         $a2, 0x18($t0)
    ctx->pc = 0x387208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x38720c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x38720cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x387210: 0x14e2ffee  bne         $a3, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x387210u;
    {
        const bool branch_taken_0x387210 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x387214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387210u;
        // 0x387214: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387210) {
            ctx->pc = 0x3871CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3871cc;
        }
    }
    ctx->pc = 0x387218u;
    // 0x387218: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x387218u;
    {
        const bool branch_taken_0x387218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387218u;
        // 0x38721c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387218) {
            ctx->pc = 0x387254u;
            goto label_387254;
        }
    }
    ctx->pc = 0x387220u;
label_387220:
    // 0x387220: 0x24e20060  addiu       $v0, $a3, 0x60
    ctx->pc = 0x387220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
label_387224:
    // 0x387224: 0xdce30000  ld          $v1, 0x0($a3)
    ctx->pc = 0x387224u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x387228: 0xdce40008  ld          $a0, 0x8($a3)
    ctx->pc = 0x387228u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x38722c: 0xdce50010  ld          $a1, 0x10($a3)
    ctx->pc = 0x38722cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x387230: 0xdce60018  ld          $a2, 0x18($a3)
    ctx->pc = 0x387230u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x387234: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x387234u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x387238: 0xfd040008  sd          $a0, 0x8($t0)
    ctx->pc = 0x387238u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 4));
    // 0x38723c: 0xfd050010  sd          $a1, 0x10($t0)
    ctx->pc = 0x38723cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 5));
    // 0x387240: 0xfd060018  sd          $a2, 0x18($t0)
    ctx->pc = 0x387240u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 24), GPR_U64(ctx, 6));
    // 0x387244: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x387244u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x387248: 0x14e2fff6  bne         $a3, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x387248u;
    {
        const bool branch_taken_0x387248 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x38724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387248u;
        // 0x38724c: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387248) {
            ctx->pc = 0x387224u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_387224;
        }
    }
    ctx->pc = 0x387250u;
    // 0x387250: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x387250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387254:
    // 0x387254: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x387254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x387258: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x387258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38725c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38725cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x387260: 0x3e00008  jr          $ra
    ctx->pc = 0x387260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x387260u;
        // 0x387264: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x387260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x387268u;
    // 0x387268: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x387268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x38726c: 0x0  nop
    ctx->pc = 0x38726cu;
    // NOP
    ctx->pc = 0x387270u;
}
