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

// Function: func_00347AA8
// Address: 0x347aa8 - 0x347af8
void func_00347AA8_0x347aa8(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00347AA8_0x347aa8");
#endif

    if (__builtin_expect(ctx->pc != 0x347aa8u, 0)) {
        switch (ctx->pc) {
            case 0x347abcu: goto label_347abc;
            default: break;
        }
    }


    // 0x347aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x347aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x347aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x347ab0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x347ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x347ab4: 0xc0d1a0a  jal         func_346828
    SET_GPR_U32(ctx, 31, 0x347ABCu);
    ctx->pc = 0x347AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347AB4u;
    // 0x347ab8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &GetField0OrZero_346828_0x346828, 0x346828u, 0x347abcu)) {
        return;
    }
label_347abc:
    // 0x347abc: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x347ac0: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x347ac4: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x347AC4u;
    {
        const bool branch_taken_0x347ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x347AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x347AC4u;
        // 0x347ac8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ac4) {
            ctx->pc = 0x347AE8u;
            goto label_347ae8;
        }
    }
    // 0x347acc: 0x3c040046  lui         $a0, 0x46
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x347ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347ad4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x347ad4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347ad8: 0x24849008  addiu       $a0, $a0, -0x6FF8
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938632));
    // 0x347adc: 0x80d22f8  j           func_348BE0
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347ADCu;
    // 0x347ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x347ADCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    // 0x347ae4: 0x0  nop
    // NOP
label_347ae8:
    // 0x347ae8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x347ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x347aec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x347aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x347af0: 0x80d1f96  j           func_347E58
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x347AF0u;
    // 0x347af4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347E58u, 0x347AF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x347AF8u;
}