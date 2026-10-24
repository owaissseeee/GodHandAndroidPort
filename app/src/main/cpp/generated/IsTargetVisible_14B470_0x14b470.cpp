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

// Function: IsTargetVisible_14B470
// Address: 0x14b470 - 0x14b4d0
void IsTargetVisible_14B470_0x14b470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsTargetVisible_14B470_0x14b470");
#endif

    switch (ctx->pc) {
        case 0x14b4bcu: goto label_14b4bc;
        default: break;
    }

    ctx->pc = 0x14b470u;

    // 0x14b470: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14b470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x14b474: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b474u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b478: 0x8c437a80  lw          $v1, 0x7A80($v0)
    ctx->pc = 0x14b478u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A80u));
    // 0x14b47c: 0x3c050080  lui         $a1, 0x80
    ctx->pc = 0x14b47cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
    // 0x14b480: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x14b480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x14b484: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B484u;
    {
        const bool branch_taken_0x14b484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B484u;
        // 0x14b488: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b484) {
            ctx->pc = 0x14B49Cu;
            goto label_14b49c;
        }
    }
    ctx->pc = 0x14B48Cu;
    // 0x14b48c: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x14b48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x14b490: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x14b490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x14b494: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14B494u;
    {
        const bool branch_taken_0x14b494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B494u;
        // 0x14b498: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b494) {
            ctx->pc = 0x14B4A4u;
            goto label_14b4a4;
        }
    }
    ctx->pc = 0x14B49Cu;
label_14b49c:
    // 0x14b49c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B49Cu;
    {
        const bool branch_taken_0x14b49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B49Cu;
        // 0x14b4a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b49c) {
            ctx->pc = 0x14B4C0u;
            goto label_14b4c0;
        }
    }
    ctx->pc = 0x14B4A4u;
label_14b4a4:
    // 0x14b4a4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14b4a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14b4a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B4A8u;
    {
        const bool branch_taken_0x14b4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14b4a8) {
            ctx->pc = 0x14B4ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B4A8u;
            // 0x14b4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B4C0u;
            goto label_14b4c0;
        }
    }
    ctx->pc = 0x14B4B0u;
    // 0x14b4b0: 0x24850080  addiu       $a1, $a0, 0x80
    ctx->pc = 0x14b4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x14b4b4: 0xc07e2b6  jal         func_1F8AD8
    ctx->pc = 0x14B4B4u;
    SET_GPR_U32(ctx, 31, 0x14B4BCu);
    ctx->pc = 0x14B4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B4B4u;
    // 0x14b4b8: 0x24840260  addiu       $a0, $a0, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8AD8u, 0x14B4B4u, 0x14B4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B4BCu;
label_14b4bc:
    // 0x14b4bc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x14b4bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_14b4c0:
    // 0x14b4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x14B4C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B4C4u;
        // 0x14b4c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B4C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B4CCu;
    // 0x14b4cc: 0x0  nop
    ctx->pc = 0x14b4ccu;
    // NOP
    ctx->pc = 0x14b4d0u;
}
