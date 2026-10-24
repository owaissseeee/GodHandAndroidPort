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

// Function: func_00186C58
// Address: 0x186c58 - 0x186d90
void func_00186C58_0x186c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00186C58_0x186c58");
#endif

    switch (ctx->pc) {
        case 0x186c58u: goto label_186c58;
        case 0x186c5cu: goto label_186c5c;
        case 0x186c60u: goto label_186c60;
        case 0x186c64u: goto label_186c64;
        case 0x186c68u: goto label_186c68;
        case 0x186c6cu: goto label_186c6c;
        case 0x186c70u: goto label_186c70;
        case 0x186c74u: goto label_186c74;
        case 0x186c78u: goto label_186c78;
        case 0x186c7cu: goto label_186c7c;
        case 0x186c80u: goto label_186c80;
        case 0x186c84u: goto label_186c84;
        case 0x186c88u: goto label_186c88;
        case 0x186c8cu: goto label_186c8c;
        case 0x186c90u: goto label_186c90;
        case 0x186c94u: goto label_186c94;
        case 0x186c98u: goto label_186c98;
        case 0x186c9cu: goto label_186c9c;
        case 0x186ca0u: goto label_186ca0;
        case 0x186ca4u: goto label_186ca4;
        case 0x186ca8u: goto label_186ca8;
        case 0x186cacu: goto label_186cac;
        case 0x186cb0u: goto label_186cb0;
        case 0x186cb4u: goto label_186cb4;
        case 0x186cb8u: goto label_186cb8;
        case 0x186cbcu: goto label_186cbc;
        case 0x186cc0u: goto label_186cc0;
        case 0x186cc4u: goto label_186cc4;
        case 0x186cc8u: goto label_186cc8;
        case 0x186cccu: goto label_186ccc;
        case 0x186cd0u: goto label_186cd0;
        case 0x186cd4u: goto label_186cd4;
        case 0x186cd8u: goto label_186cd8;
        case 0x186cdcu: goto label_186cdc;
        case 0x186ce0u: goto label_186ce0;
        case 0x186ce4u: goto label_186ce4;
        case 0x186ce8u: goto label_186ce8;
        case 0x186cecu: goto label_186cec;
        case 0x186cf0u: goto label_186cf0;
        case 0x186cf4u: goto label_186cf4;
        case 0x186cf8u: goto label_186cf8;
        case 0x186cfcu: goto label_186cfc;
        case 0x186d00u: goto label_186d00;
        case 0x186d04u: goto label_186d04;
        case 0x186d08u: goto label_186d08;
        case 0x186d0cu: goto label_186d0c;
        case 0x186d10u: goto label_186d10;
        case 0x186d14u: goto label_186d14;
        case 0x186d18u: goto label_186d18;
        case 0x186d1cu: goto label_186d1c;
        case 0x186d20u: goto label_186d20;
        case 0x186d24u: goto label_186d24;
        case 0x186d28u: goto label_186d28;
        case 0x186d2cu: goto label_186d2c;
        case 0x186d30u: goto label_186d30;
        case 0x186d34u: goto label_186d34;
        case 0x186d38u: goto label_186d38;
        case 0x186d3cu: goto label_186d3c;
        case 0x186d40u: goto label_186d40;
        case 0x186d44u: goto label_186d44;
        case 0x186d48u: goto label_186d48;
        case 0x186d4cu: goto label_186d4c;
        case 0x186d50u: goto label_186d50;
        case 0x186d54u: goto label_186d54;
        case 0x186d58u: goto label_186d58;
        case 0x186d5cu: goto label_186d5c;
        case 0x186d60u: goto label_186d60;
        case 0x186d64u: goto label_186d64;
        case 0x186d68u: goto label_186d68;
        case 0x186d6cu: goto label_186d6c;
        case 0x186d70u: goto label_186d70;
        case 0x186d74u: goto label_186d74;
        case 0x186d78u: goto label_186d78;
        case 0x186d7cu: goto label_186d7c;
        case 0x186d80u: goto label_186d80;
        case 0x186d84u: goto label_186d84;
        case 0x186d88u: goto label_186d88;
        case 0x186d8cu: goto label_186d8c;
        default: break;
    }

    ctx->pc = 0x186c58u;

label_186c58:
    // 0x186c58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x186c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_186c5c:
    // 0x186c5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x186c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_186c60:
    // 0x186c60: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x186c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_186c64:
    // 0x186c64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x186c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_186c68:
    // 0x186c68: 0xc06ddac  jal         func_1B76B0
label_186c6c:
    if (ctx->pc == 0x186C6Cu) {
        ctx->pc = 0x186C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C68u;
        // 0x186c6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C70u;
        goto label_186c70;
    }
    ctx->pc = 0x186C68u;
    SET_GPR_U32(ctx, 31, 0x186C70u);
    ctx->pc = 0x186C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186C68u;
    // 0x186c6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x186C68u, 0x186C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186C70u;
label_186c70:
    // 0x186c70: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
label_186c74:
    if (ctx->pc == 0x186C74u) {
        ctx->pc = 0x186C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C70u;
        // 0x186c74: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C78u;
        goto label_186c78;
    }
    ctx->pc = 0x186C70u;
    {
        const bool branch_taken_0x186c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x186c70) {
            ctx->pc = 0x186C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x186C70u;
            // 0x186c74: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x186D80u;
            goto label_186d80;
        }
    }
    ctx->pc = 0x186C78u;
label_186c78:
    // 0x186c78: 0x9e0205b0  lwu         $v0, 0x5B0($s0)
    ctx->pc = 0x186c78u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1456)));
label_186c7c:
    // 0x186c7c: 0x210bb  dsra        $v0, $v0, 2
    ctx->pc = 0x186c7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 2);
label_186c80:
    // 0x186c80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x186c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_186c84:
    // 0x186c84: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_186c88:
    if (ctx->pc == 0x186C88u) {
        ctx->pc = 0x186C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C84u;
        // 0x186c88: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186C8Cu;
        goto label_186c8c;
    }
    ctx->pc = 0x186C84u;
    {
        const bool branch_taken_0x186c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x186C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186C84u;
        // 0x186c88: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186c84) {
            ctx->pc = 0x186D74u;
            goto label_186d74;
        }
    }
    ctx->pc = 0x186C8Cu;
label_186c8c:
    // 0x186c8c: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x186c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_186c90:
    // 0x186c90: 0x24473058  addiu       $a3, $v0, 0x3058
    ctx->pc = 0x186c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12376));
label_186c94:
    // 0x186c94: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x186c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_186c98:
    // 0x186c98: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x186c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_186c9c:
    // 0x186c9c: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x186c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_186ca0:
    // 0x186ca0: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x186ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_186ca4:
    // 0x186ca4: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x186ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_186ca8:
    // 0x186ca8: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x186ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_186cac:
    // 0x186cac: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x186cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_186cb0:
    // 0x186cb0: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x186cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_186cb4:
    // 0x186cb4: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x186cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_186cb8:
    // 0x186cb8: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x186cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_186cbc:
    // 0x186cbc: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x186cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_186cc0:
    // 0x186cc0: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x186cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_186cc4:
    // 0x186cc4: 0x68e4001f  ldl         $a0, 0x1F($a3)
    ctx->pc = 0x186cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_186cc8:
    // 0x186cc8: 0x6ce40018  ldr         $a0, 0x18($a3)
    ctx->pc = 0x186cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_186ccc:
    // 0x186ccc: 0xb3a4001f  sdl         $a0, 0x1F($sp)
    ctx->pc = 0x186cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_186cd0:
    // 0x186cd0: 0xb7a40018  sdr         $a0, 0x18($sp)
    ctx->pc = 0x186cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_186cd4:
    // 0x186cd4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x186cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_186cd8:
    // 0x186cd8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x186cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_186cdc:
    // 0x186cdc: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x186cdcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_186ce0:
    // 0x186ce0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x186ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_186ce4:
    // 0x186ce4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x186ce4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_186ce8:
    // 0x186ce8: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_186cec:
    if (ctx->pc == 0x186CECu) {
        ctx->pc = 0x186CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CE8u;
        // 0x186cec: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186CF0u;
        goto label_186cf0;
    }
    ctx->pc = 0x186CE8u;
    {
        const bool branch_taken_0x186ce8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x186CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186CE8u;
        // 0x186cec: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186ce8) {
            ctx->pc = 0x186D1Cu;
            goto label_186d1c;
        }
    }
    ctx->pc = 0x186CF0u;
label_186cf0:
    // 0x186cf0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x186cf0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_186cf4:
    // 0x186cf4: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x186cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_186cf8:
    // 0x186cf8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x186cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_186cfc:
    // 0x186cfc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x186cfcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_186d00:
    // 0x186d00: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x186d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_186d04:
    // 0x186d04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x186d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_186d08:
    // 0x186d08: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x186d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_186d0c:
    // 0x186d0c: 0xdc91fff8  ld          $s1, -0x8($a0)
    ctx->pc = 0x186d0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_186d10:
    // 0x186d10: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x186d10u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_186d14:
    // 0x186d14: 0x10000004  b           . + 4 + (0x4 << 2)
label_186d18:
    if (ctx->pc == 0x186D18u) {
        ctx->pc = 0x186D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D14u;
        // 0x186d18: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D1Cu;
        goto label_186d1c;
    }
    ctx->pc = 0x186D14u;
    {
        const bool branch_taken_0x186d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D14u;
        // 0x186d18: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d14) {
            ctx->pc = 0x186D28u;
            goto label_186d28;
        }
    }
    ctx->pc = 0x186D1Cu;
label_186d1c:
    // 0x186d1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x186d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_186d20:
    // 0x186d20: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x186d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_186d24:
    // 0x186d24: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x186d24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_186d28:
    // 0x186d28: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x186d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_186d2c:
    // 0x186d2c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x186d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_186d30:
    // 0x186d30: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_186d34:
    if (ctx->pc == 0x186D34u) {
        ctx->pc = 0x186D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D30u;
        // 0x186d34: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D38u;
        goto label_186d38;
    }
    ctx->pc = 0x186D30u;
    {
        const bool branch_taken_0x186d30 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x186D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D30u;
        // 0x186d34: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d30) {
            ctx->pc = 0x186D4Cu;
            goto label_186d4c;
        }
    }
    ctx->pc = 0x186D38u;
label_186d38:
    // 0x186d38: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x186d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_186d3c:
    // 0x186d3c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x186d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_186d40:
    // 0x186d40: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x186d40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_186d44:
    // 0x186d44: 0x10000002  b           . + 4 + (0x2 << 2)
label_186d48:
    if (ctx->pc == 0x186D48u) {
        ctx->pc = 0x186D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D44u;
        // 0x186d48: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D4Cu;
        goto label_186d4c;
    }
    ctx->pc = 0x186D44u;
    {
        const bool branch_taken_0x186d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D44u;
        // 0x186d48: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d44) {
            ctx->pc = 0x186D50u;
            goto label_186d50;
        }
    }
    ctx->pc = 0x186D4Cu;
label_186d4c:
    // 0x186d4c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x186d4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_186d50:
    // 0x186d50: 0xc0f809  jalr        $a2
label_186d54:
    if (ctx->pc == 0x186D54u) {
        ctx->pc = 0x186D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D50u;
        // 0x186d54: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D58u;
        goto label_186d58;
    }
    ctx->pc = 0x186D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x186D58u);
        ctx->pc = 0x186D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D50u;
        // 0x186d54: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186D50u, 0x186D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x186D58u;
label_186d58:
    // 0x186d58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x186d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_186d5c:
    // 0x186d5c: 0xc0aa1fa  jal         func_2A87E8
label_186d60:
    if (ctx->pc == 0x186D60u) {
        ctx->pc = 0x186D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D5Cu;
        // 0x186d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D64u;
        goto label_186d64;
    }
    ctx->pc = 0x186D5Cu;
    SET_GPR_U32(ctx, 31, 0x186D64u);
    ctx->pc = 0x186D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D5Cu;
    // 0x186d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A87E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A87E8u, 0x186D5Cu, 0x186D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D64u;
label_186d64:
    // 0x186d64: 0xc06ddb6  jal         func_1B76D8
label_186d68:
    if (ctx->pc == 0x186D68u) {
        ctx->pc = 0x186D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D64u;
        // 0x186d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D6Cu;
        goto label_186d6c;
    }
    ctx->pc = 0x186D64u;
    SET_GPR_U32(ctx, 31, 0x186D6Cu);
    ctx->pc = 0x186D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D64u;
    // 0x186d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x186D64u, 0x186D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D6Cu;
label_186d6c:
    // 0x186d6c: 0x10000004  b           . + 4 + (0x4 << 2)
label_186d70:
    if (ctx->pc == 0x186D70u) {
        ctx->pc = 0x186D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D6Cu;
        // 0x186d70: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D74u;
        goto label_186d74;
    }
    ctx->pc = 0x186D6Cu;
    {
        const bool branch_taken_0x186d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x186D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D6Cu;
        // 0x186d70: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186d6c) {
            ctx->pc = 0x186D80u;
            goto label_186d80;
        }
    }
    ctx->pc = 0x186D74u;
label_186d74:
    // 0x186d74: 0xc071f8c  jal         func_1C7E30
label_186d78:
    if (ctx->pc == 0x186D78u) {
        ctx->pc = 0x186D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D74u;
        // 0x186d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D7Cu;
        goto label_186d7c;
    }
    ctx->pc = 0x186D74u;
    SET_GPR_U32(ctx, 31, 0x186D7Cu);
    ctx->pc = 0x186D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x186D74u;
    // 0x186d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E30u, 0x186D74u, 0x186D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x186D7Cu;
label_186d7c:
    // 0x186d7c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x186d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_186d80:
    // 0x186d80: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x186d80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_186d84:
    // 0x186d84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x186d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_186d88:
    // 0x186d88: 0x3e00008  jr          $ra
label_186d8c:
    if (ctx->pc == 0x186D8Cu) {
        ctx->pc = 0x186D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D88u;
        // 0x186d8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x186D90u;
        goto label_fallthrough_0x186d88;
    }
    ctx->pc = 0x186D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x186D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x186D88u;
        // 0x186d8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x186D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x186d88:
    ctx->pc = 0x186D90u;
}
