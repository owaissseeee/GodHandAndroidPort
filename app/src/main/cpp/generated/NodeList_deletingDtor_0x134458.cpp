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

// Function: NodeList_deletingDtor
// Address: 0x134458 - 0x1344a0
void NodeList_deletingDtor_0x134458(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NodeList_deletingDtor_0x134458");
#endif

    if (__builtin_expect(ctx->pc != 0x134458u, 0)) {
        switch (ctx->pc) {
            case 0x134474u: goto label_134474;
            case 0x134488u: goto label_134488;
            default: break;
        }
    }


    // 0x134458: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13445c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13445cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x134460: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x134460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x134464: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13446c: 0xc04d128  jal         func_1344A0
    SET_GPR_U32(ctx, 31, 0x134474u);
    ctx->pc = 0x134470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13446Cu;
    // 0x134470: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &NodeList_clear_0x1344a0, 0x1344a0u, 0x134474u)) {
        return;
    }
label_134474:
    // 0x134474: 0x32100001  andi        $s0, $s0, 0x1
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x134478: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134478u;
    {
        const bool branch_taken_0x134478 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134478u;
        // 0x13447c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134478) {
            ctx->pc = 0x13448Cu;
            goto label_13448c;
        }
    }
    // 0x134480: 0xc0c3d68  jal         func_30F5A0
    SET_GPR_U32(ctx, 31, 0x134488u);
    ctx->pc = 0x134484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134480u;
    // 0x134484: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &ps2___builtin_delete_0x30f5a0, 0x30f5a0u, 0x134488u)) {
        return;
    }
label_134488:
    // 0x134488: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x134488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13448c:
    // 0x13448c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13448cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x134490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134494: 0x3e00008  jr          $ra
    ctx->pc = 0x134494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134494u;
        // 0x134498: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x13449c: 0x0  nop
    // NOP
    ctx->pc = 0x1344a0u;
}