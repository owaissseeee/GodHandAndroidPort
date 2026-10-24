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

// Function: FreeSequenceNode_373D48
// Address: 0x373d48 - 0x373d90
void FreeSequenceNode_373D48_0x373d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeSequenceNode_373D48_0x373d48");
#endif

    switch (ctx->pc) {
        case 0x373d6cu: goto label_373d6c;
        case 0x373d7cu: goto label_373d7c;
        default: break;
    }

    ctx->pc = 0x373d48u;

    // 0x373d48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x373d4c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x373d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x373d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373d54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373d58: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x373d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x373d5c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x373D5Cu;
    {
        const bool branch_taken_0x373d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x373d5c) {
            ctx->pc = 0x373D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x373D5Cu;
            // 0x373d60: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x373D80u;
            goto label_373d80;
        }
    }
    ctx->pc = 0x373D64u;
    // 0x373d64: 0xc0ca630  jal         func_3298C0
    ctx->pc = 0x373D64u;
    SET_GPR_U32(ctx, 31, 0x373D6Cu);
    ctx->pc = 0x3298C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3298C0u, 0x373D64u, 0x373D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D6Cu;
label_373d6c:
    // 0x373d6c: 0x3c050075  lui         $a1, 0x75
    ctx->pc = 0x373d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)117 << 16));
    // 0x373d70: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x373d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x373d74: 0xc0c724a  jal         func_31C928
    ctx->pc = 0x373D74u;
    SET_GPR_U32(ctx, 31, 0x373D7Cu);
    ctx->pc = 0x373D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373D74u;
    // 0x373d78: 0x24a54210  addiu       $a1, $a1, 0x4210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31C928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31C928u, 0x373D74u, 0x373D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373D7Cu;
label_373d7c:
    // 0x373d7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x373d7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_373d80:
    // 0x373d80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373d84: 0x3e00008  jr          $ra
    ctx->pc = 0x373D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373D84u;
        // 0x373d88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373D8Cu;
    // 0x373d8c: 0x0  nop
    ctx->pc = 0x373d8cu;
    // NOP
    ctx->pc = 0x373d90u;
}
