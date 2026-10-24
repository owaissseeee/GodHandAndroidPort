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

// Function: InitObjSlots_192C38
// Address: 0x192c38 - 0x192cc0
void InitObjSlots_192C38_0x192c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlots_192C38_0x192c38");
#endif

    switch (ctx->pc) {
        case 0x192c60u: goto label_192c60;
        case 0x192c70u: goto label_192c70;
        case 0x192c90u: goto label_192c90;
        default: break;
    }

    ctx->pc = 0x192c38u;

    // 0x192c38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x192c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x192c3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x192c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x192c40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x192c40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c44: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x192c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x192c48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x192c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x192c4c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x192c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x192c50: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x192c50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x192c54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x192c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192c58: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x192C58u;
    SET_GPR_U32(ctx, 31, 0x192C60u);
    ctx->pc = 0x192C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C58u;
    // 0x192c5c: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x192C58u, 0x192C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C60u;
label_192c60:
    // 0x192c60: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x192c60u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x192c64: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x192c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x192c68: 0x244244d8  addiu       $v0, $v0, 0x44D8
    ctx->pc = 0x192c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17624));
    // 0x192c6c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x192c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_192c70:
    // 0x192c70: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x192c70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x192c74: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x192c74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x192c78: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x192c78u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x192c7c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x192c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x192c80: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x192c80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x192c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x192c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192c88: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x192C88u;
    SET_GPR_U32(ctx, 31, 0x192C90u);
    ctx->pc = 0x192C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x192C88u;
    // 0x192c8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x192C88u, 0x192C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192C90u;
label_192c90:
    // 0x192c90: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x192c90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x192c94: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x192C94u;
    {
        const bool branch_taken_0x192c94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x192C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192C94u;
        // 0x192c98: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192c94) {
            ctx->pc = 0x192C70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_192c70;
        }
    }
    ctx->pc = 0x192C9Cu;
    // 0x192c9c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x192c9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192ca0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x192ca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x192ca4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x192ca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192ca8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192ca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192cac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x192cacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192cb4: 0x3e00008  jr          $ra
    ctx->pc = 0x192CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x192CB4u;
        // 0x192cb8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192CB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192CBCu;
    // 0x192cbc: 0x0  nop
    ctx->pc = 0x192cbcu;
    // NOP
    ctx->pc = 0x192cc0u;
}
