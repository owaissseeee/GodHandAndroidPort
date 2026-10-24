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
// Function: mappingSeq__t15cEventSeqPlayer1Z24cEventSeqAdditionalLightPc
// Address: 0x7b4938 - 0x7b4a00
void mappingSeq__t15cEventSeqPlayer1Z24cEventSeqAdditionalLightPc_0x7b4938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mappingSeq__t15cEventSeqPlayer1Z24cEventSeqAdditionalLightPc_0x7b4938");
#endif

    switch (ctx->pc) {
        case 0x7b4960u: goto label_7b4960;
        case 0x7b4978u: goto label_7b4978;
        case 0x7b4988u: goto label_7b4988;
        case 0x7b499cu: goto label_7b499c;
        case 0x7b49acu: goto label_7b49ac;
        case 0x7b49b8u: goto label_7b49b8;
        case 0x7b49c4u: goto label_7b49c4;
        case 0x7b49d0u: goto label_7b49d0;
        default: break;
    }

    ctx->pc = 0x7b4938u;

    // 0x7b4938: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7b4938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7b493c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7b493cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7b4940: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b4940u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4944: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7b4944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7b4948: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7b4948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7b494c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7b494cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7b4950: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7b4950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7b4954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b4954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b4958: 0xc1ec756  jal         func_7B1D58
    ctx->pc = 0x7B4958u;
    SET_GPR_U32(ctx, 31, 0x7B4960u);
    ctx->pc = 0x7B495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4958u;
    // 0x7b495c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D58u, 0x7B4958u, 0x7B4960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4960u;
label_7b4960:
    // 0x7b4960: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b4960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b4964: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7B4964u;
    {
        const bool branch_taken_0x7b4964 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7B4968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4964u;
        // 0x7b4968: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4964) {
            ctx->pc = 0x7B49E0u;
            goto label_7b49e0;
        }
    }
    ctx->pc = 0x7B496Cu;
    // 0x7b496c: 0x3c14007b  lui         $s4, 0x7B
    ctx->pc = 0x7b496cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)123 << 16));
    // 0x7b4970: 0x3c13007b  lui         $s3, 0x7B
    ctx->pc = 0x7b4970u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)123 << 16));
    // 0x7b4974: 0x0  nop
    ctx->pc = 0x7b4974u;
    // NOP
label_7b4978:
    // 0x7b4978: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x7b4978u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b497c: 0x26845280  addiu       $a0, $s4, 0x5280
    ctx->pc = 0x7b497cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x7b4980: 0xc1eba7e  jal         func_7AE9F8
    ctx->pc = 0x7B4980u;
    SET_GPR_U32(ctx, 31, 0x7B4988u);
    ctx->pc = 0x7B4984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4980u;
    // 0x7b4984: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE9F8u, 0x7B4980u, 0x7B4988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4988u;
label_7b4988:
    // 0x7b4988: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x7b4988u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b498c: 0x266458d8  addiu       $a0, $s3, 0x58D8
    ctx->pc = 0x7b498cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22744));
    // 0x7b4990: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x7b4990u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b4994: 0xc1ec0fe  jal         func_7B03F8
    ctx->pc = 0x7B4994u;
    SET_GPR_U32(ctx, 31, 0x7B499Cu);
    ctx->pc = 0x7B4998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4994u;
    // 0x7b4998: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B03F8u, 0x7B4994u, 0x7B499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B499Cu;
label_7b499c:
    // 0x7b499c: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x7b499cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b49a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b49a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b49a4: 0xc1ec75e  jal         func_7B1D78
    ctx->pc = 0x7B49A4u;
    SET_GPR_U32(ctx, 31, 0x7B49ACu);
    ctx->pc = 0x7B49A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B49A4u;
    // 0x7b49a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D78u, 0x7B49A4u, 0x7B49ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B49ACu;
label_7b49ac:
    // 0x7b49ac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b49acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b49b0: 0xc1ec796  jal         func_7B1E58
    ctx->pc = 0x7B49B0u;
    SET_GPR_U32(ctx, 31, 0x7B49B8u);
    ctx->pc = 0x7B49B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B49B0u;
    // 0x7b49b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1E58u, 0x7B49B0u, 0x7B49B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B49B8u;
label_7b49b8:
    // 0x7b49b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b49b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b49bc: 0xc1ec7cc  jal         func_7B1F30
    ctx->pc = 0x7B49BCu;
    SET_GPR_U32(ctx, 31, 0x7B49C4u);
    ctx->pc = 0x7B49C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B49BCu;
    // 0x7b49c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1F30u, 0x7B49BCu, 0x7B49C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B49C4u;
label_7b49c4:
    // 0x7b49c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b49c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b49c8: 0xc1ec86c  jal         func_7B21B0
    ctx->pc = 0x7B49C8u;
    SET_GPR_U32(ctx, 31, 0x7B49D0u);
    ctx->pc = 0x7B49CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B49C8u;
    // 0x7b49cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B21B0u, 0x7B49C8u, 0x7B49D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B49D0u;
label_7b49d0:
    // 0x7b49d0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b49d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b49d4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x7b49d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7b49d8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7B49D8u;
    {
        const bool branch_taken_0x7b49d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B49DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B49D8u;
        // 0x7b49dc: 0x26100044  addiu       $s0, $s0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b49d8) {
            ctx->pc = 0x7B4978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b4978;
        }
    }
    ctx->pc = 0x7B49E0u;
label_7b49e0:
    // 0x7b49e0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7b49e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b49e4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7b49e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b49e8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7b49e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b49ec: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7b49ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b49f0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7b49f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b49f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b49f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b49f8: 0x3e00008  jr          $ra
    ctx->pc = 0x7B49F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B49FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B49F8u;
        // 0x7b49fc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B49F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B4A00u;
}
} // namespace gh_event
