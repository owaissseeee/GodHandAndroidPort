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

// Function: cEmWrap_StartAction
// Address: 0x295ce8 - 0x295d30
void cEmWrap_StartAction_0x295ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_StartAction_0x295ce8");
#endif

    switch (ctx->pc) {
        case 0x295ce8u: goto label_295ce8;
        case 0x295cecu: goto label_295cec;
        case 0x295cf0u: goto label_295cf0;
        case 0x295cf4u: goto label_295cf4;
        case 0x295cf8u: goto label_295cf8;
        case 0x295cfcu: goto label_295cfc;
        case 0x295d00u: goto label_295d00;
        case 0x295d04u: goto label_295d04;
        case 0x295d08u: goto label_295d08;
        case 0x295d0cu: goto label_295d0c;
        case 0x295d10u: goto label_295d10;
        case 0x295d14u: goto label_295d14;
        case 0x295d18u: goto label_295d18;
        case 0x295d1cu: goto label_295d1c;
        case 0x295d20u: goto label_295d20;
        case 0x295d24u: goto label_295d24;
        case 0x295d28u: goto label_295d28;
        case 0x295d2cu: goto label_295d2c;
        default: break;
    }

    ctx->pc = 0x295ce8u;

label_295ce8:
    // 0x295ce8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_295cec:
    // 0x295cec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x295cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_295cf0:
    // 0x295cf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_295cf4:
    // 0x295cf4: 0xc0a565e  jal         func_295978
label_295cf8:
    if (ctx->pc == 0x295CF8u) {
        ctx->pc = 0x295CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CF4u;
        // 0x295cf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295CFCu;
        goto label_295cfc;
    }
    ctx->pc = 0x295CF4u;
    SET_GPR_U32(ctx, 31, 0x295CFCu);
    ctx->pc = 0x295CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295CF4u;
    // 0x295cf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295CF4u, 0x295CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295CFCu;
label_295cfc:
    // 0x295cfc: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_295d00:
    if (ctx->pc == 0x295D00u) {
        ctx->pc = 0x295D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295CFCu;
        // 0x295d00: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295D04u;
        goto label_295d04;
    }
    ctx->pc = 0x295CFCu;
    {
        const bool branch_taken_0x295cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295cfc) {
            ctx->pc = 0x295D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295CFCu;
            // 0x295d00: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295D20u;
            goto label_295d20;
        }
    }
    ctx->pc = 0x295D04u;
label_295d04:
    // 0x295d04: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x295d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_295d08:
    // 0x295d08: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x295d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_295d0c:
    // 0x295d0c: 0x844400d8  lh          $a0, 0xD8($v0)
    ctx->pc = 0x295d0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 216)));
label_295d10:
    // 0x295d10: 0x8c4300dc  lw          $v1, 0xDC($v0)
    ctx->pc = 0x295d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 220)));
label_295d14:
    // 0x295d14: 0x60f809  jalr        $v1
label_295d18:
    if (ctx->pc == 0x295D18u) {
        ctx->pc = 0x295D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D14u;
        // 0x295d18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295D1Cu;
        goto label_295d1c;
    }
    ctx->pc = 0x295D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x295D1Cu);
        ctx->pc = 0x295D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D14u;
        // 0x295d18: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295D14u, 0x295D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x295D1Cu;
label_295d1c:
    // 0x295d1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x295d1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_295d20:
    // 0x295d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_295d24:
    // 0x295d24: 0x3e00008  jr          $ra
label_295d28:
    if (ctx->pc == 0x295D28u) {
        ctx->pc = 0x295D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D24u;
        // 0x295d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x295D2Cu;
        goto label_295d2c;
    }
    ctx->pc = 0x295D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295D24u;
        // 0x295d28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295D2Cu;
label_295d2c:
    // 0x295d2c: 0x0  nop
    ctx->pc = 0x295d2cu;
    // NOP
    ctx->pc = 0x295d30u;
}
