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

// Function: InitDogRaceListIdWorks
// Address: 0x1edea8 - 0x1edf60
void InitDogRaceListIdWorks_0x1edea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitDogRaceListIdWorks_0x1edea8");
#endif

    switch (ctx->pc) {
        case 0x1ededcu: goto label_1ededc;
        case 0x1edee8u: goto label_1edee8;
        case 0x1edef4u: goto label_1edef4;
        case 0x1edf04u: goto label_1edf04;
        case 0x1edf1cu: goto label_1edf1c;
        case 0x1edf28u: goto label_1edf28;
        case 0x1edf34u: goto label_1edf34;
        case 0x1edf44u: goto label_1edf44;
        default: break;
    }

    ctx->pc = 0x1edea8u;

    // 0x1edea8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1edea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1edeac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1edeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1edeb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1edeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1edeb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1edeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edeb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1edeb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edebc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1edebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1edec0: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x1edec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1edec4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1edec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1edec8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1edec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1edecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1edeccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eded0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eded0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1eded4: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1EDED4u;
    SET_GPR_U32(ctx, 31, 0x1EDEDCu);
    ctx->pc = 0x1EDED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDED4u;
    // 0x1eded8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1EDED4u, 0x1EDEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDEDCu;
label_1ededc:
    // 0x1ededc: 0x26510060  addiu       $s1, $s2, 0x60
    ctx->pc = 0x1ededcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1edee0: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x1EDEE0u;
    SET_GPR_U32(ctx, 31, 0x1EDEE8u);
    ctx->pc = 0x1EDEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDEE0u;
    // 0x1edee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x1EDEE0u, 0x1EDEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDEE8u;
label_1edee8:
    // 0x1edee8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1edee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edeec: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1EDEECu;
    SET_GPR_U32(ctx, 31, 0x1EDEF4u);
    ctx->pc = 0x1EDEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDEECu;
    // 0x1edef0: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1EDEECu, 0x1EDEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDEF4u;
label_1edef4:
    // 0x1edef4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1edef4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1edef8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1edef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edefc: 0xc0b576a  jal         func_2D5DA8
    ctx->pc = 0x1EDEFCu;
    SET_GPR_U32(ctx, 31, 0x1EDF04u);
    ctx->pc = 0x1EDF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDEFCu;
    // 0x1edf00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DA8u, 0x1EDEFCu, 0x1EDF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF04u;
label_1edf04:
    // 0x1edf04: 0x2a62001d  slti        $v0, $s3, 0x1D
    ctx->pc = 0x1edf04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)29) ? 1 : 0);
    // 0x1edf08: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1EDF08u;
    {
        const bool branch_taken_0x1edf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF08u;
        // 0x1edf0c: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf08) {
            ctx->pc = 0x1EDEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edee8;
        }
    }
    ctx->pc = 0x1EDF10u;
    // 0x1edf10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1edf10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf14: 0xc07b8aa  jal         func_1EE2A8
    ctx->pc = 0x1EDF14u;
    SET_GPR_U32(ctx, 31, 0x1EDF1Cu);
    ctx->pc = 0x1EDF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF14u;
    // 0x1edf18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE2A8u, 0x1EDF14u, 0x1EDF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF1Cu;
label_1edf1c:
    // 0x1edf1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1edf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf20: 0xc07b8b2  jal         func_1EE2C8
    ctx->pc = 0x1EDF20u;
    SET_GPR_U32(ctx, 31, 0x1EDF28u);
    ctx->pc = 0x1EDF24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF20u;
    // 0x1edf24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE2C8u, 0x1EDF20u, 0x1EDF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF28u;
label_1edf28:
    // 0x1edf28: 0x26440060  addiu       $a0, $s2, 0x60
    ctx->pc = 0x1edf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1edf2c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1EDF2Cu;
    SET_GPR_U32(ctx, 31, 0x1EDF34u);
    ctx->pc = 0x1EDF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF2Cu;
    // 0x1edf30: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1EDF2Cu, 0x1EDF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF34u;
label_1edf34:
    // 0x1edf34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1edf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf38: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x1edf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1edf3c: 0xc07b870  jal         func_1EE1C0
    ctx->pc = 0x1EDF3Cu;
    SET_GPR_U32(ctx, 31, 0x1EDF44u);
    ctx->pc = 0x1EDF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDF3Cu;
    // 0x1edf40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EE1C0u, 0x1EDF3Cu, 0x1EDF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EDF44u;
label_1edf44:
    // 0x1edf44: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1edf44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1edf48: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1edf48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1edf4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1edf4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1edf50: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1edf50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1edf54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1edf54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edf58: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDF58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF58u;
        // 0x1edf5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDF58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDF60u;
}
