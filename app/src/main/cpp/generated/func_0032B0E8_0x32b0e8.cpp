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

// Function: func_0032B0E8
// Address: 0x32b0e8 - 0x32b118
void func_0032B0E8_0x32b0e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B0E8_0x32b0e8");
#endif

    switch (ctx->pc) {
        case 0x32b100u: goto label_32b100;
        default: break;
    }

    ctx->pc = 0x32b0e8u;

    // 0x32b0e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32b0e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32b0ec: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32B0ECu;
    {
        const bool branch_taken_0x32b0ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B0ECu;
        // 0x32b0f0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b0ec) {
            ctx->pc = 0x32B108u;
            goto label_32b108;
        }
    }
    ctx->pc = 0x32B0F4u;
    // 0x32b0f4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32b0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32b0f8: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x32B0F8u;
    SET_GPR_U32(ctx, 31, 0x32B100u);
    ctx->pc = 0x32B0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B0F8u;
    // 0x32b0fc: 0x248424d0  addiu       $a0, $a0, 0x24D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32B0F8u, 0x32B100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B100u;
label_32b100:
    // 0x32b100: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x32B100u;
    {
        const bool branch_taken_0x32b100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B100u;
        // 0x32b104: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b100) {
            ctx->pc = 0x32B10Cu;
            goto label_32b10c;
        }
    }
    ctx->pc = 0x32B108u;
label_32b108:
    // 0x32b108: 0x84820060  lh          $v0, 0x60($a0)
    ctx->pc = 0x32b108u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
label_32b10c:
    // 0x32b10c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32b10cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32b110: 0x3e00008  jr          $ra
    ctx->pc = 0x32B110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B110u;
        // 0x32b114: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B118u;
}
