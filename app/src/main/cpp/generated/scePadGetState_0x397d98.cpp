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

// Function: scePadGetState
// Address: 0x397d98 - 0x397e18
void scePadGetState_0x397d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadGetState_0x397d98");
#endif

    switch (ctx->pc) {
        case 0x397de0u: goto label_397de0;
        default: break;
    }

    ctx->pc = 0x397d98u;

    // 0x397d98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x397d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x397d9c: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x397d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x397da0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x397da0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x397da4: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x397da4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x397da8: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x397da8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x397dac: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x397dacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x397db0: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x397db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x397db4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x397db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x397db8: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    ctx->pc = 0x397db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x397dbc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x397dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x397dc0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x397dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x397dc4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x397dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x397dc8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x397DC8u;
    {
        const bool branch_taken_0x397dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x397DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DC8u;
        // 0x397dcc: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397dc8) {
            ctx->pc = 0x397DD8u;
            goto label_397dd8;
        }
    }
    ctx->pc = 0x397DD0u;
    // 0x397dd0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x397DD0u;
    {
        const bool branch_taken_0x397dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x397DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DD0u;
        // 0x397dd4: 0x24020063  addiu       $v0, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397dd0) {
            ctx->pc = 0x397E04u;
            goto label_397e04;
        }
    }
    ctx->pc = 0x397DD8u;
label_397dd8:
    // 0x397dd8: 0xc0e5ef2  jal         func_397BC8
    ctx->pc = 0x397DD8u;
    SET_GPR_U32(ctx, 31, 0x397DE0u);
    ctx->pc = 0x397DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x397DD8u;
    // 0x397ddc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397BC8u, 0x397DD8u, 0x397DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x397DE0u;
label_397de0:
    // 0x397de0: 0x93a30070  lbu         $v1, 0x70($sp)
    ctx->pc = 0x397de0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x397de4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x397de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x397de8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x397DE8u;
    {
        const bool branch_taken_0x397de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x397DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DE8u;
        // 0x397dec: 0x93a20070  lbu         $v0, 0x70($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397de8) {
            ctx->pc = 0x397E04u;
            goto label_397e04;
        }
    }
    ctx->pc = 0x397DF0u;
    // 0x397df0: 0x93a30071  lbu         $v1, 0x71($sp)
    ctx->pc = 0x397df0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 113)));
    // 0x397df4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x397df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x397df8: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x397DF8u;
    {
        const bool branch_taken_0x397df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x397DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397DF8u;
        // 0x397dfc: 0x93a20070  lbu         $v0, 0x70($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x397df8) {
            ctx->pc = 0x397E04u;
            goto label_397e04;
        }
    }
    ctx->pc = 0x397E00u;
    // 0x397e00: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x397e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_397e04:
    // 0x397e04: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x397e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x397e08: 0x3e00008  jr          $ra
    ctx->pc = 0x397E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397E08u;
        // 0x397e0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397E10u;
    // 0x397e10: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x397e10u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x397e14: 0x0  nop
    ctx->pc = 0x397e14u;
    // NOP
    ctx->pc = 0x397e18u;
}
