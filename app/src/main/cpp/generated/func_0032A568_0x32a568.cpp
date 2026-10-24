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

// Function: func_0032A568
// Address: 0x32a568 - 0x32a5b8
void func_0032A568_0x32a568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A568_0x32a568");
#endif

    switch (ctx->pc) {
        case 0x32a580u: goto label_32a580;
        default: break;
    }

    ctx->pc = 0x32a568u;

    // 0x32a568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a56c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A56Cu;
    {
        const bool branch_taken_0x32a56c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A56Cu;
        // 0x32a570: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a56c) {
            ctx->pc = 0x32A588u;
            goto label_32a588;
        }
    }
    ctx->pc = 0x32A574u;
    // 0x32a574: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32a574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32a578: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x32A578u;
    SET_GPR_U32(ctx, 31, 0x32A580u);
    ctx->pc = 0x32A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A578u;
    // 0x32a57c: 0x24842108  addiu       $a0, $a0, 0x2108 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32A578u, 0x32A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A580u;
label_32a580:
    // 0x32a580: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32A580u;
    {
        const bool branch_taken_0x32a580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A580u;
        // 0x32a584: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a580) {
            ctx->pc = 0x32A5A8u;
            goto label_32a5a8;
        }
    }
    ctx->pc = 0x32A588u;
label_32a588:
    // 0x32a588: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x32a588u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32a58c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x32a58cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32a590: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32A590u;
    {
        const bool branch_taken_0x32a590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a590) {
            ctx->pc = 0x32A594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A590u;
            // 0x32a594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A5A8u;
            goto label_32a5a8;
        }
    }
    ctx->pc = 0x32A598u;
    // 0x32a598: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x32a598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32a59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a5a0: 0x80c9de2  j           func_327788
    ctx->pc = 0x32A5A0u;
    ctx->pc = 0x32A5A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A5A0u;
    // 0x32a5a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327788u, 0x32A5A0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32A5A8u;
label_32a5a8:
    // 0x32a5a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a5ac: 0x3e00008  jr          $ra
    ctx->pc = 0x32A5ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A5ACu;
        // 0x32a5b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A5ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A5B4u;
    // 0x32a5b4: 0x0  nop
    ctx->pc = 0x32a5b4u;
    // NOP
    ctx->pc = 0x32a5b8u;
}
