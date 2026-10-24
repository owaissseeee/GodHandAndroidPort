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

// Function: cEmWrap_SetRaderType
// Address: 0x295ee0 - 0x295f28
void cEmWrap_SetRaderType_0x295ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_SetRaderType_0x295ee0");
#endif

    switch (ctx->pc) {
        case 0x295f00u: goto label_295f00;
        default: break;
    }

    ctx->pc = 0x295ee0u;

    // 0x295ee0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x295ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x295ee4: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x295ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x295ee8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x295ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x295eec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x295eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x295ef0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x295ef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ef4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295ef8: 0xc0a565e  jal         func_295978
    ctx->pc = 0x295EF8u;
    SET_GPR_U32(ctx, 31, 0x295F00u);
    ctx->pc = 0x295EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295EF8u;
    // 0x295efc: 0x58e03  sra         $s1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295EF8u, 0x295F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295F00u;
label_295f00:
    // 0x295f00: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x295F00u;
    {
        const bool branch_taken_0x295f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295f00) {
            ctx->pc = 0x295F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295F00u;
            // 0x295f04: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295F14u;
            goto label_295f14;
        }
    }
    ctx->pc = 0x295F08u;
    // 0x295f08: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x295f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295f0c: 0xa0510531  sb          $s1, 0x531($v0)
    ctx->pc = 0x295f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1329), (uint8_t)GPR_U32(ctx, 17));
    // 0x295f10: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x295f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_295f14:
    // 0x295f14: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x295f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295f18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x295F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F1Cu;
        // 0x295f20: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295F24u;
    // 0x295f24: 0x0  nop
    ctx->pc = 0x295f24u;
    // NOP
    ctx->pc = 0x295f28u;
}
