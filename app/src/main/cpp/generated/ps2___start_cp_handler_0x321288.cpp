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

// Function: __start_cp_handler
// Address: 0x321288 - 0x3212c0
void ps2___start_cp_handler_0x321288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___start_cp_handler_0x321288");
#endif

    switch (ctx->pc) {
        case 0x321298u: goto label_321298;
        default: break;
    }

    ctx->pc = 0x321288u;

    // 0x321288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x321288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32128c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32128cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x321290: 0xc0c80d8  jal         func_320360
    ctx->pc = 0x321290u;
    SET_GPR_U32(ctx, 31, 0x321298u);
    ctx->pc = 0x320360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320360u, 0x321290u, 0x321298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x321298u;
label_321298:
    // 0x321298: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x321298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x32129c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32129cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3212a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3212a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3212a4: 0xdc640020  ld          $a0, 0x20($v1)
    ctx->pc = 0x3212a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3212a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3212a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3212ac: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x3212acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x3212b0: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x3212b0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x3212b4: 0xfc640020  sd          $a0, 0x20($v1)
    ctx->pc = 0x3212b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 4));
    // 0x3212b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3212B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3212BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3212B8u;
        // 0x3212bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3212B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3212C0u;
}
