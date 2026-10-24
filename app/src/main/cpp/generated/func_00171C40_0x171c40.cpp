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

// Function: func_00171C40
// Address: 0x171c40 - 0x171c90
void func_00171C40_0x171c40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00171C40_0x171c40");
#endif

    switch (ctx->pc) {
        case 0x171c64u: goto label_171c64;
        case 0x171c7cu: goto label_171c7c;
        default: break;
    }

    ctx->pc = 0x171c40u;

    // 0x171c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x171c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x171c44: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x171c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x171c48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x171c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x171c4c: 0x8c625888  lw          $v0, 0x5888($v1)
    ctx->pc = 0x171c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785888u));
    // 0x171c50: 0x24705888  addiu       $s0, $v1, 0x5888
    ctx->pc = 0x171c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22664));
    // 0x171c54: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x171C54u;
    {
        const bool branch_taken_0x171c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x171C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C54u;
        // 0x171c58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171c54) {
            ctx->pc = 0x171C7Cu;
            goto label_171c7c;
        }
    }
    ctx->pc = 0x171C5Cu;
    // 0x171c5c: 0xc06f780  jal         func_1BDE00
    ctx->pc = 0x171C5Cu;
    SET_GPR_U32(ctx, 31, 0x171C64u);
    ctx->pc = 0x1BDE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDE00u, 0x171C5Cu, 0x171C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C64u;
label_171c64:
    // 0x171c64: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x171c64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x171c68: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x171c68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x171c6c: 0x24a50e18  addiu       $a1, $a1, 0xE18
    ctx->pc = 0x171c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3608));
    // 0x171c70: 0x24c65858  addiu       $a2, $a2, 0x5858
    ctx->pc = 0x171c70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22616));
    // 0x171c74: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x171C74u;
    SET_GPR_U32(ctx, 31, 0x171C7Cu);
    ctx->pc = 0x171C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C74u;
    // 0x171c78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x171C74u, 0x171C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171C7Cu;
label_171c7c:
    // 0x171c7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x171c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171c84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x171c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171c88: 0x3e00008  jr          $ra
    ctx->pc = 0x171C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C88u;
        // 0x171c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171C90u;
}
