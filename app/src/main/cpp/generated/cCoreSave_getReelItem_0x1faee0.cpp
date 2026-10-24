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

// Function: cCoreSave_getReelItem
// Address: 0x1faee0 - 0x1faf20
void cCoreSave_getReelItem_0x1faee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getReelItem_0x1faee0");
#endif

    ctx->pc = 0x1faee0u;

    // 0x1faee0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1faee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faee4: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1faee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1faee8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAEE8u;
    {
        const bool branch_taken_0x1faee8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEE8u;
        // 0x1faeec: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faee8) {
            ctx->pc = 0x1FAEF8u;
            goto label_1faef8;
        }
    }
    ctx->pc = 0x1FAEF0u;
    // 0x1faef0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAEF0u;
        // 0x1faef4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAEF8u;
label_1faef8:
    // 0x1faef8: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x1faef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x1faefc: 0x8c437a38  lw          $v1, 0x7A38($v0)
    ctx->pc = 0x1faefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31288)));
    // 0x1faf00: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1faf00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1faf04: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FAF04u;
    {
        const bool branch_taken_0x1faf04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF04u;
        // 0x1faf08: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf04) {
            ctx->pc = 0x1FAF10u;
            goto label_1faf10;
        }
    }
    ctx->pc = 0x1FAF0Cu;
    // 0x1faf0c: 0xa0a20156  sb          $v0, 0x156($a1)
    ctx->pc = 0x1faf0cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 342), (uint8_t)GPR_U32(ctx, 2));
label_1faf10:
    // 0x1faf10: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1faf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1faf14: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF14u;
        // 0x1faf18: 0x90620156  lbu         $v0, 0x156($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 342)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAF14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAF1Cu;
    // 0x1faf1c: 0x0  nop
    ctx->pc = 0x1faf1cu;
    // NOP
    ctx->pc = 0x1faf20u;
}
