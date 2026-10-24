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

// Function: func_002D5B30
// Address: 0x2d5b30 - 0x2d5bb8
void func_002D5B30_0x2d5b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D5B30_0x2d5b30");
#endif

    switch (ctx->pc) {
        case 0x2d5b58u: goto label_2d5b58;
        default: break;
    }

    ctx->pc = 0x2d5b30u;

    // 0x2d5b30: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2d5b30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d5b34: 0x4c30011  bgezl       $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D5B34u;
    {
        const bool branch_taken_0x2d5b34 = (GPR_S64(ctx, 6) >= 0);
        if (branch_taken_0x2d5b34) {
            ctx->pc = 0x2D5B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D5B34u;
            // 0x2d5b38: 0x9482000c  lhu         $v0, 0xC($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D5B7Cu;
            goto label_2d5b7c;
        }
    }
    ctx->pc = 0x2D5B3Cu;
    // 0x2d5b3c: 0x9483000c  lhu         $v1, 0xC($a0)
    ctx->pc = 0x2d5b3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d5b40: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2d5b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d5b44: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2d5b44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d5b48: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D5B48u;
    {
        const bool branch_taken_0x2d5b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5b48) {
            ctx->pc = 0x2D5B74u;
            goto label_2d5b74;
        }
    }
    ctx->pc = 0x2D5B50u;
    // 0x2d5b50: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5b54: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x2d5b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
label_2d5b58:
    // 0x2d5b58: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2d5b58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5b5c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D5B5Cu;
    {
        const bool branch_taken_0x2d5b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d5b5c) {
            ctx->pc = 0x2D5BA4u;
            goto label_2d5ba4;
        }
    }
    ctx->pc = 0x2D5B64u;
    // 0x2d5b64: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2d5b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2d5b68: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2d5b68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2d5b6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D5B6Cu;
    {
        const bool branch_taken_0x2d5b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B6Cu;
        // 0x2d5b70: 0x24840058  addiu       $a0, $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b6c) {
            ctx->pc = 0x2D5B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d5b58;
        }
    }
    ctx->pc = 0x2D5B74u;
label_2d5b74:
    // 0x2d5b74: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5B74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B74u;
        // 0x2d5b78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5B74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5B7Cu;
label_2d5b7c:
    // 0x2d5b7c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x2d5b7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d5b80: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D5B80u;
    {
        const bool branch_taken_0x2d5b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D5B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B80u;
        // 0x2d5b84: 0x24030058  addiu       $v1, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d5b80) {
            ctx->pc = 0x2D5BACu;
            goto label_2d5bac;
        }
    }
    ctx->pc = 0x2D5B88u;
    // 0x2d5b88: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2d5b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d5b8c: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x2d5b8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d5b90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d5b94: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d5b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2d5b98: 0x9464000c  lhu         $a0, 0xC($v1)
    ctx->pc = 0x2d5b98u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2d5b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5B9Cu;
        // 0x2d5ba0: 0xc4100a  movz        $v0, $a2, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5BA4u;
label_2d5ba4:
    // 0x2d5ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BA4u;
        // 0x2d5ba8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5BACu;
label_2d5bac:
    // 0x2d5bac: 0x3e00008  jr          $ra
    ctx->pc = 0x2D5BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D5BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D5BACu;
        // 0x2d5bb0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D5BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D5BB4u;
    // 0x2d5bb4: 0x0  nop
    ctx->pc = 0x2d5bb4u;
    // NOP
    ctx->pc = 0x2d5bb8u;
}
