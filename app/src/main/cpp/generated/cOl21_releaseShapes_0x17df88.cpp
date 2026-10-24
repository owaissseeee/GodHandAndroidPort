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

// Function: cOl21_releaseShapes
// Address: 0x17df88 - 0x17e010
void cOl21_releaseShapes_0x17df88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl21_releaseShapes_0x17df88");
#endif

    switch (ctx->pc) {
        case 0x17dfb0u: goto label_17dfb0;
        case 0x17dfc4u: goto label_17dfc4;
        case 0x17dfecu: goto label_17dfec;
        default: break;
    }

    ctx->pc = 0x17df88u;

    // 0x17df88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x17df88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17df8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17df8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17df90: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x17df90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x17df94: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17df94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df98: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17df98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x17df9c: 0x26500654  addiu       $s0, $s2, 0x654
    ctx->pc = 0x17df9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1620));
    // 0x17dfa0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x17dfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x17dfa4: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x17dfa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x17dfa8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17dfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17dfac: 0x3c13005d  lui         $s3, 0x5D
    ctx->pc = 0x17dfacu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
label_17dfb0:
    // 0x17dfb0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x17dfb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x17dfb4: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DFB4u;
    {
        const bool branch_taken_0x17dfb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dfb4) {
            ctx->pc = 0x17DFB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17DFB4u;
            // 0x17dfb8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17DFCCu;
            goto label_17dfcc;
        }
    }
    ctx->pc = 0x17DFBCu;
    // 0x17dfbc: 0xc04bb16  jal         func_12EC58
    ctx->pc = 0x17DFBCu;
    SET_GPR_U32(ctx, 31, 0x17DFC4u);
    ctx->pc = 0x17DFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DFBCu;
    // 0x17dfc0: 0x2664ae50  addiu       $a0, $s3, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC58u, 0x17DFBCu, 0x17DFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DFC4u;
label_17dfc4:
    // 0x17dfc4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17dfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x17dfc8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x17dfc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_17dfcc:
    // 0x17dfcc: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17DFCCu;
    {
        const bool branch_taken_0x17dfcc = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x17DFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFCCu;
        // 0x17dfd0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfcc) {
            ctx->pc = 0x17DFB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dfb0;
        }
    }
    ctx->pc = 0x17DFD4u;
    // 0x17dfd4: 0x8e450674  lw          $a1, 0x674($s2)
    ctx->pc = 0x17dfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1652)));
    // 0x17dfd8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17DFD8u;
    {
        const bool branch_taken_0x17dfd8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFD8u;
        // 0x17dfdc: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfd8) {
            ctx->pc = 0x17DFF4u;
            goto label_17dff4;
        }
    }
    ctx->pc = 0x17DFE0u;
    // 0x17dfe0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x17dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x17dfe4: 0xc04bb16  jal         func_12EC58
    ctx->pc = 0x17DFE4u;
    SET_GPR_U32(ctx, 31, 0x17DFECu);
    ctx->pc = 0x17DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DFE4u;
    // 0x17dfe8: 0x2484ae50  addiu       $a0, $a0, -0x51B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EC58u, 0x17DFE4u, 0x17DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DFECu;
label_17dfec:
    // 0x17dfec: 0xae400674  sw          $zero, 0x674($s2)
    ctx->pc = 0x17dfecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1652), GPR_U32(ctx, 0));
    // 0x17dff0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17dff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17dff4:
    // 0x17dff4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17dff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17dff8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17dff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17dffc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x17dffcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e000: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e000u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e004: 0x3e00008  jr          $ra
    ctx->pc = 0x17E004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E004u;
        // 0x17e008: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E00Cu;
    // 0x17e00c: 0x0  nop
    ctx->pc = 0x17e00cu;
    // NOP
    ctx->pc = 0x17e010u;
}
