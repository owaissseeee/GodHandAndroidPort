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

// Function: func_0018DCE0
// Address: 0x18dce0 - 0x18dd40
void func_0018DCE0_0x18dce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018DCE0_0x18dce0");
#endif

    switch (ctx->pc) {
        case 0x18dd1cu: goto label_18dd1c;
        case 0x18dd2cu: goto label_18dd2c;
        default: break;
    }

    ctx->pc = 0x18dce0u;

    // 0x18dce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18dce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18dce4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18dce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18dce8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18dce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18dcec: 0x24423ab8  addiu       $v0, $v0, 0x3AB8
    ctx->pc = 0x18dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15032));
    // 0x18dcf0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18dcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18dcf4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18dcf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dcf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18dcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18dcfc: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x18dcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x18dd00: 0x8e030650  lw          $v1, 0x650($s0)
    ctx->pc = 0x18dd00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x18dd04: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18DD04u;
    {
        const bool branch_taken_0x18dd04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18DD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD04u;
        // 0x18dd08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18dd04) {
            ctx->pc = 0x18DD20u;
            goto label_18dd20;
        }
    }
    ctx->pc = 0x18DD0Cu;
    // 0x18dd0c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x18dd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18dd10: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x18dd10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd14: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x18DD14u;
    SET_GPR_U32(ctx, 31, 0x18DD1Cu);
    ctx->pc = 0x18DD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD14u;
    // 0x18dd18: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x18DD14u, 0x18DD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD1Cu;
label_18dd1c:
    // 0x18dd1c: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x18dd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
label_18dd20:
    // 0x18dd20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18dd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18dd24: 0xc071f78  jal         func_1C7DE0
    ctx->pc = 0x18DD24u;
    SET_GPR_U32(ctx, 31, 0x18DD2Cu);
    ctx->pc = 0x18DD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18DD24u;
    // 0x18dd28: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7DE0u, 0x18DD24u, 0x18DD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18DD2Cu;
label_18dd2c:
    // 0x18dd2c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18dd2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18dd30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18dd30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18dd34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18dd34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18dd38: 0x3e00008  jr          $ra
    ctx->pc = 0x18DD38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18DD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18DD38u;
        // 0x18dd3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18DD38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18DD40u;
}
