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

// Function: _hi0bits
// Address: 0x38f838 - 0x38f8c0
void _hi0bits_0x38f838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_hi0bits_0x38f838");
#endif

    ctx->pc = 0x38f838u;

    // 0x38f838: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x38f838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x38f83c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x38f83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x38f840: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38F840u;
    {
        const bool branch_taken_0x38f840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38F844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F840u;
        // 0x38f844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f840) {
            ctx->pc = 0x38F850u;
            goto label_38f850;
        }
    }
    ctx->pc = 0x38F848u;
    // 0x38f848: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x38f848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38f84c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x38f84cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_38f850:
    // 0x38f850: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x38f850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x38f854: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x38f854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x38f858: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38F858u;
    {
        const bool branch_taken_0x38f858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f858) {
            ctx->pc = 0x38F868u;
            goto label_38f868;
        }
    }
    ctx->pc = 0x38F860u;
    // 0x38f860: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x38f860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x38f864: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x38f864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_38f868:
    // 0x38f868: 0x3c02f000  lui         $v0, 0xF000
    ctx->pc = 0x38f868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61440 << 16));
    // 0x38f86c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x38f86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x38f870: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38F870u;
    {
        const bool branch_taken_0x38f870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f870) {
            ctx->pc = 0x38F880u;
            goto label_38f880;
        }
    }
    ctx->pc = 0x38F878u;
    // 0x38f878: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x38f878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x38f87c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x38f87cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_38f880:
    // 0x38f880: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x38f880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x38f884: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x38f884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x38f888: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38F888u;
    {
        const bool branch_taken_0x38f888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38f888) {
            ctx->pc = 0x38F898u;
            goto label_38f898;
        }
    }
    ctx->pc = 0x38F890u;
    // 0x38f890: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x38f890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x38f894: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x38f894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_38f898:
    // 0x38f898: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38F898u;
    {
        const bool branch_taken_0x38f898 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x38F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F898u;
        // 0x38f89c: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f898) {
            ctx->pc = 0x38F8B0u;
            goto label_38f8b0;
        }
    }
    ctx->pc = 0x38F8A0u;
    // 0x38f8a0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x38f8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x38f8a4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x38f8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x38f8a8: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x38F8A8u;
    {
        const bool branch_taken_0x38f8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38F8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38F8A8u;
        // 0x38f8ac: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38f8a8) {
            ctx->pc = 0x38F8B4u;
            goto label_38f8b4;
        }
    }
    ctx->pc = 0x38F8B0u;
label_38f8b0:
    // 0x38f8b0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x38f8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38f8b4:
    // 0x38f8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x38F8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38F8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38F8BCu;
    // 0x38f8bc: 0x0  nop
    ctx->pc = 0x38f8bcu;
    // NOP
    ctx->pc = 0x38f8c0u;
}
