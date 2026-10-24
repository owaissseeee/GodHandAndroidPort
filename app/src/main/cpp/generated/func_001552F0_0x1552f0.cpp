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

// Function: func_001552F0
// Address: 0x1552f0 - 0x155358
void func_001552F0_0x1552f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001552F0_0x1552f0");
#endif

    ctx->pc = 0x1552f0u;

    // 0x1552f0: 0x8c820388  lw          $v0, 0x388($a0)
    ctx->pc = 0x1552f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 904)));
    // 0x1552f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1552f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1552f8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1552f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1552fc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1552fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x155300: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x155300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x155304: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x155304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x155308: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x155308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x15530c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15530cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155310: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x155310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x155314: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x155314u;
    {
        const bool branch_taken_0x155314 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x155314) {
            ctx->pc = 0x155318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155314u;
            // 0x155318: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15531Cu;
            goto label_15531c;
        }
    }
    ctx->pc = 0x15531Cu;
label_15531c:
    // 0x15531c: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x15531cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x155320: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x155320u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x155324: 0x1812  mflo        $v1
    ctx->pc = 0x155324u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x155328: 0x2010  mfhi        $a0
    ctx->pc = 0x155328u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15532c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15532Cu;
    {
        const bool branch_taken_0x15532c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x155330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15532Cu;
        // 0x155330: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15532c) {
            ctx->pc = 0x155338u;
            goto label_155338;
        }
    }
    ctx->pc = 0x155334u;
    // 0x155334: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_155338:
    // 0x155338: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x155338u;
    {
        const bool branch_taken_0x155338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155338) {
            ctx->pc = 0x15533Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155338u;
            // 0x15533c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x155340u;
            goto label_155340;
        }
    }
    ctx->pc = 0x155340u;
label_155340:
    // 0x155340: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x155340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x155344: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x155344u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x155348: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x155348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x15534c: 0x3e00008  jr          $ra
    ctx->pc = 0x15534Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15534Cu;
        // 0x155350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15534Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155354u;
    // 0x155354: 0x0  nop
    ctx->pc = 0x155354u;
    // NOP
    ctx->pc = 0x155358u;
}
