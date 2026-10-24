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

// Function: func_003A92E0
// Address: 0x3a92e0 - 0x3a93a8
void func_003A92E0_0x3a92e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A92E0_0x3a92e0");
#endif

    switch (ctx->pc) {
        case 0x3a9320u: goto label_3a9320;
        case 0x3a9338u: goto label_3a9338;
        case 0x3a9344u: goto label_3a9344;
        case 0x3a9374u: goto label_3a9374;
        case 0x3a9380u: goto label_3a9380;
        default: break;
    }

    ctx->pc = 0x3a92e0u;

    // 0x3a92e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3a92e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3a92e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3a92e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3a92e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a92e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3a92ec: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3a92ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a92f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3a92f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3a92f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a92f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a92f8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3a92f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3a92fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3a92fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9300: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3a9300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3a9304: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A9304u;
    {
        const bool branch_taken_0x3a9304 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9304u;
        // 0x3a9308: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9304) {
            ctx->pc = 0x3A9314u;
            goto label_3a9314;
        }
    }
    ctx->pc = 0x3A930Cu;
    // 0x3a930c: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3A930Cu;
    {
        const bool branch_taken_0x3a930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A930Cu;
        // 0x3a9310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a930c) {
            ctx->pc = 0x3A9384u;
            goto label_3a9384;
        }
    }
    ctx->pc = 0x3A9314u;
label_3a9314:
    // 0x3a9314: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x3a9314u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x3a9318: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A9318u;
    {
        const bool branch_taken_0x3a9318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A931Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9318u;
        // 0x3a931c: 0x3694ffff  ori         $s4, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9318) {
            ctx->pc = 0x3A9324u;
            goto label_3a9324;
        }
    }
    ctx->pc = 0x3A9320u;
label_3a9320:
    // 0x3a9320: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a9320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3a9324:
    // 0x3a9324: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a9324u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3a9328: 0x12340010  beq         $s1, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A9328u;
    {
        const bool branch_taken_0x3a9328 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        if (branch_taken_0x3a9328) {
            ctx->pc = 0x3A936Cu;
            goto label_3a936c;
        }
    }
    ctx->pc = 0x3A9330u;
    // 0x3a9330: 0xc0eb43e  jal         func_3AD0F8
    ctx->pc = 0x3A9330u;
    SET_GPR_U32(ctx, 31, 0x3A9338u);
    ctx->pc = 0x3A9334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9330u;
    // 0x3a9334: 0x82440000  lb          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0F8u, 0x3A9330u, 0x3A9338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9338u;
label_3a9338:
    // 0x3a9338: 0x82640000  lb          $a0, 0x0($s3)
    ctx->pc = 0x3a9338u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a933c: 0xc0eb43e  jal         func_3AD0F8
    ctx->pc = 0x3A933Cu;
    SET_GPR_U32(ctx, 31, 0x3A9344u);
    ctx->pc = 0x3A9340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A933Cu;
    // 0x3a9340: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0F8u, 0x3A933Cu, 0x3A9344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9344u;
label_3a9344:
    // 0x3a9344: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A9344u;
    {
        const bool branch_taken_0x3a9344 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a9344) {
            ctx->pc = 0x3A936Cu;
            goto label_3a936c;
        }
    }
    ctx->pc = 0x3A934Cu;
    // 0x3a934c: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A934Cu;
    {
        const bool branch_taken_0x3a934c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a934c) {
            ctx->pc = 0x3A936Cu;
            goto label_3a936c;
        }
    }
    ctx->pc = 0x3A9354u;
    // 0x3a9354: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x3a9354u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3a9358: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A9358u;
    {
        const bool branch_taken_0x3a9358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9358) {
            ctx->pc = 0x3A936Cu;
            goto label_3a936c;
        }
    }
    ctx->pc = 0x3A9360u;
    // 0x3a9360: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x3a9360u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a9364: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3A9364u;
    {
        const bool branch_taken_0x3a9364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9364) {
            ctx->pc = 0x3A9368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9364u;
            // 0x3a9368: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9320;
        }
    }
    ctx->pc = 0x3A936Cu;
label_3a936c:
    // 0x3a936c: 0xc0eb43e  jal         func_3AD0F8
    ctx->pc = 0x3A936Cu;
    SET_GPR_U32(ctx, 31, 0x3A9374u);
    ctx->pc = 0x3A9370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A936Cu;
    // 0x3a9370: 0x92440000  lbu         $a0, 0x0($s2) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0F8u, 0x3A936Cu, 0x3A9374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9374u;
label_3a9374:
    // 0x3a9374: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x3a9374u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3a9378: 0xc0eb43e  jal         func_3AD0F8
    ctx->pc = 0x3A9378u;
    SET_GPR_U32(ctx, 31, 0x3A9380u);
    ctx->pc = 0x3A937Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9378u;
    // 0x3a937c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD0F8u, 0x3A9378u, 0x3A9380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9380u;
label_3a9380:
    // 0x3a9380: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3a9380u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3a9384:
    // 0x3a9384: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3a9384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a9388: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3a9388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a938c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a938cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a9390: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3a9390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a9394: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3a9394u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a9398: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a9398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a939c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A939Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A93A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A939Cu;
        // 0x3a93a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A939Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A93A4u;
    // 0x3a93a4: 0x0  nop
    ctx->pc = 0x3a93a4u;
    // NOP
    ctx->pc = 0x3a93a8u;
}
