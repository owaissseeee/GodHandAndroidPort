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

// Function: func_00349DA0
// Address: 0x349da0 - 0x349e30
void func_00349DA0_0x349da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00349DA0_0x349da0");
#endif

    switch (ctx->pc) {
        case 0x349dd8u: goto label_349dd8;
        case 0x349de4u: goto label_349de4;
        default: break;
    }

    ctx->pc = 0x349da0u;

    // 0x349da0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x349da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x349da4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x349da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x349da8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x349da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349dac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x349dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x349db0: 0x26020d30  addiu       $v0, $s0, 0xD30
    ctx->pc = 0x349db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    // 0x349db4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x349db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x349db8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x349db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x349dbc: 0x8e042004  lw          $a0, 0x2004($s0)
    ctx->pc = 0x349dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8196)));
    // 0x349dc0: 0x8c4501f8  lw          $a1, 0x1F8($v0)
    ctx->pc = 0x349dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 504)));
    // 0x349dc4: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x349dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
    // 0x349dc8: 0x14650013  bne         $v1, $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x349DC8u;
    {
        const bool branch_taken_0x349dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x349DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349DC8u;
        // 0x349dcc: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x349dc8) {
            ctx->pc = 0x349E18u;
            goto label_349e18;
        }
    }
    ctx->pc = 0x349DD0u;
    // 0x349dd0: 0xc0ca92a  jal         func_32A4A8
    ctx->pc = 0x349DD0u;
    SET_GPR_U32(ctx, 31, 0x349DD8u);
    ctx->pc = 0x349DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349DD0u;
    // 0x349dd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A4A8u, 0x349DD0u, 0x349DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349DD8u;
label_349dd8:
    // 0x349dd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x349dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349ddc: 0xc0ca94c  jal         func_32A530
    ctx->pc = 0x349DDCu;
    SET_GPR_U32(ctx, 31, 0x349DE4u);
    ctx->pc = 0x349DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349DDCu;
    // 0x349de0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A530u, 0x349DDCu, 0x349DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349DE4u;
label_349de4:
    // 0x349de4: 0x5a40000d  blezl       $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x349DE4u;
    {
        const bool branch_taken_0x349de4 = (GPR_S64(ctx, 18) <= 0);
        if (branch_taken_0x349de4) {
            ctx->pc = 0x349DE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349DE4u;
            // 0x349de8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349E1Cu;
            goto label_349e1c;
        }
    }
    ctx->pc = 0x349DECu;
    // 0x349dec: 0x5840000b  blezl       $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x349DECu;
    {
        const bool branch_taken_0x349dec = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x349dec) {
            ctx->pc = 0x349DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349DECu;
            // 0x349df0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349E1Cu;
            goto label_349e1c;
        }
    }
    ctx->pc = 0x349DF4u;
    // 0x349df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x349df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349df8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349df8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x349dfc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x349dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349e00: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x349e00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349e04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x349e04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x349e08: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x349e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x349e0c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x349e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x349e10: 0x80d33a0  j           func_34CE80
    ctx->pc = 0x349E10u;
    ctx->pc = 0x349E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349E10u;
    // 0x349e14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CE80u, 0x349E10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x349E18u;
label_349e18:
    // 0x349e18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349e18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_349e1c:
    // 0x349e1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x349e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x349e20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x349e20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349e24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x349e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x349e28: 0x3e00008  jr          $ra
    ctx->pc = 0x349E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349E28u;
        // 0x349e2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349E30u;
}
