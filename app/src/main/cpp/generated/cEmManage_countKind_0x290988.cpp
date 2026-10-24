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

// Function: cEmManage_countKind
// Address: 0x290988 - 0x2909b8
void cEmManage_countKind_0x290988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_countKind_0x290988");
#endif

    switch (ctx->pc) {
        case 0x290998u: goto label_290998;
        default: break;
    }

    ctx->pc = 0x290988u;

    // 0x290988: 0x8c840500  lw          $a0, 0x500($a0)
    ctx->pc = 0x290988u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1280)));
    // 0x29098c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x29098Cu;
    {
        const bool branch_taken_0x29098c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x290990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29098Cu;
        // 0x290990: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29098c) {
            ctx->pc = 0x2909B0u;
            goto label_2909b0;
        }
    }
    ctx->pc = 0x290994u;
    // 0x290994: 0x0  nop
    ctx->pc = 0x290994u;
    // NOP
label_290998:
    // 0x290998: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x290998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x29099c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x29099cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2909a0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2909a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2909a4: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x2909a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x2909a8: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2909A8u;
    {
        const bool branch_taken_0x2909a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2909ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909A8u;
        // 0x2909ac: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909a8) {
            ctx->pc = 0x290998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290998;
        }
    }
    ctx->pc = 0x2909B0u;
label_2909b0:
    // 0x2909b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2909B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2909B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909B0u;
        // 0x2909b4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2909B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2909B8u;
}
