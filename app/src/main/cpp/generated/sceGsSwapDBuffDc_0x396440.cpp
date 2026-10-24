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

// Function: sceGsSwapDBuffDc
// Address: 0x396440 - 0x3964a0
void sceGsSwapDBuffDc_0x396440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsSwapDBuffDc_0x396440");
#endif

    switch (ctx->pc) {
        case 0x396468u: goto label_396468;
        case 0x396478u: goto label_396478;
        case 0x396488u: goto label_396488;
        default: break;
    }

    ctx->pc = 0x396440u;

    // 0x396440: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x396440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x396444: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x396444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x396448: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x396448u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39644c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39644cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x396450: 0x30b00001  andi        $s0, $a1, 0x1
    ctx->pc = 0x396450u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x396454: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x396454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x396458: 0x2041018  mult        $v0, $s0, $a0
    ctx->pc = 0x396458u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x39645c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39645cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x396460: 0xc0e5a3a  jal         func_3968E8
    ctx->pc = 0x396460u;
    SET_GPR_U32(ctx, 31, 0x396468u);
    ctx->pc = 0x396464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396460u;
    // 0x396464: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3968E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3968E8u, 0x396460u, 0x396468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396468u;
label_396468:
    // 0x396468: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x396468u;
    {
        const bool branch_taken_0x396468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x396468) {
            ctx->pc = 0x396480u;
            goto label_396480;
        }
    }
    ctx->pc = 0x396470u;
    // 0x396470: 0xc0e5b58  jal         func_396D60
    ctx->pc = 0x396470u;
    SET_GPR_U32(ctx, 31, 0x396478u);
    ctx->pc = 0x396474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396470u;
    // 0x396474: 0x262401c0  addiu       $a0, $s1, 0x1C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396D60u, 0x396470u, 0x396478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396478u;
label_396478:
    // 0x396478: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x396478u;
    {
        const bool branch_taken_0x396478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39647Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396478u;
        // 0x39647c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396478) {
            ctx->pc = 0x39648Cu;
            goto label_39648c;
        }
    }
    ctx->pc = 0x396480u;
label_396480:
    // 0x396480: 0xc0e5b58  jal         func_396D60
    ctx->pc = 0x396480u;
    SET_GPR_U32(ctx, 31, 0x396488u);
    ctx->pc = 0x396484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396480u;
    // 0x396484: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396D60u, 0x396480u, 0x396488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x396488u;
label_396488:
    // 0x396488: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x396488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39648c:
    // 0x39648c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39648cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x396490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396494: 0x3e00008  jr          $ra
    ctx->pc = 0x396494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x396498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396494u;
        // 0x396498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x396494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39649Cu;
    // 0x39649c: 0x0  nop
    ctx->pc = 0x39649cu;
    // NOP
    ctx->pc = 0x3964a0u;
}
