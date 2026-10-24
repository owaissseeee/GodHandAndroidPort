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

// Function: func_002B41F0
// Address: 0x2b41f0 - 0x2b4228
void func_002B41F0_0x2b41f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B41F0_0x2b41f0");
#endif

    switch (ctx->pc) {
        case 0x2b4204u: goto label_2b4204;
        default: break;
    }

    ctx->pc = 0x2b41f0u;

    // 0x2b41f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b41f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b41f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b41f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b41f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b41f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b41fc: 0xc0ad17c  jal         func_2B45F0
    ctx->pc = 0x2B41FCu;
    SET_GPR_U32(ctx, 31, 0x2B4204u);
    ctx->pc = 0x2B4200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B41FCu;
    // 0x2b4200: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B45F0u, 0x2B41FCu, 0x2B4204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4204u;
label_2b4204:
    // 0x2b4204: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b4204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b4208: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2b4208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2b420c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2b420cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2b4210: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b4210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b4214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b4218: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2b4218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2b421c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b421cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b4220: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4220u;
        // 0x2b4224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4228u;
}
