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

// Function: func_002B4768
// Address: 0x2b4768 - 0x2b47c8
void func_002B4768_0x2b4768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B4768_0x2b4768");
#endif

    switch (ctx->pc) {
        case 0x2b4788u: goto label_2b4788;
        case 0x2b47a0u: goto label_2b47a0;
        default: break;
    }

    ctx->pc = 0x2b4768u;

    // 0x2b4768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b4768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b476c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b476cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b4770: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b4770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b4774: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2b4774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b477c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b477cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4780: 0xc0abc86  jal         func_2AF218
    ctx->pc = 0x2B4780u;
    SET_GPR_U32(ctx, 31, 0x2B4788u);
    ctx->pc = 0x2B4784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4780u;
    // 0x2b4784: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF218u, 0x2B4780u, 0x2B4788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4788u;
label_2b4788:
    // 0x2b4788: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2b4788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b478c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b478cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b4790: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b4790u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x2b4794: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b4794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b4798: 0xc0abc7e  jal         func_2AF1F8
    ctx->pc = 0x2B4798u;
    SET_GPR_U32(ctx, 31, 0x2B47A0u);
    ctx->pc = 0x2B479Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4798u;
    // 0x2b479c: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF1F8u, 0x2B4798u, 0x2B47A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B47A0u;
label_2b47a0:
    // 0x2b47a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b47a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b47a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b47a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b47a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b47a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b47ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b47acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b47b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b47b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b47b4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b47b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b47b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b47b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b47bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2B47BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B47C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B47BCu;
        // 0x2b47c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B47BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B47C4u;
    // 0x2b47c4: 0x0  nop
    ctx->pc = 0x2b47c4u;
    // NOP
    ctx->pc = 0x2b47c8u;
}
