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

// Function: InitVu0ObjBlock_19DC48
// Address: 0x19dc48 - 0x19dcd0
void InitVu0ObjBlock_19DC48_0x19dc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitVu0ObjBlock_19DC48_0x19dc48");
#endif

    switch (ctx->pc) {
        case 0x19dc70u: goto label_19dc70;
        case 0x19dc80u: goto label_19dc80;
        case 0x19dca0u: goto label_19dca0;
        default: break;
    }

    ctx->pc = 0x19dc48u;

    // 0x19dc48: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19dc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x19dc4c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19dc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x19dc50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19dc50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19dc54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x19dc58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19dc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19dc5c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19dc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19dc60: 0x24120005  addiu       $s2, $zero, 0x5
    ctx->pc = 0x19dc60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19dc64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19dc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19dc68: 0xc0709fa  jal         func_1C27E8
    ctx->pc = 0x19DC68u;
    SET_GPR_U32(ctx, 31, 0x19DC70u);
    ctx->pc = 0x19DC6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC68u;
    // 0x19dc6c: 0x26300620  addiu       $s0, $s1, 0x620 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C27E8u, 0x19DC68u, 0x19DC70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DC70u;
label_19dc70:
    // 0x19dc70: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x19dc70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19dc74: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19dc74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19dc78: 0x24426098  addiu       $v0, $v0, 0x6098
    ctx->pc = 0x19dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24728));
    // 0x19dc7c: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x19dc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_19dc80:
    // 0x19dc80: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x19dc80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19dc84: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x19dc84u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19dc88: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x19dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19dc8c: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x19dc8cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19dc90: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x19dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x19dc94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19dc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dc98: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x19DC98u;
    SET_GPR_U32(ctx, 31, 0x19DCA0u);
    ctx->pc = 0x19DC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DC98u;
    // 0x19dc9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x19DC98u, 0x19DCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DCA0u;
label_19dca0:
    // 0x19dca0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x19dca0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x19dca4: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x19DCA4u;
    {
        const bool branch_taken_0x19dca4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x19DCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DCA4u;
        // 0x19dca8: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dca4) {
            ctx->pc = 0x19DC80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19dc80;
        }
    }
    ctx->pc = 0x19DCACu;
    // 0x19dcac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19dcacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19dcb0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19dcb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19dcb4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19dcb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19dcb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19dcb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19dcbc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19dcbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19dcc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19dcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19dcc4: 0x3e00008  jr          $ra
    ctx->pc = 0x19DCC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DCC4u;
        // 0x19dcc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19DCC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19DCCCu;
    // 0x19dccc: 0x0  nop
    ctx->pc = 0x19dcccu;
    // NOP
    ctx->pc = 0x19dcd0u;
}
