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

// Function: setAlphaScrollLayer
// Address: 0x2db318 - 0x2db370
void setAlphaScrollLayer_0x2db318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setAlphaScrollLayer_0x2db318");
#endif

    switch (ctx->pc) {
        case 0x2db338u: goto label_2db338;
        default: break;
    }

    ctx->pc = 0x2db318u;

    // 0x2db318: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x2db318u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x2db31c: 0x8cc24c38  lw          $v0, 0x4C38($a2)
    ctx->pc = 0x2db31cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x754C38u));
    // 0x2db320: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2db320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2db324: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2db324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2db328: 0x10a3000e  beq         $a1, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2DB328u;
    {
        const bool branch_taken_0x2db328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x2db328) {
            ctx->pc = 0x2DB364u;
            goto label_2db364;
        }
    }
    ctx->pc = 0x2DB330u;
    // 0x2db330: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2db330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db334: 0x0  nop
    ctx->pc = 0x2db334u;
    // NOP
label_2db338:
    // 0x2db338: 0x906202fd  lbu         $v0, 0x2FD($v1)
    ctx->pc = 0x2db338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 765)));
    // 0x2db33c: 0x54820005  bnel        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB33Cu;
    {
        const bool branch_taken_0x2db33c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db33c) {
            ctx->pc = 0x2DB340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB33Cu;
            // 0x2db340: 0x8cc34c38  lw          $v1, 0x4C38($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 19512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB354u;
            goto label_2db354;
        }
    }
    ctx->pc = 0x2DB344u;
    // 0x2db344: 0xe46c024c  swc1        $f12, 0x24C($v1)
    ctx->pc = 0x2db344u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 588), bits); }
    // 0x2db348: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2db348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db34c: 0xe44c031c  swc1        $f12, 0x31C($v0)
    ctx->pc = 0x2db34cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 796), bits); }
    // 0x2db350: 0x8cc34c38  lw          $v1, 0x4C38($a2)
    ctx->pc = 0x2db350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 19512)));
label_2db354:
    // 0x2db354: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2db354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x2db358: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db35c: 0x54a2fff6  bnel        $a1, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2DB35Cu;
    {
        const bool branch_taken_0x2db35c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db35c) {
            ctx->pc = 0x2DB360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB35Cu;
            // 0x2db360: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db338;
        }
    }
    ctx->pc = 0x2DB364u;
label_2db364:
    // 0x2db364: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB36Cu;
    // 0x2db36c: 0x0  nop
    ctx->pc = 0x2db36cu;
    // NOP
    ctx->pc = 0x2db370u;
}
