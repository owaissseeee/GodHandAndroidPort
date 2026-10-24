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

// Function: func_00373118
// Address: 0x373118 - 0x373158
void func_00373118_0x373118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00373118_0x373118");
#endif

    ctx->pc = 0x373118u;

    // 0x373118: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x373118u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37311c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37311cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373120: 0xad020048  sw          $v0, 0x48($t0)
    ctx->pc = 0x373120u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 72), GPR_U32(ctx, 2));
    // 0x373124: 0xad050074  sw          $a1, 0x74($t0)
    ctx->pc = 0x373124u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 116), GPR_U32(ctx, 5));
    // 0x373128: 0x8d09004c  lw          $t1, 0x4C($t0)
    ctx->pc = 0x373128u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x37312c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x37312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x373130: 0x35240001  ori         $a0, $t1, 0x1
    ctx->pc = 0x373130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x373134: 0xad02007c  sw          $v0, 0x7C($t0)
    ctx->pc = 0x373134u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 124), GPR_U32(ctx, 2));
    // 0x373138: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x373138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x37313c: 0xad04004c  sw          $a0, 0x4C($t0)
    ctx->pc = 0x37313cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 4));
    // 0x373140: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x373140u;
    {
        const bool branch_taken_0x373140 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x373144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373140u;
        // 0x373144: 0xad03006c  sw          $v1, 0x6C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373140) {
            ctx->pc = 0x373150u;
            goto label_373150;
        }
    }
    ctx->pc = 0x373148u;
    // 0x373148: 0x35220011  ori         $v0, $t1, 0x11
    ctx->pc = 0x373148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)17);
    // 0x37314c: 0xad02004c  sw          $v0, 0x4C($t0)
    ctx->pc = 0x37314cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 76), GPR_U32(ctx, 2));
label_373150:
    // 0x373150: 0x3e00008  jr          $ra
    ctx->pc = 0x373150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373150u;
        // 0x373154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373158u;
}
