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

// Function: func_001C7D98
// Address: 0x1c7d98 - 0x1c7de0
void func_001C7D98_0x1c7d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C7D98_0x1c7d98");
#endif

    switch (ctx->pc) {
        case 0x1c7dacu: goto label_1c7dac;
        default: break;
    }

    ctx->pc = 0x1c7d98u;

    // 0x1c7d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c7d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c7d9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c7d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c7da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c7da4: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1C7DA4u;
    SET_GPR_U32(ctx, 31, 0x1C7DACu);
    ctx->pc = 0x1C7DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C7DA4u;
    // 0x1c7da8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1C7DA4u, 0x1C7DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7DACu;
label_1c7dac:
    // 0x1c7dac: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1c7dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1c7db0: 0x24639dd8  addiu       $v1, $v1, -0x6228
    ctx->pc = 0x1c7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942168));
    // 0x1c7db4: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1c7db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1c7db8: 0xfa000610  sqc2        $vf0, 0x610($s0)
    ctx->pc = 0x1c7db8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1552), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c7dbc: 0xfa000630  sqc2        $vf0, 0x630($s0)
    ctx->pc = 0x1c7dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1584), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1c7dc0: 0x8e0305b0  lw          $v1, 0x5B0($s0)
    ctx->pc = 0x1c7dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x1c7dc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c7dc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c7dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c7dcc: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x1c7dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x1c7dd0: 0xae0305b0  sw          $v1, 0x5B0($s0)
    ctx->pc = 0x1c7dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 3));
    // 0x1c7dd4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c7dd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c7dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C7DD8u;
        // 0x1c7ddc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C7DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C7DE0u;
}
