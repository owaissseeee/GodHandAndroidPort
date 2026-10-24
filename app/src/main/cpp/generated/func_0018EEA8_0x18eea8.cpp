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

// Function: func_0018EEA8
// Address: 0x18eea8 - 0x18ef30
void func_0018EEA8_0x18eea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018EEA8_0x18eea8");
#endif

    switch (ctx->pc) {
        case 0x18eed0u: goto label_18eed0;
        case 0x18eee0u: goto label_18eee0;
        case 0x18ef00u: goto label_18ef00;
        default: break;
    }

    ctx->pc = 0x18eea8u;

    // 0x18eea8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x18eea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x18eeac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x18eeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x18eeb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18eeb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eeb4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x18eeb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x18eeb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18eeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18eebc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x18eebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x18eec0: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x18eec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18eec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18eec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18eec8: 0xc06efae  jal         func_1BBEB8
    ctx->pc = 0x18EEC8u;
    SET_GPR_U32(ctx, 31, 0x18EED0u);
    ctx->pc = 0x18EECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EEC8u;
    // 0x18eecc: 0x26300650  addiu       $s0, $s1, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBEB8u, 0x18EEC8u, 0x18EED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EED0u;
label_18eed0:
    // 0x18eed0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x18eed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18eed4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18eed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18eed8: 0x24423d40  addiu       $v0, $v0, 0x3D40
    ctx->pc = 0x18eed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15680));
    // 0x18eedc: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x18eedcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_18eee0:
    // 0x18eee0: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x18eee0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18eee4: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x18eee4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18eee8: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x18eee8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18eeec: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x18eeecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18eef0: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x18eef0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x18eef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18eef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18eef8: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x18EEF8u;
    SET_GPR_U32(ctx, 31, 0x18EF00u);
    ctx->pc = 0x18EEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18EEF8u;
    // 0x18eefc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x18EEF8u, 0x18EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18EF00u;
label_18ef00:
    // 0x18ef00: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x18ef00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x18ef04: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x18EF04u;
    {
        const bool branch_taken_0x18ef04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x18EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF04u;
        // 0x18ef08: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ef04) {
            ctx->pc = 0x18EEE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18eee0;
        }
    }
    ctx->pc = 0x18EF0Cu;
    // 0x18ef0c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x18ef0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ef10: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x18ef10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18ef14: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18ef14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18ef18: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18ef18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ef1c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x18ef1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ef20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ef20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ef24: 0x3e00008  jr          $ra
    ctx->pc = 0x18EF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18EF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18EF24u;
        // 0x18ef28: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18EF24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18EF2Cu;
    // 0x18ef2c: 0x0  nop
    ctx->pc = 0x18ef2cu;
    // NOP
    ctx->pc = 0x18ef30u;
}
