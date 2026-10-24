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

// Function: InitObjSlots_19F0A8
// Address: 0x19f0a8 - 0x19f130
void InitObjSlots_19F0A8_0x19f0a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlots_19F0A8_0x19f0a8");
#endif

    switch (ctx->pc) {
        case 0x19f0d0u: goto label_19f0d0;
        case 0x19f0e0u: goto label_19f0e0;
        case 0x19f100u: goto label_19f100;
        default: break;
    }

    ctx->pc = 0x19f0a8u;

    // 0x19f0a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f0a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19f0ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19f0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19f0b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19f0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19f0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19f0b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19f0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19f0bc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19f0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19f0c0: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x19f0c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x19f0c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19f0c8: 0xc071f66  jal         func_1C7D98
    ctx->pc = 0x19F0C8u;
    SET_GPR_U32(ctx, 31, 0x19F0D0u);
    ctx->pc = 0x19F0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0C8u;
    // 0x19f0cc: 0x26300660  addiu       $s0, $s1, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D98u, 0x19F0C8u, 0x19F0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F0D0u;
label_19f0d0:
    // 0x19f0d0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19f0d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19f0d4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19f0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19f0d8: 0x244267f8  addiu       $v0, $v0, 0x67F8
    ctx->pc = 0x19f0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26616));
    // 0x19f0dc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19f0e0:
    // 0x19f0e0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19f0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19f0e4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19f0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19f0e8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19f0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19f0ec: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19f0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19f0f0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19f0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19f0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f0f8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19F0F8u;
    SET_GPR_U32(ctx, 31, 0x19F100u);
    ctx->pc = 0x19F0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F0F8u;
    // 0x19f0fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19F0F8u, 0x19F100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F100u;
label_19f100:
    // 0x19f100: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19f100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19f104: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19F104u;
    {
        const bool branch_taken_0x19f104 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F104u;
        // 0x19f108: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f104) {
            ctx->pc = 0x19F0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19f0e0;
        }
    }
    ctx->pc = 0x19F10Cu;
    // 0x19f10c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19f10cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19f110: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19f110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19f114: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19f114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19f118: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19f11c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19f11cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19f120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19f124: 0x3e00008  jr          $ra
    ctx->pc = 0x19F124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F124u;
        // 0x19f128: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F12Cu;
    // 0x19f12c: 0x0  nop
    ctx->pc = 0x19f12cu;
    // NOP
    ctx->pc = 0x19f130u;
}
