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

// Function: scePadEnterPressMode
// Address: 0x3983f8 - 0x398468
void scePadEnterPressMode_0x3983f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scePadEnterPressMode_0x3983f8");
#endif

    if (__builtin_expect(ctx->pc != 0x3983f8u, 0)) {
        switch (ctx->pc) {
            case 0x398440u: goto label_398440;
            default: break;
        }
    }


    // 0x3983f8: 0x80302d  daddu       $a2, $a0, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3983fc: 0x24030070  addiu       $v1, $zero, 0x70
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x398400: 0x2404001c  addiu       $a0, $zero, 0x1C
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x398404: 0x70c31818  mult1       $v1, $a2, $v1
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x398408: 0xa42018  mult        $a0, $a1, $a0
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x39840c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x398410: 0x3c020078  lui         $v0, 0x78
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x398414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x398414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x398418: 0x2442c110  addiu       $v0, $v0, -0x3EF0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951184));
    // 0x39841c: 0x832021  addu        $a0, $a0, $v1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x398420: 0x441021  addu        $v0, $v0, $a0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x398424: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x398424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x398428: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x398428u;
    {
        const bool branch_taken_0x398428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x39842Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398428u;
        // 0x39842c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398428) {
            ctx->pc = 0x398438u;
            goto label_398438;
        }
    }
    // 0x398430: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x398430u;
    {
        const bool branch_taken_0x398430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x398434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398430u;
        // 0x398434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398430) {
            ctx->pc = 0x398440u;
            goto label_398440;
        }
    }
    ctx->pc = 0x398438u;
label_398438:
    // 0x398438: 0xc0e60b2  jal         func_3982C8
    SET_GPR_U32(ctx, 31, 0x398440u);
    ctx->pc = 0x39843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398438u;
    // 0x39843c: 0x24060fff  addiu       $a2, $zero, 0xFFF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &scePadSetButtonInfo_0x3982c8, 0x3982c8u, 0x398440u)) {
        return;
    }
    ctx->pc = 0x398440u;
label_398440:
    // 0x398440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x398440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398444: 0x3e00008  jr          $ra
    ctx->pc = 0x398444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x398448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398444u;
        // 0x398448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x39844c: 0x0  nop
    // NOP
    // 0x398450: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x398454: 0x0  nop
    // NOP
    // 0x398458: 0x27bd0050  addiu       $sp, $sp, 0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x39845c: 0x0  nop
    // NOP
    // 0x398460: 0x27bd0030  addiu       $sp, $sp, 0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x398464: 0x0  nop
    // NOP
    ctx->pc = 0x398468u;
}