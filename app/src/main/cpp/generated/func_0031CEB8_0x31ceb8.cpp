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

// Function: func_0031CEB8
// Address: 0x31ceb8 - 0x31cef8
void func_0031CEB8_0x31ceb8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031CEB8_0x31ceb8");
#endif

    if (__builtin_expect(ctx->pc != 0x31ceb8u, 0)) {
        switch (ctx->pc) {
            case 0x31cee4u: goto label_31cee4;
            default: break;
        }
    }


    // 0x31ceb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31cebc: 0x3c060074  lui         $a2, 0x74
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)116 << 16));
    // 0x31cec0: 0x24033124  addiu       $v1, $zero, 0x3124
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12580));
    // 0x31cec4: 0x3c050074  lui         $a1, 0x74
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)116 << 16));
    // 0x31cec8: 0x2402066b  addiu       $v0, $zero, 0x66B
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1643));
    // 0x31cecc: 0x3c04d8a9  lui         $a0, 0xD8A9
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55465 << 16));
    // 0x31ced0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31ced0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31ced4: 0x3484523d  ori         $a0, $a0, 0x523D
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)21053);
    // 0x31ced8: 0xacc37b10  sw          $v1, 0x7B10($a2)
    ctx->pc = 0x31ced8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x747B10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x747B10u, _value); } while (0);
    // 0x31cedc: 0xc0c3cac  jal         func_30F2B0
    SET_GPR_U32(ctx, 31, 0x31CEE4u);
    ctx->pc = 0x31CEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CEDCu;
    // 0x31cee0: 0xaca27b14  sw          $v0, 0x7B14($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 31508), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0030F2B0_0x30f2b0, 0x30f2b0u, 0x31cee4u)) {
        return;
    }
label_31cee4:
    // 0x31cee4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31cee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31cee8: 0x3e00008  jr          $ra
    ctx->pc = 0x31CEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CEE8u;
        // 0x31ceec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x31cef0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x31cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x31cef4: 0x0  nop
    // NOP
    ctx->pc = 0x31cef8u;
}