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

// Function: cCoreSave_ckFightingRingClear
// Address: 0x1fc4d0 - 0x1fc518
void cCoreSave_ckFightingRingClear_0x1fc4d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_ckFightingRingClear_0x1fc4d0");
#endif

    ctx->pc = 0x1fc4d0u;

    // 0x1fc4d0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1fc4d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fc4d4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FC4D4u;
    {
        const bool branch_taken_0x1fc4d4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4D4u;
        // 0x1fc4d8: 0x51942  srl         $v1, $a1, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4d4) {
            ctx->pc = 0x1FC4E4u;
            goto label_1fc4e4;
        }
    }
    ctx->pc = 0x1FC4DCu;
    // 0x1fc4dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4DCu;
        // 0x1fc4e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC4DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC4E4u;
label_1fc4e4:
    // 0x1fc4e4: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x1fc4e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1fc4e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FC4E8u;
    {
        const bool branch_taken_0x1fc4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC4E8u;
        // 0x1fc4ec: 0x30a5001f  andi        $a1, $a1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc4e8) {
            ctx->pc = 0x1FC510u;
            goto label_1fc510;
        }
    }
    ctx->pc = 0x1FC4F0u;
    // 0x1fc4f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1fc4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fc4f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1fc4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc4f8: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1fc4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1fc4fc: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x1fc4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x1fc500: 0x8c620b98  lw          $v0, 0xB98($v1)
    ctx->pc = 0x1fc500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2968)));
    // 0x1fc504: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1fc504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1fc508: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC508u;
        // 0x1fc50c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC510u;
label_1fc510:
    // 0x1fc510: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC510u;
        // 0x1fc514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC518u;
}
