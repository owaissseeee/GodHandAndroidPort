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

// Function: _sceSnprintf_pf
// Address: 0x3b1e90 - 0x3b1ee0
void _sceSnprintf_pf_0x3b1e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sceSnprintf_pf_0x3b1e90");
#endif

    switch (ctx->pc) {
        case 0x3b1ebcu: goto label_3b1ebc;
        default: break;
    }

    ctx->pc = 0x3b1e90u;

    // 0x3b1e90: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b1e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b1e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b1e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b1e98: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x3b1e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x3b1e9c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3b1e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1ea0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b1ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b1ea4: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x3b1ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3b1ea8: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3b1ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b1eac: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x3b1eacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x3b1eb0: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x3b1eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x3b1eb4: 0xc0ec434  jal         func_3B10D0
    ctx->pc = 0x3B1EB4u;
    SET_GPR_U32(ctx, 31, 0x3B1EBCu);
    ctx->pc = 0x3B1EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B1EB4u;
    // 0x3b1eb8: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B10D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B10D0u, 0x3B1EB4u, 0x3B1EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B1EBCu;
label_3b1ebc:
    // 0x3b1ebc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b1ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b1ec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b1ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b1ec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b1ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b1ec8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3b1ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3b1ecc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3b1eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x3b1ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b1ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b1ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B1ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B1ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B1ED4u;
        // 0x3b1ed8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B1ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B1EDCu;
    // 0x3b1edc: 0x0  nop
    ctx->pc = 0x3b1edcu;
    // NOP
    ctx->pc = 0x3b1ee0u;
}
