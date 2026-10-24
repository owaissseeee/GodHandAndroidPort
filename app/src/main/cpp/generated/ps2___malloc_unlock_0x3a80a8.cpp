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

// Function: __malloc_unlock
// Address: 0x3a80a8 - 0x3a80e8
void ps2___malloc_unlock_0x3a80a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___malloc_unlock_0x3a80a8");
#endif

    switch (ctx->pc) {
        case 0x3a80dcu: goto label_3a80dc;
        default: break;
    }

    ctx->pc = 0x3a80a8u;

    // 0x3a80a8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3a80a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x3a80ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a80acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a80b0: 0x8c62a994  lw          $v0, -0x566C($v1)
    ctx->pc = 0x3a80b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA994u));
    // 0x3a80b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a80b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a80b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a80b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3a80bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A80BCu;
    {
        const bool branch_taken_0x3a80bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A80C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A80BCu;
        // 0x3a80c0: 0xac62a994  sw          $v0, -0x566C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294945172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a80bc) {
            ctx->pc = 0x3A80DCu;
            goto label_3a80dc;
        }
    }
    ctx->pc = 0x3A80C4u;
    // 0x3a80c4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a80c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3a80c8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3a80c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x3a80cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3a80ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a80d0: 0x8c44af18  lw          $a0, -0x50E8($v0)
    ctx->pc = 0x3a80d0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FAF18u));
    // 0x3a80d4: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3A80D4u;
    SET_GPR_U32(ctx, 31, 0x3A80DCu);
    ctx->pc = 0x3A80D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A80D4u;
    // 0x3a80d8: 0xaca3a990  sw          $v1, -0x5670($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294945168), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3A80D4u, 0x3A80DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A80DCu;
label_3a80dc:
    // 0x3a80dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a80dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a80e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A80E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A80E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A80E0u;
        // 0x3a80e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A80E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A80E8u;
}
