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

// Function: ClearLinkedTarget_12CC00
// Address: 0x12cc00 - 0x12cc70
void ClearLinkedTarget_12CC00_0x12cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearLinkedTarget_12CC00_0x12cc00");
#endif

    switch (ctx->pc) {
        case 0x12cc48u: goto label_12cc48;
        case 0x12cc58u: goto label_12cc58;
        default: break;
    }

    ctx->pc = 0x12cc00u;

    // 0x12cc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12cc04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12cc04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12cc08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12cc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12cc0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12cc0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cc10: 0x8e040644  lw          $a0, 0x644($s0)
    ctx->pc = 0x12cc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1604)));
    // 0x12cc14: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12CC14u;
    {
        const bool branch_taken_0x12cc14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC14u;
        // 0x12cc18: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc14) {
            ctx->pc = 0x12CC5Cu;
            goto label_12cc5c;
        }
    }
    ctx->pc = 0x12CC1Cu;
    // 0x12cc1c: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x12cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x12cc20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12cc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12cc24: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x12CC24u;
    {
        const bool branch_taken_0x12cc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12cc24) {
            ctx->pc = 0x12CC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CC24u;
            // 0x12cc28: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CC60u;
            goto label_12cc60;
        }
    }
    ctx->pc = 0x12CC2Cu;
    // 0x12cc2c: 0x8c830564  lw          $v1, 0x564($a0)
    ctx->pc = 0x12cc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1380)));
    // 0x12cc30: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x12cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
    // 0x12cc34: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12CC34u;
    {
        const bool branch_taken_0x12cc34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC34u;
        // 0x12cc38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cc34) {
            ctx->pc = 0x12CC4Cu;
            goto label_12cc4c;
        }
    }
    ctx->pc = 0x12CC3Cu;
    // 0x12cc3c: 0x24050079  addiu       $a1, $zero, 0x79
    ctx->pc = 0x12cc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x12cc40: 0xc0c185a  jal         func_306168
    ctx->pc = 0x12CC40u;
    SET_GPR_U32(ctx, 31, 0x12CC48u);
    ctx->pc = 0x12CC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC40u;
    // 0x12cc44: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306168u, 0x12CC40u, 0x12CC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC48u;
label_12cc48:
    // 0x12cc48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x12cc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12cc4c:
    // 0x12cc4c: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x12cc4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x12cc50: 0xc0c185a  jal         func_306168
    ctx->pc = 0x12CC50u;
    SET_GPR_U32(ctx, 31, 0x12CC58u);
    ctx->pc = 0x12CC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CC50u;
    // 0x12cc54: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306168u, 0x12CC50u, 0x12CC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CC58u;
label_12cc58:
    // 0x12cc58: 0xae000644  sw          $zero, 0x644($s0)
    ctx->pc = 0x12cc58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1604), GPR_U32(ctx, 0));
label_12cc5c:
    // 0x12cc5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12cc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12cc60:
    // 0x12cc60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12cc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cc64: 0x3e00008  jr          $ra
    ctx->pc = 0x12CC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CC64u;
        // 0x12cc68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CC6Cu;
    // 0x12cc6c: 0x0  nop
    ctx->pc = 0x12cc6cu;
    // NOP
    ctx->pc = 0x12cc70u;
}
