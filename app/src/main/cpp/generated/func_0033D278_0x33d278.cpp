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

// Function: func_0033D278
// Address: 0x33d278 - 0x33d2b8
void func_0033D278_0x33d278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033D278_0x33d278");
#endif

    switch (ctx->pc) {
        case 0x33d2a0u: goto label_33d2a0;
        default: break;
    }

    ctx->pc = 0x33d278u;

    // 0x33d278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33d278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33d27c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x33d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33d280: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33d280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33d284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33d284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33d288: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33d288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33d28c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x33d28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33d290: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x33D290u;
    {
        const bool branch_taken_0x33d290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x33d290) {
            ctx->pc = 0x33D294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D290u;
            // 0x33d294: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D2ACu;
            goto label_33d2ac;
        }
    }
    ctx->pc = 0x33D298u;
    // 0x33d298: 0xc0cfed2  jal         func_33FB48
    ctx->pc = 0x33D298u;
    SET_GPR_U32(ctx, 31, 0x33D2A0u);
    ctx->pc = 0x33D29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D298u;
    // 0x33d29c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FB48u, 0x33D298u, 0x33D2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D2A0u;
label_33d2a0:
    // 0x33d2a0: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x33d2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x33d2a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x33d2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x33d2a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33d2a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33d2ac:
    // 0x33d2ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33d2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33d2b0: 0x3e00008  jr          $ra
    ctx->pc = 0x33D2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D2B0u;
        // 0x33d2b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33D2B8u;
}
