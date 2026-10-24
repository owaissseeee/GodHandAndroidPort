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

// Function: SetEv61HumanAlive
// Address: 0x298d78 - 0x298db8
void SetEv61HumanAlive_0x298d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetEv61HumanAlive_0x298d78");
#endif

    switch (ctx->pc) {
        case 0x298da8u: goto label_298da8;
        default: break;
    }

    ctx->pc = 0x298d78u;

    // 0x298d78: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x298d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x298d7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x298d7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298d80: 0xa0440548  sb          $a0, 0x548($v0)
    ctx->pc = 0x298d80u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3C0548u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3C0548u, _value); } while (0);
    // 0x298d84: 0x24430548  addiu       $v1, $v0, 0x548
    ctx->pc = 0x298d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1352));
    // 0x298d88: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x298d88u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3C0549u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3C0549u, _value); } while (0);
    // 0x298d8c: 0x3c070058  lui         $a3, 0x58
    ctx->pc = 0x298d8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x298d90: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x298d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x298d94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298d98: 0xa0660002  sb          $a2, 0x2($v1)
    ctx->pc = 0x298d98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3C054Au, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3C054Au, _value); } while (0);
    // 0x298d9c: 0x24e46af0  addiu       $a0, $a3, 0x6AF0
    ctx->pc = 0x298d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 27376));
    // 0x298da0: 0xc0a5f20  jal         func_297C80
    ctx->pc = 0x298DA0u;
    SET_GPR_U32(ctx, 31, 0x298DA8u);
    ctx->pc = 0x298DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298DA0u;
    // 0x298da4: 0x24a58db8  addiu       $a1, $a1, -0x7248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297C80u, 0x298DA0u, 0x298DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298DA8u;
label_298da8:
    // 0x298da8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298dac: 0x3e00008  jr          $ra
    ctx->pc = 0x298DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298DACu;
        // 0x298db0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298DACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298DB4u;
    // 0x298db4: 0x0  nop
    ctx->pc = 0x298db4u;
    // NOP
    ctx->pc = 0x298db8u;
}
