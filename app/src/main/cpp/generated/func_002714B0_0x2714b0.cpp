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

// Function: func_002714B0
// Address: 0x2714b0 - 0x2714e8
void func_002714B0_0x2714b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002714B0_0x2714b0");
#endif

    switch (ctx->pc) {
        case 0x2714d4u: goto label_2714d4;
        default: break;
    }

    ctx->pc = 0x2714b0u;

    // 0x2714b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2714b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2714b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2714b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2714b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2714b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2714bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2714bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714c0: 0x8e041860  lw          $a0, 0x1860($s0)
    ctx->pc = 0x2714c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6240)));
    // 0x2714c4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2714C4u;
    {
        const bool branch_taken_0x2714c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2714c4) {
            ctx->pc = 0x2714C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2714C4u;
            // 0x2714c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2714DCu;
            goto label_2714dc;
        }
    }
    ctx->pc = 0x2714CCu;
    // 0x2714cc: 0xc0c3d72  jal         func_30F5C8
    ctx->pc = 0x2714CCu;
    SET_GPR_U32(ctx, 31, 0x2714D4u);
    ctx->pc = 0x30F5C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5C8u, 0x2714CCu, 0x2714D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2714D4u;
label_2714d4:
    // 0x2714d4: 0xae001860  sw          $zero, 0x1860($s0)
    ctx->pc = 0x2714d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6240), GPR_U32(ctx, 0));
    // 0x2714d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2714d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2714dc:
    // 0x2714dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2714dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2714e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2714E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2714E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714E0u;
        // 0x2714e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2714E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2714E8u;
}
