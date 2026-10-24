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

// Function: cCoreSave_setClearNum
// Address: 0x1fa690 - 0x1fa6c0
void cCoreSave_setClearNum_0x1fa690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_setClearNum_0x1fa690");
#endif

    ctx->pc = 0x1fa690u;

    // 0x1fa690: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fa690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa694: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA694u;
    {
        const bool branch_taken_0x1fa694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA694u;
        // 0x1fa698: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa694) {
            ctx->pc = 0x1FA6B8u;
            goto label_1fa6b8;
        }
    }
    ctx->pc = 0x1FA69Cu;
    // 0x1fa69c: 0xa4450010  sh          $a1, 0x10($v0)
    ctx->pc = 0x1fa69cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fa6a0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1fa6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fa6a4: 0x94820010  lhu         $v0, 0x10($a0)
    ctx->pc = 0x1fa6a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1fa6a8: 0x2c420064  sltiu       $v0, $v0, 0x64
    ctx->pc = 0x1fa6a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)100) ? 1 : 0);
    // 0x1fa6ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FA6ACu;
    {
        const bool branch_taken_0x1fa6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA6ACu;
        // 0x1fa6b0: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa6ac) {
            ctx->pc = 0x1FA6B8u;
            goto label_1fa6b8;
        }
    }
    ctx->pc = 0x1FA6B4u;
    // 0x1fa6b4: 0xa4820010  sh          $v0, 0x10($a0)
    ctx->pc = 0x1fa6b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 16), (uint16_t)GPR_U32(ctx, 2));
label_1fa6b8:
    // 0x1fa6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA6C0u;
}
