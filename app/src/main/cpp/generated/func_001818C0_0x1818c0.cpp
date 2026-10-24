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

// Function: func_001818C0
// Address: 0x1818c0 - 0x181920
void func_001818C0_0x1818c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001818C0_0x1818c0");
#endif

    switch (ctx->pc) {
        case 0x1818fcu: goto label_1818fc;
        case 0x18190cu: goto label_18190c;
        default: break;
    }

    ctx->pc = 0x1818c0u;

    // 0x1818c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1818c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1818c4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1818c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1818c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1818c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1818cc: 0x24422858  addiu       $v0, $v0, 0x2858
    ctx->pc = 0x1818ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10328));
    // 0x1818d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1818d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1818d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1818d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1818d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1818dc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1818dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1818e0: 0x8e030650  lw          $v1, 0x650($s0)
    ctx->pc = 0x1818e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x1818e4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1818E4u;
    {
        const bool branch_taken_0x1818e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1818E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1818E4u;
        // 0x1818e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1818e4) {
            ctx->pc = 0x181900u;
            goto label_181900;
        }
    }
    ctx->pc = 0x1818ECu;
    // 0x1818ec: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1818ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1818f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1818f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1818f4: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x1818F4u;
    SET_GPR_U32(ctx, 31, 0x1818FCu);
    ctx->pc = 0x1818F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1818F4u;
    // 0x1818f8: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x1818F4u, 0x1818FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1818FCu;
label_1818fc:
    // 0x1818fc: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x1818fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
label_181900:
    // 0x181900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181904: 0xc071f78  jal         func_1C7DE0
    ctx->pc = 0x181904u;
    SET_GPR_U32(ctx, 31, 0x18190Cu);
    ctx->pc = 0x181908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181904u;
    // 0x181908: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7DE0u, 0x181904u, 0x18190Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18190Cu;
label_18190c:
    // 0x18190c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18190cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x181910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181918: 0x3e00008  jr          $ra
    ctx->pc = 0x181918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18191Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181918u;
        // 0x18191c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181920u;
}
