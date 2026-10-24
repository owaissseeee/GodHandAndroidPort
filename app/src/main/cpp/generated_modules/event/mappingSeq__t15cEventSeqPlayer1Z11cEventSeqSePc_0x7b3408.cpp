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
// Function: mappingSeq__t15cEventSeqPlayer1Z11cEventSeqSePc
// Address: 0x7b3408 - 0x7b34d0
void mappingSeq__t15cEventSeqPlayer1Z11cEventSeqSePc_0x7b3408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mappingSeq__t15cEventSeqPlayer1Z11cEventSeqSePc_0x7b3408");
#endif

    switch (ctx->pc) {
        case 0x7b3430u: goto label_7b3430;
        case 0x7b3448u: goto label_7b3448;
        case 0x7b3458u: goto label_7b3458;
        case 0x7b346cu: goto label_7b346c;
        case 0x7b347cu: goto label_7b347c;
        case 0x7b3488u: goto label_7b3488;
        case 0x7b3494u: goto label_7b3494;
        case 0x7b34a0u: goto label_7b34a0;
        default: break;
    }

    ctx->pc = 0x7b3408u;

    // 0x7b3408: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7b3408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7b340c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7b340cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7b3410: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b3410u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3414: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7b3414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7b3418: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7b3418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7b341c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7b341cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7b3420: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x7b3420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x7b3424: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b3424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b3428: 0xc1ec756  jal         func_7B1D58
    ctx->pc = 0x7B3428u;
    SET_GPR_U32(ctx, 31, 0x7B3430u);
    ctx->pc = 0x7B342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3428u;
    // 0x7b342c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D58u, 0x7B3428u, 0x7B3430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3430u;
label_7b3430:
    // 0x7b3430: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b3430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b3434: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x7B3434u;
    {
        const bool branch_taken_0x7b3434 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x7B3438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B3434u;
        // 0x7b3438: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b3434) {
            ctx->pc = 0x7B34B0u;
            goto label_7b34b0;
        }
    }
    ctx->pc = 0x7B343Cu;
    // 0x7b343c: 0x3c14007b  lui         $s4, 0x7B
    ctx->pc = 0x7b343cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)123 << 16));
    // 0x7b3440: 0x3c13007b  lui         $s3, 0x7B
    ctx->pc = 0x7b3440u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)123 << 16));
    // 0x7b3444: 0x0  nop
    ctx->pc = 0x7b3444u;
    // NOP
label_7b3448:
    // 0x7b3448: 0x96050000  lhu         $a1, 0x0($s0)
    ctx->pc = 0x7b3448u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7b344c: 0x26845280  addiu       $a0, $s4, 0x5280
    ctx->pc = 0x7b344cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    // 0x7b3450: 0xc1eba7e  jal         func_7AE9F8
    ctx->pc = 0x7B3450u;
    SET_GPR_U32(ctx, 31, 0x7B3458u);
    ctx->pc = 0x7B3454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3450u;
    // 0x7b3454: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE9F8u, 0x7B3450u, 0x7B3458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3458u;
label_7b3458:
    // 0x7b3458: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x7b3458u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b345c: 0x266458d8  addiu       $a0, $s3, 0x58D8
    ctx->pc = 0x7b345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 22744));
    // 0x7b3460: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x7b3460u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x7b3464: 0xc1ec0fe  jal         func_7B03F8
    ctx->pc = 0x7B3464u;
    SET_GPR_U32(ctx, 31, 0x7B346Cu);
    ctx->pc = 0x7B3468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3464u;
    // 0x7b3468: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B03F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B03F8u, 0x7B3464u, 0x7B346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B346Cu;
label_7b346c:
    // 0x7b346c: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x7b346cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x7b3470: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b3470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3474: 0xc1ec75e  jal         func_7B1D78
    ctx->pc = 0x7B3474u;
    SET_GPR_U32(ctx, 31, 0x7B347Cu);
    ctx->pc = 0x7B3478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3474u;
    // 0x7b3478: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1D78u, 0x7B3474u, 0x7B347Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B347Cu;
label_7b347c:
    // 0x7b347c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b347cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3480: 0xc1ec796  jal         func_7B1E58
    ctx->pc = 0x7B3480u;
    SET_GPR_U32(ctx, 31, 0x7B3488u);
    ctx->pc = 0x7B3484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3480u;
    // 0x7b3484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1E58u, 0x7B3480u, 0x7B3488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3488u;
label_7b3488:
    // 0x7b3488: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b3488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b348c: 0xc1ec7cc  jal         func_7B1F30
    ctx->pc = 0x7B348Cu;
    SET_GPR_U32(ctx, 31, 0x7B3494u);
    ctx->pc = 0x7B3490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B348Cu;
    // 0x7b3490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B1F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B1F30u, 0x7B348Cu, 0x7B3494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B3494u;
label_7b3494:
    // 0x7b3494: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b3494u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b3498: 0xc1ec86c  jal         func_7B21B0
    ctx->pc = 0x7B3498u;
    SET_GPR_U32(ctx, 31, 0x7B34A0u);
    ctx->pc = 0x7B349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B3498u;
    // 0x7b349c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B21B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B21B0u, 0x7B3498u, 0x7B34A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B34A0u;
label_7b34a0:
    // 0x7b34a0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x7b34a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x7b34a4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x7b34a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7b34a8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7B34A8u;
    {
        const bool branch_taken_0x7b34a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7B34ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B34A8u;
        // 0x7b34ac: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b34a8) {
            ctx->pc = 0x7B3448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7b3448;
        }
    }
    ctx->pc = 0x7B34B0u;
label_7b34b0:
    // 0x7b34b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7b34b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7b34b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7b34b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7b34b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7b34b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7b34bc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x7b34bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7b34c0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x7b34c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b34c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b34c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b34c8: 0x3e00008  jr          $ra
    ctx->pc = 0x7B34C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B34CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B34C8u;
        // 0x7b34cc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B34C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B34D0u;
}
} // namespace gh_event
