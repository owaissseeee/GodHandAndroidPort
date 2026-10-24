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

// Function: func_002D4210
// Address: 0x2d4210 - 0x2d4248
void func_002D4210_0x2d4210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D4210_0x2d4210");
#endif

    switch (ctx->pc) {
        case 0x2d4234u: goto label_2d4234;
        default: break;
    }

    ctx->pc = 0x2d4210u;

    // 0x2d4210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d4210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d4214: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d4214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d4218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d4218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d421c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d421cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4220: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d4220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d4224: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D4224u;
    {
        const bool branch_taken_0x2d4224 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4224u;
        // 0x2d4228: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4224) {
            ctx->pc = 0x2D4238u;
            goto label_2d4238;
        }
    }
    ctx->pc = 0x2D422Cu;
    // 0x2d422c: 0xc0d1a12  jal         func_346848
    ctx->pc = 0x2D422Cu;
    SET_GPR_U32(ctx, 31, 0x2D4234u);
    ctx->pc = 0x346848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346848u, 0x2D422Cu, 0x2D4234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4234u;
label_2d4234:
    // 0x2d4234: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x2d4234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_2d4238:
    // 0x2d4238: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d4238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d423c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d423cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d4240: 0x3e00008  jr          $ra
    ctx->pc = 0x2D4240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4240u;
        // 0x2d4244: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D4240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D4248u;
}
