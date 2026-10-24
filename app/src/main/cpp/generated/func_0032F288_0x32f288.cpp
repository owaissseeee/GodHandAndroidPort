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

// Function: func_0032F288
// Address: 0x32f288 - 0x32f2d8
void func_0032F288_0x32f288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032F288_0x32f288");
#endif

    switch (ctx->pc) {
        case 0x32f298u: goto label_32f298;
        case 0x32f2c8u: goto label_32f2c8;
        default: break;
    }

    ctx->pc = 0x32f288u;

    // 0x32f288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32f288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32f28c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x32f28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x32f290: 0xc0cff1c  jal         func_33FC70
    ctx->pc = 0x32F290u;
    SET_GPR_U32(ctx, 31, 0x32F298u);
    ctx->pc = 0x33FC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC70u, 0x32F290u, 0x32F298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F298u;
label_32f298:
    // 0x32f298: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x32f298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x32f29c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x32f29cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x32f2a0: 0x24631e68  addiu       $v1, $v1, 0x1E68
    ctx->pc = 0x32f2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7784));
    // 0x32f2a4: 0x24841e70  addiu       $a0, $a0, 0x1E70
    ctx->pc = 0x32f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7792));
    // 0x32f2a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x32f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D1E68u));
    // 0x32f2ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32f2acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32f2b0: 0x24066590  addiu       $a2, $zero, 0x6590
    ctx->pc = 0x32f2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26000));
    // 0x32f2b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32f2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32f2b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x32F2B8u;
    {
        const bool branch_taken_0x32f2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32F2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32F2B8u;
        // 0x32f2bc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32f2b8) {
            ctx->pc = 0x32F2C8u;
            goto label_32f2c8;
        }
    }
    ctx->pc = 0x32F2C0u;
    // 0x32f2c0: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x32F2C0u;
    SET_GPR_U32(ctx, 31, 0x32F2C8u);
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x32F2C0u, 0x32F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32F2C8u;
label_32f2c8:
    // 0x32f2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32f2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32f2cc: 0x80cff22  j           func_33FC88
    ctx->pc = 0x32F2CCu;
    ctx->pc = 0x32F2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32F2CCu;
    // 0x32f2d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FC88u, 0x32F2CCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32F2D4u;
    // 0x32f2d4: 0x0  nop
    ctx->pc = 0x32f2d4u;
    // NOP
    ctx->pc = 0x32f2d8u;
}
