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

// Function: cCamera_stepState
// Address: 0x139c88 - 0x139db8
void cCamera_stepState_0x139c88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCamera_stepState_0x139c88");
#endif

    switch (ctx->pc) {
        case 0x139c88u: goto label_139c88;
        case 0x139c8cu: goto label_139c8c;
        case 0x139c90u: goto label_139c90;
        case 0x139c94u: goto label_139c94;
        case 0x139c98u: goto label_139c98;
        case 0x139c9cu: goto label_139c9c;
        case 0x139ca0u: goto label_139ca0;
        case 0x139ca4u: goto label_139ca4;
        case 0x139ca8u: goto label_139ca8;
        case 0x139cacu: goto label_139cac;
        case 0x139cb0u: goto label_139cb0;
        case 0x139cb4u: goto label_139cb4;
        case 0x139cb8u: goto label_139cb8;
        case 0x139cbcu: goto label_139cbc;
        case 0x139cc0u: goto label_139cc0;
        case 0x139cc4u: goto label_139cc4;
        case 0x139cc8u: goto label_139cc8;
        case 0x139cccu: goto label_139ccc;
        case 0x139cd0u: goto label_139cd0;
        case 0x139cd4u: goto label_139cd4;
        case 0x139cd8u: goto label_139cd8;
        case 0x139cdcu: goto label_139cdc;
        case 0x139ce0u: goto label_139ce0;
        case 0x139ce4u: goto label_139ce4;
        case 0x139ce8u: goto label_139ce8;
        case 0x139cecu: goto label_139cec;
        case 0x139cf0u: goto label_139cf0;
        case 0x139cf4u: goto label_139cf4;
        case 0x139cf8u: goto label_139cf8;
        case 0x139cfcu: goto label_139cfc;
        case 0x139d00u: goto label_139d00;
        case 0x139d04u: goto label_139d04;
        case 0x139d08u: goto label_139d08;
        case 0x139d0cu: goto label_139d0c;
        case 0x139d10u: goto label_139d10;
        case 0x139d14u: goto label_139d14;
        case 0x139d18u: goto label_139d18;
        case 0x139d1cu: goto label_139d1c;
        case 0x139d20u: goto label_139d20;
        case 0x139d24u: goto label_139d24;
        case 0x139d28u: goto label_139d28;
        case 0x139d2cu: goto label_139d2c;
        case 0x139d30u: goto label_139d30;
        case 0x139d34u: goto label_139d34;
        case 0x139d38u: goto label_139d38;
        case 0x139d3cu: goto label_139d3c;
        case 0x139d40u: goto label_139d40;
        case 0x139d44u: goto label_139d44;
        case 0x139d48u: goto label_139d48;
        case 0x139d4cu: goto label_139d4c;
        case 0x139d50u: goto label_139d50;
        case 0x139d54u: goto label_139d54;
        case 0x139d58u: goto label_139d58;
        case 0x139d5cu: goto label_139d5c;
        case 0x139d60u: goto label_139d60;
        case 0x139d64u: goto label_139d64;
        case 0x139d68u: goto label_139d68;
        case 0x139d6cu: goto label_139d6c;
        case 0x139d70u: goto label_139d70;
        case 0x139d74u: goto label_139d74;
        case 0x139d78u: goto label_139d78;
        case 0x139d7cu: goto label_139d7c;
        case 0x139d80u: goto label_139d80;
        case 0x139d84u: goto label_139d84;
        case 0x139d88u: goto label_139d88;
        case 0x139d8cu: goto label_139d8c;
        case 0x139d90u: goto label_139d90;
        case 0x139d94u: goto label_139d94;
        case 0x139d98u: goto label_139d98;
        case 0x139d9cu: goto label_139d9c;
        case 0x139da0u: goto label_139da0;
        case 0x139da4u: goto label_139da4;
        case 0x139da8u: goto label_139da8;
        case 0x139dacu: goto label_139dac;
        case 0x139db0u: goto label_139db0;
        case 0x139db4u: goto label_139db4;
        default: break;
    }

    ctx->pc = 0x139c88u;

label_139c88:
    // 0x139c88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x139c88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_139c8c:
    // 0x139c8c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x139c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_139c90:
    // 0x139c90: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x139c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_139c94:
    // 0x139c94: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x139c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
label_139c98:
    // 0x139c98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x139c98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_139c9c:
    // 0x139c9c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x139c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_139ca0:
    // 0x139ca0: 0x460003f  bltz        $v1, . + 4 + (0x3F << 2)
label_139ca4:
    if (ctx->pc == 0x139CA4u) {
        ctx->pc = 0x139CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CA0u;
        // 0x139ca4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139CA8u;
        goto label_139ca8;
    }
    ctx->pc = 0x139CA0u;
    {
        const bool branch_taken_0x139ca0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x139CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CA0u;
        // 0x139ca4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ca0) {
            ctx->pc = 0x139DA0u;
            goto label_139da0;
        }
    }
    ctx->pc = 0x139CA8u;
label_139ca8:
    // 0x139ca8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x139ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_139cac:
    // 0x139cac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x139cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_139cb0:
    // 0x139cb0: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
label_139cb4:
    if (ctx->pc == 0x139CB4u) {
        ctx->pc = 0x139CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CB0u;
        // 0x139cb4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139CB8u;
        goto label_139cb8;
    }
    ctx->pc = 0x139CB0u;
    {
        const bool branch_taken_0x139cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CB0u;
        // 0x139cb4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139cb0) {
            ctx->pc = 0x139DA4u;
            goto label_139da4;
        }
    }
    ctx->pc = 0x139CB8u;
label_139cb8:
    // 0x139cb8: 0x8e230520  lw          $v1, 0x520($s1)
    ctx->pc = 0x139cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1312)));
label_139cbc:
    // 0x139cbc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x139cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_139cc0:
    // 0x139cc0: 0x2448d970  addiu       $t0, $v0, -0x2690
    ctx->pc = 0x139cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957424));
label_139cc4:
    // 0x139cc4: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x139cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_139cc8:
    // 0x139cc8: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x139cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_139ccc:
    // 0x139ccc: 0x6905000f  ldl         $a1, 0xF($t0)
    ctx->pc = 0x139cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_139cd0:
    // 0x139cd0: 0x6d050008  ldr         $a1, 0x8($t0)
    ctx->pc = 0x139cd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_139cd4:
    // 0x139cd4: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x139cd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_139cd8:
    // 0x139cd8: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x139cd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_139cdc:
    // 0x139cdc: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x139cdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_139ce0:
    // 0x139ce0: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x139ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_139ce4:
    // 0x139ce4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x139ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_139ce8:
    // 0x139ce8: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x139ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_139cec:
    // 0x139cec: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x139cecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_139cf0:
    // 0x139cf0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x139cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_139cf4:
    // 0x139cf4: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x139cf4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_139cf8:
    // 0x139cf8: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_139cfc:
    if (ctx->pc == 0x139CFCu) {
        ctx->pc = 0x139CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CF8u;
        // 0x139cfc: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139D00u;
        goto label_139d00;
    }
    ctx->pc = 0x139CF8u;
    {
        const bool branch_taken_0x139cf8 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x139CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139CF8u;
        // 0x139cfc: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139cf8) {
            ctx->pc = 0x139D2Cu;
            goto label_139d2c;
        }
    }
    ctx->pc = 0x139D00u;
label_139d00:
    // 0x139d00: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x139d00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_139d04:
    // 0x139d04: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x139d04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_139d08:
    // 0x139d08: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x139d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_139d0c:
    // 0x139d0c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x139d0cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_139d10:
    // 0x139d10: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x139d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_139d14:
    // 0x139d14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x139d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_139d18:
    // 0x139d18: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x139d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_139d1c:
    // 0x139d1c: 0xdc87fff8  ld          $a3, -0x8($a0)
    ctx->pc = 0x139d1cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_139d20:
    // 0x139d20: 0x7303f  dsra32      $a2, $a3, 0
    ctx->pc = 0x139d20u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 7) >> (32 + 0));
label_139d24:
    // 0x139d24: 0x10000004  b           . + 4 + (0x4 << 2)
label_139d28:
    if (ctx->pc == 0x139D28u) {
        ctx->pc = 0x139D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D24u;
        // 0x139d28: 0x8e220520  lw          $v0, 0x520($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1312)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139D2Cu;
        goto label_139d2c;
    }
    ctx->pc = 0x139D24u;
    {
        const bool branch_taken_0x139d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D24u;
        // 0x139d28: 0x8e220520  lw          $v0, 0x520($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d24) {
            ctx->pc = 0x139D38u;
            goto label_139d38;
        }
    }
    ctx->pc = 0x139D2Cu;
label_139d2c:
    // 0x139d2c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_139d30:
    // 0x139d30: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x139d30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_139d34:
    // 0x139d34: 0x8e220520  lw          $v0, 0x520($s1)
    ctx->pc = 0x139d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1312)));
label_139d38:
    // 0x139d38: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x139d38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_139d3c:
    // 0x139d3c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x139d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_139d40:
    // 0x139d40: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_139d44:
    if (ctx->pc == 0x139D44u) {
        ctx->pc = 0x139D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D40u;
        // 0x139d44: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139D48u;
        goto label_139d48;
    }
    ctx->pc = 0x139D40u;
    {
        const bool branch_taken_0x139d40 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x139D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D40u;
        // 0x139d44: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d40) {
            ctx->pc = 0x139D5Cu;
            goto label_139d5c;
        }
    }
    ctx->pc = 0x139D48u;
label_139d48:
    // 0x139d48: 0x30e2ffff  andi        $v0, $a3, 0xFFFF
    ctx->pc = 0x139d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_139d4c:
    // 0x139d4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x139d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_139d50:
    // 0x139d50: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x139d50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_139d54:
    // 0x139d54: 0x10000002  b           . + 4 + (0x2 << 2)
label_139d58:
    if (ctx->pc == 0x139D58u) {
        ctx->pc = 0x139D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D54u;
        // 0x139d58: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139D5Cu;
        goto label_139d5c;
    }
    ctx->pc = 0x139D54u;
    {
        const bool branch_taken_0x139d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D54u;
        // 0x139d58: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d54) {
            ctx->pc = 0x139D60u;
            goto label_139d60;
        }
    }
    ctx->pc = 0x139D5Cu;
label_139d5c:
    // 0x139d5c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x139d5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_139d60:
    // 0x139d60: 0xc0f809  jalr        $a2
label_139d64:
    if (ctx->pc == 0x139D64u) {
        ctx->pc = 0x139D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D60u;
        // 0x139d64: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139D68u;
        goto label_139d68;
    }
    ctx->pc = 0x139D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x139D68u);
        ctx->pc = 0x139D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D60u;
        // 0x139d64: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139D60u, 0x139D68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x139D68u;
label_139d68:
    // 0x139d68: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x139d68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_139d6c:
    // 0x139d6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_139d70:
    // 0x139d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x139d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139d74:
    // 0x139d74: 0x26260210  addiu       $a2, $s1, 0x210
    ctx->pc = 0x139d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 528));
label_139d78:
    // 0x139d78: 0xc04e0d6  jal         func_138358
label_139d7c:
    if (ctx->pc == 0x139D7Cu) {
        ctx->pc = 0x139D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D78u;
        // 0x139d7c: 0x26270200  addiu       $a3, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139D80u;
        goto label_139d80;
    }
    ctx->pc = 0x139D78u;
    SET_GPR_U32(ctx, 31, 0x139D80u);
    ctx->pc = 0x139D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139D78u;
    // 0x139d7c: 0x26270200  addiu       $a3, $s1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138358u, 0x139D78u, 0x139D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139D80u;
label_139d80:
    // 0x139d80: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x139d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
label_139d84:
    // 0x139d84: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_139d88:
    if (ctx->pc == 0x139D88u) {
        ctx->pc = 0x139D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D84u;
        // 0x139d88: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x139D8Cu;
        goto label_139d8c;
    }
    ctx->pc = 0x139D84u;
    {
        const bool branch_taken_0x139d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x139D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139D84u;
        // 0x139d88: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d84) {
            ctx->pc = 0x139DA0u;
            goto label_139da0;
        }
    }
    ctx->pc = 0x139D8Cu;
label_139d8c:
    // 0x139d8c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x139d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_139d90:
    // 0x139d90: 0xe6200220  swc1        $f0, 0x220($s1)
    ctx->pc = 0x139d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 544), bits); }
label_139d94:
    // 0x139d94: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x139d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_139d98:
    // 0x139d98: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x139d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_139d9c:
    // 0x139d9c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x139d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_139da0:
    // 0x139da0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x139da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_139da4:
    // 0x139da4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x139da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_139da8:
    // 0x139da8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x139da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_139dac:
    // 0x139dac: 0x3e00008  jr          $ra
label_139db0:
    if (ctx->pc == 0x139DB0u) {
        ctx->pc = 0x139DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DACu;
        // 0x139db0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x139DB4u;
        goto label_139db4;
    }
    ctx->pc = 0x139DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139DACu;
        // 0x139db0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139DB4u;
label_139db4:
    // 0x139db4: 0x0  nop
    ctx->pc = 0x139db4u;
    // NOP
    ctx->pc = 0x139db8u;
}
