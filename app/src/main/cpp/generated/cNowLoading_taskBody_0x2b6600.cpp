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

// Function: cNowLoading_taskBody
// Address: 0x2b6600 - 0x2b6688
void cNowLoading_taskBody_0x2b6600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cNowLoading_taskBody_0x2b6600");
#endif

    switch (ctx->pc) {
        case 0x2b662cu: goto label_2b662c;
        case 0x2b6638u: goto label_2b6638;
        case 0x2b6640u: goto label_2b6640;
        case 0x2b664cu: goto label_2b664c;
        case 0x2b6670u: goto label_2b6670;
        case 0x2b667cu: goto label_2b667c;
        default: break;
    }

    ctx->pc = 0x2b6600u;

    // 0x2b6600: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b6600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b6604: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2b6604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2b6608: 0x8c44d6e8  lw          $a0, -0x2918($v0)
    ctx->pc = 0x2b6608u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x2b660c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2b660cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2b6610: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2b6610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2b6614: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b6614u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6618: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2b6618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2b661c: 0x248403a0  addiu       $a0, $a0, 0x3A0
    ctx->pc = 0x2b661cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    // 0x2b6620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6624: 0xc04fb4a  jal         func_13ED28
    ctx->pc = 0x2B6624u;
    SET_GPR_U32(ctx, 31, 0x2B662Cu);
    ctx->pc = 0x2B6628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6624u;
    // 0x2b6628: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13ED28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13ED28u, 0x2B6624u, 0x2B662Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B662Cu;
label_2b662c:
    // 0x2b662c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2b662cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2b6630: 0x24502c00  addiu       $s0, $v0, 0x2C00
    ctx->pc = 0x2b6630u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
    // 0x2b6634: 0x8e44d6e8  lw          $a0, -0x2918($s2)
    ctx->pc = 0x2b6634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956776)));
label_2b6638:
    // 0x2b6638: 0xc04fb96  jal         func_13EE58
    ctx->pc = 0x2B6638u;
    SET_GPR_U32(ctx, 31, 0x2B6640u);
    ctx->pc = 0x2B663Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6638u;
    // 0x2b663c: 0x248403a0  addiu       $a0, $a0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13EE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EE58u, 0x2B6638u, 0x2B6640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6640u;
label_2b6640:
    // 0x2b6640: 0x8e44d6e8  lw          $a0, -0x2918($s2)
    ctx->pc = 0x2b6640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956776)));
    // 0x2b6644: 0xc04fc1c  jal         func_13F070
    ctx->pc = 0x2B6644u;
    SET_GPR_U32(ctx, 31, 0x2B664Cu);
    ctx->pc = 0x2B6648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6644u;
    // 0x2b6648: 0x248403a0  addiu       $a0, $a0, 0x3A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F070u, 0x2B6644u, 0x2B664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B664Cu;
label_2b664c:
    // 0x2b664c: 0x92222555  lbu         $v0, 0x2555($s1)
    ctx->pc = 0x2b664cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9557)));
    // 0x2b6650: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6650u;
    {
        const bool branch_taken_0x2b6650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6650u;
        // 0x2b6654: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6650) {
            ctx->pc = 0x2B6670u;
            goto label_2b6670;
        }
    }
    ctx->pc = 0x2B6658u;
    // 0x2b6658: 0x90622554  lbu         $v0, 0x2554($v1)
    ctx->pc = 0x2b6658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 9556)));
    // 0x2b665c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B665Cu;
    {
        const bool branch_taken_0x2b665c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B665Cu;
        // 0x2b6660: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b665c) {
            ctx->pc = 0x2B6674u;
            goto label_2b6674;
        }
    }
    ctx->pc = 0x2B6664u;
    // 0x2b6664: 0xa0602554  sb          $zero, 0x2554($v1)
    ctx->pc = 0x2b6664u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9556), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b6668: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x2B6668u;
    SET_GPR_U32(ctx, 31, 0x2B6670u);
    ctx->pc = 0x2B666Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6668u;
    // 0x2b666c: 0xa2202555  sb          $zero, 0x2555($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 9557), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x2B6668u, 0x2B6670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6670u;
label_2b6670:
    // 0x2b6670: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2b6670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2b6674:
    // 0x2b6674: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2B6674u;
    SET_GPR_U32(ctx, 31, 0x2B667Cu);
    ctx->pc = 0x2B6678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6674u;
    // 0x2b6678: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2B6674u, 0x2B667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B667Cu;
label_2b667c:
    // 0x2b667c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x2B667Cu;
    {
        const bool branch_taken_0x2b667c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B667Cu;
        // 0x2b6680: 0x8e44d6e8  lw          $a0, -0x2918($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294956776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b667c) {
            ctx->pc = 0x2B6638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6638;
        }
    }
    ctx->pc = 0x2B6684u;
    // 0x2b6684: 0x0  nop
    ctx->pc = 0x2b6684u;
    // NOP
    ctx->pc = 0x2b6688u;
}
