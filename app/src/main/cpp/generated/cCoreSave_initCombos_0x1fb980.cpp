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

// Function: cCoreSave_initCombos
// Address: 0x1fb980 - 0x1fbd00
void cCoreSave_initCombos_0x1fb980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_initCombos_0x1fb980");
#endif

    switch (ctx->pc) {
        case 0x1fb9b0u: goto label_1fb9b0;
        case 0x1fb9b8u: goto label_1fb9b8;
        case 0x1fb9d0u: goto label_1fb9d0;
        case 0x1fb9f0u: goto label_1fb9f0;
        case 0x1fba28u: goto label_1fba28;
        case 0x1fba40u: goto label_1fba40;
        case 0x1fba58u: goto label_1fba58;
        case 0x1fba70u: goto label_1fba70;
        case 0x1fba80u: goto label_1fba80;
        case 0x1fba98u: goto label_1fba98;
        case 0x1fbaa8u: goto label_1fbaa8;
        case 0x1fbac0u: goto label_1fbac0;
        case 0x1fbad0u: goto label_1fbad0;
        case 0x1fbae8u: goto label_1fbae8;
        case 0x1fbaf8u: goto label_1fbaf8;
        case 0x1fbb10u: goto label_1fbb10;
        case 0x1fbb20u: goto label_1fbb20;
        case 0x1fbb38u: goto label_1fbb38;
        case 0x1fbb48u: goto label_1fbb48;
        case 0x1fbb64u: goto label_1fbb64;
        case 0x1fbb7cu: goto label_1fbb7c;
        case 0x1fbb94u: goto label_1fbb94;
        case 0x1fbbacu: goto label_1fbbac;
        case 0x1fbbbcu: goto label_1fbbbc;
        case 0x1fbbd4u: goto label_1fbbd4;
        case 0x1fbbe4u: goto label_1fbbe4;
        case 0x1fbbfcu: goto label_1fbbfc;
        case 0x1fbc0cu: goto label_1fbc0c;
        case 0x1fbc24u: goto label_1fbc24;
        case 0x1fbc34u: goto label_1fbc34;
        case 0x1fbc4cu: goto label_1fbc4c;
        case 0x1fbc5cu: goto label_1fbc5c;
        case 0x1fbc74u: goto label_1fbc74;
        case 0x1fbc84u: goto label_1fbc84;
        case 0x1fbc90u: goto label_1fbc90;
        case 0x1fbc9cu: goto label_1fbc9c;
        case 0x1fbca8u: goto label_1fbca8;
        case 0x1fbcb4u: goto label_1fbcb4;
        case 0x1fbcc0u: goto label_1fbcc0;
        case 0x1fbcccu: goto label_1fbccc;
        case 0x1fbcd8u: goto label_1fbcd8;
        case 0x1fbce4u: goto label_1fbce4;
        default: break;
    }

    ctx->pc = 0x1fb980u;

    // 0x1fb980: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1fb980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1fb984: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1fb984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1fb988: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1fb988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1fb98c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fb98cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb990: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fb990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1fb994: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1fb994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1fb998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fb99c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1fb99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fb9a0: 0x104000d0  beqz        $v0, . + 4 + (0xD0 << 2)
    ctx->pc = 0x1FB9A0u;
    {
        const bool branch_taken_0x1fb9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9A0u;
        // 0x1fb9a4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9a0) {
            ctx->pc = 0x1FBCE4u;
            goto label_1fbce4;
        }
    }
    ctx->pc = 0x1FB9A8u;
    // 0x1fb9a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1fb9a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9ac: 0x0  nop
    ctx->pc = 0x1fb9acu;
    // NOP
label_1fb9b0:
    // 0x1fb9b0: 0x26530001  addiu       $s3, $s2, 0x1
    ctx->pc = 0x1fb9b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1fb9b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1fb9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fb9b8:
    // 0x1fb9b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb9b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fb9bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fb9c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fb9c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9c8: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FB9C8u;
    SET_GPR_U32(ctx, 31, 0x1FB9D0u);
    ctx->pc = 0x1FB9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB9C8u;
    // 0x1fb9cc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FB9C8u, 0x1FB9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB9D0u;
label_1fb9d0:
    // 0x1fb9d0: 0x2e020006  sltiu       $v0, $s0, 0x6
    ctx->pc = 0x1fb9d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fb9d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1FB9D4u;
    {
        const bool branch_taken_0x1fb9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9D4u;
        // 0x1fb9d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9d4) {
            ctx->pc = 0x1FB9B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb9b8;
        }
    }
    ctx->pc = 0x1FB9DCu;
    // 0x1fb9dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1fb9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fb9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb9e8: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x1FB9E8u;
    SET_GPR_U32(ctx, 31, 0x1FB9F0u);
    ctx->pc = 0x1FB9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB9E8u;
    // 0x1fb9ec: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x1FB9E8u, 0x1FB9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB9F0u;
label_1fb9f0:
    // 0x1fb9f0: 0x2e420006  sltiu       $v0, $s2, 0x6
    ctx->pc = 0x1fb9f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x1fb9f4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1FB9F4u;
    {
        const bool branch_taken_0x1fb9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB9F4u;
        // 0x1fb9f8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb9f4) {
            ctx->pc = 0x1FB9B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb9b0;
        }
    }
    ctx->pc = 0x1FB9FCu;
    // 0x1fb9fc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1fb9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1fba00: 0x24427a2c  addiu       $v0, $v0, 0x7A2C
    ctx->pc = 0x1fba00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31276));
    // 0x1fba04: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fba04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x1fba08: 0x30630800  andi        $v1, $v1, 0x800
    ctx->pc = 0x1fba08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1fba0c: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1FBA0Cu;
    {
        const bool branch_taken_0x1fba0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBA0Cu;
        // 0x1fba10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fba0c) {
            ctx->pc = 0x1FBB50u;
            goto label_1fbb50;
        }
    }
    ctx->pc = 0x1FBA14u;
    // 0x1fba14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fba14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fba18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba1c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fba1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba20: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBA20u;
    SET_GPR_U32(ctx, 31, 0x1FBA28u);
    ctx->pc = 0x1FBA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA20u;
    // 0x1fba24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBA20u, 0x1FBA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA28u;
label_1fba28:
    // 0x1fba28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fba28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fba2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba30: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fba30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fba34: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1fba34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fba38: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBA38u;
    SET_GPR_U32(ctx, 31, 0x1FBA40u);
    ctx->pc = 0x1FBA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA38u;
    // 0x1fba3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBA38u, 0x1FBA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA40u;
label_1fba40:
    // 0x1fba40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fba40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fba44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba48: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fba48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fba4c: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x1fba4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1fba50: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBA50u;
    SET_GPR_U32(ctx, 31, 0x1FBA58u);
    ctx->pc = 0x1FBA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA50u;
    // 0x1fba54: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBA50u, 0x1FBA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA58u;
label_1fba58:
    // 0x1fba58: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x1fba58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1fba5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fba5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fba60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fba64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba68: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBA68u;
    SET_GPR_U32(ctx, 31, 0x1FBA70u);
    ctx->pc = 0x1FBA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA68u;
    // 0x1fba6c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBA68u, 0x1FBA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA70u;
label_1fba70:
    // 0x1fba70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fba70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fba74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba78: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x1FBA78u;
    SET_GPR_U32(ctx, 31, 0x1FBA80u);
    ctx->pc = 0x1FBA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA78u;
    // 0x1fba7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x1FBA78u, 0x1FBA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA80u;
label_1fba80:
    // 0x1fba80: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x1fba80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1fba84: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fba84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fba88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fba8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fba90: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBA90u;
    SET_GPR_U32(ctx, 31, 0x1FBA98u);
    ctx->pc = 0x1FBA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBA90u;
    // 0x1fba94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBA90u, 0x1FBA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBA98u;
label_1fba98:
    // 0x1fba98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fba98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fba9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fba9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbaa0: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x1FBAA0u;
    SET_GPR_U32(ctx, 31, 0x1FBAA8u);
    ctx->pc = 0x1FBAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBAA0u;
    // 0x1fbaa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x1FBAA0u, 0x1FBAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBAA8u;
label_1fbaa8:
    // 0x1fbaa8: 0x24070025  addiu       $a3, $zero, 0x25
    ctx->pc = 0x1fbaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1fbaac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fbaacu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbab0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbab4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fbab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fbab8: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBAB8u;
    SET_GPR_U32(ctx, 31, 0x1FBAC0u);
    ctx->pc = 0x1FBABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBAB8u;
    // 0x1fbabc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBAB8u, 0x1FBAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBAC0u;
label_1fbac0:
    // 0x1fbac0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbac4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fbac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fbac8: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x1FBAC8u;
    SET_GPR_U32(ctx, 31, 0x1FBAD0u);
    ctx->pc = 0x1FBACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBAC8u;
    // 0x1fbacc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x1FBAC8u, 0x1FBAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBAD0u;
label_1fbad0:
    // 0x1fbad0: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1fbad0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1fbad4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fbad4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbad8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbadc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fbadcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fbae0: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBAE0u;
    SET_GPR_U32(ctx, 31, 0x1FBAE8u);
    ctx->pc = 0x1FBAE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBAE0u;
    // 0x1fbae4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBAE0u, 0x1FBAE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBAE8u;
label_1fbae8:
    // 0x1fbae8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbaec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fbaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fbaf0: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x1FBAF0u;
    SET_GPR_U32(ctx, 31, 0x1FBAF8u);
    ctx->pc = 0x1FBAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBAF0u;
    // 0x1fbaf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x1FBAF0u, 0x1FBAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBAF8u;
label_1fbaf8:
    // 0x1fbaf8: 0x24070055  addiu       $a3, $zero, 0x55
    ctx->pc = 0x1fbaf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1fbafc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fbafcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb04: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fbb04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fbb08: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBB08u;
    SET_GPR_U32(ctx, 31, 0x1FBB10u);
    ctx->pc = 0x1FBB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB08u;
    // 0x1fbb0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBB08u, 0x1FBB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB10u;
label_1fbb10:
    // 0x1fbb10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb14: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fbb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fbb18: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x1FBB18u;
    SET_GPR_U32(ctx, 31, 0x1FBB20u);
    ctx->pc = 0x1FBB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB18u;
    // 0x1fbb1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x1FBB18u, 0x1FBB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB20u;
label_1fbb20:
    // 0x1fbb20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbb20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb24: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fbb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fbb28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fbb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb2c: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x1fbb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1fbb30: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBB30u;
    SET_GPR_U32(ctx, 31, 0x1FBB38u);
    ctx->pc = 0x1FBB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB30u;
    // 0x1fbb34: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBB30u, 0x1FBB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB38u;
label_1fbb38:
    // 0x1fbb38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb3c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fbb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fbb40: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x1FBB40u;
    SET_GPR_U32(ctx, 31, 0x1FBB48u);
    ctx->pc = 0x1FBB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB40u;
    // 0x1fbb44: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x1FBB40u, 0x1FBB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB48u;
label_1fbb48:
    // 0x1fbb48: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x1FBB48u;
    {
        const bool branch_taken_0x1fbb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBB48u;
        // 0x1fbb4c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbb48) {
            ctx->pc = 0x1FBC88u;
            goto label_1fbc88;
        }
    }
    ctx->pc = 0x1FBB50u;
label_1fbb50:
    // 0x1fbb50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbb50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fbb54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fbb58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb5c: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBB5Cu;
    SET_GPR_U32(ctx, 31, 0x1FBB64u);
    ctx->pc = 0x1FBB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB5Cu;
    // 0x1fbb60: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBB5Cu, 0x1FBB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB64u;
label_1fbb64:
    // 0x1fbb64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fbb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbb70: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1fbb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fbb74: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBB74u;
    SET_GPR_U32(ctx, 31, 0x1FBB7Cu);
    ctx->pc = 0x1FBB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB74u;
    // 0x1fbb78: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBB74u, 0x1FBB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB7Cu;
label_1fbb7c:
    // 0x1fbb7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb84: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1fbb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fbb88: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1fbb88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1fbb8c: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBB8Cu;
    SET_GPR_U32(ctx, 31, 0x1FBB94u);
    ctx->pc = 0x1FBB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBB8Cu;
    // 0x1fbb90: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBB8Cu, 0x1FBB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBB94u;
label_1fbb94:
    // 0x1fbb94: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x1fbb94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1fbb98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fbb98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbb9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbba4: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBBA4u;
    SET_GPR_U32(ctx, 31, 0x1FBBACu);
    ctx->pc = 0x1FBBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBBA4u;
    // 0x1fbba8: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBBA4u, 0x1FBBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBBACu;
label_1fbbac:
    // 0x1fbbac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbbb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fbbb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbbb4: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x1FBBB4u;
    SET_GPR_U32(ctx, 31, 0x1FBBBCu);
    ctx->pc = 0x1FBBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBBB4u;
    // 0x1fbbb8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x1FBBB4u, 0x1FBBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBBBCu;
label_1fbbbc:
    // 0x1fbbbc: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x1fbbbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1fbbc0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fbbc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbbc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbbc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fbbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbbcc: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBBCCu;
    SET_GPR_U32(ctx, 31, 0x1FBBD4u);
    ctx->pc = 0x1FBBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBBCCu;
    // 0x1fbbd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBBCCu, 0x1FBBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBBD4u;
label_1fbbd4:
    // 0x1fbbd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbbd8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fbbd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fbbdc: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x1FBBDCu;
    SET_GPR_U32(ctx, 31, 0x1FBBE4u);
    ctx->pc = 0x1FBBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBBDCu;
    // 0x1fbbe0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x1FBBDCu, 0x1FBBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBBE4u;
label_1fbbe4:
    // 0x1fbbe4: 0x24070025  addiu       $a3, $zero, 0x25
    ctx->pc = 0x1fbbe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x1fbbe8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fbbe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbbec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbbf0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fbbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fbbf4: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBBF4u;
    SET_GPR_U32(ctx, 31, 0x1FBBFCu);
    ctx->pc = 0x1FBBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBBF4u;
    // 0x1fbbf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBBF4u, 0x1FBBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBBFCu;
label_1fbbfc:
    // 0x1fbbfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbbfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fbc00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fbc04: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x1FBC04u;
    SET_GPR_U32(ctx, 31, 0x1FBC0Cu);
    ctx->pc = 0x1FBC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC04u;
    // 0x1fbc08: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x1FBC04u, 0x1FBC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC0Cu;
label_1fbc0c:
    // 0x1fbc0c: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1fbc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1fbc10: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fbc10u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbc14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc18: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fbc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fbc1c: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBC1Cu;
    SET_GPR_U32(ctx, 31, 0x1FBC24u);
    ctx->pc = 0x1FBC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC1Cu;
    // 0x1fbc20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBC1Cu, 0x1FBC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC24u;
label_1fbc24:
    // 0x1fbc24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc28: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fbc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fbc2c: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x1FBC2Cu;
    SET_GPR_U32(ctx, 31, 0x1FBC34u);
    ctx->pc = 0x1FBC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC2Cu;
    // 0x1fbc30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x1FBC2Cu, 0x1FBC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC34u;
label_1fbc34:
    // 0x1fbc34: 0x24070055  addiu       $a3, $zero, 0x55
    ctx->pc = 0x1fbc34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1fbc38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1fbc38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbc3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc40: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fbc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fbc44: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBC44u;
    SET_GPR_U32(ctx, 31, 0x1FBC4Cu);
    ctx->pc = 0x1FBC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC44u;
    // 0x1fbc48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBC44u, 0x1FBC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC4Cu;
label_1fbc4c:
    // 0x1fbc4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc50: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fbc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fbc54: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x1FBC54u;
    SET_GPR_U32(ctx, 31, 0x1FBC5Cu);
    ctx->pc = 0x1FBC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC54u;
    // 0x1fbc58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x1FBC54u, 0x1FBC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC5Cu;
label_1fbc5c:
    // 0x1fbc5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc60: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fbc60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fbc64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fbc64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc68: 0x24070034  addiu       $a3, $zero, 0x34
    ctx->pc = 0x1fbc68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1fbc6c: 0xc07edf6  jal         func_1FB7D8
    ctx->pc = 0x1FBC6Cu;
    SET_GPR_U32(ctx, 31, 0x1FBC74u);
    ctx->pc = 0x1FBC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC6Cu;
    // 0x1fbc70: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB7D8u, 0x1FBC6Cu, 0x1FBC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC74u;
label_1fbc74:
    // 0x1fbc74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc78: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fbc78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fbc7c: 0xc07ee1a  jal         func_1FB868
    ctx->pc = 0x1FBC7Cu;
    SET_GPR_U32(ctx, 31, 0x1FBC84u);
    ctx->pc = 0x1FBC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC7Cu;
    // 0x1fbc80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB868u, 0x1FBC7Cu, 0x1FBC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC84u;
label_1fbc84:
    // 0x1fbc84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fbc88:
    // 0x1fbc88: 0xc07ee2e  jal         func_1FB8B8
    ctx->pc = 0x1FBC88u;
    SET_GPR_U32(ctx, 31, 0x1FBC90u);
    ctx->pc = 0x1FBC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC88u;
    // 0x1fbc8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B8u, 0x1FBC88u, 0x1FBC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC90u;
label_1fbc90:
    // 0x1fbc90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbc94: 0xc07ee2e  jal         func_1FB8B8
    ctx->pc = 0x1FBC94u;
    SET_GPR_U32(ctx, 31, 0x1FBC9Cu);
    ctx->pc = 0x1FBC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBC94u;
    // 0x1fbc98: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B8u, 0x1FBC94u, 0x1FBC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBC9Cu;
label_1fbc9c:
    // 0x1fbc9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbca0: 0xc07ee2e  jal         func_1FB8B8
    ctx->pc = 0x1FBCA0u;
    SET_GPR_U32(ctx, 31, 0x1FBCA8u);
    ctx->pc = 0x1FBCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBCA0u;
    // 0x1fbca4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B8u, 0x1FBCA0u, 0x1FBCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCA8u;
label_1fbca8:
    // 0x1fbca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcac: 0xc07ee2e  jal         func_1FB8B8
    ctx->pc = 0x1FBCACu;
    SET_GPR_U32(ctx, 31, 0x1FBCB4u);
    ctx->pc = 0x1FBCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBCACu;
    // 0x1fbcb0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B8u, 0x1FBCACu, 0x1FBCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCB4u;
label_1fbcb4:
    // 0x1fbcb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbcb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcb8: 0xc07ee2e  jal         func_1FB8B8
    ctx->pc = 0x1FBCB8u;
    SET_GPR_U32(ctx, 31, 0x1FBCC0u);
    ctx->pc = 0x1FBCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBCB8u;
    // 0x1fbcbc: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B8u, 0x1FBCB8u, 0x1FBCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCC0u;
label_1fbcc0:
    // 0x1fbcc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcc4: 0xc07ee2e  jal         func_1FB8B8
    ctx->pc = 0x1FBCC4u;
    SET_GPR_U32(ctx, 31, 0x1FBCCCu);
    ctx->pc = 0x1FBCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBCC4u;
    // 0x1fbcc8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B8u, 0x1FBCC4u, 0x1FBCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCCCu;
label_1fbccc:
    // 0x1fbccc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbcccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcd0: 0xc07ee2e  jal         func_1FB8B8
    ctx->pc = 0x1FBCD0u;
    SET_GPR_U32(ctx, 31, 0x1FBCD8u);
    ctx->pc = 0x1FBCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBCD0u;
    // 0x1fbcd4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B8u, 0x1FBCD0u, 0x1FBCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCD8u;
label_1fbcd8:
    // 0x1fbcd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fbcd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbcdc: 0xc07ee2e  jal         func_1FB8B8
    ctx->pc = 0x1FBCDCu;
    SET_GPR_U32(ctx, 31, 0x1FBCE4u);
    ctx->pc = 0x1FBCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FBCDCu;
    // 0x1fbce0: 0x24050017  addiu       $a1, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB8B8u, 0x1FBCDCu, 0x1FBCE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBCE4u;
label_1fbce4:
    // 0x1fbce4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1fbce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fbce8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1fbce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fbcec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fbcecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fbcf0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1fbcf0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fbcf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbcf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbcf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBCF8u;
        // 0x1fbcfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBD00u;
}
