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

// Function: func_00179DE0
// Address: 0x179de0 - 0x179e40
void func_00179DE0_0x179de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00179DE0_0x179de0");
#endif

    switch (ctx->pc) {
        case 0x179e1cu: goto label_179e1c;
        case 0x179e2cu: goto label_179e2c;
        default: break;
    }

    ctx->pc = 0x179de0u;

    // 0x179de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x179de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x179de4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x179de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x179de8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x179de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x179dec: 0x24421938  addiu       $v0, $v0, 0x1938
    ctx->pc = 0x179decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6456));
    // 0x179df0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x179df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x179df4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x179df4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179df8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x179df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x179dfc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x179dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x179e00: 0x8e030650  lw          $v1, 0x650($s0)
    ctx->pc = 0x179e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x179e04: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x179E04u;
    {
        const bool branch_taken_0x179e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E04u;
        // 0x179e08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e04) {
            ctx->pc = 0x179E20u;
            goto label_179e20;
        }
    }
    ctx->pc = 0x179E0Cu;
    // 0x179e0c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x179e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x179e10: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x179e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e14: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x179E14u;
    SET_GPR_U32(ctx, 31, 0x179E1Cu);
    ctx->pc = 0x179E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E14u;
    // 0x179e18: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x179E14u, 0x179E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E1Cu;
label_179e1c:
    // 0x179e1c: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x179e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
label_179e20:
    // 0x179e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e24: 0xc071f78  jal         func_1C7DE0
    ctx->pc = 0x179E24u;
    SET_GPR_U32(ctx, 31, 0x179E2Cu);
    ctx->pc = 0x179E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E24u;
    // 0x179e28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7DE0u, 0x179E24u, 0x179E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179E2Cu;
label_179e2c:
    // 0x179e2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x179e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179e30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x179e30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179e34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179e38: 0x3e00008  jr          $ra
    ctx->pc = 0x179E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E38u;
        // 0x179e3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179E40u;
}
