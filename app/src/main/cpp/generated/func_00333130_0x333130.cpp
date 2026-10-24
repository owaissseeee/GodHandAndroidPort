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

// Function: func_00333130
// Address: 0x333130 - 0x333168
void func_00333130_0x333130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333130_0x333130");
#endif

    switch (ctx->pc) {
        case 0x33314cu: goto label_33314c;
        default: break;
    }

    ctx->pc = 0x333130u;

    // 0x333130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x333130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x333134: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x333134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333138: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x333138u;
    {
        const bool branch_taken_0x333138 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333138u;
        // 0x33313c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333138) {
            ctx->pc = 0x333158u;
            goto label_333158;
        }
    }
    ctx->pc = 0x333140u;
    // 0x333140: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x333140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x333144: 0xc0cca02  jal         func_332808
    ctx->pc = 0x333144u;
    SET_GPR_U32(ctx, 31, 0x33314Cu);
    ctx->pc = 0x333148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333144u;
    // 0x333148: 0x24a54458  addiu       $a1, $a1, 0x4458 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332808u, 0x333144u, 0x33314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33314Cu;
label_33314c:
    // 0x33314c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x33314Cu;
    {
        const bool branch_taken_0x33314c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33314Cu;
        // 0x333150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33314c) {
            ctx->pc = 0x33315Cu;
            goto label_33315c;
        }
    }
    ctx->pc = 0x333154u;
    // 0x333154: 0x0  nop
    ctx->pc = 0x333154u;
    // NOP
label_333158:
    // 0x333158: 0x80420002  lb          $v0, 0x2($v0)
    ctx->pc = 0x333158u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_33315c:
    // 0x33315c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33315cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333160: 0x3e00008  jr          $ra
    ctx->pc = 0x333160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333160u;
        // 0x333164: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333160u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333168u;
}
