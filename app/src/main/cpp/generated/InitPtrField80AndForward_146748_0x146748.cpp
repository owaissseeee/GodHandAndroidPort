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

// Function: InitPtrField80AndForward_146748
// Address: 0x146748 - 0x146778
void InitPtrField80AndForward_146748_0x146748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPtrField80AndForward_146748_0x146748");
#endif

    switch (ctx->pc) {
        case 0x14676cu: goto label_14676c;
        default: break;
    }

    ctx->pc = 0x146748u;

    // 0x146748: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x146748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14674c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x14674cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x146750: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x146750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x146754: 0x2442dcc8  addiu       $v0, $v0, -0x2338
    ctx->pc = 0x146754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958280));
    // 0x146758: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x146758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x14675c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x14675Cu;
    {
        const bool branch_taken_0x14675c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x146760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14675Cu;
        // 0x146760: 0xac820080  sw          $v0, 0x80($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14675c) {
            ctx->pc = 0x14676Cu;
            goto label_14676c;
        }
    }
    ctx->pc = 0x146764u;
    // 0x146764: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x146764u;
    SET_GPR_U32(ctx, 31, 0x14676Cu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x146764u, 0x14676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14676Cu;
label_14676c:
    // 0x14676c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14676cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146770: 0x3e00008  jr          $ra
    ctx->pc = 0x146770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146770u;
        // 0x146774: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146778u;
}
