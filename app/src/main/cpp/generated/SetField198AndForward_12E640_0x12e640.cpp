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

// Function: SetField198AndForward_12E640
// Address: 0x12e640 - 0x12e670
void SetField198AndForward_12E640_0x12e640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField198AndForward_12E640_0x12e640");
#endif

    switch (ctx->pc) {
        case 0x12e664u: goto label_12e664;
        default: break;
    }

    ctx->pc = 0x12e640u;

    // 0x12e640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12e640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12e644: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x12e644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x12e648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12e648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12e64c: 0x2442d540  addiu       $v0, $v0, -0x2AC0
    ctx->pc = 0x12e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956352));
    // 0x12e650: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x12e650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x12e654: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E654u;
    {
        const bool branch_taken_0x12e654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E654u;
        // 0x12e658: 0xac820198  sw          $v0, 0x198($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 408), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e654) {
            ctx->pc = 0x12E664u;
            goto label_12e664;
        }
    }
    ctx->pc = 0x12E65Cu;
    // 0x12e65c: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x12E65Cu;
    SET_GPR_U32(ctx, 31, 0x12E664u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x12E65Cu, 0x12E664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E664u;
label_12e664:
    // 0x12e664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12e664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e668: 0x3e00008  jr          $ra
    ctx->pc = 0x12E668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E668u;
        // 0x12e66c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E670u;
}
