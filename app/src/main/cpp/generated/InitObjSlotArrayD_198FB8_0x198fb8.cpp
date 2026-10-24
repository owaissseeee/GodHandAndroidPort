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

// Function: InitObjSlotArrayD_198FB8
// Address: 0x198fb8 - 0x199040
void InitObjSlotArrayD_198FB8_0x198fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlotArrayD_198FB8_0x198fb8");
#endif

    switch (ctx->pc) {
        case 0x198fe0u: goto label_198fe0;
        case 0x198ff0u: goto label_198ff0;
        case 0x199010u: goto label_199010;
        default: break;
    }

    ctx->pc = 0x198fb8u;

    // 0x198fb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x198fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x198fbc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x198fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x198fc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x198fc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198fc4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x198fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x198fc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x198fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x198fcc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x198fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x198fd0: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x198fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x198fd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198fd8: 0xc071f66  jal         func_1C7D98
    ctx->pc = 0x198FD8u;
    SET_GPR_U32(ctx, 31, 0x198FE0u);
    ctx->pc = 0x198FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x198FD8u;
    // 0x198fdc: 0x26300660  addiu       $s0, $s1, 0x660 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7D98u, 0x198FD8u, 0x198FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x198FE0u;
label_198fe0:
    // 0x198fe0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x198fe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x198fe4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x198fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x198fe8: 0x244250f0  addiu       $v0, $v0, 0x50F0
    ctx->pc = 0x198fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20720));
    // 0x198fec: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x198fecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_198ff0:
    // 0x198ff0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x198ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x198ff4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x198ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x198ff8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x198ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x198ffc: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x198ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x199000: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x199000u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x199004: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199008: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x199008u;
    SET_GPR_U32(ctx, 31, 0x199010u);
    ctx->pc = 0x19900Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199008u;
    // 0x19900c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x199008u, 0x199010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199010u;
label_199010:
    // 0x199010: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x199010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x199014: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x199014u;
    {
        const bool branch_taken_0x199014 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x199018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199014u;
        // 0x199018: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199014) {
            ctx->pc = 0x198FF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_198ff0;
        }
    }
    ctx->pc = 0x19901Cu;
    // 0x19901c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19901cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199020: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x199020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x199024: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x199024u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x199028: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x199028u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19902c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19902cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199034: 0x3e00008  jr          $ra
    ctx->pc = 0x199034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199034u;
        // 0x199038: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19903Cu;
    // 0x19903c: 0x0  nop
    ctx->pc = 0x19903cu;
    // NOP
    ctx->pc = 0x199040u;
}
