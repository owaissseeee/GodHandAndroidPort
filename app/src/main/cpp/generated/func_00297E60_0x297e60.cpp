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

// Function: func_00297E60
// Address: 0x297e60 - 0x297e98
void func_00297E60_0x297e60(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00297E60_0x297e60");
#endif

    if (__builtin_expect(ctx->pc != 0x297e60u, 0)) {
        switch (ctx->pc) {
            case 0x297e78u: goto label_297e78;
            case 0x297e8cu: goto label_297e8c;
            default: break;
        }
    }


    // 0x297e60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x297e64: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x297E64u;
    {
        const bool branch_taken_0x297e64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E64u;
        // 0x297e68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e64) {
            ctx->pc = 0x297E80u;
            goto label_297e80;
        }
    }
    // 0x297e6c: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x297e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x297e70: 0xc0a5f94  jal         func_297E50
    SET_GPR_U32(ctx, 31, 0x297E78u);
    ctx->pc = 0x297E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E70u;
    // 0x297e74: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00297E50_0x297e50, 0x297e50u, 0x297e78u)) {
        return;
    }
label_297e78:
    // 0x297e78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x297E78u;
    {
        const bool branch_taken_0x297e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E78u;
        // 0x297e7c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297e78) {
            ctx->pc = 0x297E90u;
            goto label_297e90;
        }
    }
label_297e80:
    // 0x297e80: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297e84: 0xc0a5f94  jal         func_297E50
    SET_GPR_U32(ctx, 31, 0x297E8Cu);
    ctx->pc = 0x297E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297E84u;
    // 0x297e88: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00297E50_0x297e50, 0x297e50u, 0x297e8cu)) {
        return;
    }
label_297e8c:
    // 0x297e8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x297e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297e90:
    // 0x297e90: 0x3e00008  jr          $ra
    ctx->pc = 0x297E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297E90u;
        // 0x297e94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297E98u;
}