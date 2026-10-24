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

// Function: cCockTutorial_TutorialON
// Address: 0x1471a8 - 0x1471f0
void cCockTutorial_TutorialON_0x1471a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCockTutorial_TutorialON_0x1471a8");
#endif

    ctx->pc = 0x1471a8u;

    // 0x1471a8: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x1471a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x1471ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1471ACu;
    {
        const bool branch_taken_0x1471ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1471B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1471ACu;
        // 0x1471b0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1471ac) {
            ctx->pc = 0x1471E4u;
            goto label_1471e4;
        }
    }
    ctx->pc = 0x1471B4u;
    // 0x1471b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1471b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1471b8: 0xa48500ac  sh          $a1, 0xAC($a0)
    ctx->pc = 0x1471b8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 172), (uint16_t)GPR_U32(ctx, 5));
    // 0x1471bc: 0xa08200b8  sb          $v0, 0xB8($a0)
    ctx->pc = 0x1471bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 184), (uint8_t)GPR_U32(ctx, 2));
    // 0x1471c0: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x1471c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x1471c4: 0x8c8300a4  lw          $v1, 0xA4($a0)
    ctx->pc = 0x1471c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 164)));
    // 0x1471c8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1471c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x1471cc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1471ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1471d0: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x1471d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x1471d4: 0x8c8400a8  lw          $a0, 0xA8($a0)
    ctx->pc = 0x1471d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x1471d8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1471d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1471dc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1471dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1471e0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1471e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
label_1471e4:
    // 0x1471e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1471E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1471E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1471ECu;
    // 0x1471ec: 0x0  nop
    ctx->pc = 0x1471ecu;
    // NOP
    ctx->pc = 0x1471f0u;
}
