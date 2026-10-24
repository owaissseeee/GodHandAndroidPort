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

// Function: func_0037A298
// Address: 0x37a298 - 0x37a4c8
void func_0037A298_0x37a298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037A298_0x37a298");
#endif

    switch (ctx->pc) {
        case 0x37a3a4u: goto label_37a3a4;
        case 0x37a3fcu: goto label_37a3fc;
        default: break;
    }

    ctx->pc = 0x37a298u;

    // 0x37a298: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x37a298u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a29c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a2a0: 0x80e60007  lb          $a2, 0x7($a3)
    ctx->pc = 0x37a2a0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
    // 0x37a2a4: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x37a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x37a2a8: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x37a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x37a2ac: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x37a2acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a2b0: 0x8488001c  lh          $t0, 0x1C($a0)
    ctx->pc = 0x37a2b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x37a2b4: 0x10c2002d  beq         $a2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x37A2B4u;
    {
        const bool branch_taken_0x37a2b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2B4u;
        // 0x37a2b8: 0x84630016  lh          $v1, 0x16($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a2b4) {
            ctx->pc = 0x37A36Cu;
            goto label_37a36c;
        }
    }
    ctx->pc = 0x37A2BCu;
    // 0x37a2bc: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x37a2bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x37a2c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37A2C0u;
    {
        const bool branch_taken_0x37a2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2C0u;
        // 0x37a2c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a2c0) {
            ctx->pc = 0x37A2D8u;
            goto label_37a2d8;
        }
    }
    ctx->pc = 0x37A2C8u;
    // 0x37a2c8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x37A2C8u;
    {
        const bool branch_taken_0x37a2c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2C8u;
        // 0x37a2cc: 0x3c040077  lui         $a0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a2c8) {
            ctx->pc = 0x37A2E8u;
            goto label_37a2e8;
        }
    }
    ctx->pc = 0x37A2D0u;
    // 0x37a2d0: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x37A2D0u;
    {
        const bool branch_taken_0x37a2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2D0u;
        // 0x37a2d4: 0x24e80022  addiu       $t0, $a3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a2d0) {
            ctx->pc = 0x37A4B0u;
            goto label_37a4b0;
        }
    }
    ctx->pc = 0x37A2D8u;
label_37a2d8:
    // 0x37a2d8: 0x10c20055  beq         $a2, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x37A2D8u;
    {
        const bool branch_taken_0x37a2d8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2D8u;
        // 0x37a2dc: 0x3c040077  lui         $a0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a2d8) {
            ctx->pc = 0x37A430u;
            goto label_37a430;
        }
    }
    ctx->pc = 0x37A2E0u;
    // 0x37a2e0: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x37A2E0u;
    {
        const bool branch_taken_0x37a2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A2E0u;
        // 0x37a2e4: 0x24e80022  addiu       $t0, $a3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a2e0) {
            ctx->pc = 0x37A4B0u;
            goto label_37a4b0;
        }
    }
    ctx->pc = 0x37A2E8u;
label_37a2e8:
    // 0x37a2e8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x37a2e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x37a2ec: 0x1052818  mult        $a1, $t0, $a1
    ctx->pc = 0x37a2ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x37a2f0: 0x2484df10  addiu       $a0, $a0, -0x20F0
    ctx->pc = 0x37a2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958864));
    // 0x37a2f4: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x37a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x37a2f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37a2fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x37a2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x37a300: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x37a300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37a304: 0x68e300a3  ldl         $v1, 0xA3($a3)
    ctx->pc = 0x37a304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 163); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x37a308: 0x6ce3009c  ldr         $v1, 0x9C($a3)
    ctx->pc = 0x37a308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 156); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x37a30c: 0x68e400ab  ldl         $a0, 0xAB($a3)
    ctx->pc = 0x37a30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 171); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x37a310: 0x6ce400a4  ldr         $a0, 0xA4($a3)
    ctx->pc = 0x37a310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 164); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x37a314: 0x68e500b3  ldl         $a1, 0xB3($a3)
    ctx->pc = 0x37a314u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 179); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x37a318: 0x6ce500ac  ldr         $a1, 0xAC($a3)
    ctx->pc = 0x37a318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 172); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x37a31c: 0x68e600bb  ldl         $a2, 0xBB($a3)
    ctx->pc = 0x37a31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 187); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x37a320: 0x6ce600b4  ldr         $a2, 0xB4($a3)
    ctx->pc = 0x37a320u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 180); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x37a324: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x37a324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a328: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x37a328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a32c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x37a32cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a330: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x37a330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a334: 0xb0450017  sdl         $a1, 0x17($v0)
    ctx->pc = 0x37a334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a338: 0xb4450010  sdr         $a1, 0x10($v0)
    ctx->pc = 0x37a338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a33c: 0xb046001f  sdl         $a2, 0x1F($v0)
    ctx->pc = 0x37a33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a340: 0xb4460018  sdr         $a2, 0x18($v0)
    ctx->pc = 0x37a340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a344: 0x68e300c3  ldl         $v1, 0xC3($a3)
    ctx->pc = 0x37a344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 195); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x37a348: 0x6ce300bc  ldr         $v1, 0xBC($a3)
    ctx->pc = 0x37a348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 188); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x37a34c: 0x68e400cb  ldl         $a0, 0xCB($a3)
    ctx->pc = 0x37a34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 203); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x37a350: 0x6ce400c4  ldr         $a0, 0xC4($a3)
    ctx->pc = 0x37a350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 196); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x37a354: 0xb0430027  sdl         $v1, 0x27($v0)
    ctx->pc = 0x37a354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a358: 0xb4430020  sdr         $v1, 0x20($v0)
    ctx->pc = 0x37a358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a35c: 0xb044002f  sdl         $a0, 0x2F($v0)
    ctx->pc = 0x37a35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a360: 0xb4440028  sdr         $a0, 0x28($v0)
    ctx->pc = 0x37a360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a364: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x37A364u;
    {
        const bool branch_taken_0x37a364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A364u;
        // 0x37a368: 0x24e80022  addiu       $t0, $a3, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a364) {
            ctx->pc = 0x37A4B0u;
            goto label_37a4b0;
        }
    }
    ctx->pc = 0x37A36Cu;
label_37a36c:
    // 0x37a36c: 0x3c040077  lui         $a0, 0x77
    ctx->pc = 0x37a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x37a370: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x37a370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x37a374: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x37a374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x37a378: 0x1052818  mult        $a1, $t0, $a1
    ctx->pc = 0x37a378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x37a37c: 0x2484e510  addiu       $a0, $a0, -0x1AF0
    ctx->pc = 0x37a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960400));
    // 0x37a380: 0x24e600cc  addiu       $a2, $a3, 0xCC
    ctx->pc = 0x37a380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 204));
    // 0x37a384: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37a384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37a388: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x37a388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x37a38c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x37a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x37a390: 0xc31025  or          $v0, $a2, $v1
    ctx->pc = 0x37a390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x37a394: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x37a394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x37a398: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x37A398u;
    {
        const bool branch_taken_0x37a398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A398u;
        // 0x37a39c: 0x24e2012c  addiu       $v0, $a3, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a398) {
            ctx->pc = 0x37A3F8u;
            goto label_37a3f8;
        }
    }
    ctx->pc = 0x37A3A0u;
    // 0x37a3a0: 0x24e80022  addiu       $t0, $a3, 0x22
    ctx->pc = 0x37a3a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 34));
label_37a3a4:
    // 0x37a3a4: 0x68c90007  ldl         $t1, 0x7($a2)
    ctx->pc = 0x37a3a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x37a3a8: 0x6cc90000  ldr         $t1, 0x0($a2)
    ctx->pc = 0x37a3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x37a3ac: 0x68ca000f  ldl         $t2, 0xF($a2)
    ctx->pc = 0x37a3acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x37a3b0: 0x6cca0008  ldr         $t2, 0x8($a2)
    ctx->pc = 0x37a3b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x37a3b4: 0x68c40017  ldl         $a0, 0x17($a2)
    ctx->pc = 0x37a3b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x37a3b8: 0x6cc40010  ldr         $a0, 0x10($a2)
    ctx->pc = 0x37a3b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x37a3bc: 0x68c5001f  ldl         $a1, 0x1F($a2)
    ctx->pc = 0x37a3bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x37a3c0: 0x6cc50018  ldr         $a1, 0x18($a2)
    ctx->pc = 0x37a3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x37a3c4: 0xb0690007  sdl         $t1, 0x7($v1)
    ctx->pc = 0x37a3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a3c8: 0xb4690000  sdr         $t1, 0x0($v1)
    ctx->pc = 0x37a3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a3cc: 0xb06a000f  sdl         $t2, 0xF($v1)
    ctx->pc = 0x37a3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a3d0: 0xb46a0008  sdr         $t2, 0x8($v1)
    ctx->pc = 0x37a3d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a3d4: 0xb0640017  sdl         $a0, 0x17($v1)
    ctx->pc = 0x37a3d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a3d8: 0xb4640010  sdr         $a0, 0x10($v1)
    ctx->pc = 0x37a3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a3dc: 0xb065001f  sdl         $a1, 0x1F($v1)
    ctx->pc = 0x37a3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a3e0: 0xb4650018  sdr         $a1, 0x18($v1)
    ctx->pc = 0x37a3e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a3e4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x37a3e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x37a3e8: 0x14c2ffee  bne         $a2, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x37A3E8u;
    {
        const bool branch_taken_0x37a3e8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x37A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3E8u;
        // 0x37a3ec: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a3e8) {
            ctx->pc = 0x37A3A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a3a4;
        }
    }
    ctx->pc = 0x37A3F0u;
    // 0x37a3f0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x37A3F0u;
    {
        const bool branch_taken_0x37a3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A3F0u;
        // 0x37a3f4: 0x80e20007  lb          $v0, 0x7($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a3f0) {
            ctx->pc = 0x37A4B4u;
            goto label_37a4b4;
        }
    }
    ctx->pc = 0x37A3F8u;
label_37a3f8:
    // 0x37a3f8: 0x24e80022  addiu       $t0, $a3, 0x22
    ctx->pc = 0x37a3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 34));
label_37a3fc:
    // 0x37a3fc: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x37a3fcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37a400: 0xdcca0008  ld          $t2, 0x8($a2)
    ctx->pc = 0x37a400u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x37a404: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x37a404u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x37a408: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x37a408u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x37a40c: 0xfc690000  sd          $t1, 0x0($v1)
    ctx->pc = 0x37a40cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 9));
    // 0x37a410: 0xfc6a0008  sd          $t2, 0x8($v1)
    ctx->pc = 0x37a410u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 10));
    // 0x37a414: 0xfc640010  sd          $a0, 0x10($v1)
    ctx->pc = 0x37a414u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 4));
    // 0x37a418: 0xfc650018  sd          $a1, 0x18($v1)
    ctx->pc = 0x37a418u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 5));
    // 0x37a41c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x37a41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x37a420: 0x14c2fff6  bne         $a2, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x37A420u;
    {
        const bool branch_taken_0x37a420 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x37A424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A420u;
        // 0x37a424: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a420) {
            ctx->pc = 0x37A3FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37a3fc;
        }
    }
    ctx->pc = 0x37A428u;
    // 0x37a428: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x37A428u;
    {
        const bool branch_taken_0x37a428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A428u;
        // 0x37a42c: 0x80e20007  lb          $v0, 0x7($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a428) {
            ctx->pc = 0x37A4B4u;
            goto label_37a4b4;
        }
    }
    ctx->pc = 0x37A430u;
label_37a430:
    // 0x37a430: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x37a430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x37a434: 0x1052818  mult        $a1, $t0, $a1
    ctx->pc = 0x37a434u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x37a438: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x37a438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x37a43c: 0x2484ea50  addiu       $a0, $a0, -0x15B0
    ctx->pc = 0x37a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
    // 0x37a440: 0x24e80022  addiu       $t0, $a3, 0x22
    ctx->pc = 0x37a440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 34));
    // 0x37a444: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x37a444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x37a448: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x37a448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x37a44c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x37a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x37a450: 0x68e60133  ldl         $a2, 0x133($a3)
    ctx->pc = 0x37a450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x37a454: 0x6ce6012c  ldr         $a2, 0x12C($a3)
    ctx->pc = 0x37a454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x37a458: 0x68e9013b  ldl         $t1, 0x13B($a3)
    ctx->pc = 0x37a458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 315); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x37a45c: 0x6ce90134  ldr         $t1, 0x134($a3)
    ctx->pc = 0x37a45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x37a460: 0x68ea0143  ldl         $t2, 0x143($a3)
    ctx->pc = 0x37a460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 323); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x37a464: 0x6cea013c  ldr         $t2, 0x13C($a3)
    ctx->pc = 0x37a464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 316); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x37a468: 0x68e3014b  ldl         $v1, 0x14B($a3)
    ctx->pc = 0x37a468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 331); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x37a46c: 0x6ce30144  ldr         $v1, 0x144($a3)
    ctx->pc = 0x37a46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 324); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x37a470: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x37a470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a474: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x37a474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a478: 0xb049000f  sdl         $t1, 0xF($v0)
    ctx->pc = 0x37a478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a47c: 0xb4490008  sdr         $t1, 0x8($v0)
    ctx->pc = 0x37a47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a480: 0xb04a0017  sdl         $t2, 0x17($v0)
    ctx->pc = 0x37a480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a484: 0xb44a0010  sdr         $t2, 0x10($v0)
    ctx->pc = 0x37a484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a488: 0xb043001f  sdl         $v1, 0x1F($v0)
    ctx->pc = 0x37a488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a48c: 0xb4430018  sdr         $v1, 0x18($v0)
    ctx->pc = 0x37a48cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a490: 0x68e60153  ldl         $a2, 0x153($a3)
    ctx->pc = 0x37a490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 339); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x37a494: 0x6ce6014c  ldr         $a2, 0x14C($a3)
    ctx->pc = 0x37a494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 332); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x37a498: 0x68e9015b  ldl         $t1, 0x15B($a3)
    ctx->pc = 0x37a498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 347); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x37a49c: 0x6ce90154  ldr         $t1, 0x154($a3)
    ctx->pc = 0x37a49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 340); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x37a4a0: 0xb0460027  sdl         $a2, 0x27($v0)
    ctx->pc = 0x37a4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a4a4: 0xb4460020  sdr         $a2, 0x20($v0)
    ctx->pc = 0x37a4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a4a8: 0xb049002f  sdl         $t1, 0x2F($v0)
    ctx->pc = 0x37a4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37a4ac: 0xb4490028  sdr         $t1, 0x28($v0)
    ctx->pc = 0x37a4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37a4b0:
    // 0x37a4b0: 0x80e20007  lb          $v0, 0x7($a3)
    ctx->pc = 0x37a4b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_37a4b4:
    // 0x37a4b4: 0x90e30025  lbu         $v1, 0x25($a3)
    ctx->pc = 0x37a4b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 37)));
    // 0x37a4b8: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x37a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x37a4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x37A4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A4BCu;
        // 0x37a4c0: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A4C4u;
    // 0x37a4c4: 0x0  nop
    ctx->pc = 0x37a4c4u;
    // NOP
    ctx->pc = 0x37a4c8u;
}
