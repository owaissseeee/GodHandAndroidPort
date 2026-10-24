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

// Function: Ring_stepToAccepted
// Address: 0x2d2e38 - 0x2d2ee8
void Ring_stepToAccepted_0x2d2e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ring_stepToAccepted_0x2d2e38");
#endif

    switch (ctx->pc) {
        case 0x2d2e64u: goto label_2d2e64;
        case 0x2d2e6cu: goto label_2d2e6c;
        case 0x2d2e74u: goto label_2d2e74;
        case 0x2d2e90u: goto label_2d2e90;
        case 0x2d2eacu: goto label_2d2eac;
        default: break;
    }

    ctx->pc = 0x2d2e38u;

    // 0x2d2e38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d2e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d2e3c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d2e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d2e40: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d2e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2d2e44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d2e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2e48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d2e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d2e4c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d2e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2d2e50: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2d2e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2d2e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d2e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d2e58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d2e5c: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x2D2E5Cu;
    {
        const bool branch_taken_0x2d2e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e5c) {
            ctx->pc = 0x2D2E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2E5Cu;
            // 0x2d2e60: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2EC8u;
            goto label_2d2ec8;
        }
    }
    ctx->pc = 0x2D2E64u;
label_2d2e64:
    // 0x2d2e64: 0xc0b4d2a  jal         func_2D34A8
    ctx->pc = 0x2D2E64u;
    SET_GPR_U32(ctx, 31, 0x2D2E6Cu);
    ctx->pc = 0x2D2E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E64u;
    // 0x2d2e68: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D34A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D34A8u, 0x2D2E64u, 0x2D2E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E6Cu;
label_2d2e6c:
    // 0x2d2e6c: 0xc0b4c84  jal         func_2D3210
    ctx->pc = 0x2D2E6Cu;
    SET_GPR_U32(ctx, 31, 0x2D2E74u);
    ctx->pc = 0x2D2E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2E6Cu;
    // 0x2d2e70: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3210u, 0x2D2E6Cu, 0x2D2E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2E74u;
label_2d2e74:
    // 0x2d2e74: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D2E74u;
    {
        const bool branch_taken_0x2d2e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2e74) {
            ctx->pc = 0x2D2E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2E74u;
            // 0x2d2e78: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2EC8u;
            goto label_2d2ec8;
        }
    }
    ctx->pc = 0x2D2E7Cu;
    // 0x2d2e7c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2d2e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2e80: 0x26130c40  addiu       $s3, $s0, 0xC40
    ctx->pc = 0x2d2e80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 3136));
    // 0x2d2e84: 0x26120040  addiu       $s2, $s0, 0x40
    ctx->pc = 0x2d2e84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2d2e88: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2d2e88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2e8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d2e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d2e90:
    // 0x2d2e90: 0x244200c0  addiu       $v0, $v0, 0xC0
    ctx->pc = 0x2d2e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x2d2e94: 0x53182b  sltu        $v1, $v0, $s3
    ctx->pc = 0x2d2e94u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x2d2e98: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D2E98u;
    {
        const bool branch_taken_0x2d2e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2E98u;
        // 0x2d2e9c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2e98) {
            ctx->pc = 0x2D2EA4u;
            goto label_2d2ea4;
        }
    }
    ctx->pc = 0x2D2EA0u;
    // 0x2d2ea0: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x2d2ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_2d2ea4:
    // 0x2d2ea4: 0xc0b4c84  jal         func_2D3210
    ctx->pc = 0x2D2EA4u;
    SET_GPR_U32(ctx, 31, 0x2D2EACu);
    ctx->pc = 0x2D2EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D2EA4u;
    // 0x2d2ea8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3210u, 0x2D2EA4u, 0x2D2EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D2EACu;
label_2d2eac:
    // 0x2d2eac: 0x1054ffed  beq         $v0, $s4, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2D2EACu;
    {
        const bool branch_taken_0x2d2eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x2D2EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2EACu;
        // 0x2d2eb0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2eac) {
            ctx->pc = 0x2D2E64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2e64;
        }
    }
    ctx->pc = 0x2D2EB4u;
    // 0x2d2eb4: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x2d2eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2d2eb8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2D2EB8u;
    {
        const bool branch_taken_0x2d2eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2eb8) {
            ctx->pc = 0x2D2EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D2EB8u;
            // 0x2d2ebc: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D2E90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d2e90;
        }
    }
    ctx->pc = 0x2D2EC0u;
    // 0x2d2ec0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2d2ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2d2ec4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d2ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2d2ec8:
    // 0x2d2ec8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d2ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d2ecc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d2eccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d2ed0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d2ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2ed4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2d2ed4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d2ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d2ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d2edc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2EDCu;
        // 0x2d2ee0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2EE4u;
    // 0x2d2ee4: 0x0  nop
    ctx->pc = 0x2d2ee4u;
    // NOP
    ctx->pc = 0x2d2ee8u;
}
