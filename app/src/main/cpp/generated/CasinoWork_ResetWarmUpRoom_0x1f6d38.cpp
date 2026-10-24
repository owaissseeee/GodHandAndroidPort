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

// Function: CasinoWork_ResetWarmUpRoom
// Address: 0x1f6d38 - 0x1f6e18
void CasinoWork_ResetWarmUpRoom_0x1f6d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CasinoWork_ResetWarmUpRoom_0x1f6d38");
#endif

    switch (ctx->pc) {
        case 0x1f6d58u: goto label_1f6d58;
        case 0x1f6d98u: goto label_1f6d98;
        case 0x1f6da8u: goto label_1f6da8;
        case 0x1f6db4u: goto label_1f6db4;
        case 0x1f6dbcu: goto label_1f6dbc;
        case 0x1f6dd0u: goto label_1f6dd0;
        case 0x1f6dd8u: goto label_1f6dd8;
        default: break;
    }

    ctx->pc = 0x1f6d38u;

    // 0x1f6d38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f6d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f6d3c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f6d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f6d40: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f6d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f6d44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f6d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f6d48: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1f6d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1f6d4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6d50: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1F6D50u;
    SET_GPR_U32(ctx, 31, 0x1F6D58u);
    ctx->pc = 0x1F6D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6D50u;
    // 0x1f6d54: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1F6D50u, 0x1F6D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D58u;
label_1f6d58:
    // 0x1f6d58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f6d58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d5c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f6d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f6d60: 0x84620548  lh          $v0, 0x548($v1)
    ctx->pc = 0x1f6d60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
    // 0x1f6d64: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f6d64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f6d68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F6D68u;
    {
        const bool branch_taken_0x1f6d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D68u;
        // 0x1f6d6c: 0x94650548  lhu         $a1, 0x548($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d68) {
            ctx->pc = 0x1F6D78u;
            goto label_1f6d78;
        }
    }
    ctx->pc = 0x1F6D70u;
    // 0x1f6d70: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F6D70u;
    {
        const bool branch_taken_0x1f6d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6D70u;
        // 0x1f6d74: 0xa465054a  sh          $a1, 0x54A($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6d70) {
            ctx->pc = 0x1F6D7Cu;
            goto label_1f6d7c;
        }
    }
    ctx->pc = 0x1F6D78u;
label_1f6d78:
    // 0x1f6d78: 0xa464054a  sh          $a0, 0x54A($v1)
    ctx->pc = 0x1f6d78u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 1354), (uint16_t)GPR_U32(ctx, 4));
label_1f6d7c:
    // 0x1f6d7c: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1f6d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1f6d80: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1f6d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f6d84: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1f6d84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f6d88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6d8c: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1f6d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1f6d90: 0xc07eb26  jal         func_1FAC98
    ctx->pc = 0x1F6D90u;
    SET_GPR_U32(ctx, 31, 0x1F6D98u);
    ctx->pc = 0x1F6D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6D90u;
    // 0x1f6d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC98u, 0x1F6D90u, 0x1F6D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6D98u;
label_1f6d98:
    // 0x1f6d98: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x1f6d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f6d9c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1f6d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1f6da0: 0xc0aa716  jal         func_2A9C58
    ctx->pc = 0x1F6DA0u;
    SET_GPR_U32(ctx, 31, 0x1F6DA8u);
    ctx->pc = 0x1F6DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6DA0u;
    // 0x1f6da4: 0x2484b000  addiu       $a0, $a0, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9C58u, 0x1F6DA0u, 0x1F6DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DA8u;
label_1f6da8:
    // 0x1f6da8: 0x8625000c  lh          $a1, 0xC($s1)
    ctx->pc = 0x1f6da8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f6dac: 0xc07e98e  jal         func_1FA638
    ctx->pc = 0x1F6DACu;
    SET_GPR_U32(ctx, 31, 0x1F6DB4u);
    ctx->pc = 0x1F6DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6DACu;
    // 0x1f6db0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA638u, 0x1F6DACu, 0x1F6DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DB4u;
label_1f6db4:
    // 0x1f6db4: 0xc07eaca  jal         func_1FAB28
    ctx->pc = 0x1F6DB4u;
    SET_GPR_U32(ctx, 31, 0x1F6DBCu);
    ctx->pc = 0x1F6DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6DB4u;
    // 0x1f6db8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB28u, 0x1F6DB4u, 0x1F6DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DBCu;
label_1f6dbc:
    // 0x1f6dbc: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x1f6dbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1f6dc0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1F6DC0u;
    {
        const bool branch_taken_0x1f6dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f6dc0) {
            ctx->pc = 0x1F6DC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F6DC0u;
            // 0x1f6dc4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F6DF0u;
            goto label_1f6df0;
        }
    }
    ctx->pc = 0x1F6DC8u;
    // 0x1f6dc8: 0x26649b70  addiu       $a0, $s3, -0x6490
    ctx->pc = 0x1f6dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
    // 0x1f6dcc: 0x0  nop
    ctx->pc = 0x1f6dccu;
    // NOP
label_1f6dd0:
    // 0x1f6dd0: 0xc07ead4  jal         func_1FAB50
    ctx->pc = 0x1F6DD0u;
    SET_GPR_U32(ctx, 31, 0x1F6DD8u);
    ctx->pc = 0x1F6DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6DD0u;
    // 0x1f6dd4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x1F6DD0u, 0x1F6DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6DD8u;
label_1f6dd8:
    // 0x1f6dd8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1f6dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1f6ddc: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x1f6ddcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x1f6de0: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1f6de0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f6de4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1F6DE4u;
    {
        const bool branch_taken_0x1f6de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6DE4u;
        // 0x1f6de8: 0x26649b70  addiu       $a0, $s3, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6de4) {
            ctx->pc = 0x1F6DD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6dd0;
        }
    }
    ctx->pc = 0x1F6DECu;
    // 0x1f6dec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f6decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f6df0:
    // 0x1f6df0: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1f6df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f6df4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f6df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f6df8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f6df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f6dfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f6dfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6e00: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f6e00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1f6e04: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f6e04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f6e08: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1f6e08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6e10: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6E10u;
        // 0x1f6e14: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F6E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6E18u;
}
