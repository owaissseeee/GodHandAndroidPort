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

// Function: func_003AB158
// Address: 0x3ab158 - 0x3ab188
void func_003AB158_0x3ab158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AB158_0x3ab158");
#endif

    switch (ctx->pc) {
        case 0x3ab17cu: goto label_3ab17c;
        default: break;
    }

    ctx->pc = 0x3ab158u;

    // 0x3ab158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ab158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ab15c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3ab15cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab160: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ab160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3ab164: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x3ab164u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab168: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3ab168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab16c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3ab16cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ab170: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x3ab170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x3ab174: 0xc0eac62  jal         func_3AB188
    ctx->pc = 0x3AB174u;
    SET_GPR_U32(ctx, 31, 0x3AB17Cu);
    ctx->pc = 0x3AB178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AB174u;
    // 0x3ab178: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB188u, 0x3AB174u, 0x3AB17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AB17Cu;
label_3ab17c:
    // 0x3ab17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ab17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ab180: 0x3e00008  jr          $ra
    ctx->pc = 0x3AB180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AB180u;
        // 0x3ab184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AB180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AB188u;
}
