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

// Function: func_002D3240
// Address: 0x2d3240 - 0x2d3278
void func_002D3240_0x2d3240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D3240_0x2d3240");
#endif

    ctx->pc = 0x2d3240u;

    // 0x2d3240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d3240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3244: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x2d3244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x2d3248: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d3248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2d324c: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D324Cu;
    {
        const bool branch_taken_0x2d324c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D3250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D324Cu;
        // 0x2d3250: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d324c) {
            ctx->pc = 0x2D3260u;
            goto label_2d3260;
        }
    }
    ctx->pc = 0x2D3254u;
    // 0x2d3254: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2d3254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2d3258: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3258u;
    {
        const bool branch_taken_0x2d3258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D325Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3258u;
        // 0x2d325c: 0xac80006c  sw          $zero, 0x6C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3258) {
            ctx->pc = 0x2D3268u;
            goto label_2d3268;
        }
    }
    ctx->pc = 0x2D3260u;
label_2d3260:
    // 0x2d3260: 0xac87006c  sw          $a3, 0x6C($a0)
    ctx->pc = 0x2d3260u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 7));
    // 0x2d3264: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x2d3264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_2d3268:
    // 0x2d3268: 0xac890080  sw          $t1, 0x80($a0)
    ctx->pc = 0x2d3268u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 9));
    // 0x2d326c: 0xac880074  sw          $t0, 0x74($a0)
    ctx->pc = 0x2d326cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 8));
    // 0x2d3270: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3270u;
        // 0x2d3274: 0xac800070  sw          $zero, 0x70($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3278u;
}
