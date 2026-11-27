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

// Function: func_00375A78
// Address: 0x375a78 - 0x375ab0
void func_00375A78_0x375a78(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00375A78_0x375a78");
#endif

    if (__builtin_expect(ctx->pc != 0x375a78u, 0)) {
        switch (ctx->pc) {
            case 0x375aa0u: goto label_375aa0;
            default: break;
        }
    }


    // 0x375a78: 0x41400  sll         $v0, $a0, 16
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x375a7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375a80: 0x3c040077  lui         $a0, 0x77
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)119 << 16));
    // 0x375a84: 0x212c3  sra         $v0, $v0, 11
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
    // 0x375a88: 0x2484ea50  addiu       $a0, $a0, -0x15B0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
    // 0x375a8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x375a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x375a90: 0x442021  addu        $a0, $v0, $a0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x375a94: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375a98: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x375AA0u);
    ctx->pc = 0x375A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x375A98u;
    // 0x375a9c: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x375aa0u)) {
        return;
    }
label_375aa0:
    // 0x375aa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x375aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x375aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x375AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375AA4u;
        // 0x375aa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x375aac: 0x0  nop
    // NOP
    ctx->pc = 0x375ab0u;
}