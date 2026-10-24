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

// Function: cSnd_SeIsLoaded
// Address: 0x2cb778 - 0x2cb7e8
void cSnd_SeIsLoaded_0x2cb778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_SeIsLoaded_0x2cb778");
#endif

    switch (ctx->pc) {
        case 0x2cb7a8u: goto label_2cb7a8;
        case 0x2cb7bcu: goto label_2cb7bc;
        case 0x2cb7c4u: goto label_2cb7c4;
        default: break;
    }

    ctx->pc = 0x2cb778u;

    // 0x2cb778: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cb778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cb77c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cb77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cb780: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cb780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cb784: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cb784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb788: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cb788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cb78c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb78cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb790: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2cb790u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cb794: 0x1212000d  beq         $s0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x2CB794u;
    {
        const bool branch_taken_0x2cb794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x2CB798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB794u;
        // 0x2cb798: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb794) {
            ctx->pc = 0x2CB7CCu;
            goto label_2cb7cc;
        }
    }
    ctx->pc = 0x2CB79Cu;
    // 0x2cb79c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7a0: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB7A0u;
    SET_GPR_U32(ctx, 31, 0x2CB7A8u);
    ctx->pc = 0x2CB7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB7A0u;
    // 0x2cb7a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB7A0u, 0x2CB7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7A8u;
label_2cb7a8:
    // 0x2cb7a8: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x2cb7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x2cb7ac: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB7ACu;
    {
        const bool branch_taken_0x2cb7ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x2CB7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7ACu;
        // 0x2cb7b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7ac) {
            ctx->pc = 0x2CB7CCu;
            goto label_2cb7cc;
        }
    }
    ctx->pc = 0x2CB7B4u;
    // 0x2cb7b4: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB7B4u;
    SET_GPR_U32(ctx, 31, 0x2CB7BCu);
    ctx->pc = 0x2CB7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB7B4u;
    // 0x2cb7b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB7B4u, 0x2CB7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7BCu;
label_2cb7bc:
    // 0x2cb7bc: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2CB7BCu;
    SET_GPR_U32(ctx, 31, 0x2CB7C4u);
    ctx->pc = 0x2CB7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB7BCu;
    // 0x2cb7c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC68u, 0x2CB7BCu, 0x2CB7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7C4u;
label_2cb7c4:
    // 0x2cb7c4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB7C4u;
    {
        const bool branch_taken_0x2cb7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7C4u;
        // 0x2cb7c8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb7c4) {
            ctx->pc = 0x2CB7D4u;
            goto label_2cb7d4;
        }
    }
    ctx->pc = 0x2CB7CCu;
label_2cb7cc:
    // 0x2cb7cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cb7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cb7d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cb7d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2cb7d4:
    // 0x2cb7d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cb7d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb7d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cb7d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb7dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb7dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb7e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB7E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB7E0u;
        // 0x2cb7e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB7E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB7E8u;
}
