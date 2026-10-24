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

// Function: func_001809B0
// Address: 0x1809b0 - 0x180a10
void func_001809B0_0x1809b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001809B0_0x1809b0");
#endif

    switch (ctx->pc) {
        case 0x1809ecu: goto label_1809ec;
        case 0x1809fcu: goto label_1809fc;
        default: break;
    }

    ctx->pc = 0x1809b0u;

    // 0x1809b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1809b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1809b4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1809b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1809b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1809b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1809bc: 0x244226a8  addiu       $v0, $v0, 0x26A8
    ctx->pc = 0x1809bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9896));
    // 0x1809c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1809c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1809c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1809c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1809c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1809c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1809cc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1809ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1809d0: 0x8e03060c  lw          $v1, 0x60C($s0)
    ctx->pc = 0x1809d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1548)));
    // 0x1809d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1809D4u;
    {
        const bool branch_taken_0x1809d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1809D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1809D4u;
        // 0x1809d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1809d4) {
            ctx->pc = 0x1809F0u;
            goto label_1809f0;
        }
    }
    ctx->pc = 0x1809DCu;
    // 0x1809dc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1809dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1809e0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1809e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1809e4: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1809E4u;
    SET_GPR_U32(ctx, 31, 0x1809ECu);
    ctx->pc = 0x1809E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809E4u;
    // 0x1809e8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1809E4u, 0x1809ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1809ECu;
label_1809ec:
    // 0x1809ec: 0xae00060c  sw          $zero, 0x60C($s0)
    ctx->pc = 0x1809ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1548), GPR_U32(ctx, 0));
label_1809f0:
    // 0x1809f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1809f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1809f4: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1809F4u;
    SET_GPR_U32(ctx, 31, 0x1809FCu);
    ctx->pc = 0x1809F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1809F4u;
    // 0x1809f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1809F4u, 0x1809FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1809FCu;
label_1809fc:
    // 0x1809fc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1809fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180a00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180a00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x180a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180a08: 0x3e00008  jr          $ra
    ctx->pc = 0x180A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180A08u;
        // 0x180a0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180A10u;
}
