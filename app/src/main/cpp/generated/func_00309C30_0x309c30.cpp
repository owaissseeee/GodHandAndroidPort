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

// Function: func_00309C30
// Address: 0x309c30 - 0x309ca0
void func_00309C30_0x309c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00309C30_0x309c30");
#endif

    ctx->pc = 0x309c30u;

    // 0x309c30: 0x2c82003b  sltiu       $v0, $a0, 0x3B
    ctx->pc = 0x309c30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x309c34: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x309C34u;
    {
        const bool branch_taken_0x309c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C34u;
        // 0x309c38: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309c34) {
            ctx->pc = 0x309C94u;
            goto label_309c94;
        }
    }
    ctx->pc = 0x309C3Cu;
    // 0x309c3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x309c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x309c40: 0x244202e0  addiu       $v0, $v0, 0x2E0
    ctx->pc = 0x309c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 736));
    // 0x309c44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x309c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x309c48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x309c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x309c4c: 0x800008  jr          $a0
    ctx->pc = 0x309C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x309C54u: goto label_309c54;
            case 0x309C70u: goto label_309c70;
            case 0x309C94u: goto label_309c94;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309C4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x309C54u;
label_309c54:
    // 0x309c54: 0x24a3003f  addiu       $v1, $a1, 0x3F
    ctx->pc = 0x309c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x309c58: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x309c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309c5c: 0x24a2007e  addiu       $v0, $a1, 0x7E
    ctx->pc = 0x309c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 126));
    // 0x309c60: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x309c60u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x309c64: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x309c64u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x309c68: 0x3e00008  jr          $ra
    ctx->pc = 0x309C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C68u;
        // 0x309c6c: 0x21183  sra         $v0, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309C70u;
label_309c70:
    // 0x309c70: 0x24a4003f  addiu       $a0, $a1, 0x3F
    ctx->pc = 0x309c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x309c74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x309c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x309c78: 0x24a3007e  addiu       $v1, $a1, 0x7E
    ctx->pc = 0x309c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 126));
    // 0x309c7c: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x309c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x309c80: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x309c80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x309c84: 0x32983  sra         $a1, $v1, 6
    ctx->pc = 0x309c84u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 6));
    // 0x309c88: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x309c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x309c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x309C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C8Cu;
        // 0x309c90: 0xa21021  addu        $v0, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309C94u;
label_309c94:
    // 0x309c94: 0x3e00008  jr          $ra
    ctx->pc = 0x309C94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309C94u;
        // 0x309c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309C94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309C9Cu;
    // 0x309c9c: 0x0  nop
    ctx->pc = 0x309c9cu;
    // NOP
    ctx->pc = 0x309ca0u;
}
