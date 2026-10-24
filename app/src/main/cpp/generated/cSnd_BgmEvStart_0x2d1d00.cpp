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

// Function: cSnd_BgmEvStart
// Address: 0x2d1d00 - 0x2d1dd0
void cSnd_BgmEvStart_0x2d1d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvStart_0x2d1d00");
#endif

    switch (ctx->pc) {
        case 0x2d1d30u: goto label_2d1d30;
        case 0x2d1d54u: goto label_2d1d54;
        case 0x2d1d64u: goto label_2d1d64;
        case 0x2d1d90u: goto label_2d1d90;
        case 0x2d1da0u: goto label_2d1da0;
        default: break;
    }

    ctx->pc = 0x2d1d00u;

    // 0x2d1d00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d1d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d1d04: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d1d04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2d1d08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d1d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d1d0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d1d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d10: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d1d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2d1d14: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d1d14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d18: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2d1d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2d1d1c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2d1d1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d1d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d1d24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1d28: 0xc0b48ac  jal         func_2D22B0
    ctx->pc = 0x2D1D28u;
    SET_GPR_U32(ctx, 31, 0x2D1D30u);
    ctx->pc = 0x2D1D2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D28u;
    // 0x2d1d2c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D22B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D22B0u, 0x2D1D28u, 0x2D1D30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D30u;
label_2d1d30:
    // 0x2d1d30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d34: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1D34u;
    {
        const bool branch_taken_0x2d1d34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d1d34) {
            ctx->pc = 0x2D1D5Cu;
            goto label_2d1d5c;
        }
    }
    ctx->pc = 0x2D1D3Cu;
    // 0x2d1d3c: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2d1d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x2d1d40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d1d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d1d44: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2D1D44u;
    {
        const bool branch_taken_0x2d1d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D44u;
        // 0x2d1d48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d44) {
            ctx->pc = 0x2D1DACu;
            goto label_2d1dac;
        }
    }
    ctx->pc = 0x2D1D4Cu;
    // 0x2d1d4c: 0xc0b32b2  jal         func_2CCAC8
    ctx->pc = 0x2D1D4Cu;
    SET_GPR_U32(ctx, 31, 0x2D1D54u);
    ctx->pc = 0x2D1D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D4Cu;
    // 0x2d1d50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CCAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CCAC8u, 0x2D1D4Cu, 0x2D1D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D54u;
label_2d1d54:
    // 0x2d1d54: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2D1D54u;
    {
        const bool branch_taken_0x2d1d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D54u;
        // 0x2d1d58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d54) {
            ctx->pc = 0x2D1DACu;
            goto label_2d1dac;
        }
    }
    ctx->pc = 0x2D1D5Cu;
label_2d1d5c:
    // 0x2d1d5c: 0xc0b488a  jal         func_2D2228
    ctx->pc = 0x2D1D5Cu;
    SET_GPR_U32(ctx, 31, 0x2D1D64u);
    ctx->pc = 0x2D1D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D5Cu;
    // 0x2d1d60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2228u, 0x2D1D5Cu, 0x2D1D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D64u;
label_2d1d64:
    // 0x2d1d64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d1d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d68: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D1D68u;
    {
        const bool branch_taken_0x2d1d68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D68u;
        // 0x2d1d6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d68) {
            ctx->pc = 0x2D1DA8u;
            goto label_2d1da8;
        }
    }
    ctx->pc = 0x2D1D70u;
    // 0x2d1d70: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x2d1d70u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x2d1d74: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2d1d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d1d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d7c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2d1d7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1d80: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2d1d80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2d1d84: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2d1d84u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1d88: 0xc0b3240  jal         func_2CC900
    ctx->pc = 0x2D1D88u;
    SET_GPR_U32(ctx, 31, 0x2D1D90u);
    ctx->pc = 0x2D1D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D88u;
    // 0x2d1d8c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC900u, 0x2D1D88u, 0x2D1D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1D90u;
label_2d1d90:
    // 0x2d1d90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D1D90u;
    {
        const bool branch_taken_0x2d1d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1D90u;
        // 0x2d1d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1d90) {
            ctx->pc = 0x2D1DA8u;
            goto label_2d1da8;
        }
    }
    ctx->pc = 0x2D1D98u;
    // 0x2d1d98: 0xc0dce86  jal         func_373A18
    ctx->pc = 0x2D1D98u;
    SET_GPR_U32(ctx, 31, 0x2D1DA0u);
    ctx->pc = 0x2D1D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1D98u;
    // 0x2d1d9c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A18u, 0x2D1D98u, 0x2D1DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1DA0u;
label_2d1da0:
    // 0x2d1da0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2D1DA0u;
    {
        const bool branch_taken_0x2d1da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DA0u;
        // 0x2d1da4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1da0) {
            ctx->pc = 0x2D1DACu;
            goto label_2d1dac;
        }
    }
    ctx->pc = 0x2D1DA8u;
label_2d1da8:
    // 0x2d1da8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d1da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d1dac:
    // 0x2d1dac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d1dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1db0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d1db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1db4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d1db4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1db8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d1db8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1dbc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2d1dbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1DC4u;
        // 0x2d1dc8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1DCCu;
    // 0x2d1dcc: 0x0  nop
    ctx->pc = 0x2d1dccu;
    // NOP
    ctx->pc = 0x2d1dd0u;
}
