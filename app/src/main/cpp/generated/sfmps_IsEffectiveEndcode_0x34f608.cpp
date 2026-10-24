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

// Function: sfmps_IsEffectiveEndcode
// Address: 0x34f608 - 0x34f658
void sfmps_IsEffectiveEndcode_0x34f608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfmps_IsEffectiveEndcode_0x34f608");
#endif

    switch (ctx->pc) {
        case 0x34f62cu: goto label_34f62c;
        case 0x34f63cu: goto label_34f63c;
        default: break;
    }

    ctx->pc = 0x34f608u;

    // 0x34f608: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34f608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34f60c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x34f60cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x34f610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x34f610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x34f614: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34f614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34f618: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x34f618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34f61c: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x34F61Cu;
    {
        const bool branch_taken_0x34f61c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x34F620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F61Cu;
        // 0x34f620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f61c) {
            ctx->pc = 0x34F648u;
            goto label_34f648;
        }
    }
    ctx->pc = 0x34F624u;
    // 0x34f624: 0xc0d3352  jal         func_34CD48
    ctx->pc = 0x34F624u;
    SET_GPR_U32(ctx, 31, 0x34F62Cu);
    ctx->pc = 0x34CD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CD48u, 0x34F624u, 0x34F62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F62Cu;
label_34f62c:
    // 0x34f62c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34F62Cu;
    {
        const bool branch_taken_0x34f62c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34F630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F62Cu;
        // 0x34f630: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34f62c) {
            ctx->pc = 0x34F644u;
            goto label_34f644;
        }
    }
    ctx->pc = 0x34F634u;
    // 0x34f634: 0xc0d335a  jal         func_34CD68
    ctx->pc = 0x34F634u;
    SET_GPR_U32(ctx, 31, 0x34F63Cu);
    ctx->pc = 0x34CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CD68u, 0x34F634u, 0x34F63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F63Cu;
label_34f63c:
    // 0x34f63c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x34F63Cu;
    {
        const bool branch_taken_0x34f63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f63c) {
            ctx->pc = 0x34F640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34F63Cu;
            // 0x34f640: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34F648u;
            goto label_34f648;
        }
    }
    ctx->pc = 0x34F644u;
label_34f644:
    // 0x34f644: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34f644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_34f648:
    // 0x34f648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x34f648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34f64c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x34f64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34f650: 0x3e00008  jr          $ra
    ctx->pc = 0x34F650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34F654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34F650u;
        // 0x34f654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34F650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34F658u;
}
