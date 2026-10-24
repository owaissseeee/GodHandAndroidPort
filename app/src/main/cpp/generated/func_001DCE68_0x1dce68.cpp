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

// Function: func_001DCE68
// Address: 0x1dce68 - 0x1dcef0
void func_001DCE68_0x1dce68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DCE68_0x1dce68");
#endif

    switch (ctx->pc) {
        case 0x1dce9cu: goto label_1dce9c;
        case 0x1dcea4u: goto label_1dcea4;
        default: break;
    }

    ctx->pc = 0x1dce68u;

    // 0x1dce68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1dce68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1dce6c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1dce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1dce70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1dce70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1dce74: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1dce74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1dce78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dce78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1dce7c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x1dce7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x1dce80: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1dce80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1dce84: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1dce84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1dce88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dce8c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1dce8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1dce90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dce94: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x1DCE94u;
    SET_GPR_U32(ctx, 31, 0x1DCE9Cu);
    ctx->pc = 0x1DCE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE94u;
    // 0x1dce98: 0x8c51a990  lw          $s1, -0x5670($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1DCE94u, 0x1DCE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCE9Cu;
label_1dce9c:
    // 0x1dce9c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x1DCE9Cu;
    SET_GPR_U32(ctx, 31, 0x1DCEA4u);
    ctx->pc = 0x1DCEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DCE9Cu;
    // 0x1dcea0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x1DCE9Cu, 0x1DCEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DCEA4u;
label_1dcea4:
    // 0x1dcea4: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x1dcea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1dcea8: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x1dcea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1dceac: 0x203001a  div         $zero, $s0, $v1
    ctx->pc = 0x1dceacu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1dceb0: 0x2449023  subu        $s2, $s2, $a0
    ctx->pc = 0x1dceb0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x1dceb4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DCEB4u;
    {
        const bool branch_taken_0x1dceb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dceb4) {
            ctx->pc = 0x1DCEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DCEB4u;
            // 0x1dceb8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DCEBCu;
            goto label_1dcebc;
        }
    }
    ctx->pc = 0x1DCEBCu;
label_1dcebc:
    // 0x1dcebc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dcebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dcec0: 0x8012  mflo        $s0
    ctx->pc = 0x1dcec0u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x1dcec4: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x1dcec4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x1dcec8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1dcec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1dcecc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1dceccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1dced0: 0x232001b  divu        $zero, $s1, $s2
    ctx->pc = 0x1dced0u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x1dced4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1dced4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1dced8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dced8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1dcedc: 0x1010  mfhi        $v0
    ctx->pc = 0x1dcedcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x1dcee0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1dcee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1dcee4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1dcee4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dcee8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCEE8u;
        // 0x1dceec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCEF0u;
}
