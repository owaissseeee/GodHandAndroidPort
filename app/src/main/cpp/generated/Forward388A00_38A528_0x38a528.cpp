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

// Function: Forward388A00_38A528
// Address: 0x38a528 - 0x38a548
void Forward388A00_38A528_0x38a528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward388A00_38A528_0x38a528");
#endif

    switch (ctx->pc) {
        case 0x38a53cu: goto label_38a53c;
        default: break;
    }

    ctx->pc = 0x38a528u;

    // 0x38a528: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a52c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x38a52cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x38a530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a534: 0xc0e2280  jal         func_388A00
    ctx->pc = 0x38A534u;
    SET_GPR_U32(ctx, 31, 0x38A53Cu);
    ctx->pc = 0x38A538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A534u;
    // 0x38a538: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388A00u, 0x38A534u, 0x38A53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A53Cu;
label_38a53c:
    // 0x38a53c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a53cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a540: 0x3e00008  jr          $ra
    ctx->pc = 0x38A540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A540u;
        // 0x38a544: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A548u;
}
