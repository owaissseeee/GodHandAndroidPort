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
// Function: mappingSeq__t15cEventSeqPlayer1Z15cEventSeqFilterPc
// Address: 0x7b42d0 - 0x7b4398
void mappingSeq__t15cEventSeqPlayer1Z15cEventSeqFilterPc_0x7b42d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mappingSeq__t15cEventSeqPlayer1Z15cEventSeqFilterPc_0x7b42d0");
#endif

    switch (ctx->pc) {
        case 0x7b42f8u: goto label_7b42f8;
        case 0x7b4310u: goto label_7b4310;
        case 0x7b4320u: goto label_7b4320;
        case 0x7b4334u: goto label_7b4334;
        case 0x7b4344u: goto label_7b4344;
        case 0x7b4350u: goto label_7b4350;
        case 0x7b435cu: goto label_7b435c;
        case 0x7b4368u: goto label_7b4368;
        default: break;
    }

    ctx->pc = 0x7b42d0u;

    // 0x7b42d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7b42d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7b42d4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7b42d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7b42d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b42d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b42dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7b42dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7b42e0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7b42e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7b42e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7b42e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7b42e8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7b42e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7b42ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b42ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b42f0: 0xc1ec756  jal         func_7B1D58
    ctx->pc = 0x7B42F0u;
    SET_GPR_U32(ctx, 31, 0x7B42F8u);
    ctx->pc = 0x7B42F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B42F0u;
    // 0x7b42f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D58u, 0x7B42F0u, 0x7B42F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B42F8u;
label_7b42f8:
    // 0x7b42f8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b42fc: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7B42FCu;
    {
        const bool branch_taken_0x7b42fc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7B4300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B42FCu;
        // 0x7b4300: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b42fc) {
            ctx->pc = 0x7B4378u;
            goto label_7b4378;
        }
    }
    ctx->pc = 0x7B4304u;
    // 0x7b4304: 0x3c14007b  lui         $s4, 0x7B
    ctx->pc = 0x7b4304u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)123 << 16));
    // 0x7b4308: 0x3c13007b  lui         $s3, 0x7B
    ctx->pc = 0x7b4308u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)123 << 16));
    // 0x7b430c: 0x0  nop
    ctx->pc = 0x7b430cu;
    // NOP
label_7b4310:
    // 0x7b4310: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x7b4310u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b4314: 0x26845280  addiu       $a0, $s4, 0x5280
    ctx->pc = 0x7b4314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x7b4318: 0xc1eba7e  jal         func_7AE9F8
    ctx->pc = 0x7B4318u;
    SET_GPR_U32(ctx, 31, 0x7B4320u);
    ctx->pc = 0x7B431Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4318u;
    // 0x7b431c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE9F8u, 0x7B4318u, 0x7B4320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4320u;
label_7b4320:
    // 0x7b4320: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x7b4320u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b4324: 0x266458d8  addiu       $a0, $s3, 0x58D8
    ctx->pc = 0x7b4324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22744));
    // 0x7b4328: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x7b4328u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b432c: 0xc1ec0fe  jal         func_7B03F8
    ctx->pc = 0x7B432Cu;
    SET_GPR_U32(ctx, 31, 0x7B4334u);
    ctx->pc = 0x7B4330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B432Cu;
    // 0x7b4330: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B03F8u, 0x7B432Cu, 0x7B4334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4334u;
label_7b4334:
    // 0x7b4334: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x7b4334u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b4338: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b4338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b433c: 0xc1ec75e  jal         func_7B1D78
    ctx->pc = 0x7B433Cu;
    SET_GPR_U32(ctx, 31, 0x7B4344u);
    ctx->pc = 0x7B4340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B433Cu;
    // 0x7b4340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D78u, 0x7B433Cu, 0x7B4344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4344u;
label_7b4344:
    // 0x7b4344: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b4344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4348: 0xc1ec796  jal         func_7B1E58
    ctx->pc = 0x7B4348u;
    SET_GPR_U32(ctx, 31, 0x7B4350u);
    ctx->pc = 0x7B434Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4348u;
    // 0x7b434c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1E58u, 0x7B4348u, 0x7B4350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4350u;
label_7b4350:
    // 0x7b4350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b4350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4354: 0xc1ec7cc  jal         func_7B1F30
    ctx->pc = 0x7B4354u;
    SET_GPR_U32(ctx, 31, 0x7B435Cu);
    ctx->pc = 0x7B4358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4354u;
    // 0x7b4358: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1F30u, 0x7B4354u, 0x7B435Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B435Cu;
label_7b435c:
    // 0x7b435c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b435cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4360: 0xc1ec86c  jal         func_7B21B0
    ctx->pc = 0x7B4360u;
    SET_GPR_U32(ctx, 31, 0x7B4368u);
    ctx->pc = 0x7B4364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4360u;
    // 0x7b4364: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B21B0u, 0x7B4360u, 0x7B4368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4368u;
label_7b4368:
    // 0x7b4368: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b4368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b436c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x7b436cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7b4370: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7B4370u;
    {
        const bool branch_taken_0x7b4370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4370u;
        // 0x7b4374: 0x261002e8  addiu       $s0, $s0, 0x2E8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4370) {
            ctx->pc = 0x7B4310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b4310;
        }
    }
    ctx->pc = 0x7B4378u;
label_7b4378:
    // 0x7b4378: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7b4378u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b437c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7b437cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b4380: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7b4380u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b4384: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7b4384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b4388: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7b4388u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b438c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b438cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b4390: 0x3e00008  jr          $ra
    ctx->pc = 0x7B4390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4390u;
        // 0x7b4394: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B4390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B4398u;
}
} // namespace gh_event
