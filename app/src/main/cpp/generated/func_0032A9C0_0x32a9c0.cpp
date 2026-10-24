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

// Function: func_0032A9C0
// Address: 0x32a9c0 - 0x32a9f0
void func_0032A9C0_0x32a9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032A9C0_0x32a9c0");
#endif

    switch (ctx->pc) {
        case 0x32a9d8u: goto label_32a9d8;
        default: break;
    }

    ctx->pc = 0x32a9c0u;

    // 0x32a9c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a9c4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32A9C4u;
    {
        const bool branch_taken_0x32a9c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9C4u;
        // 0x32a9c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a9c4) {
            ctx->pc = 0x32A9E0u;
            goto label_32a9e0;
        }
    }
    ctx->pc = 0x32A9CCu;
    // 0x32a9cc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32a9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32a9d0: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x32A9D0u;
    SET_GPR_U32(ctx, 31, 0x32A9D8u);
    ctx->pc = 0x32A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A9D0u;
    // 0x32a9d4: 0x24842288  addiu       $a0, $a0, 0x2288 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32A9D0u, 0x32A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A9D8u;
label_32a9d8:
    // 0x32a9d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32A9D8u;
    {
        const bool branch_taken_0x32a9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9D8u;
        // 0x32a9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a9d8) {
            ctx->pc = 0x32A9E4u;
            goto label_32a9e4;
        }
    }
    ctx->pc = 0x32A9E0u;
label_32a9e0:
    // 0x32a9e0: 0x84820046  lh          $v0, 0x46($a0)
    ctx->pc = 0x32a9e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
label_32a9e4:
    // 0x32a9e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x32A9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A9E8u;
        // 0x32a9ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A9F0u;
}
