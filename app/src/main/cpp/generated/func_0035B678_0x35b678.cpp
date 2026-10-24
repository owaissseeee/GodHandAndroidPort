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

// Function: func_0035B678
// Address: 0x35b678 - 0x35b6b0
void func_0035B678_0x35b678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035B678_0x35b678");
#endif

    ctx->pc = 0x35b678u;

    // 0x35b678: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35b678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35b67c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x35b67cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35b680: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x35B680u;
    {
        const bool branch_taken_0x35b680 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35B684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B680u;
        // 0x35b684: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b680) {
            ctx->pc = 0x35B6A0u;
            goto label_35b6a0;
        }
    }
    ctx->pc = 0x35B688u;
    // 0x35b688: 0x8ca60018  lw          $a2, 0x18($a1)
    ctx->pc = 0x35b688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x35b68c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b68cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b690: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x35b690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x35b694: 0x80d6dac  j           func_35B6B0
    ctx->pc = 0x35B694u;
    ctx->pc = 0x35B698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35B694u;
    // 0x35b698: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35B6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35B6B0u, 0x35B694u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35B69Cu;
    // 0x35b69c: 0x0  nop
    ctx->pc = 0x35b69cu;
    // NOP
label_35b6a0:
    // 0x35b6a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35b6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35b6a4: 0x3e00008  jr          $ra
    ctx->pc = 0x35B6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35B6A4u;
        // 0x35b6a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35B6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35B6ACu;
    // 0x35b6ac: 0x0  nop
    ctx->pc = 0x35b6acu;
    // NOP
    ctx->pc = 0x35b6b0u;
}
