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

// Function: cPadVib_setSeq
// Address: 0x2bdf80 - 0x2bdfd8
void cPadVib_setSeq_0x2bdf80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cPadVib_setSeq_0x2bdf80");
#endif

    ctx->pc = 0x2bdf80u;

    // 0x2bdf80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2bdf80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2bdf84: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x2bdf84u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2bdf88: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x2bdf88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2bdf8c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x2bdf8cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2bdf90: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x2bdf90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x2bdf94: 0xac880004  sw          $t0, 0x4($a0)
    ctx->pc = 0x2bdf94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 8));
    // 0x2bdf98: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2bdf98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2bdf9c: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2bdf9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2bdfa0: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x2bdfa0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x2bdfa4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bdfa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bdfa8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2bdfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2bdfac: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x2bdfacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x2bdfb0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x2bdfb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2bdfb4: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x2bdfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x2bdfb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bdfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bdfbc: 0xac860018  sw          $a2, 0x18($a0)
    ctx->pc = 0x2bdfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 6));
    // 0x2bdfc0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2bdfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2bdfc4: 0xe48c001c  swc1        $f12, 0x1C($a0)
    ctx->pc = 0x2bdfc4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x2bdfc8: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x2bdfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x2bdfcc: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2bdfccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2bdfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDFD0u;
        // 0x2bdfd4: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDFD8u;
}
