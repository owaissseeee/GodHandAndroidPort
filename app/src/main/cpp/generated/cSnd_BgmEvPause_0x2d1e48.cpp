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

// Function: cSnd_BgmEvPause
// Address: 0x2d1e48 - 0x2d1ee8
void cSnd_BgmEvPause_0x2d1e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_BgmEvPause_0x2d1e48");
#endif

    switch (ctx->pc) {
        case 0x2d1e80u: goto label_2d1e80;
        case 0x2d1eb8u: goto label_2d1eb8;
        default: break;
    }

    ctx->pc = 0x2d1e48u;

    // 0x2d1e48: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d1e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d1e4c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d1e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2d1e50: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d1e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d1e54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d1e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d1e58: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d1e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2d1e5c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2d1e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2d1e60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d1e64: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d1e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d1e68: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x2d1e68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2d1e6c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2D1E6Cu;
    {
        const bool branch_taken_0x2d1e6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D1E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1E6Cu;
        // 0x2d1e70: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d1e6c) {
            ctx->pc = 0x2D1EC4u;
            goto label_2d1ec4;
        }
    }
    ctx->pc = 0x2D1E74u;
    // 0x2d1e74: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x2d1e74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d1e78: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x2d1e78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d1e7c: 0x0  nop
    ctx->pc = 0x2d1e7cu;
    // NOP
label_2d1e80:
    // 0x2d1e80: 0x52340009  beql        $s1, $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D1E80u;
    {
        const bool branch_taken_0x2d1e80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x2d1e80) {
            ctx->pc = 0x2D1E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1E80u;
            // 0x2d1e84: 0x8e020094  lw          $v0, 0x94($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1EA8u;
            goto label_2d1ea8;
        }
    }
    ctx->pc = 0x2D1E88u;
    // 0x2d1e88: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2d1e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2d1e8c: 0x2442ff80  addiu       $v0, $v0, -0x80
    ctx->pc = 0x2d1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
    // 0x2d1e90: 0x5452000a  bnel        $v0, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2D1E90u;
    {
        const bool branch_taken_0x2d1e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d1e90) {
            ctx->pc = 0x2D1E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1E90u;
            // 0x2d1e94: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1EBCu;
            goto label_2d1ebc;
        }
    }
    ctx->pc = 0x2D1E98u;
    // 0x2d1e98: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x2d1e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x2d1e9c: 0x54510007  bnel        $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D1E9Cu;
    {
        const bool branch_taken_0x2d1e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2d1e9c) {
            ctx->pc = 0x2D1EA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1E9Cu;
            // 0x2d1ea0: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1EBCu;
            goto label_2d1ebc;
        }
    }
    ctx->pc = 0x2D1EA4u;
    // 0x2d1ea4: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x2d1ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2d1ea8:
    // 0x2d1ea8: 0x54530004  bnel        $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D1EA8u;
    {
        const bool branch_taken_0x2d1ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2d1ea8) {
            ctx->pc = 0x2D1EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D1EA8u;
            // 0x2d1eac: 0x8e100088  lw          $s0, 0x88($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D1EBCu;
            goto label_2d1ebc;
        }
    }
    ctx->pc = 0x2D1EB0u;
    // 0x2d1eb0: 0xc0dcd22  jal         func_373488
    ctx->pc = 0x2D1EB0u;
    SET_GPR_U32(ctx, 31, 0x2D1EB8u);
    ctx->pc = 0x2D1EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D1EB0u;
    // 0x2d1eb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373488u, 0x2D1EB0u, 0x2D1EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D1EB8u;
label_2d1eb8:
    // 0x2d1eb8: 0x8e100088  lw          $s0, 0x88($s0)
    ctx->pc = 0x2d1eb8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_2d1ebc:
    // 0x2d1ebc: 0x1600fff0  bnez        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2D1EBCu;
    {
        const bool branch_taken_0x2d1ebc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d1ebc) {
            ctx->pc = 0x2D1E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d1e80;
        }
    }
    ctx->pc = 0x2D1EC4u;
label_2d1ec4:
    // 0x2d1ec4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d1ec4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d1ec8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d1ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d1ecc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d1eccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d1ed0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d1ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d1ed4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2d1ed4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d1ed8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d1edc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D1EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D1EDCu;
        // 0x2d1ee0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D1EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D1EE4u;
    // 0x2d1ee4: 0x0  nop
    ctx->pc = 0x2d1ee4u;
    // NOP
    ctx->pc = 0x2d1ee8u;
}
