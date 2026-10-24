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

// Function: func_0018A3B8
// Address: 0x18a3b8 - 0x18a3e8
void func_0018A3B8_0x18a3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018A3B8_0x18a3b8");
#endif

    switch (ctx->pc) {
        case 0x18a3dcu: goto label_18a3dc;
        default: break;
    }

    ctx->pc = 0x18a3b8u;

    // 0x18a3b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x18a3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18a3bc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x18a3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x18a3c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18a3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18a3c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18a3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18a3c8: 0x8c840600  lw          $a0, 0x600($a0)
    ctx->pc = 0x18a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1536)));
    // 0x18a3cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18A3CCu;
    {
        const bool branch_taken_0x18a3cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3CCu;
        // 0x18a3d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18a3cc) {
            ctx->pc = 0x18A3E0u;
            goto label_18a3e0;
        }
    }
    ctx->pc = 0x18A3D4u;
    // 0x18a3d4: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x18A3D4u;
    SET_GPR_U32(ctx, 31, 0x18A3DCu);
    ctx->pc = 0x18A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18A3D4u;
    // 0x18a3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x18A3D4u, 0x18A3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18A3DCu;
label_18a3dc:
    // 0x18a3dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18a3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18a3e0:
    // 0x18a3e0: 0x3e00008  jr          $ra
    ctx->pc = 0x18A3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18A3E0u;
        // 0x18a3e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18A3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18A3E8u;
}
