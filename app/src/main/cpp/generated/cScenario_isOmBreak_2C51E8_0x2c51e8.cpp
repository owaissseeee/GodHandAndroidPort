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

// Function: cScenario_isOmBreak_2C51E8
// Address: 0x2c51e8 - 0x2c5220
void cScenario_isOmBreak_2C51E8_0x2c51e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cScenario_isOmBreak_2C51E8_0x2c51e8");
#endif

    switch (ctx->pc) {
        case 0x2c5204u: goto label_2c5204;
        case 0x2c5210u: goto label_2c5210;
        default: break;
    }

    ctx->pc = 0x2c51e8u;

    // 0x2c51e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c51e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c51ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c51ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c51f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c51f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c51f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c51f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c51f8: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2c51f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2c51fc: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x2C51FCu;
    SET_GPR_U32(ctx, 31, 0x2C5204u);
    ctx->pc = 0x2C5200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C51FCu;
    // 0x2c5200: 0x24844c58  addiu       $a0, $a0, 0x4C58 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x2C51FCu, 0x2C5204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5204u;
label_2c5204:
    // 0x2c5204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c5204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5208: 0xc0b1444  jal         func_2C5110
    ctx->pc = 0x2C5208u;
    SET_GPR_U32(ctx, 31, 0x2C5210u);
    ctx->pc = 0x2C520Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C5208u;
    // 0x2c520c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5110u, 0x2C5208u, 0x2C5210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C5210u;
label_2c5210:
    // 0x2c5210: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c5210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c5214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c5218: 0x3e00008  jr          $ra
    ctx->pc = 0x2C5218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C5218u;
        // 0x2c521c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C5218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C5220u;
}
