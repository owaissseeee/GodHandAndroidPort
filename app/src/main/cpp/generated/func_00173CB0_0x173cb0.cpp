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

// Function: func_00173CB0
// Address: 0x173cb0 - 0x173de8
void func_00173CB0_0x173cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00173CB0_0x173cb0");
#endif

    switch (ctx->pc) {
        case 0x173cb0u: goto label_173cb0;
        case 0x173cb4u: goto label_173cb4;
        case 0x173cb8u: goto label_173cb8;
        case 0x173cbcu: goto label_173cbc;
        case 0x173cc0u: goto label_173cc0;
        case 0x173cc4u: goto label_173cc4;
        case 0x173cc8u: goto label_173cc8;
        case 0x173cccu: goto label_173ccc;
        case 0x173cd0u: goto label_173cd0;
        case 0x173cd4u: goto label_173cd4;
        case 0x173cd8u: goto label_173cd8;
        case 0x173cdcu: goto label_173cdc;
        case 0x173ce0u: goto label_173ce0;
        case 0x173ce4u: goto label_173ce4;
        case 0x173ce8u: goto label_173ce8;
        case 0x173cecu: goto label_173cec;
        case 0x173cf0u: goto label_173cf0;
        case 0x173cf4u: goto label_173cf4;
        case 0x173cf8u: goto label_173cf8;
        case 0x173cfcu: goto label_173cfc;
        case 0x173d00u: goto label_173d00;
        case 0x173d04u: goto label_173d04;
        case 0x173d08u: goto label_173d08;
        case 0x173d0cu: goto label_173d0c;
        case 0x173d10u: goto label_173d10;
        case 0x173d14u: goto label_173d14;
        case 0x173d18u: goto label_173d18;
        case 0x173d1cu: goto label_173d1c;
        case 0x173d20u: goto label_173d20;
        case 0x173d24u: goto label_173d24;
        case 0x173d28u: goto label_173d28;
        case 0x173d2cu: goto label_173d2c;
        case 0x173d30u: goto label_173d30;
        case 0x173d34u: goto label_173d34;
        case 0x173d38u: goto label_173d38;
        case 0x173d3cu: goto label_173d3c;
        case 0x173d40u: goto label_173d40;
        case 0x173d44u: goto label_173d44;
        case 0x173d48u: goto label_173d48;
        case 0x173d4cu: goto label_173d4c;
        case 0x173d50u: goto label_173d50;
        case 0x173d54u: goto label_173d54;
        case 0x173d58u: goto label_173d58;
        case 0x173d5cu: goto label_173d5c;
        case 0x173d60u: goto label_173d60;
        case 0x173d64u: goto label_173d64;
        case 0x173d68u: goto label_173d68;
        case 0x173d6cu: goto label_173d6c;
        case 0x173d70u: goto label_173d70;
        case 0x173d74u: goto label_173d74;
        case 0x173d78u: goto label_173d78;
        case 0x173d7cu: goto label_173d7c;
        case 0x173d80u: goto label_173d80;
        case 0x173d84u: goto label_173d84;
        case 0x173d88u: goto label_173d88;
        case 0x173d8cu: goto label_173d8c;
        case 0x173d90u: goto label_173d90;
        case 0x173d94u: goto label_173d94;
        case 0x173d98u: goto label_173d98;
        case 0x173d9cu: goto label_173d9c;
        case 0x173da0u: goto label_173da0;
        case 0x173da4u: goto label_173da4;
        case 0x173da8u: goto label_173da8;
        case 0x173dacu: goto label_173dac;
        case 0x173db0u: goto label_173db0;
        case 0x173db4u: goto label_173db4;
        case 0x173db8u: goto label_173db8;
        case 0x173dbcu: goto label_173dbc;
        case 0x173dc0u: goto label_173dc0;
        case 0x173dc4u: goto label_173dc4;
        case 0x173dc8u: goto label_173dc8;
        case 0x173dccu: goto label_173dcc;
        case 0x173dd0u: goto label_173dd0;
        case 0x173dd4u: goto label_173dd4;
        case 0x173dd8u: goto label_173dd8;
        case 0x173ddcu: goto label_173ddc;
        case 0x173de0u: goto label_173de0;
        case 0x173de4u: goto label_173de4;
        default: break;
    }

    ctx->pc = 0x173cb0u;

label_173cb0:
    // 0x173cb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x173cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_173cb4:
    // 0x173cb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x173cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_173cb8:
    // 0x173cb8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x173cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_173cbc:
    // 0x173cbc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x173cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_173cc0:
    // 0x173cc0: 0xc06ddac  jal         func_1B76B0
label_173cc4:
    if (ctx->pc == 0x173CC4u) {
        ctx->pc = 0x173CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CC0u;
        // 0x173cc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173CC8u;
        goto label_173cc8;
    }
    ctx->pc = 0x173CC0u;
    SET_GPR_U32(ctx, 31, 0x173CC8u);
    ctx->pc = 0x173CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173CC0u;
    // 0x173cc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x173CC0u, 0x173CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173CC8u;
label_173cc8:
    // 0x173cc8: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_173ccc:
    if (ctx->pc == 0x173CCCu) {
        ctx->pc = 0x173CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CC8u;
        // 0x173ccc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173CD0u;
        goto label_173cd0;
    }
    ctx->pc = 0x173CC8u;
    {
        const bool branch_taken_0x173cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173cc8) {
            ctx->pc = 0x173CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x173CC8u;
            // 0x173ccc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x173DD8u;
            goto label_173dd8;
        }
    }
    ctx->pc = 0x173CD0u;
label_173cd0:
    // 0x173cd0: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x173cd0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_173cd4:
    // 0x173cd4: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x173cd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_173cd8:
    // 0x173cd8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x173cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_173cdc:
    // 0x173cdc: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_173ce0:
    if (ctx->pc == 0x173CE0u) {
        ctx->pc = 0x173CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CDCu;
        // 0x173ce0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173CE4u;
        goto label_173ce4;
    }
    ctx->pc = 0x173CDCu;
    {
        const bool branch_taken_0x173cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173CDCu;
        // 0x173ce0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173cdc) {
            ctx->pc = 0x173DCCu;
            goto label_173dcc;
        }
    }
    ctx->pc = 0x173CE4u;
label_173ce4:
    // 0x173ce4: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x173ce4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_173ce8:
    // 0x173ce8: 0x24470fc0  addiu       $a3, $v0, 0xFC0
    ctx->pc = 0x173ce8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4032));
label_173cec:
    // 0x173cec: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x173cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_173cf0:
    // 0x173cf0: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x173cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_173cf4:
    // 0x173cf4: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x173cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_173cf8:
    // 0x173cf8: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x173cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_173cfc:
    // 0x173cfc: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x173cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_173d00:
    // 0x173d00: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x173d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_173d04:
    // 0x173d04: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x173d04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_173d08:
    // 0x173d08: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x173d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_173d0c:
    // 0x173d0c: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x173d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_173d10:
    // 0x173d10: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x173d10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_173d14:
    // 0x173d14: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x173d14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_173d18:
    // 0x173d18: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x173d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_173d1c:
    // 0x173d1c: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x173d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_173d20:
    // 0x173d20: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x173d20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_173d24:
    // 0x173d24: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x173d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_173d28:
    // 0x173d28: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x173d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_173d2c:
    // 0x173d2c: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x173d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_173d30:
    // 0x173d30: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x173d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_173d34:
    // 0x173d34: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x173d34u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_173d38:
    // 0x173d38: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x173d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_173d3c:
    // 0x173d3c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x173d3cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_173d40:
    // 0x173d40: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_173d44:
    if (ctx->pc == 0x173D44u) {
        ctx->pc = 0x173D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D40u;
        // 0x173d44: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D48u;
        goto label_173d48;
    }
    ctx->pc = 0x173D40u;
    {
        const bool branch_taken_0x173d40 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x173D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D40u;
        // 0x173d44: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d40) {
            ctx->pc = 0x173D74u;
            goto label_173d74;
        }
    }
    ctx->pc = 0x173D48u;
label_173d48:
    // 0x173d48: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x173d48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_173d4c:
    // 0x173d4c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x173d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_173d50:
    // 0x173d50: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x173d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_173d54:
    // 0x173d54: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x173d54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_173d58:
    // 0x173d58: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x173d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_173d5c:
    // 0x173d5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x173d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_173d60:
    // 0x173d60: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x173d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_173d64:
    // 0x173d64: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x173d64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_173d68:
    // 0x173d68: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x173d68u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_173d6c:
    // 0x173d6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_173d70:
    if (ctx->pc == 0x173D70u) {
        ctx->pc = 0x173D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D6Cu;
        // 0x173d70: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D74u;
        goto label_173d74;
    }
    ctx->pc = 0x173D6Cu;
    {
        const bool branch_taken_0x173d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D6Cu;
        // 0x173d70: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d6c) {
            ctx->pc = 0x173D80u;
            goto label_173d80;
        }
    }
    ctx->pc = 0x173D74u;
label_173d74:
    // 0x173d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x173d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_173d78:
    // 0x173d78: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x173d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_173d7c:
    // 0x173d7c: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x173d7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_173d80:
    // 0x173d80: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x173d80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_173d84:
    // 0x173d84: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x173d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_173d88:
    // 0x173d88: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_173d8c:
    if (ctx->pc == 0x173D8Cu) {
        ctx->pc = 0x173D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D88u;
        // 0x173d8c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173D90u;
        goto label_173d90;
    }
    ctx->pc = 0x173D88u;
    {
        const bool branch_taken_0x173d88 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x173D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D88u;
        // 0x173d8c: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d88) {
            ctx->pc = 0x173DA4u;
            goto label_173da4;
        }
    }
    ctx->pc = 0x173D90u;
label_173d90:
    // 0x173d90: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x173d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_173d94:
    // 0x173d94: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x173d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_173d98:
    // 0x173d98: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x173d98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_173d9c:
    // 0x173d9c: 0x10000002  b           . + 4 + (0x2 << 2)
label_173da0:
    if (ctx->pc == 0x173DA0u) {
        ctx->pc = 0x173DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D9Cu;
        // 0x173da0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DA4u;
        goto label_173da4;
    }
    ctx->pc = 0x173D9Cu;
    {
        const bool branch_taken_0x173d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D9Cu;
        // 0x173da0: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d9c) {
            ctx->pc = 0x173DA8u;
            goto label_173da8;
        }
    }
    ctx->pc = 0x173DA4u;
label_173da4:
    // 0x173da4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x173da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_173da8:
    // 0x173da8: 0xc0f809  jalr        $a2
label_173dac:
    if (ctx->pc == 0x173DACu) {
        ctx->pc = 0x173DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DA8u;
        // 0x173dac: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DB0u;
        goto label_173db0;
    }
    ctx->pc = 0x173DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x173DB0u);
        ctx->pc = 0x173DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DA8u;
        // 0x173dac: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173DA8u, 0x173DB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x173DB0u;
label_173db0:
    // 0x173db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_173db4:
    // 0x173db4: 0xc0aa1fa  jal         func_2A87E8
label_173db8:
    if (ctx->pc == 0x173DB8u) {
        ctx->pc = 0x173DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DB4u;
        // 0x173db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DBCu;
        goto label_173dbc;
    }
    ctx->pc = 0x173DB4u;
    SET_GPR_U32(ctx, 31, 0x173DBCu);
    ctx->pc = 0x173DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173DB4u;
    // 0x173db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x173DB4u, 0x173DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173DBCu;
label_173dbc:
    // 0x173dbc: 0xc06ddb6  jal         func_1B76D8
label_173dc0:
    if (ctx->pc == 0x173DC0u) {
        ctx->pc = 0x173DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DBCu;
        // 0x173dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DC4u;
        goto label_173dc4;
    }
    ctx->pc = 0x173DBCu;
    SET_GPR_U32(ctx, 31, 0x173DC4u);
    ctx->pc = 0x173DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173DBCu;
    // 0x173dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x173DBCu, 0x173DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173DC4u;
label_173dc4:
    // 0x173dc4: 0x10000004  b           . + 4 + (0x4 << 2)
label_173dc8:
    if (ctx->pc == 0x173DC8u) {
        ctx->pc = 0x173DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DC4u;
        // 0x173dc8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DCCu;
        goto label_173dcc;
    }
    ctx->pc = 0x173DC4u;
    {
        const bool branch_taken_0x173dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DC4u;
        // 0x173dc8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173dc4) {
            ctx->pc = 0x173DD8u;
            goto label_173dd8;
        }
    }
    ctx->pc = 0x173DCCu;
label_173dcc:
    // 0x173dcc: 0xc071f8c  jal         func_1C7E30
label_173dd0:
    if (ctx->pc == 0x173DD0u) {
        ctx->pc = 0x173DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DCCu;
        // 0x173dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DD4u;
        goto label_173dd4;
    }
    ctx->pc = 0x173DCCu;
    SET_GPR_U32(ctx, 31, 0x173DD4u);
    ctx->pc = 0x173DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173DCCu;
    // 0x173dd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x173DCCu, 0x173DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173DD4u;
label_173dd4:
    // 0x173dd4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x173dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_173dd8:
    // 0x173dd8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x173dd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_173ddc:
    // 0x173ddc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_173de0:
    // 0x173de0: 0x3e00008  jr          $ra
label_173de4:
    if (ctx->pc == 0x173DE4u) {
        ctx->pc = 0x173DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DE0u;
        // 0x173de4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x173DE8u;
        goto label_fallthrough_0x173de0;
    }
    ctx->pc = 0x173DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173DE0u;
        // 0x173de4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x173de0:
    ctx->pc = 0x173DE8u;
}
