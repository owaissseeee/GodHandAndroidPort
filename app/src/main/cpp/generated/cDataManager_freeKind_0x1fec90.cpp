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

// Function: cDataManager_freeKind
// Address: 0x1fec90 - 0x1fece0
void cDataManager_freeKind_0x1fec90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataManager_freeKind_0x1fec90");
#endif

    switch (ctx->pc) {
        case 0x1feca4u: goto label_1feca4;
        case 0x1fecc0u: goto label_1fecc0;
        default: break;
    }

    ctx->pc = 0x1fec90u;

    // 0x1fec90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fec90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fec94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fec94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fec98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fec98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fec9c: 0xc07fb80  jal         func_1FEE00
    ctx->pc = 0x1FEC9Cu;
    SET_GPR_U32(ctx, 31, 0x1FECA4u);
    ctx->pc = 0x1FECA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEC9Cu;
    // 0x1feca0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE00u, 0x1FEC9Cu, 0x1FECA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FECA4u;
label_1feca4:
    // 0x1feca4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1feca4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1feca8: 0x4600007  bltz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FECA8u;
    {
        const bool branch_taken_0x1feca8 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1FECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECA8u;
        // 0x1fecac: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feca8) {
            ctx->pc = 0x1FECC8u;
            goto label_1fecc8;
        }
    }
    ctx->pc = 0x1FECB0u;
    // 0x1fecb0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1fecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fecb4: 0x642018  mult        $a0, $v1, $a0
    ctx->pc = 0x1fecb4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1fecb8: 0xc07fc0a  jal         func_1FF028
    ctx->pc = 0x1FECB8u;
    SET_GPR_U32(ctx, 31, 0x1FECC0u);
    ctx->pc = 0x1FECBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FECB8u;
    // 0x1fecbc: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF028u, 0x1FECB8u, 0x1FECC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FECC0u;
label_1fecc0:
    // 0x1fecc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FECC0u;
    {
        const bool branch_taken_0x1fecc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FECC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECC0u;
        // 0x1fecc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fecc0) {
            ctx->pc = 0x1FECCCu;
            goto label_1feccc;
        }
    }
    ctx->pc = 0x1FECC8u;
label_1fecc8:
    // 0x1fecc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fecc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1feccc:
    // 0x1feccc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fecccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fecd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fecd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fecd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1FECD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FECD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FECD4u;
        // 0x1fecd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FECD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FECDCu;
    // 0x1fecdc: 0x0  nop
    ctx->pc = 0x1fecdcu;
    // NOP
    ctx->pc = 0x1fece0u;
}
