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

// Function: cDataManager_useDataAddress
// Address: 0x1fea48 - 0x1feaa0
void cDataManager_useDataAddress_0x1fea48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataManager_useDataAddress_0x1fea48");
#endif

    switch (ctx->pc) {
        case 0x1fea60u: goto label_1fea60;
        case 0x1fea80u: goto label_1fea80;
        default: break;
    }

    ctx->pc = 0x1fea48u;

    // 0x1fea48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fea48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fea4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fea4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fea50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fea50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fea54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fea54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fea58: 0xc07fb80  jal         func_1FEE00
    ctx->pc = 0x1FEA58u;
    SET_GPR_U32(ctx, 31, 0x1FEA60u);
    ctx->pc = 0x1FEA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA58u;
    // 0x1fea5c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE00u, 0x1FEA58u, 0x1FEA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA60u;
label_1fea60:
    // 0x1fea60: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEA60u;
    {
        const bool branch_taken_0x1fea60 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1FEA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA60u;
        // 0x1fea64: 0x2410005c  addiu       $s0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea60) {
            ctx->pc = 0x1FEA70u;
            goto label_1fea70;
        }
    }
    ctx->pc = 0x1FEA68u;
    // 0x1fea68: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEA68u;
    {
        const bool branch_taken_0x1fea68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA68u;
        // 0x1fea6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea68) {
            ctx->pc = 0x1FEA8Cu;
            goto label_1fea8c;
        }
    }
    ctx->pc = 0x1FEA70u;
label_1fea70:
    // 0x1fea70: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1fea70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fea74: 0x508018  mult        $s0, $v0, $s0
    ctx->pc = 0x1fea74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1fea78: 0xc07fc24  jal         func_1FF090
    ctx->pc = 0x1FEA78u;
    SET_GPR_U32(ctx, 31, 0x1FEA80u);
    ctx->pc = 0x1FEA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA78u;
    // 0x1fea7c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF090u, 0x1FEA78u, 0x1FEA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA80u;
label_1fea80:
    // 0x1fea80: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1fea80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1fea84: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1fea84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1fea88: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1fea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1fea8c:
    // 0x1fea8c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fea8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fea90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fea90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fea94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fea94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fea98: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA98u;
        // 0x1fea9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEAA0u;
}
