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

// Function: func_00334BA8
// Address: 0x334ba8 - 0x334bd8
void func_00334BA8_0x334ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00334BA8_0x334ba8");
#endif

    switch (ctx->pc) {
        case 0x334bb8u: goto label_334bb8;
        default: break;
    }

    ctx->pc = 0x334ba8u;

    // 0x334ba8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x334ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x334bac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x334bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x334bb0: 0xc0cd2c8  jal         func_334B20
    ctx->pc = 0x334BB0u;
    SET_GPR_U32(ctx, 31, 0x334BB8u);
    ctx->pc = 0x334B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x334B20u, 0x334BB0u, 0x334BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334BB8u;
label_334bb8:
    // 0x334bb8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x334bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x334bbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x334bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x334bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x334bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x334bc4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x334bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x334bc8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x334bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x334bcc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x334bccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x334bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x334BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334BD0u;
        // 0x334bd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334BD8u;
}
