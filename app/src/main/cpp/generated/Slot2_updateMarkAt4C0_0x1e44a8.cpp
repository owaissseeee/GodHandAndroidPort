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

// Function: Slot2_updateMarkAt4C0
// Address: 0x1e44a8 - 0x1e4520
void Slot2_updateMarkAt4C0_0x1e44a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_updateMarkAt4C0_0x1e44a8");
#endif

    switch (ctx->pc) {
        case 0x1e44fcu: goto label_1e44fc;
        case 0x1e4510u: goto label_1e4510;
        default: break;
    }

    ctx->pc = 0x1e44a8u;

    // 0x1e44a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e44a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e44ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e44acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e44b0: 0x948304c0  lhu         $v1, 0x4C0($a0)
    ctx->pc = 0x1e44b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 1216)));
    // 0x1e44b4: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x1e44b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x1e44b8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E44B8u;
    {
        const bool branch_taken_0x1e44b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E44BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44B8u;
        // 0x1e44bc: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44b8) {
            ctx->pc = 0x1E4510u;
            goto label_1e4510;
        }
    }
    ctx->pc = 0x1E44C0u;
    // 0x1e44c0: 0x30623fff  andi        $v0, $v1, 0x3FFF
    ctx->pc = 0x1e44c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
    // 0x1e44c4: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x1e44c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x1e44c8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1E44C8u;
    {
        const bool branch_taken_0x1e44c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E44CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44C8u;
        // 0x1e44cc: 0xa48304c0  sh          $v1, 0x4C0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1216), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44c8) {
            ctx->pc = 0x1E4510u;
            goto label_1e4510;
        }
    }
    ctx->pc = 0x1E44D0u;
    // 0x1e44d0: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x1e44d0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1e44d4: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x1e44d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1e44d8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x1e44d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e44dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e44dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e44e0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e44e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e44e4: 0x30434000  andi        $v1, $v0, 0x4000
    ctx->pc = 0x1e44e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x1e44e8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E44E8u;
    {
        const bool branch_taken_0x1e44e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E44ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44E8u;
        // 0x1e44ec: 0xa48204c0  sh          $v0, 0x4C0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1216), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44e8) {
            ctx->pc = 0x1E4504u;
            goto label_1e4504;
        }
    }
    ctx->pc = 0x1E44F0u;
    // 0x1e44f0: 0x8c840480  lw          $a0, 0x480($a0)
    ctx->pc = 0x1e44f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1152)));
    // 0x1e44f4: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E44F4u;
    SET_GPR_U32(ctx, 31, 0x1E44FCu);
    ctx->pc = 0x1E44F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E44F4u;
    // 0x1e44f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E44F4u, 0x1E44FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E44FCu;
label_1e44fc:
    // 0x1e44fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E44FCu;
    {
        const bool branch_taken_0x1e44fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44FCu;
        // 0x1e4500: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e44fc) {
            ctx->pc = 0x1E4514u;
            goto label_1e4514;
        }
    }
    ctx->pc = 0x1E4504u;
label_1e4504:
    // 0x1e4504: 0x8c840480  lw          $a0, 0x480($a0)
    ctx->pc = 0x1e4504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1152)));
    // 0x1e4508: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E4508u;
    SET_GPR_U32(ctx, 31, 0x1E4510u);
    ctx->pc = 0x1E450Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4508u;
    // 0x1e450c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E4508u, 0x1E4510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4510u;
label_1e4510:
    // 0x1e4510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e4514:
    // 0x1e4514: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4514u;
        // 0x1e4518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E451Cu;
    // 0x1e451c: 0x0  nop
    ctx->pc = 0x1e451cu;
    // NOP
    ctx->pc = 0x1e4520u;
}
