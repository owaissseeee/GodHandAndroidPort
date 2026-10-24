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

// Function: func_00381D60
// Address: 0x381d60 - 0x381dc0
void func_00381D60_0x381d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00381D60_0x381d60");
#endif

    switch (ctx->pc) {
        case 0x381d80u: goto label_381d80;
        case 0x381d98u: goto label_381d98;
        case 0x381da0u: goto label_381da0;
        case 0x381dacu: goto label_381dac;
        default: break;
    }

    ctx->pc = 0x381d60u;

    // 0x381d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x381d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x381d64: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x381d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x381d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x381d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x381d6c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x381d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x381d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x381d74: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x381d74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x381d78: 0xc0cb6dc  jal         func_32DB70
    ctx->pc = 0x381D78u;
    SET_GPR_U32(ctx, 31, 0x381D80u);
    ctx->pc = 0x381D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381D78u;
    // 0x381d7c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DB70u, 0x381D78u, 0x381D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381D80u;
label_381d80:
    // 0x381d80: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x381d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x381d84: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x381D84u;
    {
        const bool branch_taken_0x381d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x381D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381D84u;
        // 0x381d88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x381d84) {
            ctx->pc = 0x381D98u;
            goto label_381d98;
        }
    }
    ctx->pc = 0x381D8Cu;
    // 0x381d8c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x381d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x381d90: 0xc0cb810  jal         func_32E040
    ctx->pc = 0x381D90u;
    SET_GPR_U32(ctx, 31, 0x381D98u);
    ctx->pc = 0x381D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381D90u;
    // 0x381d94: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32E040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32E040u, 0x381D90u, 0x381D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381D98u;
label_381d98:
    // 0x381d98: 0xc0cb5bc  jal         func_32D6F0
    ctx->pc = 0x381D98u;
    SET_GPR_U32(ctx, 31, 0x381DA0u);
    ctx->pc = 0x381D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381D98u;
    // 0x381d9c: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32D6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32D6F0u, 0x381D98u, 0x381DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381DA0u;
label_381da0:
    // 0x381da0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x381da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x381da4: 0xc0c7240  jal         func_31C900
    ctx->pc = 0x381DA4u;
    SET_GPR_U32(ctx, 31, 0x381DACu);
    ctx->pc = 0x381DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x381DA4u;
    // 0x381da8: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C900u, 0x381DA4u, 0x381DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x381DACu;
label_381dac:
    // 0x381dac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x381dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x381db0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x381db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x381db4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x381db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x381db8: 0x3e00008  jr          $ra
    ctx->pc = 0x381DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x381DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x381DB8u;
        // 0x381dbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x381DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x381DC0u;
}
