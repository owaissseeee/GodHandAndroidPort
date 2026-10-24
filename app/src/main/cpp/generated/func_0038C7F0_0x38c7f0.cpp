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

// Function: func_0038C7F0
// Address: 0x38c7f0 - 0x38c860
void func_0038C7F0_0x38c7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038C7F0_0x38c7f0");
#endif

    switch (ctx->pc) {
        case 0x38c7f0u: goto label_38c7f0;
        case 0x38c7f4u: goto label_38c7f4;
        case 0x38c7f8u: goto label_38c7f8;
        case 0x38c7fcu: goto label_38c7fc;
        case 0x38c800u: goto label_38c800;
        case 0x38c804u: goto label_38c804;
        case 0x38c808u: goto label_38c808;
        case 0x38c80cu: goto label_38c80c;
        case 0x38c810u: goto label_38c810;
        case 0x38c814u: goto label_38c814;
        case 0x38c818u: goto label_38c818;
        case 0x38c81cu: goto label_38c81c;
        case 0x38c820u: goto label_38c820;
        case 0x38c824u: goto label_38c824;
        case 0x38c828u: goto label_38c828;
        case 0x38c82cu: goto label_38c82c;
        case 0x38c830u: goto label_38c830;
        case 0x38c834u: goto label_38c834;
        case 0x38c838u: goto label_38c838;
        case 0x38c83cu: goto label_38c83c;
        case 0x38c840u: goto label_38c840;
        case 0x38c844u: goto label_38c844;
        case 0x38c848u: goto label_38c848;
        case 0x38c84cu: goto label_38c84c;
        case 0x38c850u: goto label_38c850;
        case 0x38c854u: goto label_38c854;
        case 0x38c858u: goto label_38c858;
        case 0x38c85cu: goto label_38c85c;
        default: break;
    }

    ctx->pc = 0x38c7f0u;

label_38c7f0:
    // 0x38c7f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38c7f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38c7f4:
    // 0x38c7f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38c7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38c7f8:
    // 0x38c7f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38c7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38c7fc:
    // 0x38c7fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38c800:
    // 0x38c800: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x38c800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_38c804:
    // 0x38c804: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_38c808:
    if (ctx->pc == 0x38C808u) {
        ctx->pc = 0x38C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C804u;
        // 0x38c808: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C80Cu;
        goto label_38c80c;
    }
    ctx->pc = 0x38C804u;
    {
        const bool branch_taken_0x38c804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38C808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C804u;
        // 0x38c808: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c804) {
            ctx->pc = 0x38C854u;
            goto label_38c854;
        }
    }
    ctx->pc = 0x38C80Cu;
label_38c80c:
    // 0x38c80c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38c810:
    // 0x38c810: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x38c810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_38c814:
    // 0x38c814: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_38c818:
    if (ctx->pc == 0x38C818u) {
        ctx->pc = 0x38C818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C814u;
        // 0x38c818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C81Cu;
        goto label_38c81c;
    }
    ctx->pc = 0x38C814u;
    {
        const bool branch_taken_0x38c814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38c814) {
            ctx->pc = 0x38C818u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C814u;
            // 0x38c818: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C83Cu;
            goto label_38c83c;
        }
    }
    ctx->pc = 0x38C81Cu;
label_38c81c:
    // 0x38c81c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38c81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38c820:
    // 0x38c820: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x38c820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_38c824:
    // 0x38c824: 0x40f809  jalr        $v0
label_38c828:
    if (ctx->pc == 0x38C828u) {
        ctx->pc = 0x38C82Cu;
        goto label_38c82c;
    }
    ctx->pc = 0x38C824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C82Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C824u, 0x38C82Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C82Cu;
label_38c82c:
    // 0x38c82c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38c82cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38c830:
    // 0x38c830: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
label_38c834:
    if (ctx->pc == 0x38C834u) {
        ctx->pc = 0x38C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C830u;
        // 0x38c834: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C838u;
        goto label_38c838;
    }
    ctx->pc = 0x38C830u;
    {
        const bool branch_taken_0x38c830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x38C834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C830u;
        // 0x38c834: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c830) {
            ctx->pc = 0x38C854u;
            goto label_38c854;
        }
    }
    ctx->pc = 0x38C838u;
label_38c838:
    // 0x38c838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38c838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38c83c:
    // 0x38c83c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c83cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38c840:
    // 0x38c840: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x38c840u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38c844:
    // 0x38c844: 0x2485004b  addiu       $a1, $a0, 0x4B
    ctx->pc = 0x38c844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 75));
label_38c848:
    // 0x38c848: 0x2486004c  addiu       $a2, $a0, 0x4C
    ctx->pc = 0x38c848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_38c84c:
    // 0x38c84c: 0x80e31da  j           func_38C768
label_38c850:
    if (ctx->pc == 0x38C850u) {
        ctx->pc = 0x38C850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C84Cu;
        // 0x38c850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C854u;
        goto label_38c854;
    }
    ctx->pc = 0x38C84Cu;
    ctx->pc = 0x38C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38C84Cu;
    // 0x38c850: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C768u, 0x38C84Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x38C854u;
label_38c854:
    // 0x38c854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38c858:
    // 0x38c858: 0x3e00008  jr          $ra
label_38c85c:
    if (ctx->pc == 0x38C85Cu) {
        ctx->pc = 0x38C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C858u;
        // 0x38c85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C860u;
        goto label_fallthrough_0x38c858;
    }
    ctx->pc = 0x38C858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C858u;
        // 0x38c85c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38c858:
    ctx->pc = 0x38C860u;
}
