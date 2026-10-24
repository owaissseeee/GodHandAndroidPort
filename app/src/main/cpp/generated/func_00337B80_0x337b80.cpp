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

// Function: func_00337B80
// Address: 0x337b80 - 0x337bc8
void func_00337B80_0x337b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00337B80_0x337b80");
#endif

    ctx->pc = 0x337b80u;

    // 0x337b80: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337b84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x337b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337b88: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x337b88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x337b8c: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x337B8Cu;
    {
        const bool branch_taken_0x337b8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x337B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337B8Cu;
        // 0x337b90: 0x2ca70002  sltiu       $a3, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337b8c) {
            ctx->pc = 0x337BA4u;
            goto label_337ba4;
        }
    }
    ctx->pc = 0x337B94u;
    // 0x337b94: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337b98: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x337b98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x337b9c: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x337B9Cu;
    {
        const bool branch_taken_0x337b9c = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x337b9c) {
            ctx->pc = 0x337BC0u;
            goto label_337bc0;
        }
    }
    ctx->pc = 0x337BA4u;
label_337ba4:
    // 0x337ba4: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x337BA4u;
    {
        const bool branch_taken_0x337ba4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x337ba4) {
            ctx->pc = 0x337BC0u;
            goto label_337bc0;
        }
    }
    ctx->pc = 0x337BACu;
    // 0x337bac: 0x80820056  lb          $v0, 0x56($a0)
    ctx->pc = 0x337bacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 86)));
    // 0x337bb0: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337BB0u;
    {
        const bool branch_taken_0x337bb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x337BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337BB0u;
        // 0x337bb4: 0x90830056  lbu         $v1, 0x56($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 86)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337bb0) {
            ctx->pc = 0x337BC0u;
            goto label_337bc0;
        }
    }
    ctx->pc = 0x337BB8u;
    // 0x337bb8: 0xa0850056  sb          $a1, 0x56($a0)
    ctx->pc = 0x337bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 5));
    // 0x337bbc: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x337bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_337bc0:
    // 0x337bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x337BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337BC8u;
}
