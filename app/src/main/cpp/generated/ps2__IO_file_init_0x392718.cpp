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

// Function: _IO_file_init
// Address: 0x392718 - 0x392758
void ps2__IO_file_init_0x392718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_file_init_0x392718");
#endif

    switch (ctx->pc) {
        case 0x392740u: goto label_392740;
        default: break;
    }

    ctx->pc = 0x392718u;

    // 0x392718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x392718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39271c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x39271cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x392720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x392720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x392724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x392724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x392728: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x392728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39272c: 0xfe030040  sd          $v1, 0x40($s0)
    ctx->pc = 0x39272cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 3));
    // 0x392730: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x392730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x392734: 0x3442240c  ori         $v0, $v0, 0x240C
    ctx->pc = 0x392734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9228);
    // 0x392738: 0xc0e3082  jal         func_38C208
    ctx->pc = 0x392738u;
    SET_GPR_U32(ctx, 31, 0x392740u);
    ctx->pc = 0x39273Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x392738u;
    // 0x39273c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C208u, 0x392738u, 0x392740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x392740u;
label_392740:
    // 0x392740: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x392740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x392744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x392744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x392748: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x392748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x39274c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39274cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x392750: 0x3e00008  jr          $ra
    ctx->pc = 0x392750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x392754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x392750u;
        // 0x392754: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x392750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x392758u;
}
