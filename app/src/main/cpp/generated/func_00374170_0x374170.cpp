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

// Function: func_00374170
// Address: 0x374170 - 0x3741b0
void func_00374170_0x374170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00374170_0x374170");
#endif

    switch (ctx->pc) {
        case 0x37418cu: goto label_37418c;
        default: break;
    }

    ctx->pc = 0x374170u;

    // 0x374170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x374178: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x374178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x37417c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37417Cu;
    {
        const bool branch_taken_0x37417c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x374180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37417Cu;
        // 0x374180: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37417c) {
            ctx->pc = 0x374194u;
            goto label_374194;
        }
    }
    ctx->pc = 0x374184u;
    // 0x374184: 0xc0ca7e6  jal         func_329F98
    ctx->pc = 0x374184u;
    SET_GPR_U32(ctx, 31, 0x37418Cu);
    ctx->pc = 0x329F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x329F98u, 0x374184u, 0x37418Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37418Cu;
label_37418c:
    // 0x37418c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x37418Cu;
    {
        const bool branch_taken_0x37418c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37418Cu;
        // 0x374190: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37418c) {
            ctx->pc = 0x374198u;
            goto label_374198;
        }
    }
    ctx->pc = 0x374194u;
label_374194:
    // 0x374194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_374198:
    // 0x374198: 0x3e00008  jr          $ra
    ctx->pc = 0x374198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37419Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374198u;
        // 0x37419c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3741A0u;
    // 0x3741a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3741a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3741a4: 0x0  nop
    ctx->pc = 0x3741a4u;
    // NOP
    // 0x3741a8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3741a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3741ac: 0x0  nop
    ctx->pc = 0x3741acu;
    // NOP
    ctx->pc = 0x3741b0u;
}
