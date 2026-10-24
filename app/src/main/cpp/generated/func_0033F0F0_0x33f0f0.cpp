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

// Function: func_0033F0F0
// Address: 0x33f0f0 - 0x33f130
void func_0033F0F0_0x33f0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033F0F0_0x33f0f0");
#endif

    switch (ctx->pc) {
        case 0x33f10cu: goto label_33f10c;
        default: break;
    }

    ctx->pc = 0x33f0f0u;

    // 0x33f0f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33f0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33f0f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f0f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f0f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f0fc: 0x2484adc0  addiu       $a0, $a0, -0x5240
    ctx->pc = 0x33f0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946240));
    // 0x33f100: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f104: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33F104u;
    SET_GPR_U32(ctx, 31, 0x33F10Cu);
    ctx->pc = 0x33F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F104u;
    // 0x33f108: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33F104u, 0x33F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F10Cu;
label_33f10c:
    // 0x33f10c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x33f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x33f110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f114: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33f114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33f118: 0xac60adb8  sw          $zero, -0x5248($v1)
    ctx->pc = 0x33f118u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EADB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EADB8u, _value); } while (0);
    // 0x33f11c: 0xac40adbc  sw          $zero, -0x5244($v0)
    ctx->pc = 0x33f11cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EADBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EADBCu, _value); } while (0);
    // 0x33f120: 0x3e00008  jr          $ra
    ctx->pc = 0x33F120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F120u;
        // 0x33f124: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F120u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F128u;
    // 0x33f128: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x33f128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33f12c: 0x0  nop
    ctx->pc = 0x33f12cu;
    // NOP
    ctx->pc = 0x33f130u;
}
