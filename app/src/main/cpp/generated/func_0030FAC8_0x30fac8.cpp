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

// Function: func_0030FAC8
// Address: 0x30fac8 - 0x30fb20
void func_0030FAC8_0x30fac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030FAC8_0x30fac8");
#endif

    switch (ctx->pc) {
        case 0x30fae4u: goto label_30fae4;
        case 0x30faf4u: goto label_30faf4;
        default: break;
    }

    ctx->pc = 0x30fac8u;

    // 0x30fac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30fac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30facc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x30faccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x30fad0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30fad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30fad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30fad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30fad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30fadc: 0xc0c3edc  jal         func_30FB70
    ctx->pc = 0x30FADCu;
    SET_GPR_U32(ctx, 31, 0x30FAE4u);
    ctx->pc = 0x30FAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FADCu;
    // 0x30fae0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FB70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FB70u, 0x30FADCu, 0x30FAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FAE4u;
label_30fae4:
    // 0x30fae4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30FAE4u;
    {
        const bool branch_taken_0x30fae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FAE4u;
        // 0x30fae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30fae4) {
            ctx->pc = 0x30FAFCu;
            goto label_30fafc;
        }
    }
    ctx->pc = 0x30FAECu;
    // 0x30faec: 0xc0c3f9a  jal         func_30FE68
    ctx->pc = 0x30FAECu;
    SET_GPR_U32(ctx, 31, 0x30FAF4u);
    ctx->pc = 0x30FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30FAECu;
    // 0x30faf0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FE68u, 0x30FAECu, 0x30FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30FAF4u;
label_30faf4:
    // 0x30faf4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30FAF4u;
    {
        const bool branch_taken_0x30faf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FAF4u;
        // 0x30faf8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30faf4) {
            ctx->pc = 0x30FB04u;
            goto label_30fb04;
        }
    }
    ctx->pc = 0x30FAFCu;
label_30fafc:
    // 0x30fafc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30fafcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30fb00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x30fb00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30fb04:
    // 0x30fb04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30fb04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30fb08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30fb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30fb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x30FB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30FB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30FB0Cu;
        // 0x30fb10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30FB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30FB14u;
    // 0x30fb14: 0x0  nop
    ctx->pc = 0x30fb14u;
    // NOP
    // 0x30fb18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x30fb18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30fb1c: 0x0  nop
    ctx->pc = 0x30fb1cu;
    // NOP
    ctx->pc = 0x30fb20u;
}
