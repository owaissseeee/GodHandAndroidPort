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

// Function: func_0034E2C8
// Address: 0x34e2c8 - 0x34e3a0
void func_0034E2C8_0x34e2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034E2C8_0x34e2c8");
#endif

    switch (ctx->pc) {
        case 0x34e2f0u: goto label_34e2f0;
        case 0x34e320u: goto label_34e320;
        case 0x34e34cu: goto label_34e34c;
        case 0x34e370u: goto label_34e370;
        case 0x34e384u: goto label_34e384;
        default: break;
    }

    ctx->pc = 0x34e2c8u;

    // 0x34e2c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34e2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34e2cc: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34e2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x34e2d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34e2d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e2d4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x34e2d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x34e2d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34e2d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e2dc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x34e2dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x34e2e0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x34e2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x34e2e4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x34E2E4u;
    {
        const bool branch_taken_0x34e2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E2E4u;
        // 0x34e2e8: 0x8e120028  lw          $s2, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e2e4) {
            ctx->pc = 0x34E32Cu;
            goto label_34e32c;
        }
    }
    ctx->pc = 0x34E2ECu;
    // 0x34e2ec: 0x0  nop
    ctx->pc = 0x34e2ecu;
    // NOP
label_34e2f0:
    // 0x34e2f0: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x34e2f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34e2f4: 0xde060990  ld          $a2, 0x990($s0)
    ctx->pc = 0x34e2f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 2448)));
    // 0x34e2f8: 0xde020998  ld          $v0, 0x998($s0)
    ctx->pc = 0x34e2f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 2456)));
    // 0x34e2fc: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x34e2fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e300: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x34e300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34e304: 0xe6302d  daddu       $a2, $a3, $a2
    ctx->pc = 0x34e304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 6));
    // 0x34e308: 0xfe060990  sd          $a2, 0x990($s0)
    ctx->pc = 0x34e308u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2448), GPR_U64(ctx, 6));
    // 0x34e30c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x34e30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x34e310: 0x10e0001a  beqz        $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x34E310u;
    {
        const bool branch_taken_0x34e310 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E310u;
        // 0x34e314: 0xfe020998  sd          $v0, 0x998($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 2456), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e310) {
            ctx->pc = 0x34E37Cu;
            goto label_34e37c;
        }
    }
    ctx->pc = 0x34E318u;
    // 0x34e318: 0xc0d3918  jal         func_34E460
    ctx->pc = 0x34E318u;
    SET_GPR_U32(ctx, 31, 0x34E320u);
    ctx->pc = 0x34E460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E460u, 0x34E318u, 0x34E320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E320u;
label_34e320:
    // 0x34e320: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34e320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e324: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x34E324u;
    {
        const bool branch_taken_0x34e324 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x34e324) {
            ctx->pc = 0x34E37Cu;
            goto label_34e37c;
        }
    }
    ctx->pc = 0x34E32Cu;
label_34e32c:
    // 0x34e32c: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x34e32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x34e330: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x34E330u;
    {
        const bool branch_taken_0x34e330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E330u;
        // 0x34e334: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e330) {
            ctx->pc = 0x34E37Cu;
            goto label_34e37c;
        }
    }
    ctx->pc = 0x34E338u;
    // 0x34e338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e33c: 0x27a80008  addiu       $t0, $sp, 0x8
    ctx->pc = 0x34e33cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x34e340: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x34e340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e344: 0xc0d38e8  jal         func_34E3A0
    ctx->pc = 0x34E344u;
    SET_GPR_U32(ctx, 31, 0x34E34Cu);
    ctx->pc = 0x34E348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E344u;
    // 0x34e348: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E3A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E3A0u, 0x34E344u, 0x34E34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E34Cu;
label_34e34c:
    // 0x34e34c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34e34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e350: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34e350u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e354: 0x27a7000c  addiu       $a3, $sp, 0xC
    ctx->pc = 0x34e354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x34e358: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x34E358u;
    {
        const bool branch_taken_0x34e358 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x34E35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E358u;
        // 0x34e35c: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e358) {
            ctx->pc = 0x34E37Cu;
            goto label_34e37c;
        }
    }
    ctx->pc = 0x34E360u;
    // 0x34e360: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x34e360u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34e364: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x34e364u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x34e368: 0xc0d392c  jal         func_34E4B0
    ctx->pc = 0x34E368u;
    SET_GPR_U32(ctx, 31, 0x34E370u);
    ctx->pc = 0x34E36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E368u;
    // 0x34e36c: 0x8fa90008  lw          $t1, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34E4B0u, 0x34E368u, 0x34E370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E370u;
label_34e370:
    // 0x34e370: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34e370u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e374: 0x1220ffde  beqz        $s1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x34E374u;
    {
        const bool branch_taken_0x34e374 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x34E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E374u;
        // 0x34e378: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34e374) {
            ctx->pc = 0x34E2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34e2f0;
        }
    }
    ctx->pc = 0x34E37Cu;
label_34e37c:
    // 0x34e37c: 0xc0d3f38  jal         func_34FCE0
    ctx->pc = 0x34E37Cu;
    SET_GPR_U32(ctx, 31, 0x34E384u);
    ctx->pc = 0x34E380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34E37Cu;
    // 0x34e380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34FCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34FCE0u, 0x34E37Cu, 0x34E384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34E384u;
label_34e384:
    // 0x34e384: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x34e384u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34e388: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x34e388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34e38c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x34e38cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34e390: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x34e390u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34e394: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x34e394u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34e398: 0x3e00008  jr          $ra
    ctx->pc = 0x34E398u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34E398u;
        // 0x34e39c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34E398u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34E3A0u;
}
