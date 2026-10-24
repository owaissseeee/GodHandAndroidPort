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
// Function: mappingSeq__t15cEventSeqPlayer1Z13cEventSeqWaitPc
// Address: 0x7b2b70 - 0x7b2c38
void mappingSeq__t15cEventSeqPlayer1Z13cEventSeqWaitPc_0x7b2b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mappingSeq__t15cEventSeqPlayer1Z13cEventSeqWaitPc_0x7b2b70");
#endif

    switch (ctx->pc) {
        case 0x7b2b98u: goto label_7b2b98;
        case 0x7b2bb0u: goto label_7b2bb0;
        case 0x7b2bc0u: goto label_7b2bc0;
        case 0x7b2bd4u: goto label_7b2bd4;
        case 0x7b2be4u: goto label_7b2be4;
        case 0x7b2bf0u: goto label_7b2bf0;
        case 0x7b2bfcu: goto label_7b2bfc;
        case 0x7b2c08u: goto label_7b2c08;
        default: break;
    }

    ctx->pc = 0x7b2b70u;

    // 0x7b2b70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7b2b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7b2b74: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7b2b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7b2b78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b2b78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2b7c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7b2b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7b2b80: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7b2b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7b2b84: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7b2b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7b2b88: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7b2b88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7b2b8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b2b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b2b90: 0xc1ec756  jal         func_7B1D58
    ctx->pc = 0x7B2B90u;
    SET_GPR_U32(ctx, 31, 0x7B2B98u);
    ctx->pc = 0x7B2B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2B90u;
    // 0x7b2b94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D58u, 0x7B2B90u, 0x7B2B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2B98u;
label_7b2b98:
    // 0x7b2b98: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b2b9c: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7B2B9Cu;
    {
        const bool branch_taken_0x7b2b9c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7B2BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2B9Cu;
        // 0x7b2ba0: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2b9c) {
            ctx->pc = 0x7B2C18u;
            goto label_7b2c18;
        }
    }
    ctx->pc = 0x7B2BA4u;
    // 0x7b2ba4: 0x3c14007b  lui         $s4, 0x7B
    ctx->pc = 0x7b2ba4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)123 << 16));
    // 0x7b2ba8: 0x3c13007b  lui         $s3, 0x7B
    ctx->pc = 0x7b2ba8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)123 << 16));
    // 0x7b2bac: 0x0  nop
    ctx->pc = 0x7b2bacu;
    // NOP
label_7b2bb0:
    // 0x7b2bb0: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x7b2bb0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b2bb4: 0x26845280  addiu       $a0, $s4, 0x5280
    ctx->pc = 0x7b2bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x7b2bb8: 0xc1eba7e  jal         func_7AE9F8
    ctx->pc = 0x7B2BB8u;
    SET_GPR_U32(ctx, 31, 0x7B2BC0u);
    ctx->pc = 0x7B2BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2BB8u;
    // 0x7b2bbc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE9F8u, 0x7B2BB8u, 0x7B2BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2BC0u;
label_7b2bc0:
    // 0x7b2bc0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x7b2bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b2bc4: 0x266458d8  addiu       $a0, $s3, 0x58D8
    ctx->pc = 0x7b2bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22744));
    // 0x7b2bc8: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x7b2bc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b2bcc: 0xc1ec0fe  jal         func_7B03F8
    ctx->pc = 0x7B2BCCu;
    SET_GPR_U32(ctx, 31, 0x7B2BD4u);
    ctx->pc = 0x7B2BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2BCCu;
    // 0x7b2bd0: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B03F8u, 0x7B2BCCu, 0x7B2BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2BD4u;
label_7b2bd4:
    // 0x7b2bd4: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x7b2bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b2bd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b2bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2bdc: 0xc1ec75e  jal         func_7B1D78
    ctx->pc = 0x7B2BDCu;
    SET_GPR_U32(ctx, 31, 0x7B2BE4u);
    ctx->pc = 0x7B2BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2BDCu;
    // 0x7b2be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D78u, 0x7B2BDCu, 0x7B2BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2BE4u;
label_7b2be4:
    // 0x7b2be4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b2be4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2be8: 0xc1ec796  jal         func_7B1E58
    ctx->pc = 0x7B2BE8u;
    SET_GPR_U32(ctx, 31, 0x7B2BF0u);
    ctx->pc = 0x7B2BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2BE8u;
    // 0x7b2bec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1E58u, 0x7B2BE8u, 0x7B2BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2BF0u;
label_7b2bf0:
    // 0x7b2bf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b2bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2bf4: 0xc1ec7cc  jal         func_7B1F30
    ctx->pc = 0x7B2BF4u;
    SET_GPR_U32(ctx, 31, 0x7B2BFCu);
    ctx->pc = 0x7B2BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2BF4u;
    // 0x7b2bf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1F30u, 0x7B2BF4u, 0x7B2BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2BFCu;
label_7b2bfc:
    // 0x7b2bfc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b2bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2c00: 0xc1ec86c  jal         func_7B21B0
    ctx->pc = 0x7B2C00u;
    SET_GPR_U32(ctx, 31, 0x7B2C08u);
    ctx->pc = 0x7B2C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2C00u;
    // 0x7b2c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B21B0u, 0x7B2C00u, 0x7B2C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2C08u;
label_7b2c08:
    // 0x7b2c08: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b2c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b2c0c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x7b2c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7b2c10: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7B2C10u;
    {
        const bool branch_taken_0x7b2c10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B2C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2C10u;
        // 0x7b2c14: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2c10) {
            ctx->pc = 0x7B2BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b2bb0;
        }
    }
    ctx->pc = 0x7B2C18u;
label_7b2c18:
    // 0x7b2c18: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7b2c18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b2c1c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7b2c1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b2c20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7b2c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b2c24: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7b2c24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b2c28: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7b2c28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b2c2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b2c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b2c30: 0x3e00008  jr          $ra
    ctx->pc = 0x7B2C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B2C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2C30u;
        // 0x7b2c34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B2C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B2C38u;
}
} // namespace gh_event
