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

// Function: cCoreSave_getState155
// Address: 0x1faea0 - 0x1faee0
void cCoreSave_getState155_0x1faea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getState155_0x1faea0");
#endif

    ctx->pc = 0x1faea0u;

    // 0x1faea0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1faea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faea4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1faea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1faea8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAEA8u;
    {
        const bool branch_taken_0x1faea8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEA8u;
        // 0x1faeac: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faea8) {
            ctx->pc = 0x1FAEB8u;
            goto label_1faeb8;
        }
    }
    ctx->pc = 0x1FAEB0u;
    // 0x1faeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEB0u;
        // 0x1faeb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAEB8u;
label_1faeb8:
    // 0x1faeb8: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x1faeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x1faebc: 0x8c437a38  lw          $v1, 0x7A38($v0)
    ctx->pc = 0x1faebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31288)));
    // 0x1faec0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1faec0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1faec4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAEC4u;
    {
        const bool branch_taken_0x1faec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEC4u;
        // 0x1faec8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faec4) {
            ctx->pc = 0x1FAED0u;
            goto label_1faed0;
        }
    }
    ctx->pc = 0x1FAECCu;
    // 0x1faecc: 0xa0a20155  sb          $v0, 0x155($a1)
    ctx->pc = 0x1faeccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 341), (uint8_t)GPR_U32(ctx, 2));
label_1faed0:
    // 0x1faed0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1faed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1faed4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAED4u;
        // 0x1faed8: 0x90620155  lbu         $v0, 0x155($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 341)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAEDCu;
    // 0x1faedc: 0x0  nop
    ctx->pc = 0x1faedcu;
    // NOP
    ctx->pc = 0x1faee0u;
}
