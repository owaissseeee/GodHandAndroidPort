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

// Function: cDataManager_seeDataAddress
// Address: 0x1fea00 - 0x1fea48
void cDataManager_seeDataAddress_0x1fea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataManager_seeDataAddress_0x1fea00");
#endif

    switch (ctx->pc) {
        case 0x1fea14u: goto label_1fea14;
        default: break;
    }

    ctx->pc = 0x1fea00u;

    // 0x1fea00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fea04: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fea04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fea08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fea08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fea0c: 0xc07fb80  jal         func_1FEE00
    ctx->pc = 0x1FEA0Cu;
    SET_GPR_U32(ctx, 31, 0x1FEA14u);
    ctx->pc = 0x1FEA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FEA0Cu;
    // 0x1fea10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FEE00u, 0x1FEA0Cu, 0x1FEA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEA14u;
label_1fea14:
    // 0x1fea14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1fea14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fea18: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FEA18u;
    {
        const bool branch_taken_0x1fea18 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x1FEA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA18u;
        // 0x1fea1c: 0x2403005c  addiu       $v1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea18) {
            ctx->pc = 0x1FEA28u;
            goto label_1fea28;
        }
    }
    ctx->pc = 0x1FEA20u;
    // 0x1fea20: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FEA20u;
    {
        const bool branch_taken_0x1fea20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FEA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA20u;
        // 0x1fea24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fea20) {
            ctx->pc = 0x1FEA38u;
            goto label_1fea38;
        }
    }
    ctx->pc = 0x1FEA28u;
label_1fea28:
    // 0x1fea28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1fea28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1fea2c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x1fea2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fea30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fea30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fea34: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1fea34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1fea38:
    // 0x1fea38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fea38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fea3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fea3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fea40: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEA40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEA40u;
        // 0x1fea44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEA40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEA48u;
}
