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

// Function: cSndBgmNode_Update
// Address: 0x2cd310 - 0x2cd398
void cSndBgmNode_Update_0x2cd310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndBgmNode_Update_0x2cd310");
#endif

    switch (ctx->pc) {
        case 0x2cd334u: goto label_2cd334;
        case 0x2cd354u: goto label_2cd354;
        case 0x2cd368u: goto label_2cd368;
        case 0x2cd378u: goto label_2cd378;
        case 0x2cd388u: goto label_2cd388;
        default: break;
    }

    ctx->pc = 0x2cd310u;

    // 0x2cd310: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cd314: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cd314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cd318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd31c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd320: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x2cd320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x2cd324: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2CD324u;
    {
        const bool branch_taken_0x2cd324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd324) {
            ctx->pc = 0x2CD328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD324u;
            // 0x2cd328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD360u;
            goto label_2cd360;
        }
    }
    ctx->pc = 0x2CD32Cu;
    // 0x2cd32c: 0xc0b34e6  jal         func_2CD398
    ctx->pc = 0x2CD32Cu;
    SET_GPR_U32(ctx, 31, 0x2CD334u);
    ctx->pc = 0x2CD398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD398u, 0x2CD32Cu, 0x2CD334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD334u;
label_2cd334:
    // 0x2cd334: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CD334u;
    {
        const bool branch_taken_0x2cd334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd334) {
            ctx->pc = 0x2CD338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD334u;
            // 0x2cd338: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD38Cu;
            goto label_2cd38c;
        }
    }
    ctx->pc = 0x2CD33Cu;
    // 0x2cd33c: 0x860200a0  lh          $v0, 0xA0($s0)
    ctx->pc = 0x2cd33cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x2cd340: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CD340u;
    {
        const bool branch_taken_0x2cd340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CD344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD340u;
        // 0x2cd344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cd340) {
            ctx->pc = 0x2CD358u;
            goto label_2cd358;
        }
    }
    ctx->pc = 0x2CD348u;
    // 0x2cd348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd34c: 0xc0dce16  jal         func_373858
    ctx->pc = 0x2CD34Cu;
    SET_GPR_U32(ctx, 31, 0x2CD354u);
    ctx->pc = 0x2CD350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD34Cu;
    // 0x2cd350: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373858u, 0x2CD34Cu, 0x2CD354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD354u;
label_2cd354:
    // 0x2cd354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cd354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cd358:
    // 0x2cd358: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x2cd358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
    // 0x2cd35c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cd35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cd360:
    // 0x2cd360: 0xc0dcdf2  jal         func_3737C8
    ctx->pc = 0x2CD360u;
    SET_GPR_U32(ctx, 31, 0x2CD368u);
    ctx->pc = 0x2CD364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD360u;
    // 0x2cd364: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3737C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3737C8u, 0x2CD360u, 0x2CD368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD368u;
label_2cd368:
    // 0x2cd368: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD368u;
    {
        const bool branch_taken_0x2cd368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd368) {
            ctx->pc = 0x2CD36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD368u;
            // 0x2cd36c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD38Cu;
            goto label_2cd38c;
        }
    }
    ctx->pc = 0x2CD370u;
    // 0x2cd370: 0xc0dcddc  jal         func_373770
    ctx->pc = 0x2CD370u;
    SET_GPR_U32(ctx, 31, 0x2CD378u);
    ctx->pc = 0x2CD374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD370u;
    // 0x2cd374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373770u, 0x2CD370u, 0x2CD378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD378u;
label_2cd378:
    // 0x2cd378: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD378u;
    {
        const bool branch_taken_0x2cd378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cd378) {
            ctx->pc = 0x2CD37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD378u;
            // 0x2cd37c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD38Cu;
            goto label_2cd38c;
        }
    }
    ctx->pc = 0x2CD380u;
    // 0x2cd380: 0xc0b317a  jal         func_2CC5E8
    ctx->pc = 0x2CD380u;
    SET_GPR_U32(ctx, 31, 0x2CD388u);
    ctx->pc = 0x2CD384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD380u;
    // 0x2cd384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC5E8u, 0x2CD380u, 0x2CD388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD388u;
label_2cd388:
    // 0x2cd388: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cd388u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd38c:
    // 0x2cd38c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd390: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD390u;
        // 0x2cd394: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD398u;
}
