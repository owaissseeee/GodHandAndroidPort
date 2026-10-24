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

// Function: func_002AD288
// Address: 0x2ad288 - 0x2ad2b8
void func_002AD288_0x2ad288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AD288_0x2ad288");
#endif

    switch (ctx->pc) {
        case 0x2ad2a8u: goto label_2ad2a8;
        default: break;
    }

    ctx->pc = 0x2ad288u;

    // 0x2ad288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ad288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ad28c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2ad28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2ad290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad294: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x2ad294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x2ad298: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AD298u;
    {
        const bool branch_taken_0x2ad298 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD298u;
        // 0x2ad29c: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad298) {
            ctx->pc = 0x2AD2A8u;
            goto label_2ad2a8;
        }
    }
    ctx->pc = 0x2AD2A0u;
    // 0x2ad2a0: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x2AD2A0u;
    SET_GPR_U32(ctx, 31, 0x2AD2A8u);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x2AD2A0u, 0x2AD2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD2A8u;
label_2ad2a8:
    // 0x2ad2a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD2ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD2ACu;
        // 0x2ad2b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD2ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD2B4u;
    // 0x2ad2b4: 0x0  nop
    ctx->pc = 0x2ad2b4u;
    // NOP
    ctx->pc = 0x2ad2b8u;
}
