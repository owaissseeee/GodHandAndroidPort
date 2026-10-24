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
// Function: mappingSeq__t15cEventSeqPlayer1Z12cEventSeqVibPc
// Address: 0x7b2f58 - 0x7b3020
void mappingSeq__t15cEventSeqPlayer1Z12cEventSeqVibPc_0x7b2f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mappingSeq__t15cEventSeqPlayer1Z12cEventSeqVibPc_0x7b2f58");
#endif

    switch (ctx->pc) {
        case 0x7b2f80u: goto label_7b2f80;
        case 0x7b2f98u: goto label_7b2f98;
        case 0x7b2fa8u: goto label_7b2fa8;
        case 0x7b2fbcu: goto label_7b2fbc;
        case 0x7b2fccu: goto label_7b2fcc;
        case 0x7b2fd8u: goto label_7b2fd8;
        case 0x7b2fe4u: goto label_7b2fe4;
        case 0x7b2ff0u: goto label_7b2ff0;
        default: break;
    }

    ctx->pc = 0x7b2f58u;

    // 0x7b2f58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7b2f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7b2f5c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7b2f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7b2f60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b2f60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2f64: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7b2f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7b2f68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7b2f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7b2f6c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7b2f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7b2f70: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7b2f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7b2f74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b2f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b2f78: 0xc1ec756  jal         func_7B1D58
    ctx->pc = 0x7B2F78u;
    SET_GPR_U32(ctx, 31, 0x7B2F80u);
    ctx->pc = 0x7B2F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2F78u;
    // 0x7b2f7c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D58u, 0x7B2F78u, 0x7B2F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2F80u;
label_7b2f80:
    // 0x7b2f80: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b2f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b2f84: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7B2F84u;
    {
        const bool branch_taken_0x7b2f84 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7B2F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2F84u;
        // 0x7b2f88: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2f84) {
            ctx->pc = 0x7B3000u;
            goto label_7b3000;
        }
    }
    ctx->pc = 0x7B2F8Cu;
    // 0x7b2f8c: 0x3c14007b  lui         $s4, 0x7B
    ctx->pc = 0x7b2f8cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)123 << 16));
    // 0x7b2f90: 0x3c13007b  lui         $s3, 0x7B
    ctx->pc = 0x7b2f90u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)123 << 16));
    // 0x7b2f94: 0x0  nop
    ctx->pc = 0x7b2f94u;
    // NOP
label_7b2f98:
    // 0x7b2f98: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x7b2f98u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b2f9c: 0x26845280  addiu       $a0, $s4, 0x5280
    ctx->pc = 0x7b2f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x7b2fa0: 0xc1eba7e  jal         func_7AE9F8
    ctx->pc = 0x7B2FA0u;
    SET_GPR_U32(ctx, 31, 0x7B2FA8u);
    ctx->pc = 0x7B2FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2FA0u;
    // 0x7b2fa4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE9F8u, 0x7B2FA0u, 0x7B2FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2FA8u;
label_7b2fa8:
    // 0x7b2fa8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x7b2fa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b2fac: 0x266458d8  addiu       $a0, $s3, 0x58D8
    ctx->pc = 0x7b2facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22744));
    // 0x7b2fb0: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x7b2fb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b2fb4: 0xc1ec0fe  jal         func_7B03F8
    ctx->pc = 0x7B2FB4u;
    SET_GPR_U32(ctx, 31, 0x7B2FBCu);
    ctx->pc = 0x7B2FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2FB4u;
    // 0x7b2fb8: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B03F8u, 0x7B2FB4u, 0x7B2FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2FBCu;
label_7b2fbc:
    // 0x7b2fbc: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x7b2fbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b2fc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b2fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2fc4: 0xc1ec75e  jal         func_7B1D78
    ctx->pc = 0x7B2FC4u;
    SET_GPR_U32(ctx, 31, 0x7B2FCCu);
    ctx->pc = 0x7B2FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2FC4u;
    // 0x7b2fc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D78u, 0x7B2FC4u, 0x7B2FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2FCCu;
label_7b2fcc:
    // 0x7b2fcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b2fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2fd0: 0xc1ec796  jal         func_7B1E58
    ctx->pc = 0x7B2FD0u;
    SET_GPR_U32(ctx, 31, 0x7B2FD8u);
    ctx->pc = 0x7B2FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2FD0u;
    // 0x7b2fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1E58u, 0x7B2FD0u, 0x7B2FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2FD8u;
label_7b2fd8:
    // 0x7b2fd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b2fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2fdc: 0xc1ec7cc  jal         func_7B1F30
    ctx->pc = 0x7B2FDCu;
    SET_GPR_U32(ctx, 31, 0x7B2FE4u);
    ctx->pc = 0x7B2FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2FDCu;
    // 0x7b2fe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1F30u, 0x7B2FDCu, 0x7B2FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2FE4u;
label_7b2fe4:
    // 0x7b2fe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b2fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b2fe8: 0xc1ec86c  jal         func_7B21B0
    ctx->pc = 0x7B2FE8u;
    SET_GPR_U32(ctx, 31, 0x7B2FF0u);
    ctx->pc = 0x7B2FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B2FE8u;
    // 0x7b2fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B21B0u, 0x7B2FE8u, 0x7B2FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B2FF0u;
label_7b2ff0:
    // 0x7b2ff0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b2ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b2ff4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x7b2ff4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7b2ff8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7B2FF8u;
    {
        const bool branch_taken_0x7b2ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B2FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B2FF8u;
        // 0x7b2ffc: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b2ff8) {
            ctx->pc = 0x7B2F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b2f98;
        }
    }
    ctx->pc = 0x7B3000u;
label_7b3000:
    // 0x7b3000: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7b3000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b3004: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7b3004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b3008: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7b3008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b300c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7b300cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b3010: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7b3010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b3014: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b3014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b3018: 0x3e00008  jr          $ra
    ctx->pc = 0x7B3018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B301Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3018u;
        // 0x7b301c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B3018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B3020u;
}
} // namespace gh_event
