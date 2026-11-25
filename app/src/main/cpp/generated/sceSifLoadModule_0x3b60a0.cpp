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

// Function: sceSifLoadModule
// Address: 0x3b60a0 - 0x3b60e8
void sceSifLoadModule_0x3b60a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifLoadModule_0x3b60a0");
#endif

    if (__builtin_expect(ctx->pc != 0x3b60a0u, 0)) {
        switch (ctx->pc) {
            case 0x3b60b4u: goto label_3b60b4;
            default: break;
        }
    }


    // 0x3b60a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b60a4: 0x402d  daddu       $t0, $zero, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b60a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b60a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b60ac: 0xc0ed79e  jal         func_3B5E78
    SET_GPR_U32(ctx, 31, 0x3B60B4u);
    ctx->pc = 0x3B60B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B60ACu;
    // 0x3b60b0: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &_sceSifLoadModule_0x3b5e78, 0x3b5e78u, 0x3b60b4u)) {
        return;
    }
    ctx->pc = 0x3B60B4u;
label_3b60b4:
    // 0x3b60b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b60b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b60b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B60B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B60BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B60B8u;
        // 0x3b60bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B60B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x3b60c0: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b60c4: 0x0  nop
    // NOP
    // 0x3b60c8: 0x27bd0070  addiu       $sp, $sp, 0x70
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x3b60cc: 0x0  nop
    // NOP
    // 0x3b60d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b60d4: 0x0  nop
    // NOP
    // 0x3b60d8: 0x27bd0060  addiu       $sp, $sp, 0x60
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x3b60dc: 0x0  nop
    // NOP
    // 0x3b60e0: 0x27bd0050  addiu       $sp, $sp, 0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x3b60e4: 0x0  nop
    // NOP
    ctx->pc = 0x3b60e8u;
}