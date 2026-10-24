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

// Function: func_0033F0B8
// Address: 0x33f0b8 - 0x33f0f0
void func_0033F0B8_0x33f0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033F0B8_0x33f0b8");
#endif

    switch (ctx->pc) {
        case 0x33f0d4u: goto label_33f0d4;
        default: break;
    }

    ctx->pc = 0x33f0b8u;

    // 0x33f0b8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x33f0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x33f0bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33f0bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33f0c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33f0c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f0c4: 0x2484adc0  addiu       $a0, $a0, -0x5240
    ctx->pc = 0x33f0c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946240));
    // 0x33f0c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f0cc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x33F0CCu;
    SET_GPR_U32(ctx, 31, 0x33F0D4u);
    ctx->pc = 0x33F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F0CCu;
    // 0x33f0d0: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x33F0CCu, 0x33F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F0D4u;
label_33f0d4:
    // 0x33f0d4: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x33f0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x33f0d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f0dc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x33f0e0: 0xac60adb8  sw          $zero, -0x5248($v1)
    ctx->pc = 0x33f0e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EADB8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EADB8u, _value); } while (0);
    // 0x33f0e4: 0xac40adbc  sw          $zero, -0x5244($v0)
    ctx->pc = 0x33f0e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EADBCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EADBCu, _value); } while (0);
    // 0x33f0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x33F0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F0E8u;
        // 0x33f0ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F0F0u;
}
