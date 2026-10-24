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
// Function: mappingSeq__t15cEventSeqPlayer1Z17cEventSeqScrLightPc
// Address: 0x7b37f0 - 0x7b38b8
void mappingSeq__t15cEventSeqPlayer1Z17cEventSeqScrLightPc_0x7b37f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mappingSeq__t15cEventSeqPlayer1Z17cEventSeqScrLightPc_0x7b37f0");
#endif

    switch (ctx->pc) {
        case 0x7b3818u: goto label_7b3818;
        case 0x7b3830u: goto label_7b3830;
        case 0x7b3840u: goto label_7b3840;
        case 0x7b3854u: goto label_7b3854;
        case 0x7b3864u: goto label_7b3864;
        case 0x7b3870u: goto label_7b3870;
        case 0x7b387cu: goto label_7b387c;
        case 0x7b3888u: goto label_7b3888;
        default: break;
    }

    ctx->pc = 0x7b37f0u;

    // 0x7b37f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7b37f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7b37f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7b37f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7b37f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b37f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b37fc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7b37fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7b3800: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7b3800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7b3804: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7b3804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7b3808: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7b3808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7b380c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b380cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b3810: 0xc1ec756  jal         func_7B1D58
    ctx->pc = 0x7B3810u;
    SET_GPR_U32(ctx, 31, 0x7B3818u);
    ctx->pc = 0x7B3814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3810u;
    // 0x7b3814: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D58u, 0x7B3810u, 0x7B3818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3818u;
label_7b3818:
    // 0x7b3818: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b3818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b381c: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7B381Cu;
    {
        const bool branch_taken_0x7b381c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7B3820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B381Cu;
        // 0x7b3820: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b381c) {
            ctx->pc = 0x7B3898u;
            goto label_7b3898;
        }
    }
    ctx->pc = 0x7B3824u;
    // 0x7b3824: 0x3c14007b  lui         $s4, 0x7B
    ctx->pc = 0x7b3824u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)123 << 16));
    // 0x7b3828: 0x3c13007b  lui         $s3, 0x7B
    ctx->pc = 0x7b3828u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)123 << 16));
    // 0x7b382c: 0x0  nop
    ctx->pc = 0x7b382cu;
    // NOP
label_7b3830:
    // 0x7b3830: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x7b3830u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b3834: 0x26845280  addiu       $a0, $s4, 0x5280
    ctx->pc = 0x7b3834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x7b3838: 0xc1eba7e  jal         func_7AE9F8
    ctx->pc = 0x7B3838u;
    SET_GPR_U32(ctx, 31, 0x7B3840u);
    ctx->pc = 0x7B383Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3838u;
    // 0x7b383c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE9F8u, 0x7B3838u, 0x7B3840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3840u;
label_7b3840:
    // 0x7b3840: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x7b3840u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b3844: 0x266458d8  addiu       $a0, $s3, 0x58D8
    ctx->pc = 0x7b3844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22744));
    // 0x7b3848: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x7b3848u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b384c: 0xc1ec0fe  jal         func_7B03F8
    ctx->pc = 0x7B384Cu;
    SET_GPR_U32(ctx, 31, 0x7B3854u);
    ctx->pc = 0x7B3850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B384Cu;
    // 0x7b3850: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B03F8u, 0x7B384Cu, 0x7B3854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3854u;
label_7b3854:
    // 0x7b3854: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x7b3854u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b3858: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b3858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b385c: 0xc1ec75e  jal         func_7B1D78
    ctx->pc = 0x7B385Cu;
    SET_GPR_U32(ctx, 31, 0x7B3864u);
    ctx->pc = 0x7B3860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B385Cu;
    // 0x7b3860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D78u, 0x7B385Cu, 0x7B3864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3864u;
label_7b3864:
    // 0x7b3864: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b3864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3868: 0xc1ec796  jal         func_7B1E58
    ctx->pc = 0x7B3868u;
    SET_GPR_U32(ctx, 31, 0x7B3870u);
    ctx->pc = 0x7B386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3868u;
    // 0x7b386c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1E58u, 0x7B3868u, 0x7B3870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3870u;
label_7b3870:
    // 0x7b3870: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b3870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3874: 0xc1ec7cc  jal         func_7B1F30
    ctx->pc = 0x7B3874u;
    SET_GPR_U32(ctx, 31, 0x7B387Cu);
    ctx->pc = 0x7B3878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3874u;
    // 0x7b3878: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1F30u, 0x7B3874u, 0x7B387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B387Cu;
label_7b387c:
    // 0x7b387c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b387cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3880: 0xc1ec86c  jal         func_7B21B0
    ctx->pc = 0x7B3880u;
    SET_GPR_U32(ctx, 31, 0x7B3888u);
    ctx->pc = 0x7B3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3880u;
    // 0x7b3884: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B21B0u, 0x7B3880u, 0x7B3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3888u;
label_7b3888:
    // 0x7b3888: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b3888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b388c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x7b388cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7b3890: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7B3890u;
    {
        const bool branch_taken_0x7b3890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3890u;
        // 0x7b3894: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3890) {
            ctx->pc = 0x7B3830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b3830;
        }
    }
    ctx->pc = 0x7B3898u;
label_7b3898:
    // 0x7b3898: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7b3898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b389c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7b389cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b38a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7b38a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b38a4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7b38a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b38a8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7b38a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b38ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b38acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b38b0: 0x3e00008  jr          $ra
    ctx->pc = 0x7B38B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B38B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B38B0u;
        // 0x7b38b4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B38B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B38B8u;
}
} // namespace gh_event
