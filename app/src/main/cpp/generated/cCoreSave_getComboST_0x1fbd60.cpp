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

// Function: cCoreSave_getComboST
// Address: 0x1fbd60 - 0x1fbda0
void cCoreSave_getComboST_0x1fbd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getComboST_0x1fbd60");
#endif

    ctx->pc = 0x1fbd60u;

    // 0x1fbd60: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1fbd60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbd64: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1fbd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fbd68: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FBD68u;
    {
        const bool branch_taken_0x1fbd68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD68u;
        // 0x1fbd6c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd68) {
            ctx->pc = 0x1FBD78u;
            goto label_1fbd78;
        }
    }
    ctx->pc = 0x1FBD70u;
    // 0x1fbd70: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBD70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD70u;
        // 0x1fbd74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBD70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBD78u;
label_1fbd78:
    // 0x1fbd78: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x1fbd78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x1fbd7c: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x1fbd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31284)));
    // 0x1fbd80: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1fbd80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1fbd84: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FBD84u;
    {
        const bool branch_taken_0x1fbd84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD84u;
        // 0x1fbd88: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbd84) {
            ctx->pc = 0x1FBD90u;
            goto label_1fbd90;
        }
    }
    ctx->pc = 0x1FBD8Cu;
    // 0x1fbd8c: 0xa0a2008a  sb          $v0, 0x8A($a1)
    ctx->pc = 0x1fbd8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 138), (uint8_t)GPR_U32(ctx, 2));
label_1fbd90:
    // 0x1fbd90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1fbd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1fbd94: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBD94u;
        // 0x1fbd98: 0x9062008a  lbu         $v0, 0x8A($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 138)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBD9Cu;
    // 0x1fbd9c: 0x0  nop
    ctx->pc = 0x1fbd9cu;
    // NOP
    ctx->pc = 0x1fbda0u;
}
