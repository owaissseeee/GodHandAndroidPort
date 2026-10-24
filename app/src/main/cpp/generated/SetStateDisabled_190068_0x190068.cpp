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

// Function: SetStateDisabled_190068
// Address: 0x190068 - 0x1900c8
void SetStateDisabled_190068_0x190068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetStateDisabled_190068_0x190068");
#endif

    switch (ctx->pc) {
        case 0x19009cu: goto label_19009c;
        case 0x1900b0u: goto label_1900b0;
        case 0x1900b8u: goto label_1900b8;
        default: break;
    }

    ctx->pc = 0x190068u;

    // 0x190068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x190068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19006c: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x19006cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x190070: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x190070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x190074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190078: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x190078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19007c: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x19007cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x190080: 0x8e040654  lw          $a0, 0x654($s0)
    ctx->pc = 0x190080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1620)));
    // 0x190084: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x190084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x190088: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x190088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x19008c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19008Cu;
    {
        const bool branch_taken_0x19008c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x190090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19008Cu;
        // 0x190090: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19008c) {
            ctx->pc = 0x19009Cu;
            goto label_19009c;
        }
    }
    ctx->pc = 0x190094u;
    // 0x190094: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x190094u;
    SET_GPR_U32(ctx, 31, 0x19009Cu);
    ctx->pc = 0x190098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190094u;
    // 0x190098: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x190094u, 0x19009Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19009Cu;
label_19009c:
    // 0x19009c: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x19009cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x1900a0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1900a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x1900a4: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x1900a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x1900a8: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x1900A8u;
    SET_GPR_U32(ctx, 31, 0x1900B0u);
    ctx->pc = 0x1900ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1900A8u;
    // 0x1900ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x1900A8u, 0x1900B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1900B0u;
label_1900b0:
    // 0x1900b0: 0xc071f82  jal         func_1C7E08
    ctx->pc = 0x1900B0u;
    SET_GPR_U32(ctx, 31, 0x1900B8u);
    ctx->pc = 0x1900B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1900B0u;
    // 0x1900b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E08u, 0x1900B0u, 0x1900B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1900B8u;
label_1900b8:
    // 0x1900b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1900b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1900bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1900bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1900c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1900C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1900C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1900C0u;
        // 0x1900c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1900C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1900C8u;
}
