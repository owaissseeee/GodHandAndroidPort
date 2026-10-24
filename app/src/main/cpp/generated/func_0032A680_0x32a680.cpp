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

// Function: func_0032A680
// Address: 0x32a680 - 0x32a6d0
void func_0032A680_0x32a680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A680_0x32a680");
#endif

    switch (ctx->pc) {
        case 0x32a698u: goto label_32a698;
        default: break;
    }

    ctx->pc = 0x32a680u;

    // 0x32a680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a684: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A684u;
    {
        const bool branch_taken_0x32a684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A684u;
        // 0x32a688: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a684) {
            ctx->pc = 0x32A6A0u;
            goto label_32a6a0;
        }
    }
    ctx->pc = 0x32A68Cu;
    // 0x32a68c: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32a68cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32a690: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x32A690u;
    SET_GPR_U32(ctx, 31, 0x32A698u);
    ctx->pc = 0x32A694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A690u;
    // 0x32a694: 0x24842198  addiu       $a0, $a0, 0x2198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32A690u, 0x32A698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A698u;
label_32a698:
    // 0x32a698: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32A698u;
    {
        const bool branch_taken_0x32a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A698u;
        // 0x32a69c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a698) {
            ctx->pc = 0x32A6C0u;
            goto label_32a6c0;
        }
    }
    ctx->pc = 0x32A6A0u;
label_32a6a0:
    // 0x32a6a0: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x32a6a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32a6a4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x32a6a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32a6a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32A6A8u;
    {
        const bool branch_taken_0x32a6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a6a8) {
            ctx->pc = 0x32A6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A6A8u;
            // 0x32a6ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A6C0u;
            goto label_32a6c0;
        }
    }
    ctx->pc = 0x32A6B0u;
    // 0x32a6b0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x32a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32a6b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a6b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a6b8: 0x80c9e54  j           func_327950
    ctx->pc = 0x32A6B8u;
    ctx->pc = 0x32A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A6B8u;
    // 0x32a6bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327950u, 0x32A6B8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32A6C0u;
label_32a6c0:
    // 0x32a6c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a6c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x32A6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A6C4u;
        // 0x32a6c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A6CCu;
    // 0x32a6cc: 0x0  nop
    ctx->pc = 0x32a6ccu;
    // NOP
    ctx->pc = 0x32a6d0u;
}
