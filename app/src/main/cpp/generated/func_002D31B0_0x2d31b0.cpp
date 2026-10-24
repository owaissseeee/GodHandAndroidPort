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

// Function: func_002D31B0
// Address: 0x2d31b0 - 0x2d31e0
void func_002D31B0_0x2d31b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D31B0_0x2d31b0");
#endif

    switch (ctx->pc) {
        case 0x2d31d4u: goto label_2d31d4;
        default: break;
    }

    ctx->pc = 0x2d31b0u;

    // 0x2d31b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d31b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d31b4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2d31b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2d31b8: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D31B8u;
    {
        const bool branch_taken_0x2d31b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D31B8u;
        // 0x2d31bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d31b8) {
            ctx->pc = 0x2D31D4u;
            goto label_2d31d4;
        }
    }
    ctx->pc = 0x2D31C0u;
    // 0x2d31c0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D31C0u;
    {
        const bool branch_taken_0x2d31c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D31C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D31C0u;
        // 0x2d31c4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d31c0) {
            ctx->pc = 0x2D31D8u;
            goto label_2d31d8;
        }
    }
    ctx->pc = 0x2D31C8u;
    // 0x2d31c8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2d31c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2d31cc: 0xc0b4b72  jal         func_2D2DC8
    ctx->pc = 0x2D31CCu;
    SET_GPR_U32(ctx, 31, 0x2D31D4u);
    ctx->pc = 0x2D31D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D31CCu;
    // 0x2d31d0: 0x24843a40  addiu       $a0, $a0, 0x3A40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2DC8u, 0x2D31CCu, 0x2D31D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D31D4u;
label_2d31d4:
    // 0x2d31d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d31d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d31d8:
    // 0x2d31d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D31D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D31DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D31D8u;
        // 0x2d31dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D31D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D31E0u;
}
