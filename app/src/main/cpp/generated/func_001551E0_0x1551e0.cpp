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

// Function: func_001551E0
// Address: 0x1551e0 - 0x155248
void func_001551E0_0x1551e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001551E0_0x1551e0");
#endif

    ctx->pc = 0x1551e0u;

    // 0x1551e0: 0x8c820388  lw          $v0, 0x388($a0)
    ctx->pc = 0x1551e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 904)));
    // 0x1551e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1551e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1551e8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1551e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1551ec: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x1551ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1551f0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1551f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1551f4: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1551f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1551f8: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x1551f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x1551fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1551fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155200: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x155200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x155204: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x155204u;
    {
        const bool branch_taken_0x155204 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x155204) {
            ctx->pc = 0x155208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155204u;
            // 0x155208: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x15520Cu;
            goto label_15520c;
        }
    }
    ctx->pc = 0x15520Cu;
label_15520c:
    // 0x15520c: 0x94620014  lhu         $v0, 0x14($v1)
    ctx->pc = 0x15520cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x155210: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x155210u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x155214: 0x1812  mflo        $v1
    ctx->pc = 0x155214u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x155218: 0x2010  mfhi        $a0
    ctx->pc = 0x155218u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15521c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15521Cu;
    {
        const bool branch_taken_0x15521c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x155220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15521Cu;
        // 0x155220: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15521c) {
            ctx->pc = 0x155228u;
            goto label_155228;
        }
    }
    ctx->pc = 0x155224u;
    // 0x155224: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x155224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_155228:
    // 0x155228: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x155228u;
    {
        const bool branch_taken_0x155228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155228) {
            ctx->pc = 0x15522Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x155228u;
            // 0x15522c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x155230u;
            goto label_155230;
        }
    }
    ctx->pc = 0x155230u;
label_155230:
    // 0x155230: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x155230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x155234: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x155234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x155238: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x155238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x15523c: 0x3e00008  jr          $ra
    ctx->pc = 0x15523Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15523Cu;
        // 0x155240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15523Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155244u;
    // 0x155244: 0x0  nop
    ctx->pc = 0x155244u;
    // NOP
    ctx->pc = 0x155248u;
}
