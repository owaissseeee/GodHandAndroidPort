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

// Function: cCoreSave_setClearStage
// Address: 0x1fbf90 - 0x1fbfd0
void cCoreSave_setClearStage_0x1fbf90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setClearStage_0x1fbf90");
#endif

    switch (ctx->pc) {
        case 0x1fbfa8u: goto label_1fbfa8;
        default: break;
    }

    ctx->pc = 0x1fbf90u;

    // 0x1fbf90: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fbf90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbf94: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FBF94u;
    {
        const bool branch_taken_0x1fbf94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBF94u;
        // 0x1fbf98: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbf94) {
            ctx->pc = 0x1FBFC4u;
            goto label_1fbfc4;
        }
    }
    ctx->pc = 0x1FBF9Cu;
    // 0x1fbf9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fbf9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfa0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fbfa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbfa4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fbfa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fbfa8:
    // 0x1fbfa8: 0xc81804  sllv        $v1, $t0, $a2
    ctx->pc = 0x1fbfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x1fbfac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fbfacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fbfb0: 0xa6102b  sltu        $v0, $a1, $a2
    ctx->pc = 0x1fbfb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1fbfb4: 0x0  nop
    ctx->pc = 0x1fbfb4u;
    // NOP
    // 0x1fbfb8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FBFB8u;
    {
        const bool branch_taken_0x1fbfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBFB8u;
        // 0x1fbfbc: 0xe33825  or          $a3, $a3, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbfb8) {
            ctx->pc = 0x1FBFA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fbfa8;
        }
    }
    ctx->pc = 0x1FBFC0u;
    // 0x1fbfc0: 0xac8700a4  sw          $a3, 0xA4($a0)
    ctx->pc = 0x1fbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 7));
label_1fbfc4:
    // 0x1fbfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBFCCu;
    // 0x1fbfcc: 0x0  nop
    ctx->pc = 0x1fbfccu;
    // NOP
    ctx->pc = 0x1fbfd0u;
}
