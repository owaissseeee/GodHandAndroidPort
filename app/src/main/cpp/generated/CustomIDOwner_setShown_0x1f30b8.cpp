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

// Function: CustomIDOwner_setShown
// Address: 0x1f30b8 - 0x1f3118
void CustomIDOwner_setShown_0x1f30b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDOwner_setShown_0x1f30b8");
#endif

    switch (ctx->pc) {
        case 0x1f30dcu: goto label_1f30dc;
        default: break;
    }

    ctx->pc = 0x1f30b8u;

    // 0x1f30b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f30b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f30bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f30bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f30c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f30c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f30c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f30c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f30c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f30ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f30d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f30d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f30d4: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F30D4u;
    SET_GPR_U32(ctx, 31, 0x1F30DCu);
    ctx->pc = 0x1F30D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F30D4u;
    // 0x1f30d8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F30D4u, 0x1F30DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F30DCu;
label_1f30dc:
    // 0x1f30dc: 0xae200920  sw          $zero, 0x920($s1)
    ctx->pc = 0x1f30dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2336), GPR_U32(ctx, 0));
    // 0x1f30e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F30E0u;
    {
        const bool branch_taken_0x1f30e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F30E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30E0u;
        // 0x1f30e4: 0xae200924  sw          $zero, 0x924($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2340), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f30e0) {
            ctx->pc = 0x1F30F4u;
            goto label_1f30f4;
        }
    }
    ctx->pc = 0x1F30E8u;
    // 0x1f30e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f30e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f30ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F30ECu;
    {
        const bool branch_taken_0x1f30ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F30F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30ECu;
        // 0x1f30f0: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f30ec) {
            ctx->pc = 0x1F3100u;
            goto label_1f3100;
        }
    }
    ctx->pc = 0x1F30F4u;
label_1f30f4:
    // 0x1f30f4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f30f8: 0x2403fffd  addiu       $v1, $zero, -0x3
    ctx->pc = 0x1f30f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f30fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f30fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1f3100:
    // 0x1f3100: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f3100u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1f3104: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f3104u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f3108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f3108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f310c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f310cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3110: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3110u;
        // 0x1f3114: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3118u;
}
