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

// Function: ForwardInitBuffer_314400
// Address: 0x314400 - 0x314470
void ForwardInitBuffer_314400_0x314400(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314400_0x314400");
#endif

    if (__builtin_expect(ctx->pc != 0x314400u, 0)) {
        switch (ctx->pc) {
            case 0x314434u: goto label_314434;
            case 0x31444cu: goto label_31444c;
            case 0x314454u: goto label_314454;
            default: break;
        }
    }


    // 0x314400: 0x3c020074  lui         $v0, 0x74
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314404: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314408: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314408u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31440c: 0x3c040001  lui         $a0, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314410: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314414: 0x641824  and         $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314418: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314418u;
    {
        const bool branch_taken_0x314418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314418u;
        // 0x31441c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314418) {
            ctx->pc = 0x31445Cu;
            goto label_31445c;
        }
    }
    // 0x314420: 0x3c060075  lui         $a2, 0x75
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314424: 0x24040860  addiu       $a0, $zero, 0x860
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    // 0x314428: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31442c: 0xc0c3b82  jal         func_30EE08
    SET_GPR_U32(ctx, 31, 0x314434u);
    ctx->pc = 0x314430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31442Cu;
    // 0x314430: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &EnsureInitThenForward_2A9538_30EE08_0x30ee08, 0x30ee08u, 0x314434u)) {
        return;
    }
label_314434:
    // 0x314434: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314438: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314438u;
    {
        const bool branch_taken_0x314438 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314438u;
        // 0x31443c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314438) {
            ctx->pc = 0x31445Cu;
            goto label_31445c;
        }
    }
    // 0x314440: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314444: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x31444Cu);
    ctx->pc = 0x314448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314444u;
    // 0x314448: 0x24060860  addiu       $a2, $zero, 0x860 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2144));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x31444cu)) {
        return;
    }
label_31444c:
    // 0x31444c: 0xc064a6c  jal         func_1929B0
    SET_GPR_U32(ctx, 31, 0x314454u);
    ctx->pc = 0x314450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31444Cu;
    // 0x314450: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj1929_Setup_1929B0_0x1929b0, 0x1929b0u, 0x314454u)) {
        return;
    }
label_314454:
    // 0x314454: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314454u;
    {
        const bool branch_taken_0x314454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314454u;
        // 0x314458: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314454) {
            ctx->pc = 0x314464u;
            goto label_314464;
        }
    }
label_31445c:
    // 0x31445c: 0x102d  daddu       $v0, $zero, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314460: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314464:
    // 0x314464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314468: 0x3e00008  jr          $ra
    ctx->pc = 0x314468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314468u;
        // 0x31446c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314470u;
}