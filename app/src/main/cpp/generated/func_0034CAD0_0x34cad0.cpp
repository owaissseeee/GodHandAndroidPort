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

// Function: func_0034CAD0
// Address: 0x34cad0 - 0x34caf8
void func_0034CAD0_0x34cad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034CAD0_0x34cad0");
#endif

    switch (ctx->pc) {
        case 0x34cae0u: goto label_34cae0;
        default: break;
    }

    ctx->pc = 0x34cad0u;

    // 0x34cad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34cad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34cad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34cad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34cad8: 0xc0d30ae  jal         func_34C2B8
    ctx->pc = 0x34CAD8u;
    SET_GPR_U32(ctx, 31, 0x34CAE0u);
    ctx->pc = 0x34CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34CAD8u;
    // 0x34cadc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C2B8u, 0x34CAD8u, 0x34CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34CAE0u;
label_34cae0:
    // 0x34cae0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x34cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34cae4: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x34cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34cae8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34cae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34caec: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x34caecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x34caf0: 0x3e00008  jr          $ra
    ctx->pc = 0x34CAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34CAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34CAF0u;
        // 0x34caf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34CAF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34CAF8u;
}
