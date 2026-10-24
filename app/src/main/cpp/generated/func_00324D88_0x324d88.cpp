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

// Function: func_00324D88
// Address: 0x324d88 - 0x324e70
void func_00324D88_0x324d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324D88_0x324d88");
#endif

    switch (ctx->pc) {
        case 0x324de0u: goto label_324de0;
        case 0x324de8u: goto label_324de8;
        case 0x324df0u: goto label_324df0;
        case 0x324df8u: goto label_324df8;
        case 0x324e18u: goto label_324e18;
        default: break;
    }

    ctx->pc = 0x324d88u;

    // 0x324d88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x324d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x324d8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x324d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x324d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x324d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d94: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x324d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x324d98: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x324d98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324d9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324da0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x324da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x324da4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x324da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x324da8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x324da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x324dac: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x324DACu;
    {
        const bool branch_taken_0x324dac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x324DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324DACu;
        // 0x324db0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324dac) {
            ctx->pc = 0x324E48u;
            goto label_324e48;
        }
    }
    ctx->pc = 0x324DB4u;
    // 0x324db4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x324db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x324db8: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x324db8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x324dbc: 0x8c4580b0  lw          $a1, -0x7F50($v0)
    ctx->pc = 0x324dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C80B0u));
    // 0x324dc0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x324dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x324dc4: 0x261080e4  addiu       $s0, $s0, -0x7F1C
    ctx->pc = 0x324dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294934756));
    // 0x324dc8: 0x3c120beb  lui         $s2, 0xBEB
    ctx->pc = 0x324dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)3051 << 16));
    // 0x324dcc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x324dccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3C80E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C80E4u, _value); } while (0);
    // 0x324dd0: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x324dd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324dd4: 0x3652c1ff  ori         $s2, $s2, 0xC1FF
    ctx->pc = 0x324dd4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)49663);
    // 0x324dd8: 0xc0ebecc  jal         func_3AFB30
    ctx->pc = 0x324DD8u;
    SET_GPR_U32(ctx, 31, 0x324DE0u);
    ctx->pc = 0x324DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324DD8u;
    // 0x324ddc: 0x3c140045  lui         $s4, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)69 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x324DD8u, 0x324DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324DE0u;
label_324de0:
    // 0x324de0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x324de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324de4: 0x0  nop
    ctx->pc = 0x324de4u;
    // NOP
label_324de8:
    // 0x324de8: 0xc0c94a4  jal         func_325290
    ctx->pc = 0x324DE8u;
    SET_GPR_U32(ctx, 31, 0x324DF0u);
    ctx->pc = 0x324DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324DE8u;
    // 0x324dec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x325290u, 0x324DE8u, 0x324DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324DF0u;
label_324df0:
    // 0x324df0: 0xc0c94be  jal         func_3252F8
    ctx->pc = 0x324DF0u;
    SET_GPR_U32(ctx, 31, 0x324DF8u);
    ctx->pc = 0x324DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324DF0u;
    // 0x324df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3252F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3252F8u, 0x324DF0u, 0x324DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324DF8u;
label_324df8:
    // 0x324df8: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x324df8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x324dfc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x324dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x324e00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x324E00u;
    {
        const bool branch_taken_0x324e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x324E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E00u;
        // 0x324e04: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324e00) {
            ctx->pc = 0x324E18u;
            goto label_324e18;
        }
    }
    ctx->pc = 0x324E08u;
    // 0x324e08: 0x1060fff7  beqz        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x324E08u;
    {
        const bool branch_taken_0x324e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x324e08) {
            ctx->pc = 0x324DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324de8;
        }
    }
    ctx->pc = 0x324E10u;
    // 0x324e10: 0xc0cede4  jal         func_33B790
    ctx->pc = 0x324E10u;
    SET_GPR_U32(ctx, 31, 0x324E18u);
    ctx->pc = 0x324E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E10u;
    // 0x324e14: 0x26841d78  addiu       $a0, $s4, 0x1D78 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 7544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B790u, 0x324E10u, 0x324E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324E18u;
label_324e18:
    // 0x324e18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x324e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324e20: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x324e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324e24: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x324e24u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x324e28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324e28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324e2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x324e2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324e30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x324e30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x324e34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x324e34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324e38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x324e38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324e3c: 0x80ebecc  j           func_3AFB30
    ctx->pc = 0x324E3Cu;
    ctx->pc = 0x324E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324E3Cu;
    // 0x324e40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFB30u, 0x324E3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x324E44u;
    // 0x324e44: 0x0  nop
    ctx->pc = 0x324e44u;
    // NOP
label_324e48:
    // 0x324e48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324e48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324e4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x324e4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324e50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x324e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x324e54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x324e54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x324e58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x324e58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x324e5c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x324e5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x324e60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x324e60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x324e64: 0x3e00008  jr          $ra
    ctx->pc = 0x324E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x324E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324E64u;
        // 0x324e68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324E6Cu;
    // 0x324e6c: 0x0  nop
    ctx->pc = 0x324e6cu;
    // NOP
    ctx->pc = 0x324e70u;
}
