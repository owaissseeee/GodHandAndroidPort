#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: mappingSeq__t15cEventSeqPlayer1Z12cEventSeqBgmPc
// Address: 0x7b4870 - 0x7b4938
void mappingSeq__t15cEventSeqPlayer1Z12cEventSeqBgmPc_0x7b4870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mappingSeq__t15cEventSeqPlayer1Z12cEventSeqBgmPc_0x7b4870");
#endif

    switch (ctx->pc) {
        case 0x7b4898u: goto label_7b4898;
        case 0x7b48b0u: goto label_7b48b0;
        case 0x7b48c0u: goto label_7b48c0;
        case 0x7b48d4u: goto label_7b48d4;
        case 0x7b48e4u: goto label_7b48e4;
        case 0x7b48f0u: goto label_7b48f0;
        case 0x7b48fcu: goto label_7b48fc;
        case 0x7b4908u: goto label_7b4908;
        default: break;
    }

    ctx->pc = 0x7b4870u;

    // 0x7b4870: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7b4870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7b4874: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7b4874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7b4878: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b4878u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b487c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7b487cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7b4880: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7b4880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7b4884: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7b4884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7b4888: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7b4888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7b488c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b488cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b4890: 0xc1ec756  jal         func_7B1D58
    ctx->pc = 0x7B4890u;
    SET_GPR_U32(ctx, 31, 0x7B4898u);
    ctx->pc = 0x7B4894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4890u;
    // 0x7b4894: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D58u, 0x7B4890u, 0x7B4898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4898u;
label_7b4898:
    // 0x7b4898: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b4898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b489c: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7B489Cu;
    {
        const bool branch_taken_0x7b489c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7B48A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B489Cu;
        // 0x7b48a0: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b489c) {
            ctx->pc = 0x7B4918u;
            goto label_7b4918;
        }
    }
    ctx->pc = 0x7B48A4u;
    // 0x7b48a4: 0x3c14007b  lui         $s4, 0x7B
    ctx->pc = 0x7b48a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)123 << 16));
    // 0x7b48a8: 0x3c13007b  lui         $s3, 0x7B
    ctx->pc = 0x7b48a8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)123 << 16));
    // 0x7b48ac: 0x0  nop
    ctx->pc = 0x7b48acu;
    // NOP
label_7b48b0:
    // 0x7b48b0: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x7b48b0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b48b4: 0x26845280  addiu       $a0, $s4, 0x5280
    ctx->pc = 0x7b48b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x7b48b8: 0xc1eba7e  jal         func_7AE9F8
    ctx->pc = 0x7B48B8u;
    SET_GPR_U32(ctx, 31, 0x7B48C0u);
    ctx->pc = 0x7B48BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B48B8u;
    // 0x7b48bc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE9F8u, 0x7B48B8u, 0x7B48C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B48C0u;
label_7b48c0:
    // 0x7b48c0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x7b48c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b48c4: 0x266458d8  addiu       $a0, $s3, 0x58D8
    ctx->pc = 0x7b48c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22744));
    // 0x7b48c8: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x7b48c8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b48cc: 0xc1ec0fe  jal         func_7B03F8
    ctx->pc = 0x7B48CCu;
    SET_GPR_U32(ctx, 31, 0x7B48D4u);
    ctx->pc = 0x7B48D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B48CCu;
    // 0x7b48d0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B03F8u, 0x7B48CCu, 0x7B48D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B48D4u;
label_7b48d4:
    // 0x7b48d4: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x7b48d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b48d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b48d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b48dc: 0xc1ec75e  jal         func_7B1D78
    ctx->pc = 0x7B48DCu;
    SET_GPR_U32(ctx, 31, 0x7B48E4u);
    ctx->pc = 0x7B48E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B48DCu;
    // 0x7b48e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D78u, 0x7B48DCu, 0x7B48E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B48E4u;
label_7b48e4:
    // 0x7b48e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b48e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b48e8: 0xc1ec796  jal         func_7B1E58
    ctx->pc = 0x7B48E8u;
    SET_GPR_U32(ctx, 31, 0x7B48F0u);
    ctx->pc = 0x7B48ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B48E8u;
    // 0x7b48ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1E58u, 0x7B48E8u, 0x7B48F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B48F0u;
label_7b48f0:
    // 0x7b48f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b48f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b48f4: 0xc1ec7cc  jal         func_7B1F30
    ctx->pc = 0x7B48F4u;
    SET_GPR_U32(ctx, 31, 0x7B48FCu);
    ctx->pc = 0x7B48F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B48F4u;
    // 0x7b48f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1F30u, 0x7B48F4u, 0x7B48FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B48FCu;
label_7b48fc:
    // 0x7b48fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b48fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4900: 0xc1ec86c  jal         func_7B21B0
    ctx->pc = 0x7B4900u;
    SET_GPR_U32(ctx, 31, 0x7B4908u);
    ctx->pc = 0x7B4904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4900u;
    // 0x7b4904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B21B0u, 0x7B4900u, 0x7B4908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4908u;
label_7b4908:
    // 0x7b4908: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b4908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b490c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x7b490cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7b4910: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7B4910u;
    {
        const bool branch_taken_0x7b4910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B4914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4910u;
        // 0x7b4914: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4910) {
            ctx->pc = 0x7B48B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b48b0;
        }
    }
    ctx->pc = 0x7B4918u;
label_7b4918:
    // 0x7b4918: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7b4918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b491c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7b491cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b4920: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7b4920u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b4924: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7b4924u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b4928: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7b4928u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b492c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b492cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b4930: 0x3e00008  jr          $ra
    ctx->pc = 0x7B4930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B4934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4930u;
        // 0x7b4934: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B4930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B4938u;
}
} // namespace gh_event
