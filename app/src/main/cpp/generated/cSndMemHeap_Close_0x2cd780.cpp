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

// Function: cSndMemHeap_Close
// Address: 0x2cd780 - 0x2cd7c8
void cSndMemHeap_Close_0x2cd780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSndMemHeap_Close_0x2cd780");
#endif

    switch (ctx->pc) {
        case 0x2cd7b0u: goto label_2cd7b0;
        default: break;
    }

    ctx->pc = 0x2cd780u;

    // 0x2cd780: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cd780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cd784: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cd784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cd788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cd788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cd78c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cd78cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cd790: 0x8e020380  lw          $v0, 0x380($s0)
    ctx->pc = 0x2cd790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x2cd794: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CD794u;
    {
        const bool branch_taken_0x2cd794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd794) {
            ctx->pc = 0x2CD798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD794u;
            // 0x2cd798: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD7B8u;
            goto label_2cd7b8;
        }
    }
    ctx->pc = 0x2CD79Cu;
    // 0x2cd79c: 0x8e050388  lw          $a1, 0x388($s0)
    ctx->pc = 0x2cd79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 904)));
    // 0x2cd7a0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CD7A0u;
    {
        const bool branch_taken_0x2cd7a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cd7a0) {
            ctx->pc = 0x2CD7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CD7A0u;
            // 0x2cd7a4: 0xae000380  sw          $zero, 0x380($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CD7B4u;
            goto label_2cd7b4;
        }
    }
    ctx->pc = 0x2CD7A8u;
    // 0x2cd7a8: 0xc0b3624  jal         func_2CD890
    ctx->pc = 0x2CD7A8u;
    SET_GPR_U32(ctx, 31, 0x2CD7B0u);
    ctx->pc = 0x2CD7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CD7A8u;
    // 0x2cd7ac: 0x8e04038c  lw          $a0, 0x38C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 908)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CD890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CD890u, 0x2CD7A8u, 0x2CD7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CD7B0u;
label_2cd7b0:
    // 0x2cd7b0: 0xae000380  sw          $zero, 0x380($s0)
    ctx->pc = 0x2cd7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 0));
label_2cd7b4:
    // 0x2cd7b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cd7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2cd7b8:
    // 0x2cd7b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cd7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cd7bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CD7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CD7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CD7BCu;
        // 0x2cd7c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CD7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CD7C4u;
    // 0x2cd7c4: 0x0  nop
    ctx->pc = 0x2cd7c4u;
    // NOP
    ctx->pc = 0x2cd7c8u;
}
