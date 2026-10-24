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

// Function: func_0033BE80
// Address: 0x33be80 - 0x33bec0
void func_0033BE80_0x33be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033BE80_0x33be80");
#endif

    switch (ctx->pc) {
        case 0x33bea4u: goto label_33bea4;
        default: break;
    }

    ctx->pc = 0x33be80u;

    // 0x33be80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33be80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33be84: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33be84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33be88: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33be88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33be8c: 0x24509944  addiu       $s0, $v0, -0x66BC
    ctx->pc = 0x33be8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940996));
    // 0x33be90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33be90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E9944u));
    // 0x33be94: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33BE94u;
    {
        const bool branch_taken_0x33be94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33BE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BE94u;
        // 0x33be98: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33be94) {
            ctx->pc = 0x33BEA4u;
            goto label_33bea4;
        }
    }
    ctx->pc = 0x33BE9Cu;
    // 0x33be9c: 0xc0cef76  jal         func_33BDD8
    ctx->pc = 0x33BE9Cu;
    SET_GPR_U32(ctx, 31, 0x33BEA4u);
    ctx->pc = 0x33BDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33BDD8u, 0x33BE9Cu, 0x33BEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BEA4u;
label_33bea4:
    // 0x33bea4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33bea8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33bea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33beac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33beacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33beb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x33beb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x33beb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33beb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33beb8: 0x3e00008  jr          $ra
    ctx->pc = 0x33BEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BEB8u;
        // 0x33bebc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BEC0u;
}
