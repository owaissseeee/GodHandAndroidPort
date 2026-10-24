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
// Function: mappingSeq__t15cEventSeqPlayer1Z13cEventSeqFadePc
// Address: 0x7b46b8 - 0x7b4780
void mappingSeq__t15cEventSeqPlayer1Z13cEventSeqFadePc_0x7b46b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mappingSeq__t15cEventSeqPlayer1Z13cEventSeqFadePc_0x7b46b8");
#endif

    switch (ctx->pc) {
        case 0x7b46e0u: goto label_7b46e0;
        case 0x7b46f8u: goto label_7b46f8;
        case 0x7b4708u: goto label_7b4708;
        case 0x7b471cu: goto label_7b471c;
        case 0x7b472cu: goto label_7b472c;
        case 0x7b4738u: goto label_7b4738;
        case 0x7b4744u: goto label_7b4744;
        case 0x7b4750u: goto label_7b4750;
        default: break;
    }

    ctx->pc = 0x7b46b8u;

    // 0x7b46b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7b46b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7b46bc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7b46bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7b46c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b46c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b46c4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7b46c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7b46c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7b46c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7b46cc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7b46ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7b46d0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7b46d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7b46d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b46d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b46d8: 0xc1ec756  jal         func_7B1D58
    ctx->pc = 0x7B46D8u;
    SET_GPR_U32(ctx, 31, 0x7B46E0u);
    ctx->pc = 0x7B46DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B46D8u;
    // 0x7b46dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D58u, 0x7B46D8u, 0x7B46E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B46E0u;
label_7b46e0:
    // 0x7b46e0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b46e4: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7B46E4u;
    {
        const bool branch_taken_0x7b46e4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7B46E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B46E4u;
        // 0x7b46e8: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b46e4) {
            ctx->pc = 0x7B4760u;
            goto label_7b4760;
        }
    }
    ctx->pc = 0x7B46ECu;
    // 0x7b46ec: 0x3c14007b  lui         $s4, 0x7B
    ctx->pc = 0x7b46ecu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)123 << 16));
    // 0x7b46f0: 0x3c13007b  lui         $s3, 0x7B
    ctx->pc = 0x7b46f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)123 << 16));
    // 0x7b46f4: 0x0  nop
    ctx->pc = 0x7b46f4u;
    // NOP
label_7b46f8:
    // 0x7b46f8: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x7b46f8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b46fc: 0x26845280  addiu       $a0, $s4, 0x5280
    ctx->pc = 0x7b46fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x7b4700: 0xc1eba7e  jal         func_7AE9F8
    ctx->pc = 0x7B4700u;
    SET_GPR_U32(ctx, 31, 0x7B4708u);
    ctx->pc = 0x7B4704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4700u;
    // 0x7b4704: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE9F8u, 0x7B4700u, 0x7B4708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4708u;
label_7b4708:
    // 0x7b4708: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x7b4708u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b470c: 0x266458d8  addiu       $a0, $s3, 0x58D8
    ctx->pc = 0x7b470cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22744));
    // 0x7b4710: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x7b4710u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b4714: 0xc1ec0fe  jal         func_7B03F8
    ctx->pc = 0x7B4714u;
    SET_GPR_U32(ctx, 31, 0x7B471Cu);
    ctx->pc = 0x7B4718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4714u;
    // 0x7b4718: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B03F8u, 0x7B4714u, 0x7B471Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B471Cu;
label_7b471c:
    // 0x7b471c: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x7b471cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b4720: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b4720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4724: 0xc1ec75e  jal         func_7B1D78
    ctx->pc = 0x7B4724u;
    SET_GPR_U32(ctx, 31, 0x7B472Cu);
    ctx->pc = 0x7B4728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4724u;
    // 0x7b4728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D78u, 0x7B4724u, 0x7B472Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B472Cu;
label_7b472c:
    // 0x7b472c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b472cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4730: 0xc1ec796  jal         func_7B1E58
    ctx->pc = 0x7B4730u;
    SET_GPR_U32(ctx, 31, 0x7B4738u);
    ctx->pc = 0x7B4734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4730u;
    // 0x7b4734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1E58u, 0x7B4730u, 0x7B4738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4738u;
label_7b4738:
    // 0x7b4738: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b4738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b473c: 0xc1ec7cc  jal         func_7B1F30
    ctx->pc = 0x7B473Cu;
    SET_GPR_U32(ctx, 31, 0x7B4744u);
    ctx->pc = 0x7B4740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B473Cu;
    // 0x7b4740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1F30u, 0x7B473Cu, 0x7B4744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4744u;
label_7b4744:
    // 0x7b4744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b4744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b4748: 0xc1ec86c  jal         func_7B21B0
    ctx->pc = 0x7B4748u;
    SET_GPR_U32(ctx, 31, 0x7B4750u);
    ctx->pc = 0x7B474Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B4748u;
    // 0x7b474c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B21B0u, 0x7B4748u, 0x7B4750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B4750u;
label_7b4750:
    // 0x7b4750: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b4750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b4754: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x7b4754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7b4758: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7B4758u;
    {
        const bool branch_taken_0x7b4758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4758u;
        // 0x7b475c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b4758) {
            ctx->pc = 0x7B46F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b46f8;
        }
    }
    ctx->pc = 0x7B4760u;
label_7b4760:
    // 0x7b4760: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7b4760u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b4764: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7b4764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b4768: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7b4768u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b476c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7b476cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b4770: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7b4770u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b4774: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b4774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b4778: 0x3e00008  jr          $ra
    ctx->pc = 0x7B4778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B477Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B4778u;
        // 0x7b477c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B4778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B4780u;
}
} // namespace gh_event
