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

// Function: cDamageUnit_SetDamageCollFlashActiveById
// Address: 0x1fd6b8 - 0x1fd718
void cDamageUnit_SetDamageCollFlashActiveById_0x1fd6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageUnit_SetDamageCollFlashActiveById_0x1fd6b8");
#endif

    switch (ctx->pc) {
        case 0x1fd6d8u: goto label_1fd6d8;
        default: break;
    }

    ctx->pc = 0x1fd6b8u;

    // 0x1fd6b8: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x1fd6b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x1fd6bc: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1fd6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1fd6c0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1FD6C0u;
    {
        const bool branch_taken_0x1fd6c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6C0u;
        // 0x1fd6c4: 0x73c03  sra         $a3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6c0) {
            ctx->pc = 0x1FD710u;
            goto label_1fd710;
        }
    }
    ctx->pc = 0x1FD6C8u;
    // 0x1fd6c8: 0x3c08ffff  lui         $t0, 0xFFFF
    ctx->pc = 0x1fd6c8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65535 << 16));
    // 0x1fd6cc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1fd6ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd6d0: 0x3508fffd  ori         $t0, $t0, 0xFFFD
    ctx->pc = 0x1fd6d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65533);
    // 0x1fd6d4: 0x8482002c  lh          $v0, 0x2C($a0)
    ctx->pc = 0x1fd6d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
label_1fd6d8:
    // 0x1fd6d8: 0x5445000b  bnel        $v0, $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1FD6D8u;
    {
        const bool branch_taken_0x1fd6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fd6d8) {
            ctx->pc = 0x1FD6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD6D8u;
            // 0x1fd6dc: 0x8c840024  lw          $a0, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD708u;
            goto label_1fd708;
        }
    }
    ctx->pc = 0x1FD6E0u;
    // 0x1fd6e0: 0x14c90004  bne         $a2, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD6E0u;
    {
        const bool branch_taken_0x1fd6e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 9));
        ctx->pc = 0x1FD6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6E0u;
        // 0x1fd6e4: 0x8c830028  lw          $v1, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6e0) {
            ctx->pc = 0x1FD6F4u;
            goto label_1fd6f4;
        }
    }
    ctx->pc = 0x1FD6E8u;
    // 0x1fd6e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd6ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD6ECu;
    {
        const bool branch_taken_0x1fd6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD6ECu;
        // 0x1fd6f0: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd6ec) {
            ctx->pc = 0x1FD6FCu;
            goto label_1fd6fc;
        }
    }
    ctx->pc = 0x1FD6F4u;
label_1fd6f4:
    // 0x1fd6f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd6f8: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x1fd6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_1fd6fc:
    // 0x1fd6fc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fd6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1fd700: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD700u;
        // 0x1fd704: 0xa4870030  sh          $a3, 0x30($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD708u;
label_1fd708:
    // 0x1fd708: 0x5480fff3  bnel        $a0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x1FD708u;
    {
        const bool branch_taken_0x1fd708 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd708) {
            ctx->pc = 0x1FD70Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FD708u;
            // 0x1fd70c: 0x8482002c  lh          $v0, 0x2C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FD6D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd6d8;
        }
    }
    ctx->pc = 0x1FD710u;
label_1fd710:
    // 0x1fd710: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD718u;
}
