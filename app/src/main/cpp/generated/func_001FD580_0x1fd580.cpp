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

// Function: func_001FD580
// Address: 0x1fd580 - 0x1fd610
void func_001FD580_0x1fd580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FD580_0x1fd580");
#endif

    switch (ctx->pc) {
        case 0x1fd5a0u: goto label_1fd5a0;
        case 0x1fd5a8u: goto label_1fd5a8;
        case 0x1fd5f0u: goto label_1fd5f0;
        default: break;
    }

    ctx->pc = 0x1fd580u;

    // 0x1fd580: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fd580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fd584: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fd584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fd588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fd588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fd58c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fd58cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd590: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1fd590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1fd594: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1FD594u;
    {
        const bool branch_taken_0x1fd594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD594u;
        // 0x1fd598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd594) {
            ctx->pc = 0x1FD5FCu;
            goto label_1fd5fc;
        }
    }
    ctx->pc = 0x1FD59Cu;
    // 0x1fd59c: 0x0  nop
    ctx->pc = 0x1fd59cu;
    // NOP
label_1fd5a0:
    // 0x1fd5a0: 0xc07f2e8  jal         func_1FCBA0
    ctx->pc = 0x1FD5A0u;
    SET_GPR_U32(ctx, 31, 0x1FD5A8u);
    ctx->pc = 0x1FD5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD5A0u;
    // 0x1fd5a4: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCBA0u, 0x1FD5A0u, 0x1FD5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD5A8u;
label_1fd5a8:
    // 0x1fd5a8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD5A8u;
    {
        const bool branch_taken_0x1fd5a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd5a8) {
            ctx->pc = 0x1FD5ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD5A8u;
            // 0x1fd5ac: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD5B8u;
            goto label_1fd5b8;
        }
    }
    ctx->pc = 0x1FD5B0u;
    // 0x1fd5b0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1FD5B0u;
    {
        const bool branch_taken_0x1fd5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5B0u;
        // 0x1fd5b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5b0) {
            ctx->pc = 0x1FD5FCu;
            goto label_1fd5fc;
        }
    }
    ctx->pc = 0x1FD5B8u;
label_1fd5b8:
    // 0x1fd5b8: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1fd5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1fd5bc: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x1fd5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x1fd5c0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x1fd5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1fd5c4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD5C4u;
    {
        const bool branch_taken_0x1fd5c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd5c4) {
            ctx->pc = 0x1FD5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD5C4u;
            // 0x1fd5c8: 0x8c830024  lw          $v1, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD5D8u;
            goto label_1fd5d8;
        }
    }
    ctx->pc = 0x1FD5CCu;
    // 0x1fd5cc: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1fd5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1fd5d0: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x1fd5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x1fd5d4: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1fd5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1fd5d8:
    // 0x1fd5d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD5D8u;
    {
        const bool branch_taken_0x1fd5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fd5d8) {
            ctx->pc = 0x1FD5E8u;
            goto label_1fd5e8;
        }
    }
    ctx->pc = 0x1FD5E0u;
    // 0x1fd5e0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1fd5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1fd5e4: 0xac620020  sw          $v0, 0x20($v1)
    ctx->pc = 0x1fd5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
label_1fd5e8:
    // 0x1fd5e8: 0xc07f1fe  jal         func_1FC7F8
    ctx->pc = 0x1FD5E8u;
    SET_GPR_U32(ctx, 31, 0x1FD5F0u);
    ctx->pc = 0x1FC7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC7F8u, 0x1FD5E8u, 0x1FD5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD5F0u;
label_1fd5f0:
    // 0x1fd5f0: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1fd5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1fd5f4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1FD5F4u;
    {
        const bool branch_taken_0x1fd5f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD5F4u;
        // 0x1fd5f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5f4) {
            ctx->pc = 0x1FD5A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd5a0;
        }
    }
    ctx->pc = 0x1FD5FCu;
label_1fd5fc:
    // 0x1fd5fc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fd5fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fd600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd604: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD604u;
        // 0x1fd608: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD60Cu;
    // 0x1fd60c: 0x0  nop
    ctx->pc = 0x1fd60cu;
    // NOP
    ctx->pc = 0x1fd610u;
}
