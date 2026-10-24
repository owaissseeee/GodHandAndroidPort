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

// Function: func_002CB198
// Address: 0x2cb198 - 0x2cb200
void func_002CB198_0x2cb198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CB198_0x2cb198");
#endif

    ctx->pc = 0x2cb198u;

    // 0x2cb198: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2cb198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2cb19c: 0x8c647a84  lw          $a0, 0x7A84($v1)
    ctx->pc = 0x2cb19cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A84u));
    // 0x2cb1a0: 0x30820800  andi        $v0, $a0, 0x800
    ctx->pc = 0x2cb1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x2cb1a4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB1A4u;
    {
        const bool branch_taken_0x2cb1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1A4u;
        // 0x2cb1a8: 0x24637a84  addiu       $v1, $v1, 0x7A84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1a4) {
            ctx->pc = 0x2CB1C8u;
            goto label_2cb1c8;
        }
    }
    ctx->pc = 0x2CB1ACu;
    // 0x2cb1ac: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2cb1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2cb1b0: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2cb1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2cb1b4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB1B4u;
    {
        const bool branch_taken_0x2cb1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1B4u;
        // 0x2cb1b8: 0x411fa  dsrl        $v0, $a0, 7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb1b4) {
            ctx->pc = 0x2CB1C8u;
            goto label_2cb1c8;
        }
    }
    ctx->pc = 0x2CB1BCu;
    // 0x2cb1bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cb1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cb1c0: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB1C0u;
    {
        const bool branch_taken_0x2cb1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb1c0) {
            ctx->pc = 0x2CB1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB1C0u;
            // 0x2cb1c4: 0x8c62ffa0  lw          $v0, -0x60($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB1D0u;
            goto label_2cb1d0;
        }
    }
    ctx->pc = 0x2CB1C8u;
label_2cb1c8:
    // 0x2cb1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1C8u;
        // 0x2cb1cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB1C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB1D0u;
label_2cb1d0:
    // 0x2cb1d0: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2cb1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2cb1d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2cb1d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2cb1d8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB1D8u;
    {
        const bool branch_taken_0x2cb1d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb1d8) {
            ctx->pc = 0x2CB1F4u;
            goto label_2cb1f4;
        }
    }
    ctx->pc = 0x2CB1E0u;
    // 0x2cb1e0: 0x8c62ffa8  lw          $v0, -0x58($v1)
    ctx->pc = 0x2cb1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967208)));
    // 0x2cb1e4: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2cb1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2cb1e8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cb1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cb1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1ECu;
        // 0x2cb1f0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB1F4u;
label_2cb1f4:
    // 0x2cb1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB1F4u;
        // 0x2cb1f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB1FCu;
    // 0x2cb1fc: 0x0  nop
    ctx->pc = 0x2cb1fcu;
    // NOP
    ctx->pc = 0x2cb200u;
}
