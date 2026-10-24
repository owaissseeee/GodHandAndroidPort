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

// Function: func_0030E568
// Address: 0x30e568 - 0x30e598
void func_0030E568_0x30e568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030E568_0x30e568");
#endif

    switch (ctx->pc) {
        case 0x30e58cu: goto label_30e58c;
        default: break;
    }

    ctx->pc = 0x30e568u;

    // 0x30e568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30e568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30e56c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x30e56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x30e570: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30E570u;
    {
        const bool branch_taken_0x30e570 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x30E574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E570u;
        // 0x30e574: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e570) {
            ctx->pc = 0x30E58Cu;
            goto label_30e58c;
        }
    }
    ctx->pc = 0x30E578u;
    // 0x30e578: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30E578u;
    {
        const bool branch_taken_0x30e578 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x30E57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E578u;
        // 0x30e57c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30e578) {
            ctx->pc = 0x30E590u;
            goto label_30e590;
        }
    }
    ctx->pc = 0x30E580u;
    // 0x30e580: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30e580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30e584: 0xc0b5430  jal         func_2D50C0
    ctx->pc = 0x30E584u;
    SET_GPR_U32(ctx, 31, 0x30E58Cu);
    ctx->pc = 0x30E588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30E584u;
    // 0x30e588: 0x24842c00  addiu       $a0, $a0, 0x2C00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D50C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D50C0u, 0x30E584u, 0x30E58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30E58Cu;
label_30e58c:
    // 0x30e58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30e58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_30e590:
    // 0x30e590: 0x3e00008  jr          $ra
    ctx->pc = 0x30E590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30E590u;
        // 0x30e594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30E590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30E598u;
}
