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

// Function: func_002D3110
// Address: 0x2d3110 - 0x2d3190
void func_002D3110_0x2d3110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D3110_0x2d3110");
#endif

    switch (ctx->pc) {
        case 0x2d3148u: goto label_2d3148;
        case 0x2d3168u: goto label_2d3168;
        default: break;
    }

    ctx->pc = 0x2d3110u;

    // 0x2d3110: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d3110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d3114: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2d3114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2d3118: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2d3118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2d311c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d311cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d3120: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2d3120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2d3124: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3128: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d3128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d312c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D312Cu;
    {
        const bool branch_taken_0x2d312c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D312Cu;
        // 0x2d3130: 0x24900040  addiu       $s0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d312c) {
            ctx->pc = 0x2D3170u;
            goto label_2d3170;
        }
    }
    ctx->pc = 0x2D3134u;
    // 0x2d3134: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3138: 0x24930040  addiu       $s3, $a0, 0x40
    ctx->pc = 0x2d3138u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x2d313c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2d313cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d3140: 0x24920c40  addiu       $s2, $a0, 0xC40
    ctx->pc = 0x2d3140u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 3136));
    // 0x2d3144: 0x0  nop
    ctx->pc = 0x2d3144u;
    // NOP
label_2d3148:
    // 0x2d3148: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x2d3148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x2d314c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D314Cu;
    {
        const bool branch_taken_0x2d314c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D314Cu;
        // 0x2d3150: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d314c) {
            ctx->pc = 0x2D3174u;
            goto label_2d3174;
        }
    }
    ctx->pc = 0x2D3154u;
    // 0x2d3154: 0x261000c0  addiu       $s0, $s0, 0xC0
    ctx->pc = 0x2d3154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x2d3158: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x2d3158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x2d315c: 0x262800a  movz        $s0, $s3, $v0
    ctx->pc = 0x2d315cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 19));
    // 0x2d3160: 0xc0b4c84  jal         func_2D3210
    ctx->pc = 0x2D3160u;
    SET_GPR_U32(ctx, 31, 0x2D3168u);
    ctx->pc = 0x2D3164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3160u;
    // 0x2d3164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3210u, 0x2D3160u, 0x2D3168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3168u;
label_2d3168:
    // 0x2d3168: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2D3168u;
    {
        const bool branch_taken_0x2d3168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3168u;
        // 0x2d316c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3168) {
            ctx->pc = 0x2D3148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d3148;
        }
    }
    ctx->pc = 0x2D3170u;
label_2d3170:
    // 0x2d3170: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d3170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2d3174:
    // 0x2d3174: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2d3174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d3178: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2d3178u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d317c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d317cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d3180: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2d3180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d3184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d3184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d3188: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3188u;
        // 0x2d318c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3190u;
}
