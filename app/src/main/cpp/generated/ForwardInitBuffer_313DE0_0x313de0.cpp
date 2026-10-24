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

// Function: ForwardInitBuffer_313DE0
// Address: 0x313de0 - 0x313e50
void ForwardInitBuffer_313DE0_0x313de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_313DE0_0x313de0");
#endif

    switch (ctx->pc) {
        case 0x313e14u: goto label_313e14;
        case 0x313e2cu: goto label_313e2c;
        case 0x313e34u: goto label_313e34;
        default: break;
    }

    ctx->pc = 0x313de0u;

    // 0x313de0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x313de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x313de4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x313de4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x313de8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x313de8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x313dec: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x313decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x313df0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313df4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x313df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313df8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313DF8u;
    {
        const bool branch_taken_0x313df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x313DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313DF8u;
        // 0x313dfc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313df8) {
            ctx->pc = 0x313E3Cu;
            goto label_313e3c;
        }
    }
    ctx->pc = 0x313E00u;
    // 0x313e00: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x313e00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313e04: 0x24040910  addiu       $a0, $zero, 0x910
    ctx->pc = 0x313e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2320));
    // 0x313e08: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x313e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x313e0c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x313E0Cu;
    SET_GPR_U32(ctx, 31, 0x313E14u);
    ctx->pc = 0x313E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313E0Cu;
    // 0x313e10: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x313E0Cu, 0x313E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313E14u;
label_313e14:
    // 0x313e14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x313e14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e18: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313E18u;
    {
        const bool branch_taken_0x313e18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x313E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E18u;
        // 0x313e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e18) {
            ctx->pc = 0x313E3Cu;
            goto label_313e3c;
        }
    }
    ctx->pc = 0x313E20u;
    // 0x313e20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x313e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e24: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x313E24u;
    SET_GPR_U32(ctx, 31, 0x313E2Cu);
    ctx->pc = 0x313E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313E24u;
    // 0x313e28: 0x24060910  addiu       $a2, $zero, 0x910 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x313E24u, 0x313E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313E2Cu;
label_313e2c:
    // 0x313e2c: 0xc062966  jal         func_18A598
    ctx->pc = 0x313E2Cu;
    SET_GPR_U32(ctx, 31, 0x313E34u);
    ctx->pc = 0x313E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313E2Cu;
    // 0x313e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A598u, 0x313E2Cu, 0x313E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x313E34u;
label_313e34:
    // 0x313e34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313E34u;
    {
        const bool branch_taken_0x313e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E34u;
        // 0x313e38: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313e34) {
            ctx->pc = 0x313E44u;
            goto label_313e44;
        }
    }
    ctx->pc = 0x313E3Cu;
label_313e3c:
    // 0x313e3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x313e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313e40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313e44:
    // 0x313e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313e48: 0x3e00008  jr          $ra
    ctx->pc = 0x313E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313E48u;
        // 0x313e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313E50u;
}
