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

// Function: func_00340A60
// Address: 0x340a60 - 0x340ae8
void func_00340A60_0x340a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00340A60_0x340a60");
#endif

    ctx->pc = 0x340a60u;

    // 0x340a60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x340a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x340a64: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x340a64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x340a68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x340a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x340a6c: 0x14e00006  bnez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x340A6Cu;
    {
        const bool branch_taken_0x340a6c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x340A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A6Cu;
        // 0x340a70: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340a6c) {
            ctx->pc = 0x340A88u;
            goto label_340a88;
        }
    }
    ctx->pc = 0x340A74u;
    // 0x340a74: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x340a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x340a78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340a78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340a7c: 0x24846fe8  addiu       $a0, $a0, 0x6FE8
    ctx->pc = 0x340a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28648));
    // 0x340a80: 0x80d0114  j           func_340450
    ctx->pc = 0x340A80u;
    ctx->pc = 0x340A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340A80u;
    // 0x340a84: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340450u, 0x340A80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x340A88u;
label_340a88:
    // 0x340a88: 0x1c800007  bgtz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x340A88u;
    {
        const bool branch_taken_0x340a88 = (GPR_S64(ctx, 4) > 0);
        ctx->pc = 0x340A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340A88u;
        // 0x340a8c: 0x240302ee  addiu       $v1, $zero, 0x2EE (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 750));
        ctx->in_delay_slot = false;
        if (branch_taken_0x340a88) {
            ctx->pc = 0x340AA8u;
            goto label_340aa8;
        }
    }
    ctx->pc = 0x340A90u;
    // 0x340a90: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x340a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x340a94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340a98: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x340a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
    // 0x340a9c: 0x80d0114  j           func_340450
    ctx->pc = 0x340A9Cu;
    ctx->pc = 0x340AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x340A9Cu;
    // 0x340aa0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x340450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340450u, 0x340A9Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x340AA4u;
    // 0x340aa4: 0x0  nop
    ctx->pc = 0x340aa4u;
    // NOP
label_340aa8:
    // 0x340aa8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x340aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340aac: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x340aacu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x340ab0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x340AB0u;
    {
        const bool branch_taken_0x340ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x340ab0) {
            ctx->pc = 0x340AB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x340AB0u;
            // 0x340ab4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x340AB8u;
            goto label_340ab8;
        }
    }
    ctx->pc = 0x340AB8u;
label_340ab8:
    // 0x340ab8: 0xace40010  sw          $a0, 0x10($a3)
    ctx->pc = 0x340ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 4));
    // 0x340abc: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x340abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x340ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x340ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x340ac4: 0x1012  mflo        $v0
    ctx->pc = 0x340ac4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x340ac8: 0x28430061  slti        $v1, $v0, 0x61
    ctx->pc = 0x340ac8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)97) ? 1 : 0);
    // 0x340acc: 0x2202a  slt         $a0, $zero, $v0
    ctx->pc = 0x340accu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x340ad0: 0xa4100a  movz        $v0, $a1, $a0
    ctx->pc = 0x340ad0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x340ad4: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x340ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x340ad8: 0xc3100a  movz        $v0, $a2, $v1
    ctx->pc = 0x340ad8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x340adc: 0xace20018  sw          $v0, 0x18($a3)
    ctx->pc = 0x340adcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 2));
    // 0x340ae0: 0x3e00008  jr          $ra
    ctx->pc = 0x340AE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x340AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x340AE0u;
        // 0x340ae4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x340AE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x340AE8u;
}
