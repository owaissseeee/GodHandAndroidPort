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

// Function: ForwardInitBuffer_3148D0
// Address: 0x3148d0 - 0x314940
void ForwardInitBuffer_3148D0_0x3148d0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_3148D0_0x3148d0");
#endif

    if (__builtin_expect(ctx->pc != 0x3148d0u, 0)) {
        switch (ctx->pc) {
            case 0x314904u: goto label_314904;
            case 0x31491cu: goto label_31491c;
            case 0x314924u: goto label_314924;
            default: break;
        }
    }


    // 0x3148d0: 0x3c020074  lui         $v0, 0x74
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3148d4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3148d8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3148d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3148dc: 0x3c040001  lui         $a0, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x3148e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3148e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3148e4: 0x641824  and         $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3148e8: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3148E8u;
    {
        const bool branch_taken_0x3148e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3148ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148E8u;
        // 0x3148ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3148e8) {
            ctx->pc = 0x31492Cu;
            goto label_31492c;
        }
    }
    // 0x3148f0: 0x3c060075  lui         $a2, 0x75
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x3148f4: 0x240409e0  addiu       $a0, $zero, 0x9E0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2528));
    // 0x3148f8: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x3148fc: 0xc0c3b82  jal         func_30EE08
    SET_GPR_U32(ctx, 31, 0x314904u);
    ctx->pc = 0x314900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3148FCu;
    // 0x314900: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &EnsureInitThenForward_2A9538_30EE08_0x30ee08, 0x30ee08u, 0x314904u)) {
        return;
    }
label_314904:
    // 0x314904: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314908: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314908u;
    {
        const bool branch_taken_0x314908 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314908u;
        // 0x31490c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314908) {
            ctx->pc = 0x31492Cu;
            goto label_31492c;
        }
    }
    // 0x314910: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314914: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x31491Cu);
    ctx->pc = 0x314918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314914u;
    // 0x314918: 0x240609e0  addiu       $a2, $zero, 0x9E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2528));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x31491cu)) {
        return;
    }
label_31491c:
    // 0x31491c: 0xc065da0  jal         func_197680
    SET_GPR_U32(ctx, 31, 0x314924u);
    ctx->pc = 0x314920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31491Cu;
    // 0x314920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &InitObjSlotArrayB_197680_0x197680, 0x197680u, 0x314924u)) {
        return;
    }
label_314924:
    // 0x314924: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314924u;
    {
        const bool branch_taken_0x314924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314924u;
        // 0x314928: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314924) {
            ctx->pc = 0x314934u;
            goto label_314934;
        }
    }
label_31492c:
    // 0x31492c: 0x102d  daddu       $v0, $zero, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314930: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314934:
    // 0x314934: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314938: 0x3e00008  jr          $ra
    ctx->pc = 0x314938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314938u;
        // 0x31493c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314940u;
}