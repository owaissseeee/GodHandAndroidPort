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

// Function: func_0012C4F0
// Address: 0x12c4f0 - 0x12c530
void func_0012C4F0_0x12c4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012C4F0_0x12c4f0");
#endif

    ctx->pc = 0x12c4f0u;

    // 0x12c4f0: 0xdc8202f0  ld          $v0, 0x2F0($a0)
    ctx->pc = 0x12c4f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x12c4f4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x12c4f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12c4f8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12c4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12c4fc: 0x3404c020  ori         $a0, $zero, 0xC020
    ctx->pc = 0x12c4fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49184);
    // 0x12c500: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x12c500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x12c504: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x12c504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12c508: 0x10a40006  beq         $a1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C508u;
    {
        const bool branch_taken_0x12c508 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x12C50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C508u;
        // 0x12c50c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c508) {
            ctx->pc = 0x12C524u;
            goto label_12c524;
        }
    }
    ctx->pc = 0x12C510u;
    // 0x12c510: 0x3403a020  ori         $v1, $zero, 0xA020
    ctx->pc = 0x12c510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40992);
    // 0x12c514: 0x31ef8  dsll        $v1, $v1, 27
    ctx->pc = 0x12c514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 27);
    // 0x12c518: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x12c518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x12c51c: 0x3e00008  jr          $ra
    ctx->pc = 0x12C51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C51Cu;
        // 0x12c520: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C524u;
label_12c524:
    // 0x12c524: 0x3e00008  jr          $ra
    ctx->pc = 0x12C524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C52Cu;
    // 0x12c52c: 0x0  nop
    ctx->pc = 0x12c52cu;
    // NOP
    ctx->pc = 0x12c530u;
}
