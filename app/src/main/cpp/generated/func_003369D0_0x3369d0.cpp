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

// Function: func_003369D0
// Address: 0x3369d0 - 0x336a08
void func_003369D0_0x3369d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003369D0_0x3369d0");
#endif

    switch (ctx->pc) {
        case 0x3369ecu: goto label_3369ec;
        default: break;
    }

    ctx->pc = 0x3369d0u;

    // 0x3369d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3369d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3369d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3369d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3369d8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3369D8u;
    {
        const bool branch_taken_0x3369d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3369DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3369D8u;
        // 0x3369dc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3369d8) {
            ctx->pc = 0x3369F8u;
            goto label_3369f8;
        }
    }
    ctx->pc = 0x3369E0u;
    // 0x3369e0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3369e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3369e4: 0xc0cd8cc  jal         func_336330
    ctx->pc = 0x3369E4u;
    SET_GPR_U32(ctx, 31, 0x3369ECu);
    ctx->pc = 0x3369E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3369E4u;
    // 0x3369e8: 0x24a551b8  addiu       $a1, $a1, 0x51B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336330u, 0x3369E4u, 0x3369ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3369ECu;
label_3369ec:
    // 0x3369ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3369ECu;
    {
        const bool branch_taken_0x3369ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3369F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3369ECu;
        // 0x3369f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3369ec) {
            ctx->pc = 0x3369FCu;
            goto label_3369fc;
        }
    }
    ctx->pc = 0x3369F4u;
    // 0x3369f4: 0x0  nop
    ctx->pc = 0x3369f4u;
    // NOP
label_3369f8:
    // 0x3369f8: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x3369f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3369fc:
    // 0x3369fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3369fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336a00: 0x3e00008  jr          $ra
    ctx->pc = 0x336A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A00u;
        // 0x336a04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x336A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x336A08u;
}
