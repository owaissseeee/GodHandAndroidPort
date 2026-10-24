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

// Function: func_0036CBC0
// Address: 0x36cbc0 - 0x36cc08
void func_0036CBC0_0x36cbc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0036CBC0_0x36cbc0");
#endif

    switch (ctx->pc) {
        case 0x36cbc0u: goto label_36cbc0;
        case 0x36cbc4u: goto label_36cbc4;
        case 0x36cbc8u: goto label_36cbc8;
        case 0x36cbccu: goto label_36cbcc;
        case 0x36cbd0u: goto label_36cbd0;
        case 0x36cbd4u: goto label_36cbd4;
        case 0x36cbd8u: goto label_36cbd8;
        case 0x36cbdcu: goto label_36cbdc;
        case 0x36cbe0u: goto label_36cbe0;
        case 0x36cbe4u: goto label_36cbe4;
        case 0x36cbe8u: goto label_36cbe8;
        case 0x36cbecu: goto label_36cbec;
        case 0x36cbf0u: goto label_36cbf0;
        case 0x36cbf4u: goto label_36cbf4;
        case 0x36cbf8u: goto label_36cbf8;
        case 0x36cbfcu: goto label_36cbfc;
        case 0x36cc00u: goto label_36cc00;
        case 0x36cc04u: goto label_36cc04;
        default: break;
    }

    ctx->pc = 0x36cbc0u;

label_36cbc0:
    // 0x36cbc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36cbc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_36cbc4:
    // 0x36cbc4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x36cbc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_36cbc8:
    // 0x36cbc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_36cbcc:
    // 0x36cbcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36cbccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36cbd0:
    // 0x36cbd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36cbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_36cbd4:
    // 0x36cbd4: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x36cbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_36cbd8:
    // 0x36cbd8: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x36cbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_36cbdc:
    // 0x36cbdc: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x36cbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_36cbe0:
    // 0x36cbe0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36cbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36cbe4:
    // 0x36cbe4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_36cbe8:
    if (ctx->pc == 0x36CBE8u) {
        ctx->pc = 0x36CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CBE4u;
        // 0x36cbe8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CBECu;
        goto label_36cbec;
    }
    ctx->pc = 0x36CBE4u;
    {
        const bool branch_taken_0x36cbe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x36CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CBE4u;
        // 0x36cbe8: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36cbe4) {
            ctx->pc = 0x36CBF4u;
            goto label_36cbf4;
        }
    }
    ctx->pc = 0x36CBECu;
label_36cbec:
    // 0x36cbec: 0x60f809  jalr        $v1
label_36cbf0:
    if (ctx->pc == 0x36CBF0u) {
        ctx->pc = 0x36CBF4u;
        goto label_36cbf4;
    }
    ctx->pc = 0x36CBECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x36CBF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CBECu, 0x36CBF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36CBF4u;
label_36cbf4:
    // 0x36cbf4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x36cbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_36cbf8:
    // 0x36cbf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36cbf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_36cbfc:
    // 0x36cbfc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36cbfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_36cc00:
    // 0x36cc00: 0x3e00008  jr          $ra
label_36cc04:
    if (ctx->pc == 0x36CC04u) {
        ctx->pc = 0x36CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC00u;
        // 0x36cc04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x36CC08u;
        goto label_fallthrough_0x36cc00;
    }
    ctx->pc = 0x36CC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36CC00u;
        // 0x36cc04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36CC00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36cc00:
    ctx->pc = 0x36CC08u;
}
