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

// Function: func_0038CC88
// Address: 0x38cc88 - 0x38cd18
void func_0038CC88_0x38cc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038CC88_0x38cc88");
#endif

    switch (ctx->pc) {
        case 0x38ccbcu: goto label_38ccbc;
        case 0x38ccd0u: goto label_38ccd0;
        case 0x38ccfcu: goto label_38ccfc;
        default: break;
    }

    ctx->pc = 0x38cc88u;

    // 0x38cc88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38cc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38cc8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38cc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38cc90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38cc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x38cc94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38cc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38cc98: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x38cc98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x38cc9c: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x38CC9Cu;
    {
        const bool branch_taken_0x38cc9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38cc9c) {
            ctx->pc = 0x38CCA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CC9Cu;
            // 0x38cca0: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CCC8u;
            goto label_38ccc8;
        }
    }
    ctx->pc = 0x38CCA4u;
    // 0x38cca4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38cca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38cca8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x38cca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x38ccac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x38CCACu;
    {
        const bool branch_taken_0x38ccac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ccac) {
            ctx->pc = 0x38CCB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CCACu;
            // 0x38ccb0: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CCC8u;
            goto label_38ccc8;
        }
    }
    ctx->pc = 0x38CCB4u;
    // 0x38ccb4: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x38CCB4u;
    SET_GPR_U32(ctx, 31, 0x38CCBCu);
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x38CCB4u, 0x38CCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CCBCu;
label_38ccbc:
    // 0x38ccbc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x38ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x38ccc0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x38ccc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x38ccc4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x38ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_38ccc8:
    // 0x38ccc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x38CCC8u;
    {
        const bool branch_taken_0x38ccc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CCC8u;
        // 0x38cccc: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ccc8) {
            ctx->pc = 0x38CCECu;
            goto label_38ccec;
        }
    }
    ctx->pc = 0x38CCD0u;
label_38ccd0:
    // 0x38ccd0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x38ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x38ccd4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x38ccd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38ccd8: 0x0  nop
    ctx->pc = 0x38ccd8u;
    // NOP
    // 0x38ccdc: 0x0  nop
    ctx->pc = 0x38ccdcu;
    // NOP
    // 0x38cce0: 0x0  nop
    ctx->pc = 0x38cce0u;
    // NOP
    // 0x38cce4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x38CCE4u;
    {
        const bool branch_taken_0x38cce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38cce4) {
            ctx->pc = 0x38CCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ccd0;
        }
    }
    ctx->pc = 0x38CCECu;
label_38ccec:
    // 0x38ccec: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38CCECu;
    {
        const bool branch_taken_0x38ccec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ccec) {
            ctx->pc = 0x38CCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CCECu;
            // 0x38ccf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CD04u;
            goto label_38cd04;
        }
    }
    ctx->pc = 0x38CCF4u;
    // 0x38ccf4: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x38CCF4u;
    SET_GPR_U32(ctx, 31, 0x38CCFCu);
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x38CCF4u, 0x38CCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38CCFCu;
label_38ccfc:
    // 0x38ccfc: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x38ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x38cd00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38cd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38cd04:
    // 0x38cd04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38cd04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38cd08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38cd08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38cd0c: 0x80e306a  j           func_38C1A8
    ctx->pc = 0x38CD0Cu;
    ctx->pc = 0x38CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38CD0Cu;
    // 0x38cd10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C1A8u, 0x38CD0Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x38CD14u;
    // 0x38cd14: 0x0  nop
    ctx->pc = 0x38cd14u;
    // NOP
    ctx->pc = 0x38cd18u;
}
