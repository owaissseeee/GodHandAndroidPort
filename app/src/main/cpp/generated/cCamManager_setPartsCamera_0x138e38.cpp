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

// Function: cCamManager_setPartsCamera
// Address: 0x138e38 - 0x138eb8
void cCamManager_setPartsCamera_0x138e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCamManager_setPartsCamera_0x138e38");
#endif

    switch (ctx->pc) {
        case 0x138e84u: goto label_138e84;
        default: break;
    }

    ctx->pc = 0x138e38u;

    // 0x138e38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x138e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x138e3c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x138e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x138e40: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x138e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x138e44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138e48: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x138e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x138e4c: 0x24130040  addiu       $s3, $zero, 0x40
    ctx->pc = 0x138e4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x138e50: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x138e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x138e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138e58: 0x8e031028  lw          $v1, 0x1028($s0)
    ctx->pc = 0x138e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4136)));
    // 0x138e5c: 0x1073000f  beq         $v1, $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x138E5Cu;
    {
        const bool branch_taken_0x138e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x138E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E5Cu;
        // 0x138e60: 0x30a700ff  andi        $a3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e5c) {
            ctx->pc = 0x138E9Cu;
            goto label_138e9c;
        }
    }
    ctx->pc = 0x138E64u;
    // 0x138e64: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x138e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x138e68: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x138E68u;
    {
        const bool branch_taken_0x138e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x138E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E68u;
        // 0x138e6c: 0x26120920  addiu       $s2, $s0, 0x920 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e68) {
            ctx->pc = 0x138E9Cu;
            goto label_138e9c;
        }
    }
    ctx->pc = 0x138E70u;
    // 0x138e70: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x138E70u;
    {
        const bool branch_taken_0x138e70 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x138E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138E70u;
        // 0x138e74: 0x3c11005d  lui         $s1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138e70) {
            ctx->pc = 0x138E84u;
            goto label_138e84;
        }
    }
    ctx->pc = 0x138E78u;
    // 0x138e78: 0x8e26aff0  lw          $a2, -0x5010($s1)
    ctx->pc = 0x138e78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946800)));
    // 0x138e7c: 0xc04e32a  jal         func_138CA8
    ctx->pc = 0x138E7Cu;
    SET_GPR_U32(ctx, 31, 0x138E84u);
    ctx->pc = 0x138E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138E7Cu;
    // 0x138e80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138CA8u, 0x138E7Cu, 0x138E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138E84u;
label_138e84:
    // 0x138e84: 0x8e021028  lw          $v0, 0x1028($s0)
    ctx->pc = 0x138e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4136)));
    // 0x138e88: 0xae02102c  sw          $v0, 0x102C($s0)
    ctx->pc = 0x138e88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4140), GPR_U32(ctx, 2));
    // 0x138e8c: 0x8e23aff0  lw          $v1, -0x5010($s1)
    ctx->pc = 0x138e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946800)));
    // 0x138e90: 0xae030ff0  sw          $v1, 0xFF0($s0)
    ctx->pc = 0x138e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4080), GPR_U32(ctx, 3));
    // 0x138e94: 0xae32aff0  sw          $s2, -0x5010($s1)
    ctx->pc = 0x138e94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294946800), GPR_U32(ctx, 18));
    // 0x138e98: 0xae131028  sw          $s3, 0x1028($s0)
    ctx->pc = 0x138e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4136), GPR_U32(ctx, 19));
label_138e9c:
    // 0x138e9c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x138e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x138ea0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x138ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138ea4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x138ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138ea8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x138ea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x138EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138EB0u;
        // 0x138eb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138EB8u;
}
