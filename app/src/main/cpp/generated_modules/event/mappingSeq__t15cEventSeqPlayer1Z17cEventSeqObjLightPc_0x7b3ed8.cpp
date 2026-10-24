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
// Function: mappingSeq__t15cEventSeqPlayer1Z17cEventSeqObjLightPc
// Address: 0x7b3ed8 - 0x7b3fa0
void mappingSeq__t15cEventSeqPlayer1Z17cEventSeqObjLightPc_0x7b3ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mappingSeq__t15cEventSeqPlayer1Z17cEventSeqObjLightPc_0x7b3ed8");
#endif

    switch (ctx->pc) {
        case 0x7b3f00u: goto label_7b3f00;
        case 0x7b3f18u: goto label_7b3f18;
        case 0x7b3f28u: goto label_7b3f28;
        case 0x7b3f3cu: goto label_7b3f3c;
        case 0x7b3f4cu: goto label_7b3f4c;
        case 0x7b3f58u: goto label_7b3f58;
        case 0x7b3f64u: goto label_7b3f64;
        case 0x7b3f70u: goto label_7b3f70;
        default: break;
    }

    ctx->pc = 0x7b3ed8u;

    // 0x7b3ed8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7b3ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7b3edc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7b3edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7b3ee0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b3ee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3ee4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7b3ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7b3ee8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7b3ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7b3eec: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7b3eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7b3ef0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7b3ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7b3ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b3ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b3ef8: 0xc1ec756  jal         func_7B1D58
    ctx->pc = 0x7B3EF8u;
    SET_GPR_U32(ctx, 31, 0x7B3F00u);
    ctx->pc = 0x7B3EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3EF8u;
    // 0x7b3efc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D58u, 0x7B3EF8u, 0x7B3F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3F00u;
label_7b3f00:
    // 0x7b3f00: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b3f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b3f04: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7B3F04u;
    {
        const bool branch_taken_0x7b3f04 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7B3F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3F04u;
        // 0x7b3f08: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3f04) {
            ctx->pc = 0x7B3F80u;
            goto label_7b3f80;
        }
    }
    ctx->pc = 0x7B3F0Cu;
    // 0x7b3f0c: 0x3c14007b  lui         $s4, 0x7B
    ctx->pc = 0x7b3f0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)123 << 16));
    // 0x7b3f10: 0x3c13007b  lui         $s3, 0x7B
    ctx->pc = 0x7b3f10u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)123 << 16));
    // 0x7b3f14: 0x0  nop
    ctx->pc = 0x7b3f14u;
    // NOP
label_7b3f18:
    // 0x7b3f18: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x7b3f18u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b3f1c: 0x26845280  addiu       $a0, $s4, 0x5280
    ctx->pc = 0x7b3f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x7b3f20: 0xc1eba7e  jal         func_7AE9F8
    ctx->pc = 0x7B3F20u;
    SET_GPR_U32(ctx, 31, 0x7B3F28u);
    ctx->pc = 0x7B3F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3F20u;
    // 0x7b3f24: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE9F8u, 0x7B3F20u, 0x7B3F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3F28u;
label_7b3f28:
    // 0x7b3f28: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x7b3f28u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b3f2c: 0x266458d8  addiu       $a0, $s3, 0x58D8
    ctx->pc = 0x7b3f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22744));
    // 0x7b3f30: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x7b3f30u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b3f34: 0xc1ec0fe  jal         func_7B03F8
    ctx->pc = 0x7B3F34u;
    SET_GPR_U32(ctx, 31, 0x7B3F3Cu);
    ctx->pc = 0x7B3F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3F34u;
    // 0x7b3f38: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B03F8u, 0x7B3F34u, 0x7B3F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3F3Cu;
label_7b3f3c:
    // 0x7b3f3c: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x7b3f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b3f40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b3f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3f44: 0xc1ec75e  jal         func_7B1D78
    ctx->pc = 0x7B3F44u;
    SET_GPR_U32(ctx, 31, 0x7B3F4Cu);
    ctx->pc = 0x7B3F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3F44u;
    // 0x7b3f48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D78u, 0x7B3F44u, 0x7B3F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3F4Cu;
label_7b3f4c:
    // 0x7b3f4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b3f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3f50: 0xc1ec796  jal         func_7B1E58
    ctx->pc = 0x7B3F50u;
    SET_GPR_U32(ctx, 31, 0x7B3F58u);
    ctx->pc = 0x7B3F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3F50u;
    // 0x7b3f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1E58u, 0x7B3F50u, 0x7B3F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3F58u;
label_7b3f58:
    // 0x7b3f58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b3f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3f5c: 0xc1ec7cc  jal         func_7B1F30
    ctx->pc = 0x7B3F5Cu;
    SET_GPR_U32(ctx, 31, 0x7B3F64u);
    ctx->pc = 0x7B3F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3F5Cu;
    // 0x7b3f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1F30u, 0x7B3F5Cu, 0x7B3F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3F64u;
label_7b3f64:
    // 0x7b3f64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b3f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3f68: 0xc1ec86c  jal         func_7B21B0
    ctx->pc = 0x7B3F68u;
    SET_GPR_U32(ctx, 31, 0x7B3F70u);
    ctx->pc = 0x7B3F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3F68u;
    // 0x7b3f6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B21B0u, 0x7B3F68u, 0x7B3F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3F70u;
label_7b3f70:
    // 0x7b3f70: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b3f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b3f74: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x7b3f74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7b3f78: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7B3F78u;
    {
        const bool branch_taken_0x7b3f78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3F78u;
        // 0x7b3f7c: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3f78) {
            ctx->pc = 0x7B3F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b3f18;
        }
    }
    ctx->pc = 0x7B3F80u;
label_7b3f80:
    // 0x7b3f80: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7b3f80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b3f84: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7b3f84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b3f88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7b3f88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b3f8c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7b3f8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b3f90: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7b3f90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b3f94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b3f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b3f98: 0x3e00008  jr          $ra
    ctx->pc = 0x7B3F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3F98u;
        // 0x7b3f9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B3F98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B3FA0u;
}
} // namespace gh_event
