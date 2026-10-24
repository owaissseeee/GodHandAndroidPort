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

// Function: cOmScripted_startSeq
// Address: 0x1a6a78 - 0x1a6af8
void cOmScripted_startSeq_0x1a6a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOmScripted_startSeq_0x1a6a78");
#endif

    switch (ctx->pc) {
        case 0x1a6aa4u: goto label_1a6aa4;
        case 0x1a6abcu: goto label_1a6abc;
        default: break;
    }

    ctx->pc = 0x1a6a78u;

    // 0x1a6a78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a6a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a6a7c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1a6a80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a6a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a6a84: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a6a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a6a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a6a8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a6a8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6a90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6a94: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x1a6a94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x1a6a98: 0xa2220604  sb          $v0, 0x604($s1)
    ctx->pc = 0x1a6a98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1540), (uint8_t)GPR_U32(ctx, 2));
    // 0x1a6a9c: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x1A6A9Cu;
    SET_GPR_U32(ctx, 31, 0x1A6AA4u);
    ctx->pc = 0x1A6AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6A9Cu;
    // 0x1a6aa0: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x1A6A9Cu, 0x1A6AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6AA4u;
label_1a6aa4:
    // 0x1a6aa4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x1a6aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x1a6aa8: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a6aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
    // 0x1a6aac: 0x24a56af8  addiu       $a1, $a1, 0x6AF8
    ctx->pc = 0x1a6aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27384));
    // 0x1a6ab0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a6ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ab4: 0xc0b0e48  jal         func_2C3920
    ctx->pc = 0x1A6AB4u;
    SET_GPR_U32(ctx, 31, 0x1A6ABCu);
    ctx->pc = 0x1A6AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6AB4u;
    // 0x1a6ab8: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3920u, 0x1A6AB4u, 0x1A6ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6ABCu;
label_1a6abc:
    // 0x1a6abc: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A6ABCu;
    {
        const bool branch_taken_0x1a6abc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1A6AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6ABCu;
        // 0x1a6ac0: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6abc) {
            ctx->pc = 0x1A6AE0u;
            goto label_1a6ae0;
        }
    }
    ctx->pc = 0x1A6AC4u;
    // 0x1a6ac4: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x1a6ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x1a6ac8: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x1a6ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1a6acc: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1a6accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a6ad0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a6ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6ad4: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x1a6ad4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x1a6ad8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1a6ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1a6adc: 0xa0620050  sb          $v0, 0x50($v1)
    ctx->pc = 0x1a6adcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 2));
label_1a6ae0:
    // 0x1a6ae0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a6ae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a6ae4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a6ae4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6ae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6ae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6aec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AECu;
        // 0x1a6af0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6AECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6AF4u;
    // 0x1a6af4: 0x0  nop
    ctx->pc = 0x1a6af4u;
    // NOP
    ctx->pc = 0x1a6af8u;
}
