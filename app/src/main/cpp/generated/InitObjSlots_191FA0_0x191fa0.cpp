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

// Function: InitObjSlots_191FA0
// Address: 0x191fa0 - 0x192028
void InitObjSlots_191FA0_0x191fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObjSlots_191FA0_0x191fa0");
#endif

    switch (ctx->pc) {
        case 0x191fc8u: goto label_191fc8;
        case 0x191fd8u: goto label_191fd8;
        case 0x191ff8u: goto label_191ff8;
        default: break;
    }

    ctx->pc = 0x191fa0u;

    // 0x191fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x191fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x191fa4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x191fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x191fa8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x191fa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191fac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x191facu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x191fb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x191fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x191fb4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x191fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x191fb8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x191fb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191fbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x191fc0: 0xc06efae  jal         func_1BBEB8
    ctx->pc = 0x191FC0u;
    SET_GPR_U32(ctx, 31, 0x191FC8u);
    ctx->pc = 0x191FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191FC0u;
    // 0x191fc4: 0x26300650  addiu       $s0, $s1, 0x650 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BBEB8u, 0x191FC0u, 0x191FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191FC8u;
label_191fc8:
    // 0x191fc8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x191fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191fcc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x191fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x191fd0: 0x244241f0  addiu       $v0, $v0, 0x41F0
    ctx->pc = 0x191fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16880));
    // 0x191fd4: 0xae220214  sw          $v0, 0x214($s1)
    ctx->pc = 0x191fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
label_191fd8:
    // 0x191fd8: 0xfa000000  sqc2        $vf0, 0x0($s0)
    ctx->pc = 0x191fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191fdc: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x191fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191fe0: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x191fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191fe4: 0xfa000030  sqc2        $vf0, 0x30($s0)
    ctx->pc = 0x191fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191fe8: 0xfa000040  sqc2        $vf0, 0x40($s0)
    ctx->pc = 0x191fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x191fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191ff0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x191FF0u;
    SET_GPR_U32(ctx, 31, 0x191FF8u);
    ctx->pc = 0x191FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191FF0u;
    // 0x191ff4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x191FF0u, 0x191FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191FF8u;
label_191ff8:
    // 0x191ff8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x191ff8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x191ffc: 0x1653fff6  bne         $s2, $s3, . + 4 + (-0xA << 2)
    ctx->pc = 0x191FFCu;
    {
        const bool branch_taken_0x191ffc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        ctx->pc = 0x192000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191FFCu;
        // 0x192000: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191ffc) {
            ctx->pc = 0x191FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191fd8;
        }
    }
    ctx->pc = 0x192004u;
    // 0x192004: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x192004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192008: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x192008u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19200c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19200cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x192010: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x192010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x192014: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x192014u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x192018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19201c: 0x3e00008  jr          $ra
    ctx->pc = 0x19201Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19201Cu;
        // 0x192020: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19201Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192024u;
    // 0x192024: 0x0  nop
    ctx->pc = 0x192024u;
    // NOP
    ctx->pc = 0x192028u;
}
