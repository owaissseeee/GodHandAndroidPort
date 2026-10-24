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
// Function: setCutSyncMess__9cEventEnvi
// Address: 0x7aea00 - 0x7aea60
void setCutSyncMess__9cEventEnvi_0x7aea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setCutSyncMess__9cEventEnvi_0x7aea00");
#endif

    switch (ctx->pc) {
        case 0x7aea24u: goto label_7aea24;
        default: break;
    }

    ctx->pc = 0x7aea00u;

    // 0x7aea00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7aea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7aea04: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7aea04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7aea08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7aea08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aea0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7aea0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7aea10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7aea10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aea14: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7aea14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7aea18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7aea18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7aea1c: 0xc1eb410  jal         func_7AD040
    ctx->pc = 0x7AEA1Cu;
    SET_GPR_U32(ctx, 31, 0x7AEA24u);
    ctx->pc = 0x7AEA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AEA1Cu;
    // 0x7aea20: 0x24845248  addiu       $a0, $a0, 0x5248 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AD040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AD040u, 0x7AEA1Cu, 0x7AEA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AEA24u;
label_7aea24:
    // 0x7aea24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7AEA24u;
    {
        const bool branch_taken_0x7aea24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AEA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEA24u;
        // 0x7aea28: 0x101900  sll         $v1, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aea24) {
            ctx->pc = 0x7AEA38u;
            goto label_7aea38;
        }
    }
    ctx->pc = 0x7AEA2Cu;
    // 0x7aea2c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7aea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7aea30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7AEA30u;
    {
        const bool branch_taken_0x7aea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEA30u;
        // 0x7aea34: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aea30) {
            ctx->pc = 0x7AEA40u;
            goto label_7aea40;
        }
    }
    ctx->pc = 0x7AEA38u;
label_7aea38:
    // 0x7aea38: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x7aea38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x7aea3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x7aea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_7aea40:
    // 0x7aea40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7aea40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7aea44: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x7aea44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x7aea48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7aea48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7aea4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7aea4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7aea50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7aea50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7aea54: 0x3e00008  jr          $ra
    ctx->pc = 0x7AEA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AEA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEA54u;
        // 0x7aea58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AEA5Cu;
    // 0x7aea5c: 0x0  nop
    ctx->pc = 0x7aea5cu;
    // NOP
    ctx->pc = 0x7aea60u;
}
} // namespace gh_event
