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

// Function: Forward38AA60_38A1F8
// Address: 0x38a1f8 - 0x38a218
void Forward38AA60_38A1F8_0x38a1f8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward38AA60_38A1F8_0x38a1f8");
#endif

    if (__builtin_expect(ctx->pc != 0x38a1f8u, 0)) {
        switch (ctx->pc) {
            case 0x38a20cu: goto label_38a20c;
            default: break;
        }
    }


    // 0x38a1f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a1fc: 0x73e00  sll         $a3, $a3, 24
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x38a200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a204: 0xc0e2a98  jal         func_38AA60
    SET_GPR_U32(ctx, 31, 0x38A20Cu);
    ctx->pc = 0x38A208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A204u;
    // 0x38a208: 0x73e03  sra         $a3, $a3, 24 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 24));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &get__7istreamPcic_0x38aa60, 0x38aa60u, 0x38a20cu)) {
        return;
    }
label_38a20c:
    // 0x38a20c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a210: 0x3e00008  jr          $ra
    ctx->pc = 0x38A210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A210u;
        // 0x38a214: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A218u;
}