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

// Function: func_0018ECD0
// Address: 0x18ecd0 - 0x18ed30
void func_0018ECD0_0x18ecd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018ECD0_0x18ecd0");
#endif

    switch (ctx->pc) {
        case 0x18ed0cu: goto label_18ed0c;
        case 0x18ed1cu: goto label_18ed1c;
        default: break;
    }

    ctx->pc = 0x18ecd0u;

    // 0x18ecd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18ecd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18ecd4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x18ecd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x18ecd8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x18ecd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x18ecdc: 0x24423c70  addiu       $v0, $v0, 0x3C70
    ctx->pc = 0x18ecdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15472));
    // 0x18ece0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ece0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ece4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18ece4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ece8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ece8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ecec: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x18ececu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x18ecf0: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x18ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x18ecf4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x18ECF4u;
    {
        const bool branch_taken_0x18ecf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECF4u;
        // 0x18ecf8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ecf4) {
            ctx->pc = 0x18ED10u;
            goto label_18ed10;
        }
    }
    ctx->pc = 0x18ECFCu;
    // 0x18ecfc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x18ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x18ed00: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x18ed00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed04: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x18ED04u;
    SET_GPR_U32(ctx, 31, 0x18ED0Cu);
    ctx->pc = 0x18ED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED04u;
    // 0x18ed08: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x18ED04u, 0x18ED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED0Cu;
label_18ed0c:
    // 0x18ed0c: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x18ed0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_18ed10:
    // 0x18ed10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x18ed10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ed14: 0xc06fec0  jal         func_1BFB00
    ctx->pc = 0x18ED14u;
    SET_GPR_U32(ctx, 31, 0x18ED1Cu);
    ctx->pc = 0x18ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ED14u;
    // 0x18ed18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB00u, 0x18ED14u, 0x18ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ED1Cu;
label_18ed1c:
    // 0x18ed1c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18ed1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18ed20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18ed20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ed24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ed24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ed28: 0x3e00008  jr          $ra
    ctx->pc = 0x18ED28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ED28u;
        // 0x18ed2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ED28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ED30u;
}
