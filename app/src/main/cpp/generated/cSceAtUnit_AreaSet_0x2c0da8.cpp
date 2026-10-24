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

// Function: cSceAtUnit_AreaSet
// Address: 0x2c0da8 - 0x2c0dd8
void cSceAtUnit_AreaSet_0x2c0da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSceAtUnit_AreaSet_0x2c0da8");
#endif

    switch (ctx->pc) {
        case 0x2c0dc4u: goto label_2c0dc4;
        default: break;
    }

    ctx->pc = 0x2c0da8u;

    // 0x2c0da8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0dac: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x2c0dacu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x2c0db0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c0db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c0db4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2c0db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2c0db8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c0db8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c0dbc: 0xc07e22a  jal         func_1F88A8
    ctx->pc = 0x2C0DBCu;
    SET_GPR_U32(ctx, 31, 0x2C0DC4u);
    ctx->pc = 0x2C0DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0DBCu;
    // 0x2c0dc0: 0x30c600ff  andi        $a2, $a2, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F88A8u, 0x2C0DBCu, 0x2C0DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0DC4u;
label_2c0dc4:
    // 0x2c0dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c0dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0DC8u;
        // 0x2c0dcc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C0DD0u;
    // 0x2c0dd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2c0dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2c0dd4: 0x0  nop
    ctx->pc = 0x2c0dd4u;
    // NOP
    ctx->pc = 0x2c0dd8u;
}
