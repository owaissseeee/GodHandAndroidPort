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

// Function: func_0033BFB8
// Address: 0x33bfb8 - 0x33bfe8
void func_0033BFB8_0x33bfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033BFB8_0x33bfb8");
#endif

    switch (ctx->pc) {
        case 0x33bfb8u: goto label_33bfb8;
        case 0x33bfbcu: goto label_33bfbc;
        case 0x33bfc0u: goto label_33bfc0;
        case 0x33bfc4u: goto label_33bfc4;
        case 0x33bfc8u: goto label_33bfc8;
        case 0x33bfccu: goto label_33bfcc;
        case 0x33bfd0u: goto label_33bfd0;
        case 0x33bfd4u: goto label_33bfd4;
        case 0x33bfd8u: goto label_33bfd8;
        case 0x33bfdcu: goto label_33bfdc;
        case 0x33bfe0u: goto label_33bfe0;
        case 0x33bfe4u: goto label_33bfe4;
        default: break;
    }

    ctx->pc = 0x33bfb8u;

label_33bfb8:
    // 0x33bfb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33bfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33bfbc:
    // 0x33bfbc: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
label_33bfc0:
    // 0x33bfc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33bfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33bfc4:
    // 0x33bfc4: 0x244288c0  addiu       $v0, $v0, -0x7740
    ctx->pc = 0x33bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936768));
label_33bfc8:
    // 0x33bfc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33bfcc:
    // 0x33bfcc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_33bfd0:
    if (ctx->pc == 0x33BFD0u) {
        ctx->pc = 0x33BFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFCCu;
        // 0x33bfd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BFD4u;
        goto label_33bfd4;
    }
    ctx->pc = 0x33BFCCu;
    {
        const bool branch_taken_0x33bfcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bfcc) {
            ctx->pc = 0x33BFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33BFCCu;
            // 0x33bfd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33BFE0u;
            goto label_33bfe0;
        }
    }
    ctx->pc = 0x33BFD4u;
label_33bfd4:
    // 0x33bfd4: 0x60f809  jalr        $v1
label_33bfd8:
    if (ctx->pc == 0x33BFD8u) {
        ctx->pc = 0x33BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFD4u;
        // 0x33bfd8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BFDCu;
        goto label_33bfdc;
    }
    ctx->pc = 0x33BFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33BFDCu);
        ctx->pc = 0x33BFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFD4u;
        // 0x33bfd8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BFD4u, 0x33BFDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33BFDCu;
label_33bfdc:
    // 0x33bfdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33bfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33bfe0:
    // 0x33bfe0: 0x3e00008  jr          $ra
label_33bfe4:
    if (ctx->pc == 0x33BFE4u) {
        ctx->pc = 0x33BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFE0u;
        // 0x33bfe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BFE8u;
        goto label_fallthrough_0x33bfe0;
    }
    ctx->pc = 0x33BFE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BFE0u;
        // 0x33bfe4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BFE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33bfe0:
    ctx->pc = 0x33BFE8u;
}
