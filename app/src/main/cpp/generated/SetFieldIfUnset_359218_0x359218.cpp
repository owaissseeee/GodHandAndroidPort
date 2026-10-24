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

// Function: SetFieldIfUnset_359218
// Address: 0x359218 - 0x359270
void SetFieldIfUnset_359218_0x359218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetFieldIfUnset_359218_0x359218");
#endif

    ctx->pc = 0x359218u;

    // 0x359218: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x359218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35921c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35921cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x359220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359224: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x359224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x359228: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x359228u;
    {
        const bool branch_taken_0x359228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x359228) {
            ctx->pc = 0x359240u;
            goto label_359240;
        }
    }
    ctx->pc = 0x359230u;
    // 0x359230: 0xac450058  sw          $a1, 0x58($v0)
    ctx->pc = 0x359230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 5));
    // 0x359234: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x359234u;
    {
        const bool branch_taken_0x359234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359234u;
        // 0x359238: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359234) {
            ctx->pc = 0x359260u;
            goto label_359260;
        }
    }
    ctx->pc = 0x35923Cu;
    // 0x35923c: 0x0  nop
    ctx->pc = 0x35923cu;
    // NOP
label_359240:
    // 0x359240: 0x10650007  beq         $v1, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x359240u;
    {
        const bool branch_taken_0x359240 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x359244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359240u;
        // 0x359244: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359240) {
            ctx->pc = 0x359260u;
            goto label_359260;
        }
    }
    ctx->pc = 0x359248u;
    // 0x359248: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x359248u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x35924c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x35924cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359250: 0x34a50207  ori         $a1, $a1, 0x207
    ctx->pc = 0x359250u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)519);
    // 0x359254: 0x80d375c  j           func_34DD70
    ctx->pc = 0x359254u;
    ctx->pc = 0x359258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359254u;
    // 0x359258: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x359254u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35925Cu;
    // 0x35925c: 0x0  nop
    ctx->pc = 0x35925cu;
    // NOP
label_359260:
    // 0x359260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359264: 0x3e00008  jr          $ra
    ctx->pc = 0x359264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359264u;
        // 0x359268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35926Cu;
    // 0x35926c: 0x0  nop
    ctx->pc = 0x35926cu;
    // NOP
    ctx->pc = 0x359270u;
}
