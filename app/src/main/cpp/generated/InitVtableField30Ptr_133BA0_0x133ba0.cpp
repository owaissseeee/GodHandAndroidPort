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

// Function: InitVtableField30Ptr_133BA0
// Address: 0x133ba0 - 0x133bc8
void InitVtableField30Ptr_133BA0_0x133ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVtableField30Ptr_133BA0_0x133ba0");
#endif

    switch (ctx->pc) {
        case 0x133bbcu: goto label_133bbc;
        default: break;
    }

    ctx->pc = 0x133ba0u;

    // 0x133ba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133ba4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x133ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x133ba8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x133ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133bac: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x133bacu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133bb0: 0x2442d790  addiu       $v0, $v0, -0x2870
    ctx->pc = 0x133bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956944));
    // 0x133bb4: 0xc04ce70  jal         func_1339C0
    ctx->pc = 0x133BB4u;
    SET_GPR_U32(ctx, 31, 0x133BBCu);
    ctx->pc = 0x133BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133BB4u;
    // 0x133bb8: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1339C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1339C0u, 0x133BB4u, 0x133BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133BBCu;
label_133bbc:
    // 0x133bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x133BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133BC0u;
        // 0x133bc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133BC8u;
}
