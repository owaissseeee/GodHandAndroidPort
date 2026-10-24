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

// Function: func_00272688
// Address: 0x272688 - 0x2726f8
void func_00272688_0x272688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00272688_0x272688");
#endif

    switch (ctx->pc) {
        case 0x2726a8u: goto label_2726a8;
        default: break;
    }

    ctx->pc = 0x272688u;

    // 0x272688: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x272688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x27268c: 0x8c627a0c  lw          $v0, 0x7A0C($v1)
    ctx->pc = 0x27268cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x272690: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x272690u;
    {
        const bool branch_taken_0x272690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272690) {
            ctx->pc = 0x272694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272690u;
            // 0x272694: 0x8c8216d4  lw          $v0, 0x16D4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2726B0u;
            goto label_2726b0;
        }
    }
    ctx->pc = 0x272698u;
    // 0x272698: 0x8c820564  lw          $v0, 0x564($a0)
    ctx->pc = 0x272698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x27269c: 0x38420244  xori        $v0, $v0, 0x244
    ctx->pc = 0x27269cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)580);
    // 0x2726a0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2726A0u;
    {
        const bool branch_taken_0x2726a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2726a0) {
            ctx->pc = 0x2726A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2726A0u;
            // 0x2726a4: 0x8c8216d4  lw          $v0, 0x16D4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2726B0u;
            goto label_2726b0;
        }
    }
    ctx->pc = 0x2726A8u;
label_2726a8:
    // 0x2726a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2726A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2726ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726A8u;
        // 0x2726ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2726A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2726B0u;
label_2726b0:
    // 0x2726b0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2726b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2726b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2726B4u;
    {
        const bool branch_taken_0x2726b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2726B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726B4u;
        // 0x2726b8: 0x8c830564  lw          $v1, 0x564($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726b4) {
            ctx->pc = 0x2726C8u;
            goto label_2726c8;
        }
    }
    ctx->pc = 0x2726BCu;
    // 0x2726bc: 0x38620244  xori        $v0, $v1, 0x244
    ctx->pc = 0x2726bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)580);
    // 0x2726c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2726C0u;
    {
        const bool branch_taken_0x2726c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2726c0) {
            ctx->pc = 0x2726A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2726a8;
        }
    }
    ctx->pc = 0x2726C8u;
label_2726c8:
    // 0x2726c8: 0x2463fe00  addiu       $v1, $v1, -0x200
    ctx->pc = 0x2726c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966784));
    // 0x2726cc: 0x2c62004c  sltiu       $v0, $v1, 0x4C
    ctx->pc = 0x2726ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
    // 0x2726d0: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2726D0u;
    {
        const bool branch_taken_0x2726d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2726D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726D0u;
        // 0x2726d4: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726d0) {
            ctx->pc = 0x2726A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2726a8;
        }
    }
    ctx->pc = 0x2726D8u;
    // 0x2726d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2726d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2726dc: 0x244264d0  addiu       $v0, $v0, 0x64D0
    ctx->pc = 0x2726dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25808));
    // 0x2726e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2726e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2726e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2726e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2726e8: 0x800008  jr          $a0
    ctx->pc = 0x2726E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2726A8u: goto label_2726a8;
            case 0x2726F0u: goto label_2726f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2726E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2726F0u;
label_2726f0:
    // 0x2726f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2726F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2726F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726F0u;
        // 0x2726f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2726F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2726F8u;
}
