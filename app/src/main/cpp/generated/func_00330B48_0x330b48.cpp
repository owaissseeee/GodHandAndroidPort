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

// Function: func_00330B48
// Address: 0x330b48 - 0x330bb0
void func_00330B48_0x330b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330B48_0x330b48");
#endif

    switch (ctx->pc) {
        case 0x330b48u: goto label_330b48;
        case 0x330b4cu: goto label_330b4c;
        case 0x330b50u: goto label_330b50;
        case 0x330b54u: goto label_330b54;
        case 0x330b58u: goto label_330b58;
        case 0x330b5cu: goto label_330b5c;
        case 0x330b60u: goto label_330b60;
        case 0x330b64u: goto label_330b64;
        case 0x330b68u: goto label_330b68;
        case 0x330b6cu: goto label_330b6c;
        case 0x330b70u: goto label_330b70;
        case 0x330b74u: goto label_330b74;
        case 0x330b78u: goto label_330b78;
        case 0x330b7cu: goto label_330b7c;
        case 0x330b80u: goto label_330b80;
        case 0x330b84u: goto label_330b84;
        case 0x330b88u: goto label_330b88;
        case 0x330b8cu: goto label_330b8c;
        case 0x330b90u: goto label_330b90;
        case 0x330b94u: goto label_330b94;
        case 0x330b98u: goto label_330b98;
        case 0x330b9cu: goto label_330b9c;
        case 0x330ba0u: goto label_330ba0;
        case 0x330ba4u: goto label_330ba4;
        case 0x330ba8u: goto label_330ba8;
        case 0x330bacu: goto label_330bac;
        default: break;
    }

    ctx->pc = 0x330b48u;

label_330b48:
    // 0x330b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_330b4c:
    // 0x330b4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x330b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_330b50:
    // 0x330b50: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_330b54:
    if (ctx->pc == 0x330B54u) {
        ctx->pc = 0x330B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B50u;
        // 0x330b54: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330B58u;
        goto label_330b58;
    }
    ctx->pc = 0x330B50u;
    {
        const bool branch_taken_0x330b50 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x330B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B50u;
        // 0x330b54: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b50) {
            ctx->pc = 0x330B70u;
            goto label_330b70;
        }
    }
    ctx->pc = 0x330B58u;
label_330b58:
    // 0x330b58: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x330b58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_330b5c:
    // 0x330b5c: 0xc0cc0b8  jal         func_3302E0
label_330b60:
    if (ctx->pc == 0x330B60u) {
        ctx->pc = 0x330B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B5Cu;
        // 0x330b60: 0x24843310  addiu       $a0, $a0, 0x3310 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330B64u;
        goto label_330b64;
    }
    ctx->pc = 0x330B5Cu;
    SET_GPR_U32(ctx, 31, 0x330B64u);
    ctx->pc = 0x330B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330B5Cu;
    // 0x330b60: 0x24843310  addiu       $a0, $a0, 0x3310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x330B5Cu, 0x330B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330B64u;
label_330b64:
    // 0x330b64: 0x1000000e  b           . + 4 + (0xE << 2)
label_330b68:
    if (ctx->pc == 0x330B68u) {
        ctx->pc = 0x330B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B64u;
        // 0x330b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330B6Cu;
        goto label_330b6c;
    }
    ctx->pc = 0x330B64u;
    {
        const bool branch_taken_0x330b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B64u;
        // 0x330b68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b64) {
            ctx->pc = 0x330BA0u;
            goto label_330ba0;
        }
    }
    ctx->pc = 0x330B6Cu;
label_330b6c:
    // 0x330b6c: 0x0  nop
    ctx->pc = 0x330b6cu;
    // NOP
label_330b70:
    // 0x330b70: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x330b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_330b74:
    // 0x330b74: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x330b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_330b78:
    // 0x330b78: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_330b7c:
    if (ctx->pc == 0x330B7Cu) {
        ctx->pc = 0x330B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B78u;
        // 0x330b7c: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330B80u;
        goto label_330b80;
    }
    ctx->pc = 0x330B78u;
    {
        const bool branch_taken_0x330b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330b78) {
            ctx->pc = 0x330B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x330B78u;
            // 0x330b7c: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x330B90u;
            goto label_330b90;
        }
    }
    ctx->pc = 0x330B80u;
label_330b80:
    // 0x330b80: 0x40f809  jalr        $v0
label_330b84:
    if (ctx->pc == 0x330B84u) {
        ctx->pc = 0x330B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B80u;
        // 0x330b84: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330B88u;
        goto label_330b88;
    }
    ctx->pc = 0x330B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x330B88u);
        ctx->pc = 0x330B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B80u;
        // 0x330b84: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330B80u, 0x330B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x330B88u;
label_330b88:
    // 0x330b88: 0x10000004  b           . + 4 + (0x4 << 2)
label_330b8c:
    if (ctx->pc == 0x330B8Cu) {
        ctx->pc = 0x330B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B88u;
        // 0x330b8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330B90u;
        goto label_330b90;
    }
    ctx->pc = 0x330B88u;
    {
        const bool branch_taken_0x330b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x330B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B88u;
        // 0x330b8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330b88) {
            ctx->pc = 0x330B9Cu;
            goto label_330b9c;
        }
    }
    ctx->pc = 0x330B90u;
label_330b90:
    // 0x330b90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x330b90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_330b94:
    // 0x330b94: 0xc0cc0b8  jal         func_3302E0
label_330b98:
    if (ctx->pc == 0x330B98u) {
        ctx->pc = 0x330B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330B94u;
        // 0x330b98: 0x24843330  addiu       $a0, $a0, 0x3330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330B9Cu;
        goto label_330b9c;
    }
    ctx->pc = 0x330B94u;
    SET_GPR_U32(ctx, 31, 0x330B9Cu);
    ctx->pc = 0x330B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330B94u;
    // 0x330b98: 0x24843330  addiu       $a0, $a0, 0x3330 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3302E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3302E0u, 0x330B94u, 0x330B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330B9Cu;
label_330b9c:
    // 0x330b9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x330b9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330ba0:
    // 0x330ba0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_330ba4:
    // 0x330ba4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x330ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_330ba8:
    // 0x330ba8: 0x3e00008  jr          $ra
label_330bac:
    if (ctx->pc == 0x330BACu) {
        ctx->pc = 0x330BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BA8u;
        // 0x330bac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x330BB0u;
        goto label_fallthrough_0x330ba8;
    }
    ctx->pc = 0x330BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330BA8u;
        // 0x330bac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x330ba8:
    ctx->pc = 0x330BB0u;
}
