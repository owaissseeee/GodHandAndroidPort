#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: startReleaseObj__11cEventActor
// Address: 0x7a9340 - 0x7a9410
void startReleaseObj__11cEventActor_0x7a9340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("startReleaseObj__11cEventActor_0x7a9340");
#endif

    switch (ctx->pc) {
        case 0x7a9378u: goto label_7a9378;
        case 0x7a9398u: goto label_7a9398;
        case 0x7a93acu: goto label_7a93ac;
        case 0x7a93b4u: goto label_7a93b4;
        default: break;
    }

    ctx->pc = 0x7a9340u;

    // 0x7a9340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7a9340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7a9344: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7a9344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7a9348: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7a9348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7a934c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7a934cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7a9350: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x7a9350u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a9354: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7a9354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7a9358: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7a9358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7a935c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7a935cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7a9360: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x7a9360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x7a9364: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x7A9364u;
    {
        const bool branch_taken_0x7a9364 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7A9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9364u;
        // 0x7a9368: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9364) {
            ctx->pc = 0x7A93ECu;
            goto label_7a93ec;
        }
    }
    ctx->pc = 0x7A936Cu;
    // 0x7a936c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x7a936cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7a9370: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x7a9370u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a9374: 0x0  nop
    ctx->pc = 0x7a9374u;
    // NOP
label_7a9378:
    // 0x7a9378: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x7a9378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x7a937c: 0x738021  addu        $s0, $v1, $s3
    ctx->pc = 0x7a937cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x7a9380: 0x96020024  lhu         $v0, 0x24($s0)
    ctx->pc = 0x7a9380u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x7a9384: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7a9384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7a9388: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x7A9388u;
    {
        const bool branch_taken_0x7a9388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9388u;
        // 0x7a938c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a9388) {
            ctx->pc = 0x7A93BCu;
            goto label_7a93bc;
        }
    }
    ctx->pc = 0x7A9390u;
    // 0x7a9390: 0xc1eaa7a  jal         func_7AA9E8
    ctx->pc = 0x7A9390u;
    SET_GPR_U32(ctx, 31, 0x7A9398u);
    ctx->pc = 0x7A9394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A9390u;
    // 0x7a9394: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AA9E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AA9E8u, 0x7A9390u, 0x7A9398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A9398u;
label_7a9398:
    // 0x7a9398: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x7a9398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7a939c: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x7A939Cu;
    {
        const bool branch_taken_0x7a939c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a939c) {
            ctx->pc = 0x7A93A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A939Cu;
            // 0x7a93a0: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A93DCu;
            goto label_7a93dc;
        }
    }
    ctx->pc = 0x7A93A4u;
    // 0x7a93a4: 0xc0539a4  jal         func_14E690
    ctx->pc = 0x7A93A4u;
    SET_GPR_U32(ctx, 31, 0x7A93ACu);
    ctx->pc = 0x7A93A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A93A4u;
    // 0x7a93a8: 0x8e050040  lw          $a1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E690u, 0x7A93A4u, 0x7A93ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A93ACu;
label_7a93ac:
    // 0x7a93ac: 0xc0c49c2  jal         func_312708
    ctx->pc = 0x7A93ACu;
    SET_GPR_U32(ctx, 31, 0x7A93B4u);
    ctx->pc = 0x7A93B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A93ACu;
    // 0x7a93b0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312708u, 0x7A93ACu, 0x7A93B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A93B4u;
label_7a93b4:
    // 0x7a93b4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7A93B4u;
    {
        const bool branch_taken_0x7a93b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A93B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A93B4u;
        // 0x7a93b8: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a93b4) {
            ctx->pc = 0x7A93DCu;
            goto label_7a93dc;
        }
    }
    ctx->pc = 0x7A93BCu;
label_7a93bc:
    // 0x7a93bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x7a93bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7a93c0: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x7A93C0u;
    {
        const bool branch_taken_0x7a93c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7a93c0) {
            ctx->pc = 0x7A93C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7A93C0u;
            // 0x7a93c4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7A93DCu;
            goto label_7a93dc;
        }
    }
    ctx->pc = 0x7A93C8u;
    // 0x7a93c8: 0xa06002f7  sb          $zero, 0x2F7($v1)
    ctx->pc = 0x7a93c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x7a93cc: 0xa07402f4  sb          $s4, 0x2F4($v1)
    ctx->pc = 0x7a93ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 756), (uint8_t)GPR_U32(ctx, 20));
    // 0x7a93d0: 0xa06002f5  sb          $zero, 0x2F5($v1)
    ctx->pc = 0x7a93d0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x7a93d4: 0xa06002f6  sb          $zero, 0x2F6($v1)
    ctx->pc = 0x7a93d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x7a93d8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x7a93d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_7a93dc:
    // 0x7a93dc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x7a93dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x7a93e0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x7a93e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7a93e4: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x7A93E4u;
    {
        const bool branch_taken_0x7a93e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7A93E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A93E4u;
        // 0x7a93e8: 0x26730048  addiu       $s3, $s3, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a93e4) {
            ctx->pc = 0x7A9378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7a9378;
        }
    }
    ctx->pc = 0x7A93ECu;
label_7a93ec:
    // 0x7a93ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7a93ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7a93f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7a93f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7a93f4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7a93f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7a93f8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7a93f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7a93fc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7a93fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7a9400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7a9400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7a9404: 0x3e00008  jr          $ra
    ctx->pc = 0x7A9404u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A9408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A9404u;
        // 0x7a9408: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A9404u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A940Cu;
    // 0x7a940c: 0x0  nop
    ctx->pc = 0x7a940cu;
    // NOP
    ctx->pc = 0x7a9410u;
}
} // namespace gh_event
