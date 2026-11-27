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

// Function: sceSifLoadModuleBuffer
// Address: 0x3b5e50 - 0x3b5e78
void sceSifLoadModuleBuffer_0x3b5e50(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifLoadModuleBuffer_0x3b5e50");
#endif

    if (__builtin_expect(ctx->pc != 0x3b5e50u, 0)) {
        switch (ctx->pc) {
            case 0x3b5e60u: goto label_3b5e60;
            default: break;
        }
    }


    // 0x3b5e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b5e54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b5e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b5e58: 0xc0ed712  jal         func_3B5C48
    SET_GPR_U32(ctx, 31, 0x3B5E60u);
    ctx->pc = 0x3B5E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B5E58u;
    // 0x3b5e5c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &_sceSifLoadModuleBuffer_0x3b5c48, 0x3b5c48u, 0x3b5e60u)) {
        return;
    }
label_3b5e60:
    // 0x3b5e60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b5e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b5e64: 0x3e00008  jr          $ra
    ctx->pc = 0x3B5E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B5E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B5E64u;
        // 0x3b5e68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B5E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x3b5e6c: 0x0  nop
    // NOP
    // 0x3b5e70: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3b5e74: 0x0  nop
    // NOP
    ctx->pc = 0x3b5e78u;
}