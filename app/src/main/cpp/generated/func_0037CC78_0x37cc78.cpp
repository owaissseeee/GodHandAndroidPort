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

// Function: func_0037CC78
// Address: 0x37cc78 - 0x37cce0
void func_0037CC78_0x37cc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037CC78_0x37cc78");
#endif

    switch (ctx->pc) {
        case 0x37ccb4u: goto label_37ccb4;
        case 0x37ccc4u: goto label_37ccc4;
        default: break;
    }

    ctx->pc = 0x37cc78u;

    // 0x37cc78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37cc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37cc7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37cc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37cc80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37cc80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37cc84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37cc84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cc88: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x37cc88u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37cc8c: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x37cc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x37cc90: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x37CC90u;
    {
        const bool branch_taken_0x37cc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cc90) {
            ctx->pc = 0x37CC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CC90u;
            // 0x37cc94: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CCD4u;
            goto label_37ccd4;
        }
    }
    ctx->pc = 0x37CC98u;
    // 0x37cc98: 0x86030030  lh          $v1, 0x30($s0)
    ctx->pc = 0x37cc98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x37cc9c: 0x86020032  lh          $v0, 0x32($s0)
    ctx->pc = 0x37cc9cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 50)));
    // 0x37cca0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37CCA0u;
    {
        const bool branch_taken_0x37cca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CCA0u;
        // 0x37cca4: 0x34820020  ori         $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cca0) {
            ctx->pc = 0x37CCBCu;
            goto label_37ccbc;
        }
    }
    ctx->pc = 0x37CCA8u;
    // 0x37cca8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37cca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ccac: 0xc0df608  jal         func_37D820
    ctx->pc = 0x37CCACu;
    SET_GPR_U32(ctx, 31, 0x37CCB4u);
    ctx->pc = 0x37CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CCACu;
    // 0x37ccb0: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D820u, 0x37CCACu, 0x37CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CCB4u;
label_37ccb4:
    // 0x37ccb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37CCB4u;
    {
        const bool branch_taken_0x37ccb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CCB4u;
        // 0x37ccb8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ccb4) {
            ctx->pc = 0x37CCD4u;
            goto label_37ccd4;
        }
    }
    ctx->pc = 0x37CCBCu;
label_37ccbc:
    // 0x37ccbc: 0xc0de01c  jal         func_378070
    ctx->pc = 0x37CCBCu;
    SET_GPR_U32(ctx, 31, 0x37CCC4u);
    ctx->pc = 0x37CCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CCBCu;
    // 0x37ccc0: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x378070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x378070u, 0x37CCBCu, 0x37CCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CCC4u;
label_37ccc4:
    // 0x37ccc4: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x37ccc4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x37ccc8: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x37ccc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
    // 0x37cccc: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x37ccccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x37ccd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37ccd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37ccd4:
    // 0x37ccd4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ccd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ccd8: 0x3e00008  jr          $ra
    ctx->pc = 0x37CCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CCD8u;
        // 0x37ccdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CCD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CCE0u;
}
