#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: UpdateChannelState_3775F0
// Address: 0x3775f0 - 0x377688
void UpdateChannelState_3775F0_0x3775f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateChannelState_3775F0_0x3775f0");
#endif

    switch (ctx->pc) {
        case 0x377618u: goto label_377618;
        case 0x377620u: goto label_377620;
        case 0x377650u: goto label_377650;
        case 0x377670u: goto label_377670;
        default: break;
    }

    ctx->pc = 0x3775f0u;

    // 0x3775f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3775f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3775f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3775f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3775f8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3775f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3775fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3775fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x377604: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x377604u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x377608: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x377608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x37760c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x37760Cu;
    {
        const bool branch_taken_0x37760c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37760Cu;
        // 0x377610: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37760c) {
            ctx->pc = 0x377670u;
            goto label_377670;
        }
    }
    ctx->pc = 0x377614u;
    // 0x377614: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x377614u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_377618:
    // 0x377618: 0xc0ddda2  jal         func_377688
    ctx->pc = 0x377618u;
    SET_GPR_U32(ctx, 31, 0x377620u);
    ctx->pc = 0x37761Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377618u;
    // 0x37761c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377688u, 0x377618u, 0x377620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377620u;
label_377620:
    // 0x377620: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x377620u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x377624: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x377624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x377628: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x377628u;
    {
        const bool branch_taken_0x377628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377628u;
        // 0x37762c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377628) {
            ctx->pc = 0x377618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377618;
        }
    }
    ctx->pc = 0x377630u;
    // 0x377630: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x377630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x377634: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x377634u;
    {
        const bool branch_taken_0x377634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377634u;
        // 0x377638: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377634) {
            ctx->pc = 0x377674u;
            goto label_377674;
        }
    }
    ctx->pc = 0x37763Cu;
    // 0x37763c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x37763cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x377640: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x377640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x377644: 0x26230038  addiu       $v1, $s1, 0x38
    ctx->pc = 0x377644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x377648: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x377648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x37764c: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x37764cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
label_377650:
    // 0x377650: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x377650u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x377654: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x377654u;
    {
        const bool branch_taken_0x377654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377654u;
        // 0x377658: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377654) {
            ctx->pc = 0x377670u;
            goto label_377670;
        }
    }
    ctx->pc = 0x37765Cu;
    // 0x37765c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x37765cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x377660: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x377660u;
    {
        const bool branch_taken_0x377660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377660u;
        // 0x377664: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377660) {
            ctx->pc = 0x377650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377650;
        }
    }
    ctx->pc = 0x377668u;
    // 0x377668: 0xc0dde8a  jal         func_377A28
    ctx->pc = 0x377668u;
    SET_GPR_U32(ctx, 31, 0x377670u);
    ctx->pc = 0x37766Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377668u;
    // 0x37766c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377A28u, 0x377668u, 0x377670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x377670u;
label_377670:
    // 0x377670: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x377670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_377674:
    // 0x377674: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377674u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x377678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x377678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37767c: 0x3e00008  jr          $ra
    ctx->pc = 0x37767Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37767Cu;
        // 0x377680: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37767Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377684u;
    // 0x377684: 0x0  nop
    ctx->pc = 0x377684u;
    // NOP
    ctx->pc = 0x377688u;
}
