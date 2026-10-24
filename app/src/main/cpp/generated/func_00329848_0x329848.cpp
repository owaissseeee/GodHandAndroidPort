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

// Function: func_00329848
// Address: 0x329848 - 0x329870
void func_00329848_0x329848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00329848_0x329848");
#endif

    switch (ctx->pc) {
        case 0x329848u: goto label_329848;
        case 0x32984cu: goto label_32984c;
        case 0x329850u: goto label_329850;
        case 0x329854u: goto label_329854;
        case 0x329858u: goto label_329858;
        case 0x32985cu: goto label_32985c;
        case 0x329860u: goto label_329860;
        case 0x329864u: goto label_329864;
        case 0x329868u: goto label_329868;
        case 0x32986cu: goto label_32986c;
        default: break;
    }

    ctx->pc = 0x329848u;

label_329848:
    // 0x329848: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x329848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
label_32984c:
    // 0x32984c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32984cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_329850:
    // 0x329850: 0x8c421418  lw          $v0, 0x1418($v0)
    ctx->pc = 0x329850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5144)));
label_329854:
    // 0x329854: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_329858:
    if (ctx->pc == 0x329858u) {
        ctx->pc = 0x329858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329854u;
        // 0x329858: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32985Cu;
        goto label_32985c;
    }
    ctx->pc = 0x329854u;
    {
        const bool branch_taken_0x329854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x329858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329854u;
        // 0x329858: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x329854) {
            ctx->pc = 0x329864u;
            goto label_329864;
        }
    }
    ctx->pc = 0x32985Cu;
label_32985c:
    // 0x32985c: 0x40f809  jalr        $v0
label_329860:
    if (ctx->pc == 0x329860u) {
        ctx->pc = 0x329864u;
        goto label_329864;
    }
    ctx->pc = 0x32985Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x329864u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32985Cu, 0x329864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x329864u;
label_329864:
    // 0x329864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x329864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_329868:
    // 0x329868: 0x3e00008  jr          $ra
label_32986c:
    if (ctx->pc == 0x32986Cu) {
        ctx->pc = 0x32986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329868u;
        // 0x32986c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x329870u;
        goto label_fallthrough_0x329868;
    }
    ctx->pc = 0x329868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x329868u;
        // 0x32986c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x329868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x329868:
    ctx->pc = 0x329870u;
}
