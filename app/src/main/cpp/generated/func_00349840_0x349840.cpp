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

// Function: func_00349840
// Address: 0x349840 - 0x3498e8
void func_00349840_0x349840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349840_0x349840");
#endif

    switch (ctx->pc) {
        case 0x34986cu: goto label_34986c;
        case 0x349878u: goto label_349878;
        case 0x34988cu: goto label_34988c;
        case 0x349898u: goto label_349898;
        case 0x3498a8u: goto label_3498a8;
        default: break;
    }

    ctx->pc = 0x349840u;

    // 0x349840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x349844: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x349844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x349848: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x349848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x34984c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x349850: 0x8c52c7dc  lw          $s2, -0x3824($v0)
    ctx->pc = 0x349850u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3EC7DCu));
    // 0x349854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x349854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x349858: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x349858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x34985c: 0x1643001c  bne         $s2, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x34985Cu;
    {
        const bool branch_taken_0x34985c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x349860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34985Cu;
        // 0x349860: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34985c) {
            ctx->pc = 0x3498D0u;
            goto label_3498d0;
        }
    }
    ctx->pc = 0x349864u;
    // 0x349864: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x349864u;
    SET_GPR_U32(ctx, 31, 0x34986Cu);
    ctx->pc = 0x3452B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3452B0u, 0x349864u, 0x34986Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34986Cu;
label_34986c:
    // 0x34986c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x34986cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349870: 0xc0d22f2  jal         func_348BC8
    ctx->pc = 0x349870u;
    SET_GPR_U32(ctx, 31, 0x349878u);
    ctx->pc = 0x349874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349870u;
    // 0x349874: 0x26240058  addiu       $a0, $s1, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BC8u, 0x349870u, 0x349878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349878u;
label_349878:
    // 0x349878: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x349878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34987c: 0x56120015  bnel        $s0, $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x34987Cu;
    {
        const bool branch_taken_0x34987c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x34987c) {
            ctx->pc = 0x349880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34987Cu;
            // 0x349880: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3498D4u;
            goto label_3498d4;
        }
    }
    ctx->pc = 0x349884u;
    // 0x349884: 0xc0d2608  jal         func_349820
    ctx->pc = 0x349884u;
    SET_GPR_U32(ctx, 31, 0x34988Cu);
    ctx->pc = 0x349820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349820u, 0x349884u, 0x34988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34988Cu;
label_34988c:
    // 0x34988c: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34988Cu;
    {
        const bool branch_taken_0x34988c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x349890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34988Cu;
        // 0x349890: 0x2630006c  addiu       $s0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34988c) {
            ctx->pc = 0x3498B4u;
            goto label_3498b4;
        }
    }
    ctx->pc = 0x349894u;
    // 0x349894: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x349894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_349898:
    // 0x349898: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x349898u;
    {
        const bool branch_taken_0x349898 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x349898) {
            ctx->pc = 0x34989Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349898u;
            // 0x34989c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3498ACu;
            goto label_3498ac;
        }
    }
    ctx->pc = 0x3498A0u;
    // 0x3498a0: 0xc0d1fc8  jal         func_347F20
    ctx->pc = 0x3498A0u;
    SET_GPR_U32(ctx, 31, 0x3498A8u);
    ctx->pc = 0x3498A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3498A0u;
    // 0x3498a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347F20u, 0x3498A0u, 0x3498A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3498A8u;
label_3498a8:
    // 0x3498a8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3498a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3498ac:
    // 0x3498ac: 0x621fffa  bgez        $s1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3498ACu;
    {
        const bool branch_taken_0x3498ac = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x3498B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3498ACu;
        // 0x3498b0: 0x26100304  addiu       $s0, $s0, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3498ac) {
            ctx->pc = 0x349898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_349898;
        }
    }
    ctx->pc = 0x3498B4u;
label_3498b4:
    // 0x3498b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3498b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3498b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3498b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3498bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3498bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3498c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3498c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3498c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3498c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3498c8: 0x80d25bc  j           func_3496F0
    ctx->pc = 0x3498C8u;
    ctx->pc = 0x3498CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3498C8u;
    // 0x3498cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3496F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3496F0u, 0x3498C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3498D0u;
label_3498d0:
    // 0x3498d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3498d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3498d4:
    // 0x3498d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3498d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3498d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3498d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3498dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3498dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3498e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3498E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3498E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3498E0u;
        // 0x3498e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3498E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3498E8u;
}
