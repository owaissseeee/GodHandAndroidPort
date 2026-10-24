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

// Function: cOmBase_setTexChange
// Address: 0x1b7de8 - 0x1b7e50
void cOmBase_setTexChange_0x1b7de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmBase_setTexChange_0x1b7de8");
#endif

    switch (ctx->pc) {
        case 0x1b7e24u: goto label_1b7e24;
        case 0x1b7e38u: goto label_1b7e38;
        default: break;
    }

    ctx->pc = 0x1b7de8u;

    // 0x1b7de8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b7dec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1b7decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1b7df0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b7df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b7df4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b7df4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7dfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b7dfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7e04: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b7e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e08: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1b7e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1b7e0c: 0x8e020254  lw          $v0, 0x254($s0)
    ctx->pc = 0x1b7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
    // 0x1b7e10: 0x24a58a18  addiu       $a1, $a1, -0x75E8
    ctx->pc = 0x1b7e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937112));
    // 0x1b7e14: 0x8e040304  lw          $a0, 0x304($s0)
    ctx->pc = 0x1b7e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1b7e18: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1b7e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1b7e1c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x1B7E1Cu;
    SET_GPR_U32(ctx, 31, 0x1B7E24u);
    ctx->pc = 0x1B7E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E1Cu;
    // 0x1b7e20: 0xae020254  sw          $v0, 0x254($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 596), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x1B7E1Cu, 0x1B7E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E24u;
label_1b7e24:
    // 0x1b7e24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b7e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e28: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1b7e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7e2c: 0x8c850284  lw          $a1, 0x284($a0)
    ctx->pc = 0x1b7e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
    // 0x1b7e30: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x1B7E30u;
    SET_GPR_U32(ctx, 31, 0x1B7E38u);
    ctx->pc = 0x1B7E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7E30u;
    // 0x1b7e34: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x1B7E30u, 0x1B7E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7E38u;
label_1b7e38:
    // 0x1b7e38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b7e38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b7e3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7e3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7e44: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B7E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7E44u;
        // 0x1b7e48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7E4Cu;
    // 0x1b7e4c: 0x0  nop
    ctx->pc = 0x1b7e4cu;
    // NOP
    ctx->pc = 0x1b7e50u;
}
