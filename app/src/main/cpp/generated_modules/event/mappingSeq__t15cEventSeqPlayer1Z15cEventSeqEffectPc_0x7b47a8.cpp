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
// Function: mappingSeq__t15cEventSeqPlayer1Z15cEventSeqEffectPc
// Address: 0x7b47a8 - 0x7b4870
void mappingSeq__t15cEventSeqPlayer1Z15cEventSeqEffectPc_0x7b47a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mappingSeq__t15cEventSeqPlayer1Z15cEventSeqEffectPc_0x7b47a8");
#endif

    switch (ctx->pc) {
        case 0x7b47d0u: goto label_7b47d0;
        case 0x7b47e8u: goto label_7b47e8;
        case 0x7b47f8u: goto label_7b47f8;
        case 0x7b480cu: goto label_7b480c;
        case 0x7b481cu: goto label_7b481c;
        case 0x7b4828u: goto label_7b4828;
        case 0x7b4834u: goto label_7b4834;
        case 0x7b4840u: goto label_7b4840;
        default: break;
    }

    ctx->pc = 0x7b47a8u;

    // 0x7b47a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7b47a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7b47ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7b47acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7b47b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b47b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b47b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7b47b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7b47b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7b47b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7b47bc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7b47bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7b47c0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7b47c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7b47c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b47c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b47c8: 0xc1ec756  jal         func_7B1D58
    ctx->pc = 0x7B47C8u;
    SET_GPR_U32(ctx, 31, 0x7B47D0u);
    ctx->pc = 0x7B47CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B47C8u;
    // 0x7b47cc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D58u, 0x7B47C8u, 0x7B47D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B47D0u;
label_7b47d0:
    // 0x7b47d0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b47d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b47d4: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7B47D4u;
    {
        const bool branch_taken_0x7b47d4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7B47D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B47D4u;
        // 0x7b47d8: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b47d4) {
            ctx->pc = 0x7B4850u;
            goto label_7b4850;
        }
    }
    ctx->pc = 0x7B47DCu;
    // 0x7b47dc: 0x3c14007b  lui         $s4, 0x7B
    ctx->pc = 0x7b47dcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)123 << 16));
    // 0x7b47e0: 0x3c13007b  lui         $s3, 0x7B
    ctx->pc = 0x7b47e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)123 << 16));
    // 0x7b47e4: 0x0  nop
    ctx->pc = 0x7b47e4u;
    // NOP
label_7b47e8:
    // 0x7b47e8: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x7b47e8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b47ec: 0x26845280  addiu       $a0, $s4, 0x5280
    ctx->pc = 0x7b47ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x7b47f0: 0xc1eba7e  jal         func_7AE9F8
    ctx->pc = 0x7B47F0u;
    SET_GPR_U32(ctx, 31, 0x7B47F8u);
    ctx->pc = 0x7B47F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B47F0u;
    // 0x7b47f4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE9F8u, 0x7B47F0u, 0x7B47F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B47F8u;
label_7b47f8:
    // 0x7b47f8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x7b47f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b47fc: 0x266458d8  addiu       $a0, $s3, 0x58D8
    ctx->pc = 0x7b47fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22744));
    // 0x7b4800: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x7b4800u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b4804: 0xc1ec0fe  jal         func_7B03F8
    ctx->pc = 0x7B4804u;
    SET_GPR_U32(ctx, 31, 0x7B480Cu);
    ctx->pc = 0x7B4808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4804u;
    // 0x7b4808: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B03F8u, 0x7B4804u, 0x7B480Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B480Cu;
label_7b480c:
    // 0x7b480c: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x7b480cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b4810: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b4810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4814: 0xc1ec75e  jal         func_7B1D78
    ctx->pc = 0x7B4814u;
    SET_GPR_U32(ctx, 31, 0x7B481Cu);
    ctx->pc = 0x7B4818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4814u;
    // 0x7b4818: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D78u, 0x7B4814u, 0x7B481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B481Cu;
label_7b481c:
    // 0x7b481c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b481cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4820: 0xc1ec796  jal         func_7B1E58
    ctx->pc = 0x7B4820u;
    SET_GPR_U32(ctx, 31, 0x7B4828u);
    ctx->pc = 0x7B4824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4820u;
    // 0x7b4824: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1E58u, 0x7B4820u, 0x7B4828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4828u;
label_7b4828:
    // 0x7b4828: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b4828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b482c: 0xc1ec7cc  jal         func_7B1F30
    ctx->pc = 0x7B482Cu;
    SET_GPR_U32(ctx, 31, 0x7B4834u);
    ctx->pc = 0x7B4830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B482Cu;
    // 0x7b4830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1F30u, 0x7B482Cu, 0x7B4834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4834u;
label_7b4834:
    // 0x7b4834: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b4834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4838: 0xc1ec86c  jal         func_7B21B0
    ctx->pc = 0x7B4838u;
    SET_GPR_U32(ctx, 31, 0x7B4840u);
    ctx->pc = 0x7B483Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4838u;
    // 0x7b483c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B21B0u, 0x7B4838u, 0x7B4840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4840u;
label_7b4840:
    // 0x7b4840: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b4840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b4844: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x7b4844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7b4848: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7B4848u;
    {
        const bool branch_taken_0x7b4848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4848u;
        // 0x7b484c: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4848) {
            ctx->pc = 0x7B47E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b47e8;
        }
    }
    ctx->pc = 0x7B4850u;
label_7b4850:
    // 0x7b4850: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7b4850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b4854: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7b4854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b4858: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7b4858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b485c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7b485cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b4860: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7b4860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b4864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b4864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b4868: 0x3e00008  jr          $ra
    ctx->pc = 0x7B4868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4868u;
        // 0x7b486c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B4868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B4870u;
}
} // namespace gh_event
