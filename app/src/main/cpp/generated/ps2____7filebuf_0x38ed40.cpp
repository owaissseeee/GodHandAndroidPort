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

// Function: _$_7filebuf
// Address: 0x38ed40 - 0x38edc0
void ps2____7filebuf_0x38ed40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2____7filebuf_0x38ed40");
#endif

    switch (ctx->pc) {
        case 0x38ed40u: goto label_38ed40;
        case 0x38ed44u: goto label_38ed44;
        case 0x38ed48u: goto label_38ed48;
        case 0x38ed4cu: goto label_38ed4c;
        case 0x38ed50u: goto label_38ed50;
        case 0x38ed54u: goto label_38ed54;
        case 0x38ed58u: goto label_38ed58;
        case 0x38ed5cu: goto label_38ed5c;
        case 0x38ed60u: goto label_38ed60;
        case 0x38ed64u: goto label_38ed64;
        case 0x38ed68u: goto label_38ed68;
        case 0x38ed6cu: goto label_38ed6c;
        case 0x38ed70u: goto label_38ed70;
        case 0x38ed74u: goto label_38ed74;
        case 0x38ed78u: goto label_38ed78;
        case 0x38ed7cu: goto label_38ed7c;
        case 0x38ed80u: goto label_38ed80;
        case 0x38ed84u: goto label_38ed84;
        case 0x38ed88u: goto label_38ed88;
        case 0x38ed8cu: goto label_38ed8c;
        case 0x38ed90u: goto label_38ed90;
        case 0x38ed94u: goto label_38ed94;
        case 0x38ed98u: goto label_38ed98;
        case 0x38ed9cu: goto label_38ed9c;
        case 0x38eda0u: goto label_38eda0;
        case 0x38eda4u: goto label_38eda4;
        case 0x38eda8u: goto label_38eda8;
        case 0x38edacu: goto label_38edac;
        case 0x38edb0u: goto label_38edb0;
        case 0x38edb4u: goto label_38edb4;
        case 0x38edb8u: goto label_38edb8;
        case 0x38edbcu: goto label_38edbc;
        default: break;
    }

    ctx->pc = 0x38ed40u;

label_38ed40:
    // 0x38ed40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38ed40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_38ed44:
    // 0x38ed44: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_38ed48:
    // 0x38ed48: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38ed48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_38ed4c:
    // 0x38ed4c: 0x2442d220  addiu       $v0, $v0, -0x2DE0
    ctx->pc = 0x38ed4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955552));
label_38ed50:
    // 0x38ed50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38ed50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38ed54:
    // 0x38ed54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38ed54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_38ed58:
    // 0x38ed58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38ed58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38ed5c:
    // 0x38ed5c: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x38ed5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_38ed60:
    // 0x38ed60: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x38ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_38ed64:
    // 0x38ed64: 0x460000d  bltz        $v1, . + 4 + (0xD << 2)
label_38ed68:
    if (ctx->pc == 0x38ED68u) {
        ctx->pc = 0x38ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED64u;
        // 0x38ed68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED6Cu;
        goto label_38ed6c;
    }
    ctx->pc = 0x38ED64u;
    {
        const bool branch_taken_0x38ed64 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x38ED68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED64u;
        // 0x38ed68: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ed64) {
            ctx->pc = 0x38ED9Cu;
            goto label_38ed9c;
        }
    }
    ctx->pc = 0x38ED6Cu;
label_38ed6c:
    // 0x38ed6c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x38ed6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_38ed70:
    // 0x38ed70: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x38ed70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38ed74:
    // 0x38ed74: 0xc0e4aa0  jal         func_392A80
label_38ed78:
    if (ctx->pc == 0x38ED78u) {
        ctx->pc = 0x38ED78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED74u;
        // 0x38ed78: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED7Cu;
        goto label_38ed7c;
    }
    ctx->pc = 0x38ED74u;
    SET_GPR_U32(ctx, 31, 0x38ED7Cu);
    ctx->pc = 0x38ED78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED74u;
    // 0x38ed78: 0xc53023  subu        $a2, $a2, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392A80u, 0x38ED74u, 0x38ED7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED7Cu;
label_38ed7c:
    // 0x38ed7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38ed7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_38ed80:
    // 0x38ed80: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x38ed80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_38ed84:
    // 0x38ed84: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_38ed88:
    if (ctx->pc == 0x38ED88u) {
        ctx->pc = 0x38ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED84u;
        // 0x38ed88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED8Cu;
        goto label_38ed8c;
    }
    ctx->pc = 0x38ED84u;
    {
        const bool branch_taken_0x38ed84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x38ED88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED84u;
        // 0x38ed88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ed84) {
            ctx->pc = 0x38EDA0u;
            goto label_38eda0;
        }
    }
    ctx->pc = 0x38ED8Cu;
label_38ed8c:
    // 0x38ed8c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38ed8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38ed90:
    // 0x38ed90: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x38ed90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_38ed94:
    // 0x38ed94: 0x40f809  jalr        $v0
label_38ed98:
    if (ctx->pc == 0x38ED98u) {
        ctx->pc = 0x38ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED94u;
        // 0x38ed98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED9Cu;
        goto label_38ed9c;
    }
    ctx->pc = 0x38ED94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38ED9Cu);
        ctx->pc = 0x38ED98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED94u;
        // 0x38ed98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38ED94u, 0x38ED9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38ED9Cu;
label_38ed9c:
    // 0x38ed9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ed9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38eda0:
    // 0x38eda0: 0xc0e2cf8  jal         func_38B3E0
label_38eda4:
    if (ctx->pc == 0x38EDA4u) {
        ctx->pc = 0x38EDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDA0u;
        // 0x38eda4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EDA8u;
        goto label_38eda8;
    }
    ctx->pc = 0x38EDA0u;
    SET_GPR_U32(ctx, 31, 0x38EDA8u);
    ctx->pc = 0x38EDA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EDA0u;
    // 0x38eda4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B3E0u, 0x38EDA0u, 0x38EDA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EDA8u;
label_38eda8:
    // 0x38eda8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38eda8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38edac:
    // 0x38edac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38edacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38edb0:
    // 0x38edb0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38edb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38edb4:
    // 0x38edb4: 0x3e00008  jr          $ra
label_38edb8:
    if (ctx->pc == 0x38EDB8u) {
        ctx->pc = 0x38EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDB4u;
        // 0x38edb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EDBCu;
        goto label_38edbc;
    }
    ctx->pc = 0x38EDB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDB4u;
        // 0x38edb8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EDB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EDBCu;
label_38edbc:
    // 0x38edbc: 0x0  nop
    ctx->pc = 0x38edbcu;
    // NOP
    ctx->pc = 0x38edc0u;
}
