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

// Function: func_00335218
// Address: 0x335218 - 0x335248
void func_00335218_0x335218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335218_0x335218");
#endif

    ctx->pc = 0x335218u;

    // 0x335218: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x335218u;
    {
        const bool branch_taken_0x335218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335218u;
        // 0x33521c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335218) {
            ctx->pc = 0x335238u;
            goto label_335238;
        }
    }
    ctx->pc = 0x335220u;
    // 0x335220: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x335220u;
    {
        const bool branch_taken_0x335220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x335224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335220u;
        // 0x335224: 0x3c03003e  lui         $v1, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335220) {
            ctx->pc = 0x33523Cu;
            goto label_33523c;
        }
    }
    ctx->pc = 0x335228u;
    // 0x335228: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x335228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33522c: 0x3e00008  jr          $ra
    ctx->pc = 0x33522Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33522Cu;
        // 0x335230: 0xac44a390  sw          $a0, -0x5C70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294943632), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33522Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335234u;
    // 0x335234: 0x0  nop
    ctx->pc = 0x335234u;
    // NOP
label_335238:
    // 0x335238: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x335238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
label_33523c:
    // 0x33523c: 0x34028001  ori         $v0, $zero, 0x8001
    ctx->pc = 0x33523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x335240: 0x3e00008  jr          $ra
    ctx->pc = 0x335240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335240u;
        // 0x335244: 0xac62a390  sw          $v0, -0x5C70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335248u;
}
