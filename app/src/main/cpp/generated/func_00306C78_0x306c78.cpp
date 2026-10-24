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

// Function: func_00306C78
// Address: 0x306c78 - 0x306cc8
void func_00306C78_0x306c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00306C78_0x306c78");
#endif

    switch (ctx->pc) {
        case 0x306cacu: goto label_306cac;
        default: break;
    }

    ctx->pc = 0x306c78u;

    // 0x306c78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x306c7c: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x306c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x306c80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306c84: 0x2ca20040  sltiu       $v0, $a1, 0x40
    ctx->pc = 0x306c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x306c88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x306C88u;
    {
        const bool branch_taken_0x306c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C88u;
        // 0x306c8c: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c88) {
            ctx->pc = 0x306CB4u;
            goto label_306cb4;
        }
    }
    ctx->pc = 0x306C90u;
    // 0x306c90: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x306c90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x306c94: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x306c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x306c98: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x306c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x306c9c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x306C9Cu;
    {
        const bool branch_taken_0x306c9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x306c9c) {
            ctx->pc = 0x306CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306C9Cu;
            // 0x306ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306CB8u;
            goto label_306cb8;
        }
    }
    ctx->pc = 0x306CA4u;
    // 0x306ca4: 0xc0c1a7a  jal         func_3069E8
    ctx->pc = 0x306CA4u;
    SET_GPR_U32(ctx, 31, 0x306CACu);
    ctx->pc = 0x3069E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3069E8u, 0x306CA4u, 0x306CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CACu;
label_306cac:
    // 0x306cac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x306CACu;
    {
        const bool branch_taken_0x306cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CACu;
        // 0x306cb0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x306cac) {
            ctx->pc = 0x306CB8u;
            goto label_306cb8;
        }
    }
    ctx->pc = 0x306CB4u;
label_306cb4:
    // 0x306cb4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x306cb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306cb8:
    // 0x306cb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x306CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CBCu;
        // 0x306cc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306CC4u;
    // 0x306cc4: 0x0  nop
    ctx->pc = 0x306cc4u;
    // NOP
    ctx->pc = 0x306cc8u;
}
