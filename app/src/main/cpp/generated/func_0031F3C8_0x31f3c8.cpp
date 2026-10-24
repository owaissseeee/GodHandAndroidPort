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

// Function: func_0031F3C8
// Address: 0x31f3c8 - 0x31f3f8
void func_0031F3C8_0x31f3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031F3C8_0x31f3c8");
#endif

    switch (ctx->pc) {
        case 0x31f3ecu: goto label_31f3ec;
        default: break;
    }

    ctx->pc = 0x31f3c8u;

    // 0x31f3c8: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x31f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x31f3cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31f3ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31f3d0: 0x24421288  addiu       $v0, $v0, 0x1288
    ctx->pc = 0x31f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4744));
    // 0x31f3d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31f3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31f3d8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x31f3d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x31f3dc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31F3DCu;
    {
        const bool branch_taken_0x31f3dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31F3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F3DCu;
        // 0x31f3e0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31f3dc) {
            ctx->pc = 0x31F3ECu;
            goto label_31f3ec;
        }
    }
    ctx->pc = 0x31F3E4u;
    // 0x31f3e4: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x31F3E4u;
    SET_GPR_U32(ctx, 31, 0x31F3ECu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x31F3E4u, 0x31F3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F3ECu;
label_31f3ec:
    // 0x31f3ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31f3ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x31F3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31F3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31F3F0u;
        // 0x31f3f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F3F8u;
}
