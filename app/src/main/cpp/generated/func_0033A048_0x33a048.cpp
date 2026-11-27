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

// Function: func_0033A048
// Address: 0x33a048 - 0x33a090
void func_0033A048_0x33a048(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A048_0x33a048");
#endif

    if (__builtin_expect(ctx->pc != 0x33a048u, 0)) {
        switch (ctx->pc) {
            case 0x33a068u: goto label_33a068;
            case 0x33a074u: goto label_33a074;
            case 0x33a07cu: goto label_33a07c;
            default: break;
        }
    }


    // 0x33a048: 0x27bdffb0  addiu       $sp, $sp, -0x50
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x33a04c: 0x80102d  daddu       $v0, $a0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a050: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x33a050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x33a054: 0xa0802d  daddu       $s0, $a1, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a058: 0x3a0202d  daddu       $a0, $sp, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a05c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x33a05cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x33a060: 0xc0e95f1  jal         func_3A57C4
    SET_GPR_U32(ctx, 31, 0x33A068u);
    ctx->pc = 0x33A064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A060u;
    // 0x33a064: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003A57C4_0x3a57c4, 0x3a57c4u, 0x33a068u)) {
        return;
    }
label_33a068:
    // 0x33a068: 0x3a0202d  daddu       $a0, $sp, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a06c: 0xc0e94ea  jal         func_3A53A8
    SET_GPR_U32(ctx, 31, 0x33A074u);
    ctx->pc = 0x33A070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A06Cu;
    // 0x33a070: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003A53A8_0x3a53a8, 0x3a53a8u, 0x33a074u)) {
        return;
    }
label_33a074:
    // 0x33a074: 0xc0d02ba  jal         func_340AE8
    SET_GPR_U32(ctx, 31, 0x33A07Cu);
    ctx->pc = 0x33A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A074u;
    // 0x33a078: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Forward33B790_340AE8_0x340ae8, 0x340ae8u, 0x33a07cu)) {
        return;
    }
label_33a07c:
    // 0x33a07c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x33a07cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33a080: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x33a080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x33a084: 0x3e00008  jr          $ra
    ctx->pc = 0x33A084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A084u;
        // 0x33a088: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x33a08c: 0x0  nop
    // NOP
    ctx->pc = 0x33a090u;
}