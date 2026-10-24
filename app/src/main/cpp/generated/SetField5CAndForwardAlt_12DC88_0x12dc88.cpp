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

// Function: SetField5CAndForwardAlt_12DC88
// Address: 0x12dc88 - 0x12dcb8
void SetField5CAndForwardAlt_12DC88_0x12dc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField5CAndForwardAlt_12DC88_0x12dc88");
#endif

    switch (ctx->pc) {
        case 0x12dcacu: goto label_12dcac;
        default: break;
    }

    ctx->pc = 0x12dc88u;

    // 0x12dc88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12dc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12dc8c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x12dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x12dc90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12dc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12dc94: 0x2442d5a8  addiu       $v0, $v0, -0x2A58
    ctx->pc = 0x12dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956456));
    // 0x12dc98: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x12dc98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x12dc9c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12DC9Cu;
    {
        const bool branch_taken_0x12dc9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12DCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DC9Cu;
        // 0x12dca0: 0xac82005c  sw          $v0, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12dc9c) {
            ctx->pc = 0x12DCACu;
            goto label_12dcac;
        }
    }
    ctx->pc = 0x12DCA4u;
    // 0x12dca4: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x12DCA4u;
    SET_GPR_U32(ctx, 31, 0x12DCACu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x12DCA4u, 0x12DCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DCACu;
label_12dcac:
    // 0x12dcac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12dcacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12dcb0: 0x3e00008  jr          $ra
    ctx->pc = 0x12DCB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12DCB0u;
        // 0x12dcb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12DCB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12DCB8u;
}
