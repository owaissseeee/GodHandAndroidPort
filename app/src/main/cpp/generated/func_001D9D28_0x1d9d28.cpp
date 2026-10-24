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

// Function: func_001D9D28
// Address: 0x1d9d28 - 0x1da158
void func_001D9D28_0x1d9d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D9D28_0x1d9d28");
#endif

    switch (ctx->pc) {
        case 0x1d9e14u: goto label_1d9e14;
        case 0x1d9e24u: goto label_1d9e24;
        case 0x1d9eb0u: goto label_1d9eb0;
        case 0x1d9ebcu: goto label_1d9ebc;
        case 0x1d9ec8u: goto label_1d9ec8;
        case 0x1d9f18u: goto label_1d9f18;
        case 0x1d9f2cu: goto label_1d9f2c;
        case 0x1d9f60u: goto label_1d9f60;
        case 0x1d9f84u: goto label_1d9f84;
        case 0x1d9fa4u: goto label_1d9fa4;
        case 0x1d9fb4u: goto label_1d9fb4;
        case 0x1d9fc0u: goto label_1d9fc0;
        case 0x1d9fccu: goto label_1d9fcc;
        case 0x1d9fdcu: goto label_1d9fdc;
        case 0x1da000u: goto label_1da000;
        case 0x1da0f8u: goto label_1da0f8;
        case 0x1da108u: goto label_1da108;
        case 0x1da118u: goto label_1da118;
        case 0x1da140u: goto label_1da140;
        default: break;
    }

    ctx->pc = 0x1d9d28u;

    // 0x1d9d28: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d9d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d9d2c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1d9d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1d9d30: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1d9d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1d9d34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d9d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9d38: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9d38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d9d3c: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1d9d3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d9d40: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x1d9d40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1d9d44: 0x104000fe  beqz        $v0, . + 4 + (0xFE << 2)
    ctx->pc = 0x1D9D44u;
    {
        const bool branch_taken_0x1d9d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9D44u;
        // 0x1d9d48: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9d44) {
            ctx->pc = 0x1DA140u;
            goto label_1da140;
        }
    }
    ctx->pc = 0x1D9D4Cu;
    // 0x1d9d4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d9d50: 0x2442b310  addiu       $v0, $v0, -0x4CF0
    ctx->pc = 0x1d9d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947600));
    // 0x1d9d54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d9d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d9d58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d9d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d9d5c: 0x800008  jr          $a0
    ctx->pc = 0x1D9D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D9D64u: goto label_1d9d64;
            case 0x1D9DE0u: goto label_1d9de0;
            case 0x1D9E34u: goto label_1d9e34;
            case 0x1D9E64u: goto label_1d9e64;
            case 0x1D9E78u: goto label_1d9e78;
            case 0x1D9ED0u: goto label_1d9ed0;
            case 0x1DA018u: goto label_1da018;
            case 0x1DA064u: goto label_1da064;
            case 0x1DA080u: goto label_1da080;
            case 0x1DA0B8u: goto label_1da0b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9D5Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D9D64u;
label_1d9d64:
    // 0x1d9d64: 0x8e233048  lw          $v1, 0x3048($s1)
    ctx->pc = 0x1d9d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12360)));
    // 0x1d9d68: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1d9d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1d9d6c: 0x2447b2f0  addiu       $a3, $v0, -0x4D10
    ctx->pc = 0x1d9d6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947568));
    // 0x1d9d70: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1d9d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d9d74: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1d9d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d9d78: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1d9d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1d9d7c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1d9d7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1d9d80: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1d9d80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1d9d84: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1d9d84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1d9d88: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x1d9d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9d8c: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x1d9d8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9d90: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x1d9d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9d94: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x1d9d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9d98: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x1d9d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9d9c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x1d9d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9da0: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x1d9da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1d9da4: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x1d9da4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1d9da8: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x1d9da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9dac: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x1d9dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1d9db0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d9db0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d9db4: 0x8e253034  lw          $a1, 0x3034($s1)
    ctx->pc = 0x1d9db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12340)));
    // 0x1d9db8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x1d9db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1d9dbc: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1d9dbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d9dc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1d9dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d9dc4: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x1d9dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x1d9dc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d9dcc: 0xae263028  sw          $a2, 0x3028($s1)
    ctx->pc = 0x1d9dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 6));
    // 0x1d9dd0: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x1d9dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d9dd4: 0xa2223025  sb          $v0, 0x3025($s1)
    ctx->pc = 0x1d9dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d9dd8: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x1D9DD8u;
    {
        const bool branch_taken_0x1d9dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DD8u;
        // 0x1d9ddc: 0xae233038  sw          $v1, 0x3038($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12344), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9dd8) {
            ctx->pc = 0x1DA140u;
            goto label_1da140;
        }
    }
    ctx->pc = 0x1D9DE0u;
label_1d9de0:
    // 0x1d9de0: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1d9de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1d9de4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9DE4u;
    {
        const bool branch_taken_0x1d9de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DE4u;
        // 0x1d9de8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9de4) {
            ctx->pc = 0x1D9DF4u;
            goto label_1d9df4;
        }
    }
    ctx->pc = 0x1D9DECu;
    // 0x1d9dec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9DECu;
    {
        const bool branch_taken_0x1d9dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9DECu;
        // 0x1d9df0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9dec) {
            ctx->pc = 0x1D9DFCu;
            goto label_1d9dfc;
        }
    }
    ctx->pc = 0x1D9DF4u;
label_1d9df4:
    // 0x1d9df4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d9df4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9df8: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1d9df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1d9dfc:
    // 0x1d9dfc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1d9dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d9e00: 0x104000d0  beqz        $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x1D9E00u;
    {
        const bool branch_taken_0x1d9e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E00u;
        // 0x1d9e04: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e00) {
            ctx->pc = 0x1DA144u;
            goto label_1da144;
        }
    }
    ctx->pc = 0x1D9E08u;
    // 0x1d9e08: 0x8e253038  lw          $a1, 0x3038($s1)
    ctx->pc = 0x1d9e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12344)));
    // 0x1d9e0c: 0xc0775b6  jal         func_1DD6D8
    ctx->pc = 0x1D9E0Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E14u);
    ctx->pc = 0x1D9E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E0Cu;
    // 0x1d9e10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD6D8u, 0x1D9E0Cu, 0x1D9E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E14u;
label_1d9e14:
    // 0x1d9e14: 0x92253048  lbu         $a1, 0x3048($s1)
    ctx->pc = 0x1d9e14u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12360)));
    // 0x1d9e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e1c: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x1D9E1Cu;
    SET_GPR_U32(ctx, 31, 0x1D9E24u);
    ctx->pc = 0x1D9E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9E1Cu;
    // 0x1d9e20: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x1D9E1Cu, 0x1D9E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9E24u;
label_1d9e24:
    // 0x1d9e24: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1d9e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d9e28: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d9e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d9e2c: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x1D9E2Cu;
    {
        const bool branch_taken_0x1d9e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E2Cu;
        // 0x1d9e30: 0xae233028  sw          $v1, 0x3028($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e2c) {
            ctx->pc = 0x1DA04Cu;
            goto label_1da04c;
        }
    }
    ctx->pc = 0x1D9E34u;
label_1d9e34:
    // 0x1d9e34: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1d9e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1d9e38: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9E38u;
    {
        const bool branch_taken_0x1d9e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E38u;
        // 0x1d9e3c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e38) {
            ctx->pc = 0x1D9E48u;
            goto label_1d9e48;
        }
    }
    ctx->pc = 0x1D9E40u;
    // 0x1d9e40: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9E40u;
    {
        const bool branch_taken_0x1d9e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E40u;
        // 0x1d9e44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e40) {
            ctx->pc = 0x1D9E50u;
            goto label_1d9e50;
        }
    }
    ctx->pc = 0x1D9E48u;
label_1d9e48:
    // 0x1d9e48: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d9e48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e4c: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1d9e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1d9e50:
    // 0x1d9e50: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1d9e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d9e54: 0x104000bb  beqz        $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x1D9E54u;
    {
        const bool branch_taken_0x1d9e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E54u;
        // 0x1d9e58: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e54) {
            ctx->pc = 0x1DA144u;
            goto label_1da144;
        }
    }
    ctx->pc = 0x1D9E5Cu;
    // 0x1d9e5c: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1D9E5Cu;
    {
        const bool branch_taken_0x1d9e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E5Cu;
        // 0x1d9e60: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e5c) {
            ctx->pc = 0x1DA04Cu;
            goto label_1da04c;
        }
    }
    ctx->pc = 0x1D9E64u;
label_1d9e64:
    // 0x1d9e64: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1d9e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1d9e68: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1d9e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1d9e6c: 0xae233028  sw          $v1, 0x3028($s1)
    ctx->pc = 0x1d9e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 3));
    // 0x1d9e70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d9e74: 0xa2223025  sb          $v0, 0x3025($s1)
    ctx->pc = 0x1d9e74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
label_1d9e78:
    // 0x1d9e78: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1d9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1d9e7c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9E7Cu;
    {
        const bool branch_taken_0x1d9e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E7Cu;
        // 0x1d9e80: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e7c) {
            ctx->pc = 0x1D9E8Cu;
            goto label_1d9e8c;
        }
    }
    ctx->pc = 0x1D9E84u;
    // 0x1d9e84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9E84u;
    {
        const bool branch_taken_0x1d9e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E84u;
        // 0x1d9e88: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e84) {
            ctx->pc = 0x1D9E94u;
            goto label_1d9e94;
        }
    }
    ctx->pc = 0x1D9E8Cu;
label_1d9e8c:
    // 0x1d9e8c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d9e8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9e90: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1d9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1d9e94:
    // 0x1d9e94: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1d9e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d9e98: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
    ctx->pc = 0x1D9E98u;
    {
        const bool branch_taken_0x1d9e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9E98u;
        // 0x1d9e9c: 0x263025b0  addiu       $s0, $s1, 0x25B0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9e98) {
            ctx->pc = 0x1DA140u;
            goto label_1da140;
        }
    }
    ctx->pc = 0x1D9EA0u;
    // 0x1d9ea0: 0xae203040  sw          $zero, 0x3040($s1)
    ctx->pc = 0x1d9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 0));
    // 0x1d9ea4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ea8: 0xc077dd6  jal         func_1DF758
    ctx->pc = 0x1D9EA8u;
    SET_GPR_U32(ctx, 31, 0x1D9EB0u);
    ctx->pc = 0x1D9EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EA8u;
    // 0x1d9eac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF758u, 0x1D9EA8u, 0x1D9EB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EB0u;
label_1d9eb0:
    // 0x1d9eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9eb4: 0xc077df4  jal         func_1DF7D0
    ctx->pc = 0x1D9EB4u;
    SET_GPR_U32(ctx, 31, 0x1D9EBCu);
    ctx->pc = 0x1D9EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EB4u;
    // 0x1d9eb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF7D0u, 0x1D9EB4u, 0x1D9EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EBCu;
label_1d9ebc:
    // 0x1d9ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ec0: 0xc077e08  jal         func_1DF820
    ctx->pc = 0x1D9EC0u;
    SET_GPR_U32(ctx, 31, 0x1D9EC8u);
    ctx->pc = 0x1D9EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9EC0u;
    // 0x1d9ec4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF820u, 0x1D9EC0u, 0x1D9EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9EC8u;
label_1d9ec8:
    // 0x1d9ec8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1D9EC8u;
    {
        const bool branch_taken_0x1d9ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9EC8u;
        // 0x1d9ecc: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9ec8) {
            ctx->pc = 0x1DA04Cu;
            goto label_1da04c;
        }
    }
    ctx->pc = 0x1D9ED0u;
label_1d9ed0:
    // 0x1d9ed0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1d9ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1d9ed4: 0x3404cc00  ori         $a0, $zero, 0xCC00
    ctx->pc = 0x1d9ed4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52224);
    // 0x1d9ed8: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x1d9ed8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x1d9edc: 0x3484c000  ori         $a0, $a0, 0xC000
    ctx->pc = 0x1d9edcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)49152);
    // 0x1d9ee0: 0x42338  dsll        $a0, $a0, 12
    ctx->pc = 0x1d9ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 12);
    // 0x1d9ee4: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1d9ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1d9ee8: 0xdc4301b0  ld          $v1, 0x1B0($v0)
    ctx->pc = 0x1d9ee8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x1d9eec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1d9eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1d9ef0: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D9EF0u;
    {
        const bool branch_taken_0x1d9ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9ef0) {
            ctx->pc = 0x1D9EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9EF0u;
            // 0x1d9ef4: 0xdc4301a0  ld          $v1, 0x1A0($v0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9F40u;
            goto label_1d9f40;
        }
    }
    ctx->pc = 0x1D9EF8u;
    // 0x1d9ef8: 0x8e223040  lw          $v0, 0x3040($s1)
    ctx->pc = 0x1d9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12352)));
    // 0x1d9efc: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D9EFCu;
    {
        const bool branch_taken_0x1d9efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9efc) {
            ctx->pc = 0x1D9F00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9EFCu;
            // 0x1d9f00: 0xae203040  sw          $zero, 0x3040($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9F20u;
            goto label_1d9f20;
        }
    }
    ctx->pc = 0x1D9F04u;
    // 0x1d9f04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d9f08: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1d9f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1d9f0c: 0xae223040  sw          $v0, 0x3040($s1)
    ctx->pc = 0x1d9f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 2));
    // 0x1d9f10: 0xc077df4  jal         func_1DF7D0
    ctx->pc = 0x1D9F10u;
    SET_GPR_U32(ctx, 31, 0x1D9F18u);
    ctx->pc = 0x1D9F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9F10u;
    // 0x1d9f14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF7D0u, 0x1D9F10u, 0x1D9F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9F18u;
label_1d9f18:
    // 0x1d9f18: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9F18u;
    {
        const bool branch_taken_0x1d9f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F18u;
        // 0x1d9f1c: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f18) {
            ctx->pc = 0x1D9F30u;
            goto label_1d9f30;
        }
    }
    ctx->pc = 0x1D9F20u;
label_1d9f20:
    // 0x1d9f20: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1d9f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1d9f24: 0xc077df4  jal         func_1DF7D0
    ctx->pc = 0x1D9F24u;
    SET_GPR_U32(ctx, 31, 0x1D9F2Cu);
    ctx->pc = 0x1D9F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9F24u;
    // 0x1d9f28: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF7D0u, 0x1D9F24u, 0x1D9F2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9F2Cu;
label_1d9f2c:
    // 0x1d9f2c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d9f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d9f30:
    // 0x1d9f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f34: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d9f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d9f38: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1D9F38u;
    {
        const bool branch_taken_0x1d9f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F38u;
        // 0x1d9f3c: 0x2406015f  addiu       $a2, $zero, 0x15F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 351));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f38) {
            ctx->pc = 0x1D9F70u;
            goto label_1d9f70;
        }
    }
    ctx->pc = 0x1D9F40u;
label_1d9f40:
    // 0x1d9f40: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1d9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1d9f44: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d9f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d9f48: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D9F48u;
    {
        const bool branch_taken_0x1d9f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F48u;
        // 0x1d9f4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f48) {
            ctx->pc = 0x1D9F8Cu;
            goto label_1d9f8c;
        }
    }
    ctx->pc = 0x1D9F50u;
    // 0x1d9f50: 0x262425b0  addiu       $a0, $s1, 0x25B0
    ctx->pc = 0x1d9f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1d9f54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f58: 0xc077df4  jal         func_1DF7D0
    ctx->pc = 0x1D9F58u;
    SET_GPR_U32(ctx, 31, 0x1D9F60u);
    ctx->pc = 0x1D9F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9F58u;
    // 0x1d9f5c: 0xae223040  sw          $v0, 0x3040($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF7D0u, 0x1D9F58u, 0x1D9F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9F60u;
label_1d9f60:
    // 0x1d9f60: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d9f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d9f64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f68: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d9f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d9f6c: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x1d9f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
label_1d9f70:
    // 0x1d9f70: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d9f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9f74: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d9f74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9f78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9f78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9f7c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D9F7Cu;
    SET_GPR_U32(ctx, 31, 0x1D9F84u);
    ctx->pc = 0x1D9F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9F7Cu;
    // 0x1d9f80: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D9F7Cu, 0x1D9F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9F84u;
label_1d9f84:
    // 0x1d9f84: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1D9F84u;
    {
        const bool branch_taken_0x1d9f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F84u;
        // 0x1d9f88: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f84) {
            ctx->pc = 0x1DA144u;
            goto label_1da144;
        }
    }
    ctx->pc = 0x1D9F8Cu;
label_1d9f8c:
    // 0x1d9f8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1d9f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1d9f90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d9f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1d9f94: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1D9F94u;
    {
        const bool branch_taken_0x1d9f94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9F94u;
        // 0x1d9f98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9f94) {
            ctx->pc = 0x1DA140u;
            goto label_1da140;
        }
    }
    ctx->pc = 0x1D9F9Cu;
    // 0x1d9f9c: 0xc077644  jal         func_1DD910
    ctx->pc = 0x1D9F9Cu;
    SET_GPR_U32(ctx, 31, 0x1D9FA4u);
    ctx->pc = 0x1D9FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9F9Cu;
    // 0x1d9fa0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD910u, 0x1D9F9Cu, 0x1D9FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9FA4u;
label_1d9fa4:
    // 0x1d9fa4: 0x263025b0  addiu       $s0, $s1, 0x25B0
    ctx->pc = 0x1d9fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1d9fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9fac: 0xc077dd6  jal         func_1DF758
    ctx->pc = 0x1D9FACu;
    SET_GPR_U32(ctx, 31, 0x1D9FB4u);
    ctx->pc = 0x1D9FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9FACu;
    // 0x1d9fb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF758u, 0x1D9FACu, 0x1D9FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9FB4u;
label_1d9fb4:
    // 0x1d9fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9fb8: 0xc077df4  jal         func_1DF7D0
    ctx->pc = 0x1D9FB8u;
    SET_GPR_U32(ctx, 31, 0x1D9FC0u);
    ctx->pc = 0x1D9FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9FB8u;
    // 0x1d9fbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF7D0u, 0x1D9FB8u, 0x1D9FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9FC0u;
label_1d9fc0:
    // 0x1d9fc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d9fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9fc4: 0xc077e08  jal         func_1DF820
    ctx->pc = 0x1D9FC4u;
    SET_GPR_U32(ctx, 31, 0x1D9FCCu);
    ctx->pc = 0x1D9FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9FC4u;
    // 0x1d9fc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF820u, 0x1D9FC4u, 0x1D9FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9FCCu;
label_1d9fcc:
    // 0x1d9fcc: 0x92253048  lbu         $a1, 0x3048($s1)
    ctx->pc = 0x1d9fccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12360)));
    // 0x1d9fd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d9fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9fd4: 0xc07797e  jal         func_1DE5F8
    ctx->pc = 0x1D9FD4u;
    SET_GPR_U32(ctx, 31, 0x1D9FDCu);
    ctx->pc = 0x1D9FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9FD4u;
    // 0x1d9fd8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE5F8u, 0x1D9FD4u, 0x1D9FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9FDCu;
label_1d9fdc:
    // 0x1d9fdc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d9fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d9fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9fe4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d9fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d9fe8: 0x2406015e  addiu       $a2, $zero, 0x15E
    ctx->pc = 0x1d9fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1d9fec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1d9fecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9ff0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1d9ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d9ff4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9ff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9ff8: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x1D9FF8u;
    SET_GPR_U32(ctx, 31, 0x1DA000u);
    ctx->pc = 0x1D9FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9FF8u;
    // 0x1d9ffc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x1D9FF8u, 0x1DA000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA000u;
label_1da000:
    // 0x1da000: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1da000u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1da004: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1da004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1da008: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1da008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
    // 0x1da00c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1da00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1da010: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1DA010u;
    {
        const bool branch_taken_0x1da010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA010u;
        // 0x1da014: 0xa2233025  sb          $v1, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da010) {
            ctx->pc = 0x1DA140u;
            goto label_1da140;
        }
    }
    ctx->pc = 0x1DA018u;
label_1da018:
    // 0x1da018: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1da018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1da01c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA01Cu;
    {
        const bool branch_taken_0x1da01c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA01Cu;
        // 0x1da020: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da01c) {
            ctx->pc = 0x1DA02Cu;
            goto label_1da02c;
        }
    }
    ctx->pc = 0x1DA024u;
    // 0x1da024: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DA024u;
    {
        const bool branch_taken_0x1da024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA024u;
        // 0x1da028: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da024) {
            ctx->pc = 0x1DA034u;
            goto label_1da034;
        }
    }
    ctx->pc = 0x1DA02Cu;
label_1da02c:
    // 0x1da02c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1da02cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da030: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1da030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1da034:
    // 0x1da034: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1da034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1da038: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1DA038u;
    {
        const bool branch_taken_0x1da038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA038u;
        // 0x1da03c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da038) {
            ctx->pc = 0x1DA144u;
            goto label_1da144;
        }
    }
    ctx->pc = 0x1DA040u;
    // 0x1da040: 0x8e223040  lw          $v0, 0x3040($s1)
    ctx->pc = 0x1da040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12352)));
    // 0x1da044: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA044u;
    {
        const bool branch_taken_0x1da044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA044u;
        // 0x1da048: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da044) {
            ctx->pc = 0x1DA058u;
            goto label_1da058;
        }
    }
    ctx->pc = 0x1DA04Cu;
label_1da04c:
    // 0x1da04c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da050: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1DA050u;
    {
        const bool branch_taken_0x1da050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA050u;
        // 0x1da054: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da050) {
            ctx->pc = 0x1DA140u;
            goto label_1da140;
        }
    }
    ctx->pc = 0x1DA058u;
label_1da058:
    // 0x1da058: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x1da058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x1da05c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x1DA05Cu;
    {
        const bool branch_taken_0x1da05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA05Cu;
        // 0x1da060: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da05c) {
            ctx->pc = 0x1DA140u;
            goto label_1da140;
        }
    }
    ctx->pc = 0x1DA064u;
label_1da064:
    // 0x1da064: 0x8e233020  lw          $v1, 0x3020($s1)
    ctx->pc = 0x1da064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12320)));
    // 0x1da068: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1da068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1da06c: 0xa2223024  sb          $v0, 0x3024($s1)
    ctx->pc = 0x1da06cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
    // 0x1da070: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x1da070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
    // 0x1da074: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1da074u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da078: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1DA078u;
    {
        const bool branch_taken_0x1da078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA07Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA078u;
        // 0x1da07c: 0xae233020  sw          $v1, 0x3020($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da078) {
            ctx->pc = 0x1DA140u;
            goto label_1da140;
        }
    }
    ctx->pc = 0x1DA080u;
label_1da080:
    // 0x1da080: 0x8e253038  lw          $a1, 0x3038($s1)
    ctx->pc = 0x1da080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12344)));
    // 0x1da084: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1da084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1da088: 0x8e223020  lw          $v0, 0x3020($s1)
    ctx->pc = 0x1da088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12320)));
    // 0x1da08c: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x1da08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1da090: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x1da090u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1da094: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1da094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1da098: 0xae223020  sw          $v0, 0x3020($s1)
    ctx->pc = 0x1da098u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12320), GPR_U32(ctx, 2));
    // 0x1da09c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DA09Cu;
    {
        const bool branch_taken_0x1da09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1da09c) {
            ctx->pc = 0x1DA0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DA09Cu;
            // 0x1da0a0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DA0A4u;
            goto label_1da0a4;
        }
    }
    ctx->pc = 0x1DA0A4u;
label_1da0a4:
    // 0x1da0a4: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1da0a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1da0a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1da0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1da0ac: 0xa2223025  sb          $v0, 0x3025($s1)
    ctx->pc = 0x1da0acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
    // 0x1da0b0: 0x2812  mflo        $a1
    ctx->pc = 0x1da0b0u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1da0b4: 0xae25302c  sw          $a1, 0x302C($s1)
    ctx->pc = 0x1da0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 5));
label_1da0b8:
    // 0x1da0b8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1da0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1da0bc: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x1da0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x1da0c0: 0xdc437640  ld          $v1, 0x7640($v0)
    ctx->pc = 0x1da0c0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x747640u));
    // 0x1da0c4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1da0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1da0c8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DA0C8u;
    {
        const bool branch_taken_0x1da0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0C8u;
        // 0x1da0cc: 0x8e26302c  lw          $a2, 0x302C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0c8) {
            ctx->pc = 0x1DA0DCu;
            goto label_1da0dc;
        }
    }
    ctx->pc = 0x1DA0D0u;
    // 0x1da0d0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1da0d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da0d4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1DA0D4u;
    {
        const bool branch_taken_0x1da0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA0D4u;
        // 0x1da0d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da0d4) {
            ctx->pc = 0x1DA128u;
            goto label_1da128;
        }
    }
    ctx->pc = 0x1DA0DCu;
label_1da0dc:
    // 0x1da0dc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1da0dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1da0e0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1da0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1da0e4: 0xc50018  mult        $zero, $a2, $a1
    ctx->pc = 0x1da0e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1da0e8: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1da0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1da0ec: 0x2812  mflo        $a1
    ctx->pc = 0x1da0ecu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x1da0f0: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1DA0F0u;
    SET_GPR_U32(ctx, 31, 0x1DA0F8u);
    ctx->pc = 0x1DA0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA0F0u;
    // 0x1da0f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1DA0F0u, 0x1DA0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA0F8u;
label_1da0f8:
    // 0x1da0f8: 0xae203034  sw          $zero, 0x3034($s1)
    ctx->pc = 0x1da0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 0));
    // 0x1da0fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1da0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da100: 0xc077486  jal         func_1DD218
    ctx->pc = 0x1DA100u;
    SET_GPR_U32(ctx, 31, 0x1DA108u);
    ctx->pc = 0x1DA104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA100u;
    // 0x1da104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD218u, 0x1DA100u, 0x1DA108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA108u;
label_1da108:
    // 0x1da108: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1da108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1da10c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1da10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1da110: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x1DA110u;
    SET_GPR_U32(ctx, 31, 0x1DA118u);
    ctx->pc = 0x1DA114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA110u;
    // 0x1da114: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x1DA110u, 0x1DA118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA118u;
label_1da118:
    // 0x1da118: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1da118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1da11c: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1da11cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1da120: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1DA120u;
    {
        const bool branch_taken_0x1da120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA120u;
        // 0x1da124: 0xa2223024  sb          $v0, 0x3024($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da120) {
            ctx->pc = 0x1DA140u;
            goto label_1da140;
        }
    }
    ctx->pc = 0x1DA128u;
label_1da128:
    // 0x1da128: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1da128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1da12c: 0xae22302c  sw          $v0, 0x302C($s1)
    ctx->pc = 0x1da12cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
    // 0x1da130: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1da130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1da134: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1da134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1da138: 0xc07e9d4  jal         func_1FA750
    ctx->pc = 0x1DA138u;
    SET_GPR_U32(ctx, 31, 0x1DA140u);
    ctx->pc = 0x1DA13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA138u;
    // 0x1da13c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA750u, 0x1DA138u, 0x1DA140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DA140u;
label_1da140:
    // 0x1da140: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1da140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1da144:
    // 0x1da144: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1da144u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1da148: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1da148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1da14c: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA14Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA14Cu;
        // 0x1da150: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA14Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA154u;
    // 0x1da154: 0x0  nop
    ctx->pc = 0x1da154u;
    // NOP
    ctx->pc = 0x1da158u;
}
