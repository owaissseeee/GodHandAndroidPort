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

// Function: func_00187C38
// Address: 0x187c38 - 0x187c88
void func_00187C38_0x187c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00187C38_0x187c38");
#endif

    switch (ctx->pc) {
        case 0x187c5cu: goto label_187c5c;
        case 0x187c74u: goto label_187c74;
        default: break;
    }

    ctx->pc = 0x187c38u;

    // 0x187c38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x187c3c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x187c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x187c40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x187c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x187c44: 0x8c625b08  lw          $v0, 0x5B08($v1)
    ctx->pc = 0x187c44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785B08u));
    // 0x187c48: 0x24705b08  addiu       $s0, $v1, 0x5B08
    ctx->pc = 0x187c48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 23304));
    // 0x187c4c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x187C4Cu;
    {
        const bool branch_taken_0x187c4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C4Cu;
        // 0x187c50: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187c4c) {
            ctx->pc = 0x187C74u;
            goto label_187c74;
        }
    }
    ctx->pc = 0x187C54u;
    // 0x187c54: 0xc070efa  jal         func_1C3BE8
    ctx->pc = 0x187C54u;
    SET_GPR_U32(ctx, 31, 0x187C5Cu);
    ctx->pc = 0x1C3BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3BE8u, 0x187C54u, 0x187C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C5Cu;
label_187c5c:
    // 0x187c5c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x187c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x187c60: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x187c60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x187c64: 0x24a53300  addiu       $a1, $a1, 0x3300
    ctx->pc = 0x187c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13056));
    // 0x187c68: 0x24c65798  addiu       $a2, $a2, 0x5798
    ctx->pc = 0x187c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22424));
    // 0x187c6c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x187C6Cu;
    SET_GPR_U32(ctx, 31, 0x187C74u);
    ctx->pc = 0x187C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187C6Cu;
    // 0x187c70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x187C6Cu, 0x187C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187C74u;
label_187c74:
    // 0x187c74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x187c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187c78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x187c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187c7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x187c7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187c80: 0x3e00008  jr          $ra
    ctx->pc = 0x187C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187C80u;
        // 0x187c84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x187C88u;
}
