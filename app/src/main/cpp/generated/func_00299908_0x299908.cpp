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

// Function: func_00299908
// Address: 0x299908 - 0x299948
void func_00299908_0x299908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00299908_0x299908");
#endif

    ctx->pc = 0x299908u;

    // 0x299908: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x299908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x29990c: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x29990cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x299910: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x299910u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x299914: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x299914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x299918: 0x94830014  lhu         $v1, 0x14($a0)
    ctx->pc = 0x299918u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x29991c: 0x9c820010  lwu         $v0, 0x10($a0)
    ctx->pc = 0x29991cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x299920: 0x31bf8  dsll        $v1, $v1, 15
    ctx->pc = 0x299920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 15);
    // 0x299924: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x299924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x299928: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x299928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x29992c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x29992cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x299930: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x299930u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x299934: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x299934u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x299938: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x299938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29993c: 0x3e00008  jr          $ra
    ctx->pc = 0x29993Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29993Cu;
        // 0x299940: 0xfc430008  sd          $v1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29993Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x299944u;
    // 0x299944: 0x0  nop
    ctx->pc = 0x299944u;
    // NOP
    ctx->pc = 0x299948u;
}
