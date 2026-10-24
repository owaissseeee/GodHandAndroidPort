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

// Function: cDataManager_isLoaded
// Address: 0x1fe9b8 - 0x1fea00
void cDataManager_isLoaded_0x1fe9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataManager_isLoaded_0x1fe9b8");
#endif

    switch (ctx->pc) {
        case 0x1fe9ccu: goto label_1fe9cc;
        case 0x1fe9f0u: goto label_1fe9f0;
        default: break;
    }

    ctx->pc = 0x1fe9b8u;

    // 0x1fe9b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fe9bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fe9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fe9c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe9c4: 0xc07fb80  jal         func_1FEE00
    ctx->pc = 0x1FE9C4u;
    SET_GPR_U32(ctx, 31, 0x1FE9CCu);
    ctx->pc = 0x1FE9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE9C4u;
    // 0x1fe9c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE00u, 0x1FE9C4u, 0x1FE9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE9CCu;
label_1fe9cc:
    // 0x1fe9cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fe9ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe9d0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FE9D0u;
    {
        const bool branch_taken_0x1fe9d0 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1FE9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9D0u;
        // 0x1fe9d4: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9d0) {
            ctx->pc = 0x1FE9E0u;
            goto label_1fe9e0;
        }
    }
    ctx->pc = 0x1FE9D8u;
    // 0x1fe9d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE9D8u;
    {
        const bool branch_taken_0x1fe9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FE9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9D8u;
        // 0x1fe9dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe9d8) {
            ctx->pc = 0x1FE9F0u;
            goto label_1fe9f0;
        }
    }
    ctx->pc = 0x1FE9E0u;
label_1fe9e0:
    // 0x1fe9e0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1fe9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fe9e4: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1fe9e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1fe9e8: 0xc07fc8e  jal         func_1FF238
    ctx->pc = 0x1FE9E8u;
    SET_GPR_U32(ctx, 31, 0x1FE9F0u);
    ctx->pc = 0x1FE9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE9E8u;
    // 0x1fe9ec: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF238u, 0x1FE9E8u, 0x1FE9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE9F0u;
label_1fe9f0:
    // 0x1fe9f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fe9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe9f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE9F8u;
        // 0x1fe9fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEA00u;
}
