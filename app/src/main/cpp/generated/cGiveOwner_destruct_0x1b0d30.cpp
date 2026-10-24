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

// Function: cGiveOwner_destruct
// Address: 0x1b0d30 - 0x1b0de8
void cGiveOwner_destruct_0x1b0d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGiveOwner_destruct_0x1b0d30");
#endif

    switch (ctx->pc) {
        case 0x1b0d70u: goto label_1b0d70;
        case 0x1b0d88u: goto label_1b0d88;
        case 0x1b0da4u: goto label_1b0da4;
        case 0x1b0dc4u: goto label_1b0dc4;
        case 0x1b0dd0u: goto label_1b0dd0;
        default: break;
    }

    ctx->pc = 0x1b0d30u;

    // 0x1b0d30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b0d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b0d34: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b0d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b0d38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b0d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1b0d3c: 0x244282f0  addiu       $v0, $v0, -0x7D10
    ctx->pc = 0x1b0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935280));
    // 0x1b0d40: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b0d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1b0d44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0d44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d48: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b0d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1b0d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b0d50: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1b0d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1b0d54: 0x8e030668  lw          $v1, 0x668($s0)
    ctx->pc = 0x1b0d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1640)));
    // 0x1b0d58: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B0D58u;
    {
        const bool branch_taken_0x1b0d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D58u;
        // 0x1b0d5c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d58) {
            ctx->pc = 0x1B0D74u;
            goto label_1b0d74;
        }
    }
    ctx->pc = 0x1B0D60u;
    // 0x1b0d60: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b0d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b0d64: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1b0d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0d68: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x1B0D68u;
    SET_GPR_U32(ctx, 31, 0x1B0D70u);
    ctx->pc = 0x1B0D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D68u;
    // 0x1b0d6c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x1B0D68u, 0x1B0D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D70u;
label_1b0d70:
    // 0x1b0d70: 0xae000668  sw          $zero, 0x668($s0)
    ctx->pc = 0x1b0d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1640), GPR_U32(ctx, 0));
label_1b0d74:
    // 0x1b0d74: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1b0d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x1b0d78: 0x8e05066c  lw          $a1, 0x66C($s0)
    ctx->pc = 0x1b0d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1644)));
    // 0x1b0d7c: 0x24514380  addiu       $s1, $v0, 0x4380
    ctx->pc = 0x1b0d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 17280));
    // 0x1b0d80: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1B0D80u;
    SET_GPR_U32(ctx, 31, 0x1B0D88u);
    ctx->pc = 0x1B0D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D80u;
    // 0x1b0d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1B0D80u, 0x1B0D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0D88u;
label_1b0d88:
    // 0x1b0d88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0D88u;
    {
        const bool branch_taken_0x1b0d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D88u;
        // 0x1b0d8c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d88) {
            ctx->pc = 0x1B0D98u;
            goto label_1b0d98;
        }
    }
    ctx->pc = 0x1B0D90u;
    // 0x1b0d90: 0xae00066c  sw          $zero, 0x66C($s0)
    ctx->pc = 0x1b0d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1644), GPR_U32(ctx, 0));
    // 0x1b0d94: 0xae020674  sw          $v0, 0x674($s0)
    ctx->pc = 0x1b0d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1652), GPR_U32(ctx, 2));
label_1b0d98:
    // 0x1b0d98: 0x8e050670  lw          $a1, 0x670($s0)
    ctx->pc = 0x1b0d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1648)));
    // 0x1b0d9c: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x1B0D9Cu;
    SET_GPR_U32(ctx, 31, 0x1B0DA4u);
    ctx->pc = 0x1B0DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D9Cu;
    // 0x1b0da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x1B0D9Cu, 0x1B0DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DA4u;
label_1b0da4:
    // 0x1b0da4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B0DA4u;
    {
        const bool branch_taken_0x1b0da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DA4u;
        // 0x1b0da8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0da4) {
            ctx->pc = 0x1B0DB4u;
            goto label_1b0db4;
        }
    }
    ctx->pc = 0x1B0DACu;
    // 0x1b0dac: 0xae000670  sw          $zero, 0x670($s0)
    ctx->pc = 0x1b0dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1648), GPR_U32(ctx, 0));
    // 0x1b0db0: 0xae020678  sw          $v0, 0x678($s0)
    ctx->pc = 0x1b0db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1656), GPR_U32(ctx, 2));
label_1b0db4:
    // 0x1b0db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0db8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1b0db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b0dbc: 0xc0c1880  jal         func_306200
    ctx->pc = 0x1B0DBCu;
    SET_GPR_U32(ctx, 31, 0x1B0DC4u);
    ctx->pc = 0x1B0DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DBCu;
    // 0x1b0dc0: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x1B0DBCu, 0x1B0DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DC4u;
label_1b0dc4:
    // 0x1b0dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b0dc8: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1B0DC8u;
    SET_GPR_U32(ctx, 31, 0x1B0DD0u);
    ctx->pc = 0x1B0DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DC8u;
    // 0x1b0dcc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1B0DC8u, 0x1B0DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B0DD0u;
label_1b0dd0:
    // 0x1b0dd0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b0dd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b0dd4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b0dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b0dd8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b0dd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b0ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b0ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b0de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B0DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B0DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DE0u;
        // 0x1b0de4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B0DE8u;
}
