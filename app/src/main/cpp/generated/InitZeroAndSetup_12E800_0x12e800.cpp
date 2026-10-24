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

// Function: InitZeroAndSetup_12E800
// Address: 0x12e800 - 0x12e840
void InitZeroAndSetup_12E800_0x12e800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitZeroAndSetup_12E800_0x12e800");
#endif

    switch (ctx->pc) {
        case 0x12e834u: goto label_12e834;
        default: break;
    }

    ctx->pc = 0x12e800u;

    // 0x12e800: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12e800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12e804: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12e804u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12e808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12e80c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12e80cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12e810: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12e810u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12e814: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12e814u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12e818: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12e818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12e81c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x12e81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x12e820: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x12e820u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x12e824: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x12e824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x12e828: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x12e828u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x12e82c: 0xc04bb3c  jal         func_12ECF0
    ctx->pc = 0x12E82Cu;
    SET_GPR_U32(ctx, 31, 0x12E834u);
    ctx->pc = 0x12E830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E82Cu;
    // 0x12e830: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12ECF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12ECF0u, 0x12E82Cu, 0x12E834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E834u;
label_12e834:
    // 0x12e834: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12e834u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e838: 0x3e00008  jr          $ra
    ctx->pc = 0x12E838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E838u;
        // 0x12e83c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E840u;
}
