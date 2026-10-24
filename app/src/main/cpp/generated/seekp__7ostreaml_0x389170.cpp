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

// Function: seekp__7ostreaml
// Address: 0x389170 - 0x3891c0
void seekp__7ostreaml_0x389170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("seekp__7ostreaml_0x389170");
#endif

    switch (ctx->pc) {
        case 0x389190u: goto label_389190;
        default: break;
    }

    ctx->pc = 0x389170u;

    // 0x389170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x389170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x389174: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x389174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x389178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x389178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38917c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38917cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x389180: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x389180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389184: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x389184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x389188: 0xc0e3924  jal         func_38E490
    ctx->pc = 0x389188u;
    SET_GPR_U32(ctx, 31, 0x389190u);
    ctx->pc = 0x38918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x389188u;
    // 0x38918c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E490u, 0x389188u, 0x389190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x389190u;
label_389190:
    // 0x389190: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x389190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x389194: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x389194u;
    {
        const bool branch_taken_0x389194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x389198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389194u;
        // 0x389198: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389194) {
            ctx->pc = 0x3891B0u;
            goto label_3891b0;
        }
    }
    ctx->pc = 0x38919Cu;
    // 0x38919c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38919cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3891a0: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x3891a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x3891a4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3891a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3891a8: 0xa062001a  sb          $v0, 0x1A($v1)
    ctx->pc = 0x3891a8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x3891ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3891acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3891b0:
    // 0x3891b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3891b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3891b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3891b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3891b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3891B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3891BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3891B8u;
        // 0x3891bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3891B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3891C0u;
}
