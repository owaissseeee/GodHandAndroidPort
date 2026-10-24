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

// Function: _IO_flush_all
// Address: 0x38ce58 - 0x38ced8
void ps2__IO_flush_all_0x38ce58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_flush_all_0x38ce58");
#endif

    switch (ctx->pc) {
        case 0x38ce58u: goto label_38ce58;
        case 0x38ce5cu: goto label_38ce5c;
        case 0x38ce60u: goto label_38ce60;
        case 0x38ce64u: goto label_38ce64;
        case 0x38ce68u: goto label_38ce68;
        case 0x38ce6cu: goto label_38ce6c;
        case 0x38ce70u: goto label_38ce70;
        case 0x38ce74u: goto label_38ce74;
        case 0x38ce78u: goto label_38ce78;
        case 0x38ce7cu: goto label_38ce7c;
        case 0x38ce80u: goto label_38ce80;
        case 0x38ce84u: goto label_38ce84;
        case 0x38ce88u: goto label_38ce88;
        case 0x38ce8cu: goto label_38ce8c;
        case 0x38ce90u: goto label_38ce90;
        case 0x38ce94u: goto label_38ce94;
        case 0x38ce98u: goto label_38ce98;
        case 0x38ce9cu: goto label_38ce9c;
        case 0x38cea0u: goto label_38cea0;
        case 0x38cea4u: goto label_38cea4;
        case 0x38cea8u: goto label_38cea8;
        case 0x38ceacu: goto label_38ceac;
        case 0x38ceb0u: goto label_38ceb0;
        case 0x38ceb4u: goto label_38ceb4;
        case 0x38ceb8u: goto label_38ceb8;
        case 0x38cebcu: goto label_38cebc;
        case 0x38cec0u: goto label_38cec0;
        case 0x38cec4u: goto label_38cec4;
        case 0x38cec8u: goto label_38cec8;
        case 0x38ceccu: goto label_38cecc;
        case 0x38ced0u: goto label_38ced0;
        case 0x38ced4u: goto label_38ced4;
        default: break;
    }

    ctx->pc = 0x38ce58u;

label_38ce58:
    // 0x38ce58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x38ce58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_38ce5c:
    // 0x38ce5c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x38ce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_38ce60:
    // 0x38ce60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38ce60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38ce64:
    // 0x38ce64: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38ce64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_38ce68:
    // 0x38ce68: 0x8c5050f8  lw          $s0, 0x50F8($v0)
    ctx->pc = 0x38ce68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20728)));
label_38ce6c:
    // 0x38ce6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x38ce6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38ce70:
    // 0x38ce70: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x38ce70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_38ce74:
    // 0x38ce74: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_38ce78:
    if (ctx->pc == 0x38CE78u) {
        ctx->pc = 0x38CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE74u;
        // 0x38ce78: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CE7Cu;
        goto label_38ce7c;
    }
    ctx->pc = 0x38CE74u;
    {
        const bool branch_taken_0x38ce74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE74u;
        // 0x38ce78: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ce74) {
            ctx->pc = 0x38CEBCu;
            goto label_38cebc;
        }
    }
    ctx->pc = 0x38CE7Cu;
label_38ce7c:
    // 0x38ce7c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x38ce7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38ce80:
    // 0x38ce80: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x38ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_38ce84:
    // 0x38ce84: 0x0  nop
    ctx->pc = 0x38ce84u;
    // NOP
label_38ce88:
    // 0x38ce88: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x38ce88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_38ce8c:
    // 0x38ce8c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x38ce8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_38ce90:
    // 0x38ce90: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_38ce94:
    if (ctx->pc == 0x38CE94u) {
        ctx->pc = 0x38CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE90u;
        // 0x38ce94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CE98u;
        goto label_38ce98;
    }
    ctx->pc = 0x38CE90u;
    {
        const bool branch_taken_0x38ce90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CE90u;
        // 0x38ce94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ce90) {
            ctx->pc = 0x38CEB0u;
            goto label_38ceb0;
        }
    }
    ctx->pc = 0x38CE98u;
label_38ce98:
    // 0x38ce98: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38ce98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38ce9c:
    // 0x38ce9c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x38ce9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_38cea0:
    // 0x38cea0: 0x40f809  jalr        $v0
label_38cea4:
    if (ctx->pc == 0x38CEA4u) {
        ctx->pc = 0x38CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEA0u;
        // 0x38cea4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CEA8u;
        goto label_38cea8;
    }
    ctx->pc = 0x38CEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38CEA8u);
        ctx->pc = 0x38CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEA0u;
        // 0x38cea4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CEA0u, 0x38CEA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38CEA8u;
label_38cea8:
    // 0x38cea8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x38cea8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_38ceac:
    // 0x38ceac: 0x242880a  movz        $s1, $s2, $v0
    ctx->pc = 0x38ceacu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
label_38ceb0:
    // 0x38ceb0: 0x8e100034  lw          $s0, 0x34($s0)
    ctx->pc = 0x38ceb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_38ceb4:
    // 0x38ceb4: 0x5600fff4  bnel        $s0, $zero, . + 4 + (-0xC << 2)
label_38ceb8:
    if (ctx->pc == 0x38CEB8u) {
        ctx->pc = 0x38CEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CEB4u;
        // 0x38ceb8: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CEBCu;
        goto label_38cebc;
    }
    ctx->pc = 0x38CEB4u;
    {
        const bool branch_taken_0x38ceb4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x38ceb4) {
            ctx->pc = 0x38CEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38CEB4u;
            // 0x38ceb8: 0x8e030014  lw          $v1, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38CE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ce88;
        }
    }
    ctx->pc = 0x38CEBCu;
label_38cebc:
    // 0x38cebc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x38cebcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_38cec0:
    // 0x38cec0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x38cec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38cec4:
    // 0x38cec4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x38cec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_38cec8:
    // 0x38cec8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38cec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38cecc:
    // 0x38cecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38ceccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38ced0:
    // 0x38ced0: 0x3e00008  jr          $ra
label_38ced4:
    if (ctx->pc == 0x38CED4u) {
        ctx->pc = 0x38CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CED0u;
        // 0x38ced4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38CED8u;
        goto label_fallthrough_0x38ced0;
    }
    ctx->pc = 0x38CED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38CED0u;
        // 0x38ced4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38CED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38ced0:
    ctx->pc = 0x38CED8u;
}
