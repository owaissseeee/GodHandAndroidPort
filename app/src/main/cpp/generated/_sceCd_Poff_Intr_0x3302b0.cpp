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

// Function: _sceCd_Poff_Intr
// Address: 0x3302b0 - 0x3302e0
void _sceCd_Poff_Intr_0x3302b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceCd_Poff_Intr_0x3302b0");
#endif

    switch (ctx->pc) {
        case 0x3302b0u: goto label_3302b0;
        case 0x3302b4u: goto label_3302b4;
        case 0x3302b8u: goto label_3302b8;
        case 0x3302bcu: goto label_3302bc;
        case 0x3302c0u: goto label_3302c0;
        case 0x3302c4u: goto label_3302c4;
        case 0x3302c8u: goto label_3302c8;
        case 0x3302ccu: goto label_3302cc;
        case 0x3302d0u: goto label_3302d0;
        case 0x3302d4u: goto label_3302d4;
        case 0x3302d8u: goto label_3302d8;
        case 0x3302dcu: goto label_3302dc;
        default: break;
    }

    ctx->pc = 0x3302b0u;

label_3302b0:
    // 0x3302b0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3302b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_3302b4:
    // 0x3302b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3302b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3302b8:
    // 0x3302b8: 0x8c438404  lw          $v1, -0x7BFC($v0)
    ctx->pc = 0x3302b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935556)));
label_3302bc:
    // 0x3302bc: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3302c0:
    if (ctx->pc == 0x3302C0u) {
        ctx->pc = 0x3302C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302BCu;
        // 0x3302c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3302C4u;
        goto label_3302c4;
    }
    ctx->pc = 0x3302BCu;
    {
        const bool branch_taken_0x3302bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3302C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302BCu;
        // 0x3302c0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3302bc) {
            ctx->pc = 0x3302D0u;
            goto label_3302d0;
        }
    }
    ctx->pc = 0x3302C4u;
label_3302c4:
    // 0x3302c4: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3302c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_3302c8:
    // 0x3302c8: 0x60f809  jalr        $v1
label_3302cc:
    if (ctx->pc == 0x3302CCu) {
        ctx->pc = 0x3302CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302C8u;
        // 0x3302cc: 0x8c448408  lw          $a0, -0x7BF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3302D0u;
        goto label_3302d0;
    }
    ctx->pc = 0x3302C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3302D0u);
        ctx->pc = 0x3302CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302C8u;
        // 0x3302cc: 0x8c448408  lw          $a0, -0x7BF8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935560)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3302C8u, 0x3302D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3302D0u;
label_3302d0:
    // 0x3302d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3302d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3302d4:
    // 0x3302d4: 0x3e00008  jr          $ra
label_3302d8:
    if (ctx->pc == 0x3302D8u) {
        ctx->pc = 0x3302D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302D4u;
        // 0x3302d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3302DCu;
        goto label_3302dc;
    }
    ctx->pc = 0x3302D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3302D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3302D4u;
        // 0x3302d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3302D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3302DCu;
label_3302dc:
    // 0x3302dc: 0x0  nop
    ctx->pc = 0x3302dcu;
    // NOP
    ctx->pc = 0x3302e0u;
}
