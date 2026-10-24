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

// Function: func_001B1C78
// Address: 0x1b1c78 - 0x1b1e00
void func_001B1C78_0x1b1c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B1C78_0x1b1c78");
#endif

    switch (ctx->pc) {
        case 0x1b1c78u: goto label_1b1c78;
        case 0x1b1c7cu: goto label_1b1c7c;
        case 0x1b1c80u: goto label_1b1c80;
        case 0x1b1c84u: goto label_1b1c84;
        case 0x1b1c88u: goto label_1b1c88;
        case 0x1b1c8cu: goto label_1b1c8c;
        case 0x1b1c90u: goto label_1b1c90;
        case 0x1b1c94u: goto label_1b1c94;
        case 0x1b1c98u: goto label_1b1c98;
        case 0x1b1c9cu: goto label_1b1c9c;
        case 0x1b1ca0u: goto label_1b1ca0;
        case 0x1b1ca4u: goto label_1b1ca4;
        case 0x1b1ca8u: goto label_1b1ca8;
        case 0x1b1cacu: goto label_1b1cac;
        case 0x1b1cb0u: goto label_1b1cb0;
        case 0x1b1cb4u: goto label_1b1cb4;
        case 0x1b1cb8u: goto label_1b1cb8;
        case 0x1b1cbcu: goto label_1b1cbc;
        case 0x1b1cc0u: goto label_1b1cc0;
        case 0x1b1cc4u: goto label_1b1cc4;
        case 0x1b1cc8u: goto label_1b1cc8;
        case 0x1b1cccu: goto label_1b1ccc;
        case 0x1b1cd0u: goto label_1b1cd0;
        case 0x1b1cd4u: goto label_1b1cd4;
        case 0x1b1cd8u: goto label_1b1cd8;
        case 0x1b1cdcu: goto label_1b1cdc;
        case 0x1b1ce0u: goto label_1b1ce0;
        case 0x1b1ce4u: goto label_1b1ce4;
        case 0x1b1ce8u: goto label_1b1ce8;
        case 0x1b1cecu: goto label_1b1cec;
        case 0x1b1cf0u: goto label_1b1cf0;
        case 0x1b1cf4u: goto label_1b1cf4;
        case 0x1b1cf8u: goto label_1b1cf8;
        case 0x1b1cfcu: goto label_1b1cfc;
        case 0x1b1d00u: goto label_1b1d00;
        case 0x1b1d04u: goto label_1b1d04;
        case 0x1b1d08u: goto label_1b1d08;
        case 0x1b1d0cu: goto label_1b1d0c;
        case 0x1b1d10u: goto label_1b1d10;
        case 0x1b1d14u: goto label_1b1d14;
        case 0x1b1d18u: goto label_1b1d18;
        case 0x1b1d1cu: goto label_1b1d1c;
        case 0x1b1d20u: goto label_1b1d20;
        case 0x1b1d24u: goto label_1b1d24;
        case 0x1b1d28u: goto label_1b1d28;
        case 0x1b1d2cu: goto label_1b1d2c;
        case 0x1b1d30u: goto label_1b1d30;
        case 0x1b1d34u: goto label_1b1d34;
        case 0x1b1d38u: goto label_1b1d38;
        case 0x1b1d3cu: goto label_1b1d3c;
        case 0x1b1d40u: goto label_1b1d40;
        case 0x1b1d44u: goto label_1b1d44;
        case 0x1b1d48u: goto label_1b1d48;
        case 0x1b1d4cu: goto label_1b1d4c;
        case 0x1b1d50u: goto label_1b1d50;
        case 0x1b1d54u: goto label_1b1d54;
        case 0x1b1d58u: goto label_1b1d58;
        case 0x1b1d5cu: goto label_1b1d5c;
        case 0x1b1d60u: goto label_1b1d60;
        case 0x1b1d64u: goto label_1b1d64;
        case 0x1b1d68u: goto label_1b1d68;
        case 0x1b1d6cu: goto label_1b1d6c;
        case 0x1b1d70u: goto label_1b1d70;
        case 0x1b1d74u: goto label_1b1d74;
        case 0x1b1d78u: goto label_1b1d78;
        case 0x1b1d7cu: goto label_1b1d7c;
        case 0x1b1d80u: goto label_1b1d80;
        case 0x1b1d84u: goto label_1b1d84;
        case 0x1b1d88u: goto label_1b1d88;
        case 0x1b1d8cu: goto label_1b1d8c;
        case 0x1b1d90u: goto label_1b1d90;
        case 0x1b1d94u: goto label_1b1d94;
        case 0x1b1d98u: goto label_1b1d98;
        case 0x1b1d9cu: goto label_1b1d9c;
        case 0x1b1da0u: goto label_1b1da0;
        case 0x1b1da4u: goto label_1b1da4;
        case 0x1b1da8u: goto label_1b1da8;
        case 0x1b1dacu: goto label_1b1dac;
        case 0x1b1db0u: goto label_1b1db0;
        case 0x1b1db4u: goto label_1b1db4;
        case 0x1b1db8u: goto label_1b1db8;
        case 0x1b1dbcu: goto label_1b1dbc;
        case 0x1b1dc0u: goto label_1b1dc0;
        case 0x1b1dc4u: goto label_1b1dc4;
        case 0x1b1dc8u: goto label_1b1dc8;
        case 0x1b1dccu: goto label_1b1dcc;
        case 0x1b1dd0u: goto label_1b1dd0;
        case 0x1b1dd4u: goto label_1b1dd4;
        case 0x1b1dd8u: goto label_1b1dd8;
        case 0x1b1ddcu: goto label_1b1ddc;
        case 0x1b1de0u: goto label_1b1de0;
        case 0x1b1de4u: goto label_1b1de4;
        case 0x1b1de8u: goto label_1b1de8;
        case 0x1b1decu: goto label_1b1dec;
        case 0x1b1df0u: goto label_1b1df0;
        case 0x1b1df4u: goto label_1b1df4;
        case 0x1b1df8u: goto label_1b1df8;
        case 0x1b1dfcu: goto label_1b1dfc;
        default: break;
    }

    ctx->pc = 0x1b1c78u;

label_1b1c78:
    // 0x1b1c78: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b1c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b1c7c:
    // 0x1b1c7c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b1c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1b1c80:
    // 0x1b1c80: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b1c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b1c84:
    // 0x1b1c84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b1c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1b1c88:
    // 0x1b1c88: 0xc06ddac  jal         func_1B76B0
label_1b1c8c:
    if (ctx->pc == 0x1B1C8Cu) {
        ctx->pc = 0x1B1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C88u;
        // 0x1b1c8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C90u;
        goto label_1b1c90;
    }
    ctx->pc = 0x1B1C88u;
    SET_GPR_U32(ctx, 31, 0x1B1C90u);
    ctx->pc = 0x1B1C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1C88u;
    // 0x1b1c8c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1B1C88u, 0x1B1C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1C90u;
label_1b1c90:
    // 0x1b1c90: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
label_1b1c94:
    if (ctx->pc == 0x1B1C94u) {
        ctx->pc = 0x1B1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C90u;
        // 0x1b1c94: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1C98u;
        goto label_1b1c98;
    }
    ctx->pc = 0x1B1C90u;
    {
        const bool branch_taken_0x1b1c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1C90u;
        // 0x1b1c94: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1c90) {
            ctx->pc = 0x1B1DE8u;
            goto label_1b1de8;
        }
    }
    ctx->pc = 0x1B1C98u;
label_1b1c98:
    // 0x1b1c98: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1b1c98u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1b1c9c:
    // 0x1b1c9c: 0x2446dce0  addiu       $a2, $v0, -0x2320
    ctx->pc = 0x1b1c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958304));
label_1b1ca0:
    // 0x1b1ca0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1b1ca0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b1ca4:
    // 0x1b1ca4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b1ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b1ca8:
    // 0x1b1ca8: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1b1ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b1cac:
    // 0x1b1cac: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1b1cacu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b1cb0:
    // 0x1b1cb0: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1b1cb4:
    if (ctx->pc == 0x1B1CB4u) {
        ctx->pc = 0x1B1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CB0u;
        // 0x1b1cb4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1CB8u;
        goto label_1b1cb8;
    }
    ctx->pc = 0x1B1CB0u;
    {
        const bool branch_taken_0x1b1cb0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CB0u;
        // 0x1b1cb4: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1cb0) {
            ctx->pc = 0x1B1CDCu;
            goto label_1b1cdc;
        }
    }
    ctx->pc = 0x1B1CB8u;
label_1b1cb8:
    // 0x1b1cb8: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1b1cb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1b1cbc:
    // 0x1b1cbc: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b1cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b1cc0:
    // 0x1b1cc0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b1cc4:
    // 0x1b1cc4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b1cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b1cc8:
    // 0x1b1cc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b1ccc:
    // 0x1b1ccc: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1b1cccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1b1cd0:
    // 0x1b1cd0: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1b1cd0u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1b1cd4:
    // 0x1b1cd4: 0x10000004  b           . + 4 + (0x4 << 2)
label_1b1cd8:
    if (ctx->pc == 0x1B1CD8u) {
        ctx->pc = 0x1B1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CD4u;
        // 0x1b1cd8: 0x2503dce0  addiu       $v1, $t0, -0x2320 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1CDCu;
        goto label_1b1cdc;
    }
    ctx->pc = 0x1B1CD4u;
    {
        const bool branch_taken_0x1b1cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CD4u;
        // 0x1b1cd8: 0x2503dce0  addiu       $v1, $t0, -0x2320 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1cd4) {
            ctx->pc = 0x1B1CE8u;
            goto label_1b1ce8;
        }
    }
    ctx->pc = 0x1B1CDCu;
label_1b1cdc:
    // 0x1b1cdc: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1b1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_1b1ce0:
    // 0x1b1ce0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b1ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b1ce4:
    // 0x1b1ce4: 0x2503dce0  addiu       $v1, $t0, -0x2320
    ctx->pc = 0x1b1ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 4294958304));
label_1b1ce8:
    // 0x1b1ce8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1b1ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_1b1cec:
    // 0x1b1cec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b1cf0:
    // 0x1b1cf0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1b1cf4:
    if (ctx->pc == 0x1B1CF4u) {
        ctx->pc = 0x1B1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CF0u;
        // 0x1b1cf4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1CF8u;
        goto label_1b1cf8;
    }
    ctx->pc = 0x1B1CF0u;
    {
        const bool branch_taken_0x1b1cf0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B1CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1CF0u;
        // 0x1b1cf4: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1cf0) {
            ctx->pc = 0x1B1D0Cu;
            goto label_1b1d0c;
        }
    }
    ctx->pc = 0x1B1CF8u;
label_1b1cf8:
    // 0x1b1cf8: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1b1cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1b1cfc:
    // 0x1b1cfc: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b1cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1b1d00:
    // 0x1b1d00: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1b1d00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1b1d04:
    // 0x1b1d04: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b1d08:
    if (ctx->pc == 0x1B1D08u) {
        ctx->pc = 0x1B1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D04u;
        // 0x1b1d08: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D0Cu;
        goto label_1b1d0c;
    }
    ctx->pc = 0x1B1D04u;
    {
        const bool branch_taken_0x1b1d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D04u;
        // 0x1b1d08: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d04) {
            ctx->pc = 0x1B1D10u;
            goto label_1b1d10;
        }
    }
    ctx->pc = 0x1B1D0Cu;
label_1b1d0c:
    // 0x1b1d0c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b1d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d10:
    // 0x1b1d10: 0xc0f809  jalr        $a2
label_1b1d14:
    if (ctx->pc == 0x1B1D14u) {
        ctx->pc = 0x1B1D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D10u;
        // 0x1b1d14: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D18u;
        goto label_1b1d18;
    }
    ctx->pc = 0x1B1D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B1D18u);
        ctx->pc = 0x1B1D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D10u;
        // 0x1b1d14: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1D10u, 0x1B1D18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B1D18u;
label_1b1d18:
    // 0x1b1d18: 0x9e020600  lwu         $v0, 0x600($s0)
    ctx->pc = 0x1b1d18u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1b1d1c:
    // 0x1b1d1c: 0x211bb  dsra        $v0, $v0, 6
    ctx->pc = 0x1b1d1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 6);
label_1b1d20:
    // 0x1b1d20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b1d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b1d24:
    // 0x1b1d24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1b1d28:
    if (ctx->pc == 0x1B1D28u) {
        ctx->pc = 0x1B1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D24u;
        // 0x1b1d28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D2Cu;
        goto label_1b1d2c;
    }
    ctx->pc = 0x1B1D24u;
    {
        const bool branch_taken_0x1b1d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D24u;
        // 0x1b1d28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d24) {
            ctx->pc = 0x1B1D38u;
            goto label_1b1d38;
        }
    }
    ctx->pc = 0x1B1D2Cu;
label_1b1d2c:
    // 0x1b1d2c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1b1d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
label_1b1d30:
    // 0x1b1d30: 0xc04d23a  jal         func_1348E8
label_1b1d34:
    if (ctx->pc == 0x1B1D34u) {
        ctx->pc = 0x1B1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D30u;
        // 0x1b1d34: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D38u;
        goto label_1b1d38;
    }
    ctx->pc = 0x1B1D30u;
    SET_GPR_U32(ctx, 31, 0x1B1D38u);
    ctx->pc = 0x1B1D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D30u;
    // 0x1b1d34: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1348E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1348E8u, 0x1B1D30u, 0x1B1D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D38u;
label_1b1d38:
    // 0x1b1d38: 0x9e020600  lwu         $v0, 0x600($s0)
    ctx->pc = 0x1b1d38u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1b1d3c:
    // 0x1b1d3c: 0x2117b  dsra        $v0, $v0, 5
    ctx->pc = 0x1b1d3cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 5);
label_1b1d40:
    // 0x1b1d40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b1d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b1d44:
    // 0x1b1d44: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_1b1d48:
    if (ctx->pc == 0x1B1D48u) {
        ctx->pc = 0x1B1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D44u;
        // 0x1b1d48: 0x9e020600  lwu         $v0, 0x600($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D4Cu;
        goto label_1b1d4c;
    }
    ctx->pc = 0x1B1D44u;
    {
        const bool branch_taken_0x1b1d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1d44) {
            ctx->pc = 0x1B1D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B1D44u;
            // 0x1b1d48: 0x9e020600  lwu         $v0, 0x600($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1D98u;
            goto label_1b1d98;
        }
    }
    ctx->pc = 0x1B1D4Cu;
label_1b1d4c:
    // 0x1b1d4c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1b1d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1b1d50:
    // 0x1b1d50: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1b1d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1b1d54:
    // 0x1b1d54: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1b1d54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1b1d58:
    // 0x1b1d58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b1d58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1d5c:
    // 0x1b1d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d60:
    // 0x1b1d60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b1d60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d64:
    // 0x1b1d64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1d64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d68:
    // 0x1b1d68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b1d68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d6c:
    // 0x1b1d6c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b1d6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1d70:
    // 0x1b1d70: 0xc04cb68  jal         func_132DA0
label_1b1d74:
    if (ctx->pc == 0x1B1D74u) {
        ctx->pc = 0x1B1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D70u;
        // 0x1b1d74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D78u;
        goto label_1b1d78;
    }
    ctx->pc = 0x1B1D70u;
    SET_GPR_U32(ctx, 31, 0x1B1D78u);
    ctx->pc = 0x1B1D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1D70u;
    // 0x1b1d74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132DA0u, 0x1B1D70u, 0x1B1D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1D78u;
label_1b1d78:
    // 0x1b1d78: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1b1d7c:
    if (ctx->pc == 0x1B1D7Cu) {
        ctx->pc = 0x1B1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D78u;
        // 0x1b1d7c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1D80u;
        goto label_1b1d80;
    }
    ctx->pc = 0x1B1D78u;
    {
        const bool branch_taken_0x1b1d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1D78u;
        // 0x1b1d7c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1d78) {
            ctx->pc = 0x1B1D94u;
            goto label_1b1d94;
        }
    }
    ctx->pc = 0x1B1D80u;
label_1b1d80:
    // 0x1b1d80: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1b1d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1b1d84:
    // 0x1b1d84: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b1d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b1d88:
    // 0x1b1d88: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x1b1d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1b1d8c:
    // 0x1b1d8c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1b1d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b1d90:
    // 0x1b1d90: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1b1d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1b1d94:
    // 0x1b1d94: 0x9e020600  lwu         $v0, 0x600($s0)
    ctx->pc = 0x1b1d94u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1b1d98:
    // 0x1b1d98: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x1b1d98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
label_1b1d9c:
    // 0x1b1d9c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1b1d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1b1da0:
    // 0x1b1da0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1b1da4:
    if (ctx->pc == 0x1B1DA4u) {
        ctx->pc = 0x1B1DA8u;
        goto label_1b1da8;
    }
    ctx->pc = 0x1B1DA0u;
    {
        const bool branch_taken_0x1b1da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1da0) {
            ctx->pc = 0x1B1DD8u;
            goto label_1b1dd8;
        }
    }
    ctx->pc = 0x1B1DA8u;
label_1b1da8:
    // 0x1b1da8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1b1da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1b1dac:
    // 0x1b1dac: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1b1dacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_1b1db0:
    // 0x1b1db0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b1db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b1db4:
    // 0x1b1db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b1db8:
    // 0x1b1db8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b1db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b1dbc:
    // 0x1b1dbc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b1dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1dc0:
    // 0x1b1dc0: 0xc04ca70  jal         func_1329C0
label_1b1dc4:
    if (ctx->pc == 0x1B1DC4u) {
        ctx->pc = 0x1B1DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DC0u;
        // 0x1b1dc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DC8u;
        goto label_1b1dc8;
    }
    ctx->pc = 0x1B1DC0u;
    SET_GPR_U32(ctx, 31, 0x1B1DC8u);
    ctx->pc = 0x1B1DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DC0u;
    // 0x1b1dc4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1329C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1329C0u, 0x1B1DC0u, 0x1B1DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DC8u;
label_1b1dc8:
    // 0x1b1dc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1b1dcc:
    if (ctx->pc == 0x1B1DCCu) {
        ctx->pc = 0x1B1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DC8u;
        // 0x1b1dcc: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DD0u;
        goto label_1b1dd0;
    }
    ctx->pc = 0x1B1DC8u;
    {
        const bool branch_taken_0x1b1dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DC8u;
        // 0x1b1dcc: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1dc8) {
            ctx->pc = 0x1B1DD8u;
            goto label_1b1dd8;
        }
    }
    ctx->pc = 0x1B1DD0u;
label_1b1dd0:
    // 0x1b1dd0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1b1dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1b1dd4:
    // 0x1b1dd4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1b1dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1b1dd8:
    // 0x1b1dd8: 0xc053ed2  jal         func_14FB48
label_1b1ddc:
    if (ctx->pc == 0x1B1DDCu) {
        ctx->pc = 0x1B1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DD8u;
        // 0x1b1ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DE0u;
        goto label_1b1de0;
    }
    ctx->pc = 0x1B1DD8u;
    SET_GPR_U32(ctx, 31, 0x1B1DE0u);
    ctx->pc = 0x1B1DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DD8u;
    // 0x1b1ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FB48u, 0x1B1DD8u, 0x1B1DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DE0u;
label_1b1de0:
    // 0x1b1de0: 0xc06ddb6  jal         func_1B76D8
label_1b1de4:
    if (ctx->pc == 0x1B1DE4u) {
        ctx->pc = 0x1B1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DE0u;
        // 0x1b1de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DE8u;
        goto label_1b1de8;
    }
    ctx->pc = 0x1B1DE0u;
    SET_GPR_U32(ctx, 31, 0x1B1DE8u);
    ctx->pc = 0x1B1DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1DE0u;
    // 0x1b1de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1B1DE0u, 0x1B1DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1DE8u;
label_1b1de8:
    // 0x1b1de8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b1de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1dec:
    // 0x1b1dec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b1decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1df0:
    // 0x1b1df0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b1df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1df4:
    // 0x1b1df4: 0x3e00008  jr          $ra
label_1b1df8:
    if (ctx->pc == 0x1B1DF8u) {
        ctx->pc = 0x1B1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DF4u;
        // 0x1b1df8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1DFCu;
        goto label_1b1dfc;
    }
    ctx->pc = 0x1B1DF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1DF4u;
        // 0x1b1df8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1DF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1DFCu;
label_1b1dfc:
    // 0x1b1dfc: 0x0  nop
    ctx->pc = 0x1b1dfcu;
    // NOP
    ctx->pc = 0x1b1e00u;
}
