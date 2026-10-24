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

// Function: func_0018DF18
// Address: 0x18df18 - 0x18e050
void func_0018DF18_0x18df18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018DF18_0x18df18");
#endif

    switch (ctx->pc) {
        case 0x18df18u: goto label_18df18;
        case 0x18df1cu: goto label_18df1c;
        case 0x18df20u: goto label_18df20;
        case 0x18df24u: goto label_18df24;
        case 0x18df28u: goto label_18df28;
        case 0x18df2cu: goto label_18df2c;
        case 0x18df30u: goto label_18df30;
        case 0x18df34u: goto label_18df34;
        case 0x18df38u: goto label_18df38;
        case 0x18df3cu: goto label_18df3c;
        case 0x18df40u: goto label_18df40;
        case 0x18df44u: goto label_18df44;
        case 0x18df48u: goto label_18df48;
        case 0x18df4cu: goto label_18df4c;
        case 0x18df50u: goto label_18df50;
        case 0x18df54u: goto label_18df54;
        case 0x18df58u: goto label_18df58;
        case 0x18df5cu: goto label_18df5c;
        case 0x18df60u: goto label_18df60;
        case 0x18df64u: goto label_18df64;
        case 0x18df68u: goto label_18df68;
        case 0x18df6cu: goto label_18df6c;
        case 0x18df70u: goto label_18df70;
        case 0x18df74u: goto label_18df74;
        case 0x18df78u: goto label_18df78;
        case 0x18df7cu: goto label_18df7c;
        case 0x18df80u: goto label_18df80;
        case 0x18df84u: goto label_18df84;
        case 0x18df88u: goto label_18df88;
        case 0x18df8cu: goto label_18df8c;
        case 0x18df90u: goto label_18df90;
        case 0x18df94u: goto label_18df94;
        case 0x18df98u: goto label_18df98;
        case 0x18df9cu: goto label_18df9c;
        case 0x18dfa0u: goto label_18dfa0;
        case 0x18dfa4u: goto label_18dfa4;
        case 0x18dfa8u: goto label_18dfa8;
        case 0x18dfacu: goto label_18dfac;
        case 0x18dfb0u: goto label_18dfb0;
        case 0x18dfb4u: goto label_18dfb4;
        case 0x18dfb8u: goto label_18dfb8;
        case 0x18dfbcu: goto label_18dfbc;
        case 0x18dfc0u: goto label_18dfc0;
        case 0x18dfc4u: goto label_18dfc4;
        case 0x18dfc8u: goto label_18dfc8;
        case 0x18dfccu: goto label_18dfcc;
        case 0x18dfd0u: goto label_18dfd0;
        case 0x18dfd4u: goto label_18dfd4;
        case 0x18dfd8u: goto label_18dfd8;
        case 0x18dfdcu: goto label_18dfdc;
        case 0x18dfe0u: goto label_18dfe0;
        case 0x18dfe4u: goto label_18dfe4;
        case 0x18dfe8u: goto label_18dfe8;
        case 0x18dfecu: goto label_18dfec;
        case 0x18dff0u: goto label_18dff0;
        case 0x18dff4u: goto label_18dff4;
        case 0x18dff8u: goto label_18dff8;
        case 0x18dffcu: goto label_18dffc;
        case 0x18e000u: goto label_18e000;
        case 0x18e004u: goto label_18e004;
        case 0x18e008u: goto label_18e008;
        case 0x18e00cu: goto label_18e00c;
        case 0x18e010u: goto label_18e010;
        case 0x18e014u: goto label_18e014;
        case 0x18e018u: goto label_18e018;
        case 0x18e01cu: goto label_18e01c;
        case 0x18e020u: goto label_18e020;
        case 0x18e024u: goto label_18e024;
        case 0x18e028u: goto label_18e028;
        case 0x18e02cu: goto label_18e02c;
        case 0x18e030u: goto label_18e030;
        case 0x18e034u: goto label_18e034;
        case 0x18e038u: goto label_18e038;
        case 0x18e03cu: goto label_18e03c;
        case 0x18e040u: goto label_18e040;
        case 0x18e044u: goto label_18e044;
        case 0x18e048u: goto label_18e048;
        case 0x18e04cu: goto label_18e04c;
        default: break;
    }

    ctx->pc = 0x18df18u;

label_18df18:
    // 0x18df18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18df18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_18df1c:
    // 0x18df1c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18df1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_18df20:
    // 0x18df20: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18df20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_18df24:
    // 0x18df24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x18df24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18df28:
    // 0x18df28: 0xc06ddac  jal         func_1B76B0
label_18df2c:
    if (ctx->pc == 0x18DF2Cu) {
        ctx->pc = 0x18DF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF28u;
        // 0x18df2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF30u;
        goto label_18df30;
    }
    ctx->pc = 0x18DF28u;
    SET_GPR_U32(ctx, 31, 0x18DF30u);
    ctx->pc = 0x18DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DF28u;
    // 0x18df2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x18DF28u, 0x18DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DF30u;
label_18df30:
    // 0x18df30: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_18df34:
    if (ctx->pc == 0x18DF34u) {
        ctx->pc = 0x18DF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF30u;
        // 0x18df34: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF38u;
        goto label_18df38;
    }
    ctx->pc = 0x18DF30u;
    {
        const bool branch_taken_0x18df30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18df30) {
            ctx->pc = 0x18DF34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18DF30u;
            // 0x18df34: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18E040u;
            goto label_18e040;
        }
    }
    ctx->pc = 0x18DF38u;
label_18df38:
    // 0x18df38: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x18df38u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_18df3c:
    // 0x18df3c: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x18df3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_18df40:
    // 0x18df40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18df40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18df44:
    // 0x18df44: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_18df48:
    if (ctx->pc == 0x18DF48u) {
        ctx->pc = 0x18DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF44u;
        // 0x18df48: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DF4Cu;
        goto label_18df4c;
    }
    ctx->pc = 0x18DF44u;
    {
        const bool branch_taken_0x18df44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18DF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DF44u;
        // 0x18df48: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18df44) {
            ctx->pc = 0x18E034u;
            goto label_18e034;
        }
    }
    ctx->pc = 0x18DF4Cu;
label_18df4c:
    // 0x18df4c: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x18df4cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_18df50:
    // 0x18df50: 0x24473a98  addiu       $a3, $v0, 0x3A98
    ctx->pc = 0x18df50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 15000));
label_18df54:
    // 0x18df54: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x18df54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18df58:
    // 0x18df58: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x18df58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_18df5c:
    // 0x18df5c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x18df5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_18df60:
    // 0x18df60: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x18df60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_18df64:
    // 0x18df64: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x18df64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_18df68:
    // 0x18df68: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x18df68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_18df6c:
    // 0x18df6c: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x18df6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18df70:
    // 0x18df70: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x18df70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18df74:
    // 0x18df74: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x18df74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18df78:
    // 0x18df78: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x18df78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18df7c:
    // 0x18df7c: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x18df7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18df80:
    // 0x18df80: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x18df80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18df84:
    // 0x18df84: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x18df84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_18df88:
    // 0x18df88: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x18df88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_18df8c:
    // 0x18df8c: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x18df8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_18df90:
    // 0x18df90: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x18df90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_18df94:
    // 0x18df94: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18df94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_18df98:
    // 0x18df98: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x18df98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_18df9c:
    // 0x18df9c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x18df9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_18dfa0:
    // 0x18dfa0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18dfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18dfa4:
    // 0x18dfa4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x18dfa4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_18dfa8:
    // 0x18dfa8: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_18dfac:
    if (ctx->pc == 0x18DFACu) {
        ctx->pc = 0x18DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFA8u;
        // 0x18dfac: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFB0u;
        goto label_18dfb0;
    }
    ctx->pc = 0x18DFA8u;
    {
        const bool branch_taken_0x18dfa8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFA8u;
        // 0x18dfac: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfa8) {
            ctx->pc = 0x18DFDCu;
            goto label_18dfdc;
        }
    }
    ctx->pc = 0x18DFB0u;
label_18dfb0:
    // 0x18dfb0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x18dfb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_18dfb4:
    // 0x18dfb4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18dfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_18dfb8:
    // 0x18dfb8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18dfbc:
    // 0x18dfbc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18dfbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18dfc0:
    // 0x18dfc0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x18dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_18dfc4:
    // 0x18dfc4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x18dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18dfc8:
    // 0x18dfc8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x18dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_18dfcc:
    // 0x18dfcc: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x18dfccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_18dfd0:
    // 0x18dfd0: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x18dfd0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_18dfd4:
    // 0x18dfd4: 0x10000004  b           . + 4 + (0x4 << 2)
label_18dfd8:
    if (ctx->pc == 0x18DFD8u) {
        ctx->pc = 0x18DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFD4u;
        // 0x18dfd8: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFDCu;
        goto label_18dfdc;
    }
    ctx->pc = 0x18DFD4u;
    {
        const bool branch_taken_0x18dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFD4u;
        // 0x18dfd8: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dfd4) {
            ctx->pc = 0x18DFE8u;
            goto label_18dfe8;
        }
    }
    ctx->pc = 0x18DFDCu;
label_18dfdc:
    // 0x18dfdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18dfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18dfe0:
    // 0x18dfe0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x18dfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18dfe4:
    // 0x18dfe4: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x18dfe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_18dfe8:
    // 0x18dfe8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x18dfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_18dfec:
    // 0x18dfec: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x18dfecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_18dff0:
    // 0x18dff0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_18dff4:
    if (ctx->pc == 0x18DFF4u) {
        ctx->pc = 0x18DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFF0u;
        // 0x18dff4: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18DFF8u;
        goto label_18dff8;
    }
    ctx->pc = 0x18DFF0u;
    {
        const bool branch_taken_0x18dff0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x18DFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DFF0u;
        // 0x18dff4: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dff0) {
            ctx->pc = 0x18E00Cu;
            goto label_18e00c;
        }
    }
    ctx->pc = 0x18DFF8u;
label_18dff8:
    // 0x18dff8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x18dff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_18dffc:
    // 0x18dffc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x18dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_18e000:
    // 0x18e000: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x18e000u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_18e004:
    // 0x18e004: 0x10000002  b           . + 4 + (0x2 << 2)
label_18e008:
    if (ctx->pc == 0x18E008u) {
        ctx->pc = 0x18E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E004u;
        // 0x18e008: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E00Cu;
        goto label_18e00c;
    }
    ctx->pc = 0x18E004u;
    {
        const bool branch_taken_0x18e004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E004u;
        // 0x18e008: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e004) {
            ctx->pc = 0x18E010u;
            goto label_18e010;
        }
    }
    ctx->pc = 0x18E00Cu;
label_18e00c:
    // 0x18e00c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x18e00cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_18e010:
    // 0x18e010: 0xc0f809  jalr        $a2
label_18e014:
    if (ctx->pc == 0x18E014u) {
        ctx->pc = 0x18E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E010u;
        // 0x18e014: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E018u;
        goto label_18e018;
    }
    ctx->pc = 0x18E010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x18E018u);
        ctx->pc = 0x18E014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E010u;
        // 0x18e014: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E010u, 0x18E018u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E018u;
label_18e018:
    // 0x18e018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18e018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_18e01c:
    // 0x18e01c: 0xc0aa1fa  jal         func_2A87E8
label_18e020:
    if (ctx->pc == 0x18E020u) {
        ctx->pc = 0x18E020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E01Cu;
        // 0x18e020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E024u;
        goto label_18e024;
    }
    ctx->pc = 0x18E01Cu;
    SET_GPR_U32(ctx, 31, 0x18E024u);
    ctx->pc = 0x18E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E01Cu;
    // 0x18e020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x18E01Cu, 0x18E024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E024u;
label_18e024:
    // 0x18e024: 0xc06ddb6  jal         func_1B76D8
label_18e028:
    if (ctx->pc == 0x18E028u) {
        ctx->pc = 0x18E028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E024u;
        // 0x18e028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E02Cu;
        goto label_18e02c;
    }
    ctx->pc = 0x18E024u;
    SET_GPR_U32(ctx, 31, 0x18E02Cu);
    ctx->pc = 0x18E028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E024u;
    // 0x18e028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x18E024u, 0x18E02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E02Cu;
label_18e02c:
    // 0x18e02c: 0x10000004  b           . + 4 + (0x4 << 2)
label_18e030:
    if (ctx->pc == 0x18E030u) {
        ctx->pc = 0x18E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E02Cu;
        // 0x18e030: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E034u;
        goto label_18e034;
    }
    ctx->pc = 0x18E02Cu;
    {
        const bool branch_taken_0x18e02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E02Cu;
        // 0x18e030: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e02c) {
            ctx->pc = 0x18E040u;
            goto label_18e040;
        }
    }
    ctx->pc = 0x18E034u;
label_18e034:
    // 0x18e034: 0xc071f8c  jal         func_1C7E30
label_18e038:
    if (ctx->pc == 0x18E038u) {
        ctx->pc = 0x18E038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E034u;
        // 0x18e038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E03Cu;
        goto label_18e03c;
    }
    ctx->pc = 0x18E034u;
    SET_GPR_U32(ctx, 31, 0x18E03Cu);
    ctx->pc = 0x18E038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E034u;
    // 0x18e038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x18E034u, 0x18E03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E03Cu;
label_18e03c:
    // 0x18e03c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18e03cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_18e040:
    // 0x18e040: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18e040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18e044:
    // 0x18e044: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x18e044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_18e048:
    // 0x18e048: 0x3e00008  jr          $ra
label_18e04c:
    if (ctx->pc == 0x18E04Cu) {
        ctx->pc = 0x18E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E048u;
        // 0x18e04c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E050u;
        goto label_fallthrough_0x18e048;
    }
    ctx->pc = 0x18E048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E048u;
        // 0x18e04c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x18e048:
    ctx->pc = 0x18E050u;
}
