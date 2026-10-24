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

// Function: FreeObjSlotE_199DF8
// Address: 0x199df8 - 0x199e58
void FreeObjSlotE_199DF8_0x199df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeObjSlotE_199DF8_0x199df8");
#endif

    switch (ctx->pc) {
        case 0x199e34u: goto label_199e34;
        case 0x199e44u: goto label_199e44;
        default: break;
    }

    ctx->pc = 0x199df8u;

    // 0x199df8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199dfc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x199dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x199e00: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x199e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x199e04: 0x244251c0  addiu       $v0, $v0, 0x51C0
    ctx->pc = 0x199e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20928));
    // 0x199e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x199e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x199e0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199e0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199e14: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x199e14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x199e18: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x199e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x199e1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x199E1Cu;
    {
        const bool branch_taken_0x199e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x199E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E1Cu;
        // 0x199e20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199e1c) {
            ctx->pc = 0x199E38u;
            goto label_199e38;
        }
    }
    ctx->pc = 0x199E24u;
    // 0x199e24: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x199e24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x199e28: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x199e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e2c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x199E2Cu;
    SET_GPR_U32(ctx, 31, 0x199E34u);
    ctx->pc = 0x199E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E2Cu;
    // 0x199e30: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x199E2Cu, 0x199E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E34u;
label_199e34:
    // 0x199e34: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x199e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_199e38:
    // 0x199e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199e3c: 0xc06fec0  jal         func_1BFB00
    ctx->pc = 0x199E3Cu;
    SET_GPR_U32(ctx, 31, 0x199E44u);
    ctx->pc = 0x199E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199E3Cu;
    // 0x199e40: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFB00u, 0x199E3Cu, 0x199E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E44u;
label_199e44:
    // 0x199e44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x199e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199e48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x199e48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199e4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199e50: 0x3e00008  jr          $ra
    ctx->pc = 0x199E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199E50u;
        // 0x199e54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199E58u;
}
