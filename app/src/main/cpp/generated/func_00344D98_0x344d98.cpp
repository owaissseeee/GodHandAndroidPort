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

// Function: func_00344D98
// Address: 0x344d98 - 0x344e18
void func_00344D98_0x344d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00344D98_0x344d98");
#endif

    switch (ctx->pc) {
        case 0x344de8u: goto label_344de8;
        default: break;
    }

    ctx->pc = 0x344d98u;

    // 0x344d98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x344d9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x344d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x344da0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x344da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344da4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x344da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x344da8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x344da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x344dac: 0x8ca20038  lw          $v0, 0x38($a1)
    ctx->pc = 0x344dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x344db0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x344db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x344db4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x344db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x344db8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x344db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x344dbc: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x344dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x344dc0: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x344dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x344dc4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x344DC4u;
    {
        const bool branch_taken_0x344dc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x344DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DC4u;
        // 0x344dc8: 0xae00008c  sw          $zero, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344dc4) {
            ctx->pc = 0x344DE8u;
            goto label_344de8;
        }
    }
    ctx->pc = 0x344DCCu;
    // 0x344dcc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x344DCCu;
    {
        const bool branch_taken_0x344dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DCCu;
        // 0x344dd0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344dcc) {
            ctx->pc = 0x344DECu;
            goto label_344dec;
        }
    }
    ctx->pc = 0x344DD4u;
    // 0x344dd4: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x344dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x344dd8: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x344dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x344ddc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x344ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344de0: 0xc0d821e  jal         func_360878
    ctx->pc = 0x344DE0u;
    SET_GPR_U32(ctx, 31, 0x344DE8u);
    ctx->pc = 0x344DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344DE0u;
    // 0x344de4: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360878u, 0x344DE0u, 0x344DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344DE8u;
label_344de8:
    // 0x344de8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x344de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_344dec:
    // 0x344dec: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x344DECu;
    {
        const bool branch_taken_0x344dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x344DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344DECu;
        // 0x344df0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344dec) {
            ctx->pc = 0x344E04u;
            goto label_344e04;
        }
    }
    ctx->pc = 0x344DF4u;
    // 0x344df4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x344DF4u;
    {
        const bool branch_taken_0x344df4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x344df4) {
            ctx->pc = 0x344DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344DF4u;
            // 0x344df8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344E08u;
            goto label_344e08;
        }
    }
    ctx->pc = 0x344DFCu;
    // 0x344dfc: 0xae02008c  sw          $v0, 0x8C($s0)
    ctx->pc = 0x344dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 2));
    // 0x344e00: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x344e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_344e04:
    // 0x344e04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x344e04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_344e08:
    // 0x344e08: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x344e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x344e0c: 0x3e00008  jr          $ra
    ctx->pc = 0x344E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344E0Cu;
        // 0x344e10: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344E14u;
    // 0x344e14: 0x0  nop
    ctx->pc = 0x344e14u;
    // NOP
    ctx->pc = 0x344e18u;
}
