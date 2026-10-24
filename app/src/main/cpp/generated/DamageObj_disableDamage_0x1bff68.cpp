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

// Function: DamageObj_disableDamage
// Address: 0x1bff68 - 0x1bffe0
void DamageObj_disableDamage_0x1bff68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DamageObj_disableDamage_0x1bff68");
#endif

    switch (ctx->pc) {
        case 0x1bff8cu: goto label_1bff8c;
        case 0x1bff98u: goto label_1bff98;
        case 0x1bffb0u: goto label_1bffb0;
        default: break;
    }

    ctx->pc = 0x1bff68u;

    // 0x1bff68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bff68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bff6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bff70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bff70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bff74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bff74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff78: 0x8e040600  lw          $a0, 0x600($s0)
    ctx->pc = 0x1bff78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
    // 0x1bff7c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFF7Cu;
    {
        const bool branch_taken_0x1bff7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bff7c) {
            ctx->pc = 0x1BFF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFF7Cu;
            // 0x1bff80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFF90u;
            goto label_1bff90;
        }
    }
    ctx->pc = 0x1BFF84u;
    // 0x1bff84: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1BFF84u;
    SET_GPR_U32(ctx, 31, 0x1BFF8Cu);
    ctx->pc = 0x1BFF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF84u;
    // 0x1bff88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1BFF84u, 0x1BFF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFF8Cu;
label_1bff8c:
    // 0x1bff8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bff8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bff90:
    // 0x1bff90: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1BFF90u;
    SET_GPR_U32(ctx, 31, 0x1BFF98u);
    ctx->pc = 0x1BFF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF90u;
    // 0x1bff94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1BFF90u, 0x1BFF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFF98u;
label_1bff98:
    // 0x1bff98: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x1bff98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1bff9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bff9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bffa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bffa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bffa4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1bffa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1bffa8: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1BFFA8u;
    SET_GPR_U32(ctx, 31, 0x1BFFB0u);
    ctx->pc = 0x1BFFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFFA8u;
    // 0x1bffac: 0xac430380  sw          $v1, 0x380($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1BFFA8u, 0x1BFFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFFB0u;
label_1bffb0:
    // 0x1bffb0: 0x8c430380  lw          $v1, 0x380($v0)
    ctx->pc = 0x1bffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 896)));
    // 0x1bffb4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x1bffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x1bffb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bffb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bffbc: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1bffbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1bffc0: 0xac430380  sw          $v1, 0x380($v0)
    ctx->pc = 0x1bffc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 896), GPR_U32(ctx, 3));
    // 0x1bffc4: 0x8e020250  lw          $v0, 0x250($s0)
    ctx->pc = 0x1bffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x1bffc8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1bffc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1bffcc: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x1bffccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x1bffd0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bffd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bffd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFD4u;
        // 0x1bffd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFFDCu;
    // 0x1bffdc: 0x0  nop
    ctx->pc = 0x1bffdcu;
    // NOP
    ctx->pc = 0x1bffe0u;
}
