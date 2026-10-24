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

// Function: cScenario_endCasinoBattle
// Address: 0x2c4a18 - 0x2c4a70
void cScenario_endCasinoBattle_0x2c4a18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_endCasinoBattle_0x2c4a18");
#endif

    switch (ctx->pc) {
        case 0x2c4a30u: goto label_2c4a30;
        default: break;
    }

    ctx->pc = 0x2c4a18u;

    // 0x2c4a18: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c4a1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c4a1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c4a20: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x2c4a20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x2c4a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4a28: 0xc0b000e  jal         func_2C0038
    ctx->pc = 0x2C4A28u;
    SET_GPR_U32(ctx, 31, 0x2C4A30u);
    ctx->pc = 0x2C0038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0038u, 0x2C4A28u, 0x2C4A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4A30u;
label_2c4a30:
    // 0x2c4a30: 0x3c070074  lui         $a3, 0x74
    ctx->pc = 0x2c4a30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)116 << 16));
    // 0x2c4a34: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2c4a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x2c4a38: 0x8ce37a24  lw          $v1, 0x7A24($a3)
    ctx->pc = 0x2c4a38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A24u));
    // 0x2c4a3c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2c4a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2c4a40: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x2c4a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x2c4a44: 0x3c04fbff  lui         $a0, 0xFBFF
    ctx->pc = 0x2c4a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64511 << 16));
    // 0x2c4a48: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c4a48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c4a4c: 0x8ca69b70  lw          $a2, -0x6490($a1)
    ctx->pc = 0x2c4a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294941552)));
    // 0x2c4a50: 0xace37a24  sw          $v1, 0x7A24($a3)
    ctx->pc = 0x2c4a50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 31268), GPR_U32(ctx, 3));
    // 0x2c4a54: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2c4a54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2c4a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4a5c: 0x8cc20014  lw          $v0, 0x14($a2)
    ctx->pc = 0x2c4a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2c4a60: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2c4a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2c4a64: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2c4a64u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x2c4a68: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4A68u;
        // 0x2c4a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4A70u;
}
