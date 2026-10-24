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

// Function: func_0018C120
// Address: 0x18c120 - 0x18c180
void func_0018C120_0x18c120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018C120_0x18c120");
#endif

    switch (ctx->pc) {
        case 0x18c15cu: goto label_18c15c;
        case 0x18c16cu: goto label_18c16c;
        default: break;
    }

    ctx->pc = 0x18c120u;

    // 0x18c120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18c124: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18c124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18c128: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18c128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18c12c: 0x244238d8  addiu       $v0, $v0, 0x38D8
    ctx->pc = 0x18c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14552));
    // 0x18c130: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18c134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c138: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18c13c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x18c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x18c140: 0x8e030650  lw          $v1, 0x650($s0)
    ctx->pc = 0x18c140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x18c144: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18C144u;
    {
        const bool branch_taken_0x18c144 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C144u;
        // 0x18c148: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c144) {
            ctx->pc = 0x18C160u;
            goto label_18c160;
        }
    }
    ctx->pc = 0x18C14Cu;
    // 0x18c14c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x18c14cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18c150: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x18c150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c154: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x18C154u;
    SET_GPR_U32(ctx, 31, 0x18C15Cu);
    ctx->pc = 0x18C158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C154u;
    // 0x18c158: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x18C154u, 0x18C15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C15Cu;
label_18c15c:
    // 0x18c15c: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x18c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
label_18c160:
    // 0x18c160: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18c160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18c164: 0xc071f78  jal         func_1C7DE0
    ctx->pc = 0x18C164u;
    SET_GPR_U32(ctx, 31, 0x18C16Cu);
    ctx->pc = 0x18C168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18C164u;
    // 0x18c168: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7DE0u, 0x18C164u, 0x18C16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18C16Cu;
label_18c16c:
    // 0x18c16c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18c16cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18c170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18c170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18c174: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18c178: 0x3e00008  jr          $ra
    ctx->pc = 0x18C178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C178u;
        // 0x18c17c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C178u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C180u;
}
