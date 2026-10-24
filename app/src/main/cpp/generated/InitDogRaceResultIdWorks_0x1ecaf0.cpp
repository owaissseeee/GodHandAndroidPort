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

// Function: InitDogRaceResultIdWorks
// Address: 0x1ecaf0 - 0x1ecbd0
void InitDogRaceResultIdWorks_0x1ecaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitDogRaceResultIdWorks_0x1ecaf0");
#endif

    switch (ctx->pc) {
        case 0x1ecb24u: goto label_1ecb24;
        case 0x1ecb30u: goto label_1ecb30;
        case 0x1ecb3cu: goto label_1ecb3c;
        case 0x1ecb4cu: goto label_1ecb4c;
        case 0x1ecb64u: goto label_1ecb64;
        case 0x1ecb70u: goto label_1ecb70;
        case 0x1ecb7cu: goto label_1ecb7c;
        case 0x1ecb88u: goto label_1ecb88;
        case 0x1ecb94u: goto label_1ecb94;
        case 0x1ecba4u: goto label_1ecba4;
        case 0x1ecbb0u: goto label_1ecbb0;
        default: break;
    }

    ctx->pc = 0x1ecaf0u;

    // 0x1ecaf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ecaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ecaf4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1ecaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ecaf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ecaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ecafc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ecafcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1ecb00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb04: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ecb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ecb08: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x1ecb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1ecb0c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ecb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ecb10: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ecb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ecb14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ecb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ecb18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ecb1c: 0xc0aa7a8  jal         func_2A9EA0
    ctx->pc = 0x1ECB1Cu;
    SET_GPR_U32(ctx, 31, 0x1ECB24u);
    ctx->pc = 0x1ECB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB1Cu;
    // 0x1ecb20: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9EA0u, 0x1ECB1Cu, 0x1ECB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB24u;
label_1ecb24:
    // 0x1ecb24: 0x26510060  addiu       $s1, $s2, 0x60
    ctx->pc = 0x1ecb24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    // 0x1ecb28: 0xc0aaefa  jal         func_2ABBE8
    ctx->pc = 0x1ECB28u;
    SET_GPR_U32(ctx, 31, 0x1ECB30u);
    ctx->pc = 0x1ECB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB28u;
    // 0x1ecb2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABBE8u, 0x1ECB28u, 0x1ECB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB30u;
label_1ecb30:
    // 0x1ecb30: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1ecb30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb34: 0xc0aa904  jal         func_2AA410
    ctx->pc = 0x1ECB34u;
    SET_GPR_U32(ctx, 31, 0x1ECB3Cu);
    ctx->pc = 0x1ECB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB34u;
    // 0x1ecb38: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA410u, 0x1ECB34u, 0x1ECB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB3Cu;
label_1ecb3c:
    // 0x1ecb3c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ecb3cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1ecb40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ecb40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb44: 0xc0b576a  jal         func_2D5DA8
    ctx->pc = 0x1ECB44u;
    SET_GPR_U32(ctx, 31, 0x1ECB4Cu);
    ctx->pc = 0x1ECB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB44u;
    // 0x1ecb48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DA8u, 0x1ECB44u, 0x1ECB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB4Cu;
label_1ecb4c:
    // 0x1ecb4c: 0x2a62002d  slti        $v0, $s3, 0x2D
    ctx->pc = 0x1ecb4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)45) ? 1 : 0);
    // 0x1ecb50: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1ECB50u;
    {
        const bool branch_taken_0x1ecb50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ECB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECB50u;
        // 0x1ecb54: 0x2631007c  addiu       $s1, $s1, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ecb50) {
            ctx->pc = 0x1ECB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ecb30;
        }
    }
    ctx->pc = 0x1ECB58u;
    // 0x1ecb58: 0x26440e6c  addiu       $a0, $s2, 0xE6C
    ctx->pc = 0x1ecb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3692));
    // 0x1ecb5c: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1ECB5Cu;
    SET_GPR_U32(ctx, 31, 0x1ECB64u);
    ctx->pc = 0x1ECB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB5Cu;
    // 0x1ecb60: 0x2405101a  addiu       $a1, $zero, 0x101A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1ECB5Cu, 0x1ECB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB64u;
label_1ecb64:
    // 0x1ecb64: 0x26441534  addiu       $a0, $s2, 0x1534
    ctx->pc = 0x1ecb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5428));
    // 0x1ecb68: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1ECB68u;
    SET_GPR_U32(ctx, 31, 0x1ECB70u);
    ctx->pc = 0x1ECB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB68u;
    // 0x1ecb6c: 0x2405101a  addiu       $a1, $zero, 0x101A (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4122));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1ECB68u, 0x1ECB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB70u;
label_1ecb70:
    // 0x1ecb70: 0x26440ee8  addiu       $a0, $s2, 0xEE8
    ctx->pc = 0x1ecb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3816));
    // 0x1ecb74: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1ECB74u;
    SET_GPR_U32(ctx, 31, 0x1ECB7Cu);
    ctx->pc = 0x1ECB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB74u;
    // 0x1ecb78: 0x2405101b  addiu       $a1, $zero, 0x101B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1ECB74u, 0x1ECB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB7Cu;
label_1ecb7c:
    // 0x1ecb7c: 0x264415b0  addiu       $a0, $s2, 0x15B0
    ctx->pc = 0x1ecb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 5552));
    // 0x1ecb80: 0xc0b5958  jal         func_2D6560
    ctx->pc = 0x1ECB80u;
    SET_GPR_U32(ctx, 31, 0x1ECB88u);
    ctx->pc = 0x1ECB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB80u;
    // 0x1ecb84: 0x2405101b  addiu       $a1, $zero, 0x101B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4123));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6560u, 0x1ECB80u, 0x1ECB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB88u;
label_1ecb88:
    // 0x1ecb88: 0x26440440  addiu       $a0, $s2, 0x440
    ctx->pc = 0x1ecb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
    // 0x1ecb8c: 0xc0b5924  jal         func_2D6490
    ctx->pc = 0x1ECB8Cu;
    SET_GPR_U32(ctx, 31, 0x1ECB94u);
    ctx->pc = 0x1ECB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB8Cu;
    // 0x1ecb90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6490u, 0x1ECB8Cu, 0x1ECB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECB94u;
label_1ecb94:
    // 0x1ecb94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ecb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecb98: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x1ecb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x1ecb9c: 0xc07b38c  jal         func_1ECE30
    ctx->pc = 0x1ECB9Cu;
    SET_GPR_U32(ctx, 31, 0x1ECBA4u);
    ctx->pc = 0x1ECBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECB9Cu;
    // 0x1ecba0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECE30u, 0x1ECB9Cu, 0x1ECBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBA4u;
label_1ecba4:
    // 0x1ecba4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ecba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ecba8: 0xc07b524  jal         func_1ED490
    ctx->pc = 0x1ECBA8u;
    SET_GPR_U32(ctx, 31, 0x1ECBB0u);
    ctx->pc = 0x1ECBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ECBA8u;
    // 0x1ecbac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED490u, 0x1ECBA8u, 0x1ECBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ECBB0u;
label_1ecbb0:
    // 0x1ecbb0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ecbb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ecbb4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ecbb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ecbb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ecbb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ecbbc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ecbbcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ecbc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ecbc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ecbc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECBC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ECBC4u;
        // 0x1ecbc8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ECBC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ECBCCu;
    // 0x1ecbcc: 0x0  nop
    ctx->pc = 0x1ecbccu;
    // NOP
    ctx->pc = 0x1ecbd0u;
}
