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

// Function: func_003367C0
// Address: 0x3367c0 - 0x3367f8
void func_003367C0_0x3367c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003367C0_0x3367c0");
#endif

    switch (ctx->pc) {
        case 0x3367dcu: goto label_3367dc;
        default: break;
    }

    ctx->pc = 0x3367c0u;

    // 0x3367c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3367c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3367c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3367c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3367c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3367C8u;
    {
        const bool branch_taken_0x3367c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3367CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367C8u;
        // 0x3367cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3367c8) {
            ctx->pc = 0x3367E8u;
            goto label_3367e8;
        }
    }
    ctx->pc = 0x3367D0u;
    // 0x3367d0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3367d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3367d4: 0xc0cd8cc  jal         func_336330
    ctx->pc = 0x3367D4u;
    SET_GPR_U32(ctx, 31, 0x3367DCu);
    ctx->pc = 0x3367D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3367D4u;
    // 0x3367d8: 0x24a55130  addiu       $a1, $a1, 0x5130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336330u, 0x3367D4u, 0x3367DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3367DCu;
label_3367dc:
    // 0x3367dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3367DCu;
    {
        const bool branch_taken_0x3367dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3367E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367DCu;
        // 0x3367e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3367dc) {
            ctx->pc = 0x3367ECu;
            goto label_3367ec;
        }
    }
    ctx->pc = 0x3367E4u;
    // 0x3367e4: 0x0  nop
    ctx->pc = 0x3367e4u;
    // NOP
label_3367e8:
    // 0x3367e8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x3367e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3367ec:
    // 0x3367ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3367ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3367f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3367F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3367F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367F0u;
        // 0x3367f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3367F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3367F8u;
}
