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
// Function: mappingSeq__t15cEventSeqPlayer1Z15cEventSeqVertexPc
// Address: 0x7b3340 - 0x7b3408
void mappingSeq__t15cEventSeqPlayer1Z15cEventSeqVertexPc_0x7b3340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mappingSeq__t15cEventSeqPlayer1Z15cEventSeqVertexPc_0x7b3340");
#endif

    switch (ctx->pc) {
        case 0x7b3368u: goto label_7b3368;
        case 0x7b3380u: goto label_7b3380;
        case 0x7b3390u: goto label_7b3390;
        case 0x7b33a4u: goto label_7b33a4;
        case 0x7b33b4u: goto label_7b33b4;
        case 0x7b33c0u: goto label_7b33c0;
        case 0x7b33ccu: goto label_7b33cc;
        case 0x7b33d8u: goto label_7b33d8;
        default: break;
    }

    ctx->pc = 0x7b3340u;

    // 0x7b3340: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7b3340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7b3344: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7b3344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7b3348: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b3348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b334c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7b334cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7b3350: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7b3350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7b3354: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7b3354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7b3358: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7b3358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7b335c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b335cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b3360: 0xc1ec756  jal         func_7B1D58
    ctx->pc = 0x7B3360u;
    SET_GPR_U32(ctx, 31, 0x7B3368u);
    ctx->pc = 0x7B3364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3360u;
    // 0x7b3364: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D58u, 0x7B3360u, 0x7B3368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3368u;
label_7b3368:
    // 0x7b3368: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b3368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b336c: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7B336Cu;
    {
        const bool branch_taken_0x7b336c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7B3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B336Cu;
        // 0x7b3370: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b336c) {
            ctx->pc = 0x7B33E8u;
            goto label_7b33e8;
        }
    }
    ctx->pc = 0x7B3374u;
    // 0x7b3374: 0x3c14007b  lui         $s4, 0x7B
    ctx->pc = 0x7b3374u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)123 << 16));
    // 0x7b3378: 0x3c13007b  lui         $s3, 0x7B
    ctx->pc = 0x7b3378u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)123 << 16));
    // 0x7b337c: 0x0  nop
    ctx->pc = 0x7b337cu;
    // NOP
label_7b3380:
    // 0x7b3380: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x7b3380u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b3384: 0x26845280  addiu       $a0, $s4, 0x5280
    ctx->pc = 0x7b3384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x7b3388: 0xc1eba7e  jal         func_7AE9F8
    ctx->pc = 0x7B3388u;
    SET_GPR_U32(ctx, 31, 0x7B3390u);
    ctx->pc = 0x7B338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3388u;
    // 0x7b338c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE9F8u, 0x7B3388u, 0x7B3390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3390u;
label_7b3390:
    // 0x7b3390: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x7b3390u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b3394: 0x266458d8  addiu       $a0, $s3, 0x58D8
    ctx->pc = 0x7b3394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22744));
    // 0x7b3398: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x7b3398u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b339c: 0xc1ec0fe  jal         func_7B03F8
    ctx->pc = 0x7B339Cu;
    SET_GPR_U32(ctx, 31, 0x7B33A4u);
    ctx->pc = 0x7B33A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B339Cu;
    // 0x7b33a0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B03F8u, 0x7B339Cu, 0x7B33A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B33A4u;
label_7b33a4:
    // 0x7b33a4: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x7b33a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b33a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b33a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b33ac: 0xc1ec75e  jal         func_7B1D78
    ctx->pc = 0x7B33ACu;
    SET_GPR_U32(ctx, 31, 0x7B33B4u);
    ctx->pc = 0x7B33B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B33ACu;
    // 0x7b33b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D78u, 0x7B33ACu, 0x7B33B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B33B4u;
label_7b33b4:
    // 0x7b33b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b33b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b33b8: 0xc1ec796  jal         func_7B1E58
    ctx->pc = 0x7B33B8u;
    SET_GPR_U32(ctx, 31, 0x7B33C0u);
    ctx->pc = 0x7B33BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B33B8u;
    // 0x7b33bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1E58u, 0x7B33B8u, 0x7B33C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B33C0u;
label_7b33c0:
    // 0x7b33c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b33c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b33c4: 0xc1ec7cc  jal         func_7B1F30
    ctx->pc = 0x7B33C4u;
    SET_GPR_U32(ctx, 31, 0x7B33CCu);
    ctx->pc = 0x7B33C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B33C4u;
    // 0x7b33c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1F30u, 0x7B33C4u, 0x7B33CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B33CCu;
label_7b33cc:
    // 0x7b33cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b33ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b33d0: 0xc1ec86c  jal         func_7B21B0
    ctx->pc = 0x7B33D0u;
    SET_GPR_U32(ctx, 31, 0x7B33D8u);
    ctx->pc = 0x7B33D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B33D0u;
    // 0x7b33d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B21B0u, 0x7B33D0u, 0x7B33D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B33D8u;
label_7b33d8:
    // 0x7b33d8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b33d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b33dc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x7b33dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7b33e0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7B33E0u;
    {
        const bool branch_taken_0x7b33e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B33E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B33E0u;
        // 0x7b33e4: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b33e0) {
            ctx->pc = 0x7B3380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b3380;
        }
    }
    ctx->pc = 0x7B33E8u;
label_7b33e8:
    // 0x7b33e8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7b33e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b33ec: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7b33ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b33f0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7b33f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b33f4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7b33f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b33f8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7b33f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b33fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b33fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b3400: 0x3e00008  jr          $ra
    ctx->pc = 0x7B3400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3400u;
        // 0x7b3404: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B3400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B3408u;
}
} // namespace gh_event
