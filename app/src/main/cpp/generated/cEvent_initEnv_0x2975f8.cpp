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

// Function: cEvent_initEnv
// Address: 0x2975f8 - 0x297660
void cEvent_initEnv_0x2975f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_initEnv_0x2975f8");
#endif

    switch (ctx->pc) {
        case 0x297628u: goto label_297628;
        case 0x29763cu: goto label_29763c;
        default: break;
    }

    ctx->pc = 0x2975f8u;

    // 0x2975f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2975f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2975fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2975fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x297600: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x297600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x297604: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x297604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x297608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29760c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29760cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x297610: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x297610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x297614: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x297614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x297618: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x297618u;
    {
        const bool branch_taken_0x297618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297618u;
        // 0x29761c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297618) {
            ctx->pc = 0x297648u;
            goto label_297648;
        }
    }
    ctx->pc = 0x297620u;
    // 0x297620: 0xc0a5d98  jal         func_297660
    ctx->pc = 0x297620u;
    SET_GPR_U32(ctx, 31, 0x297628u);
    ctx->pc = 0x297660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297660u, 0x297620u, 0x297628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297628u;
label_297628:
    // 0x297628: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x297628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x29762c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x29762cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x297630: 0x24846b30  addiu       $a0, $a0, 0x6B30
    ctx->pc = 0x297630u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27440));
    // 0x297634: 0xc0a64c8  jal         func_299320
    ctx->pc = 0x297634u;
    SET_GPR_U32(ctx, 31, 0x29763Cu);
    ctx->pc = 0x297638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297634u;
    // 0x297638: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299320u, 0x297634u, 0x29763Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29763Cu;
label_29763c:
    // 0x29763c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29763cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x297640: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x297640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x297644: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x297644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_297648:
    // 0x297648: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x297648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29764c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29764cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297650: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297650u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297654: 0x3e00008  jr          $ra
    ctx->pc = 0x297654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297654u;
        // 0x297658: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29765Cu;
    // 0x29765c: 0x0  nop
    ctx->pc = 0x29765cu;
    // NOP
    ctx->pc = 0x297660u;
}
