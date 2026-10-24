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

// Function: func_00348210
// Address: 0x348210 - 0x348258
void func_00348210_0x348210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348210_0x348210");
#endif

    ctx->pc = 0x348210u;

    // 0x348210: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x348210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x348214: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x348214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x348218: 0x344249e4  ori         $v0, $v0, 0x49E4
    ctx->pc = 0x348218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18916);
    // 0x34821c: 0x34039c40  ori         $v1, $zero, 0x9C40
    ctx->pc = 0x34821cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
    // 0x348220: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x348220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x348224: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x348224u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x348228: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x348228u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x34822c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x34822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x348230: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x348230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x348234: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x348234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x348238: 0x3e00008  jr          $ra
    ctx->pc = 0x348238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348238u;
        // 0x34823c: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348240u;
    // 0x348240: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x348240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x348244: 0x0  nop
    ctx->pc = 0x348244u;
    // NOP
    // 0x348248: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x348248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34824c: 0x0  nop
    ctx->pc = 0x34824cu;
    // NOP
    // 0x348250: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x348250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x348254: 0x0  nop
    ctx->pc = 0x348254u;
    // NOP
    ctx->pc = 0x348258u;
}
