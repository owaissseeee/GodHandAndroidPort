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

// Function: putback__7istreamc
// Address: 0x389e30 - 0x389e88
void putback__7istreamc_0x389e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("putback__7istreamc_0x389e30");
#endif

    switch (ctx->pc) {
        case 0x389e5cu: goto label_389e5c;
        default: break;
    }

    ctx->pc = 0x389e30u;

    // 0x389e30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x389e34: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x389e34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x389e38: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x389e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x389e3c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x389e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x389e40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x389e40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389e44: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x389e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389e48: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x389e48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x389e4c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x389E4Cu;
    {
        const bool branch_taken_0x389e4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x389E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E4Cu;
        // 0x389e50: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389e4c) {
            ctx->pc = 0x389E74u;
            goto label_389e74;
        }
    }
    ctx->pc = 0x389E54u;
    // 0x389e54: 0xc0e2d18  jal         func_38B460
    ctx->pc = 0x389E54u;
    SET_GPR_U32(ctx, 31, 0x389E5Cu);
    ctx->pc = 0x389E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389E54u;
    // 0x389e58: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B460u, 0x389E54u, 0x389E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389E5Cu;
label_389e5c:
    // 0x389e5c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x389e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x389e60: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x389E60u;
    {
        const bool branch_taken_0x389e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x389E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E60u;
        // 0x389e64: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389e60) {
            ctx->pc = 0x389E78u;
            goto label_389e78;
        }
    }
    ctx->pc = 0x389E68u;
    // 0x389e68: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x389e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389e6c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x389e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x389e70: 0xa064001a  sb          $a0, 0x1A($v1)
    ctx->pc = 0x389e70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 4));
label_389e74:
    // 0x389e74: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x389e74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_389e78:
    // 0x389e78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x389e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x389e7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x389e7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x389e80: 0x3e00008  jr          $ra
    ctx->pc = 0x389E80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x389E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389E80u;
        // 0x389e84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x389E80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x389E88u;
}
