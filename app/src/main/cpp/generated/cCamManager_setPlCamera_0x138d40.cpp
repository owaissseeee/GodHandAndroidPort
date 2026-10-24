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

// Function: cCamManager_setPlCamera
// Address: 0x138d40 - 0x138db8
void cCamManager_setPlCamera_0x138d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCamManager_setPlCamera_0x138d40");
#endif

    switch (ctx->pc) {
        case 0x138d88u: goto label_138d88;
        default: break;
    }

    ctx->pc = 0x138d40u;

    // 0x138d40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x138d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x138d44: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x138d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x138d48: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x138d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x138d4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x138d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138d50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x138d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x138d54: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x138d54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138d58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138d5c: 0x8e031028  lw          $v1, 0x1028($s0)
    ctx->pc = 0x138d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4136)));
    // 0x138d60: 0x1072000f  beq         $v1, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x138D60u;
    {
        const bool branch_taken_0x138d60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x138D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D60u;
        // 0x138d64: 0x30a700ff  andi        $a3, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d60) {
            ctx->pc = 0x138DA0u;
            goto label_138da0;
        }
    }
    ctx->pc = 0x138D68u;
    // 0x138d68: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x138d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x138d6c: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x138D6Cu;
    {
        const bool branch_taken_0x138d6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x138d6c) {
            ctx->pc = 0x138D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138D6Cu;
            // 0x138d70: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x138DA4u;
            goto label_138da4;
        }
    }
    ctx->pc = 0x138D74u;
    // 0x138d74: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x138D74u;
    {
        const bool branch_taken_0x138d74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x138D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138D74u;
        // 0x138d78: 0x3c11005d  lui         $s1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138d74) {
            ctx->pc = 0x138D88u;
            goto label_138d88;
        }
    }
    ctx->pc = 0x138D7Cu;
    // 0x138d7c: 0x8e26aff0  lw          $a2, -0x5010($s1)
    ctx->pc = 0x138d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946800)));
    // 0x138d80: 0xc04e32a  jal         func_138CA8
    ctx->pc = 0x138D80u;
    SET_GPR_U32(ctx, 31, 0x138D88u);
    ctx->pc = 0x138D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138D80u;
    // 0x138d84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138CA8u, 0x138D80u, 0x138D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138D88u;
label_138d88:
    // 0x138d88: 0x8e021028  lw          $v0, 0x1028($s0)
    ctx->pc = 0x138d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4136)));
    // 0x138d8c: 0xae02102c  sw          $v0, 0x102C($s0)
    ctx->pc = 0x138d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4140), GPR_U32(ctx, 2));
    // 0x138d90: 0x8e23aff0  lw          $v1, -0x5010($s1)
    ctx->pc = 0x138d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946800)));
    // 0x138d94: 0xae030ff0  sw          $v1, 0xFF0($s0)
    ctx->pc = 0x138d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4080), GPR_U32(ctx, 3));
    // 0x138d98: 0xae30aff0  sw          $s0, -0x5010($s1)
    ctx->pc = 0x138d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294946800), GPR_U32(ctx, 16));
    // 0x138d9c: 0xae121028  sw          $s2, 0x1028($s0)
    ctx->pc = 0x138d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4136), GPR_U32(ctx, 18));
label_138da0:
    // 0x138da0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x138da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_138da4:
    // 0x138da4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x138da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138da8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x138da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138dac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138db0: 0x3e00008  jr          $ra
    ctx->pc = 0x138DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138DB0u;
        // 0x138db4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138DB8u;
}
