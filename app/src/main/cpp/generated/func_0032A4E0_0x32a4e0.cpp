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

// Function: func_0032A4E0
// Address: 0x32a4e0 - 0x32a530
void func_0032A4E0_0x32a4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A4E0_0x32a4e0");
#endif

    switch (ctx->pc) {
        case 0x32a4f8u: goto label_32a4f8;
        default: break;
    }

    ctx->pc = 0x32a4e0u;

    // 0x32a4e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a4e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a4e4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A4E4u;
    {
        const bool branch_taken_0x32a4e4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4E4u;
        // 0x32a4e8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4e4) {
            ctx->pc = 0x32A500u;
            goto label_32a500;
        }
    }
    ctx->pc = 0x32A4ECu;
    // 0x32a4ec: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32a4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32a4f0: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x32A4F0u;
    SET_GPR_U32(ctx, 31, 0x32A4F8u);
    ctx->pc = 0x32A4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A4F0u;
    // 0x32a4f4: 0x248420d8  addiu       $a0, $a0, 0x20D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32A4F0u, 0x32A4F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A4F8u;
label_32a4f8:
    // 0x32a4f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x32A4F8u;
    {
        const bool branch_taken_0x32a4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A4F8u;
        // 0x32a4fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a4f8) {
            ctx->pc = 0x32A520u;
            goto label_32a520;
        }
    }
    ctx->pc = 0x32A500u;
label_32a500:
    // 0x32a500: 0x80820001  lb          $v0, 0x1($a0)
    ctx->pc = 0x32a500u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32a504: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x32a504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x32a508: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x32A508u;
    {
        const bool branch_taken_0x32a508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32a508) {
            ctx->pc = 0x32A50Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32A508u;
            // 0x32a50c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32A520u;
            goto label_32a520;
        }
    }
    ctx->pc = 0x32A510u;
    // 0x32a510: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x32a510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32a514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a518: 0x80c9dfa  j           func_3277E8
    ctx->pc = 0x32A518u;
    ctx->pc = 0x32A51Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A518u;
    // 0x32a51c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3277E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3277E8u, 0x32A518u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32A520u;
label_32a520:
    // 0x32a520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a524: 0x3e00008  jr          $ra
    ctx->pc = 0x32A524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A524u;
        // 0x32a528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A52Cu;
    // 0x32a52c: 0x0  nop
    ctx->pc = 0x32a52cu;
    // NOP
    ctx->pc = 0x32a530u;
}
