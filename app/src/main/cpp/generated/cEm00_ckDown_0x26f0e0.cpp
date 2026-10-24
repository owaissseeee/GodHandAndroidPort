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

// Function: cEm00_ckDown
// Address: 0x26f0e0 - 0x26f120
void cEm00_ckDown_0x26f0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_ckDown_0x26f0e0");
#endif

    ctx->pc = 0x26f0e0u;

    // 0x26f0e0: 0x948203ac  lhu         $v0, 0x3AC($a0)
    ctx->pc = 0x26f0e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 940)));
    // 0x26f0e4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x26f0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x26f0e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26F0E8u;
    {
        const bool branch_taken_0x26f0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0E8u;
        // 0x26f0ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0e8) {
            ctx->pc = 0x26F114u;
            goto label_26f114;
        }
    }
    ctx->pc = 0x26F0F0u;
    // 0x26f0f0: 0xdc8302f0  ld          $v1, 0x2F0($a0)
    ctx->pc = 0x26f0f0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 752)));
    // 0x26f0f4: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x26f0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x26f0f8: 0x52eb8  dsll        $a1, $a1, 26
    ctx->pc = 0x26f0f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 26);
    // 0x26f0fc: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x26f0fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x26f100: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x26f100u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26f104: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26f104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x26f108: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x26f108u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x26f10c: 0x3e00008  jr          $ra
    ctx->pc = 0x26F10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F10Cu;
        // 0x26f110: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F114u;
label_26f114:
    // 0x26f114: 0x3e00008  jr          $ra
    ctx->pc = 0x26F114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F114u;
        // 0x26f118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26F11Cu;
    // 0x26f11c: 0x0  nop
    ctx->pc = 0x26f11cu;
    // NOP
    ctx->pc = 0x26f120u;
}
