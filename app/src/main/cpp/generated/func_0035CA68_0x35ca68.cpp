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

// Function: func_0035CA68
// Address: 0x35ca68 - 0x35cac8
void func_0035CA68_0x35ca68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035CA68_0x35ca68");
#endif

    switch (ctx->pc) {
        case 0x35ca88u: goto label_35ca88;
        case 0x35cab0u: goto label_35cab0;
        default: break;
    }

    ctx->pc = 0x35ca68u;

    // 0x35ca68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ca68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ca6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ca6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ca70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35ca70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ca74: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35ca78: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x35ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x35ca7c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x35CA7Cu;
    {
        const bool branch_taken_0x35ca7c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x35CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CA7Cu;
        // 0x35ca80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ca7c) {
            ctx->pc = 0x35CAA8u;
            goto label_35caa8;
        }
    }
    ctx->pc = 0x35CA84u;
    // 0x35ca84: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x35ca84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_35ca88:
    // 0x35ca88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35ca8c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x35ca8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x35ca90: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x35ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x35ca94: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35ca94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x35ca98: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x35ca98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x35ca9c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x35ca9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35caa0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x35CAA0u;
    {
        const bool branch_taken_0x35caa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CAA0u;
        // 0x35caa4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35caa0) {
            ctx->pc = 0x35CA88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ca88;
        }
    }
    ctx->pc = 0x35CAA8u;
label_35caa8:
    // 0x35caa8: 0xc0d72b2  jal         func_35CAC8
    ctx->pc = 0x35CAA8u;
    SET_GPR_U32(ctx, 31, 0x35CAB0u);
    ctx->pc = 0x35CAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CAA8u;
    // 0x35caac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CAC8u, 0x35CAA8u, 0x35CAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CAB0u;
label_35cab0:
    // 0x35cab0: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x35cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x35cab4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35cab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35cab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35cab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35cabc: 0x3e00008  jr          $ra
    ctx->pc = 0x35CABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CABCu;
        // 0x35cac0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CAC4u;
    // 0x35cac4: 0x0  nop
    ctx->pc = 0x35cac4u;
    // NOP
    ctx->pc = 0x35cac8u;
}
