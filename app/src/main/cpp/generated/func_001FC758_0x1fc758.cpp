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

// Function: func_001FC758
// Address: 0x1fc758 - 0x1fc7a8
void func_001FC758_0x1fc758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FC758_0x1fc758");
#endif

    switch (ctx->pc) {
        case 0x1fc780u: goto label_1fc780;
        default: break;
    }

    ctx->pc = 0x1fc758u;

    // 0x1fc758: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1fc758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fc75c: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1FC75Cu;
    {
        const bool branch_taken_0x1fc75c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1fc75c) {
            ctx->pc = 0x1FC79Cu;
            goto label_1fc79c;
        }
    }
    ctx->pc = 0x1FC764u;
    // 0x1fc764: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FC764u;
    {
        const bool branch_taken_0x1fc764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC764u;
        // 0x1fc768: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc764) {
            ctx->pc = 0x1FC79Cu;
            goto label_1fc79c;
        }
    }
    ctx->pc = 0x1FC76Cu;
    // 0x1fc76c: 0x244286d0  addiu       $v0, $v0, -0x7930
    ctx->pc = 0x1fc76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936272));
    // 0x1fc770: 0xf8400190  sqc2        $vf0, 0x190($v0)
    ctx->pc = 0x1fc770u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 400), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1fc774: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1fc774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fc778: 0x2444028a  addiu       $a0, $v0, 0x28A
    ctx->pc = 0x1fc778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 650));
    // 0x1fc77c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x1fc77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1fc780:
    // 0x1fc780: 0xa0800004  sb          $zero, 0x4($a0)
    ctx->pc = 0x1fc780u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fc784: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1fc784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fc788: 0x0  nop
    ctx->pc = 0x1fc788u;
    // NOP
    // 0x1fc78c: 0x0  nop
    ctx->pc = 0x1fc78cu;
    // NOP
    // 0x1fc790: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FC790u;
    {
        const bool branch_taken_0x1fc790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FC794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC790u;
        // 0x1fc794: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc790) {
            ctx->pc = 0x1FC780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc780;
        }
    }
    ctx->pc = 0x1FC798u;
    // 0x1fc798: 0xac400b8c  sw          $zero, 0xB8C($v0)
    ctx->pc = 0x1fc798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2956), GPR_U32(ctx, 0));
label_1fc79c:
    // 0x1fc79c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC7A4u;
    // 0x1fc7a4: 0x0  nop
    ctx->pc = 0x1fc7a4u;
    // NOP
    ctx->pc = 0x1fc7a8u;
}
