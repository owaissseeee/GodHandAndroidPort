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

// Function: cSndSeVoice_Ctor
// Address: 0x2cda08 - 0x2cda38
void cSndSeVoice_Ctor_0x2cda08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndSeVoice_Ctor_0x2cda08");
#endif

    switch (ctx->pc) {
        case 0x2cda1cu: goto label_2cda1c;
        default: break;
    }

    ctx->pc = 0x2cda08u;

    // 0x2cda08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cda08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cda0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cda0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cda10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cda10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cda14: 0xc0b3692  jal         func_2CDA48
    ctx->pc = 0x2CDA14u;
    SET_GPR_U32(ctx, 31, 0x2CDA1Cu);
    ctx->pc = 0x2CDA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CDA14u;
    // 0x2cda18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CDA48u, 0x2CDA14u, 0x2CDA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CDA1Cu;
label_2cda1c:
    // 0x2cda1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cda1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cda20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cda20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cda24: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cda24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cda28: 0x3e00008  jr          $ra
    ctx->pc = 0x2CDA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CDA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CDA28u;
        // 0x2cda2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CDA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CDA30u;
    // 0x2cda30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2cda30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cda34: 0x0  nop
    ctx->pc = 0x2cda34u;
    // NOP
    ctx->pc = 0x2cda38u;
}
