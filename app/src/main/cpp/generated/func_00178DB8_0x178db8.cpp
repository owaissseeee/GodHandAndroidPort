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

// Function: func_00178DB8
// Address: 0x178db8 - 0x178e18
void func_00178DB8_0x178db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178DB8_0x178db8");
#endif

    switch (ctx->pc) {
        case 0x178df4u: goto label_178df4;
        case 0x178e04u: goto label_178e04;
        default: break;
    }

    ctx->pc = 0x178db8u;

    // 0x178db8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178dbc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x178dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x178dc0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x178dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x178dc4: 0x24421740  addiu       $v0, $v0, 0x1740
    ctx->pc = 0x178dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x178dc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x178dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x178dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x178dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178dd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x178dd4: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x178dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x178dd8: 0x8e030600  lw          $v1, 0x600($s0)
    ctx->pc = 0x178dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x178ddc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x178DDCu;
    {
        const bool branch_taken_0x178ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x178DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DDCu;
        // 0x178de0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178ddc) {
            ctx->pc = 0x178DF8u;
            goto label_178df8;
        }
    }
    ctx->pc = 0x178DE4u;
    // 0x178de4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x178de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x178de8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x178de8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178dec: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x178DECu;
    SET_GPR_U32(ctx, 31, 0x178DF4u);
    ctx->pc = 0x178DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DECu;
    // 0x178df0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x178DECu, 0x178DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178DF4u;
label_178df4:
    // 0x178df4: 0xae000600  sw          $zero, 0x600($s0)
    ctx->pc = 0x178df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1536), GPR_U32(ctx, 0));
label_178df8:
    // 0x178df8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x178df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178dfc: 0xc070a08  jal         func_1C2820
    ctx->pc = 0x178DFCu;
    SET_GPR_U32(ctx, 31, 0x178E04u);
    ctx->pc = 0x178E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178DFCu;
    // 0x178e00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C2820u, 0x178DFCu, 0x178E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178E04u;
label_178e04:
    // 0x178e04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x178e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x178e08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178e10: 0x3e00008  jr          $ra
    ctx->pc = 0x178E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E10u;
        // 0x178e14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178E18u;
}
