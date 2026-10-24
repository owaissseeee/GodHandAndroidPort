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

// Function: sftrn_CallTrEntry
// Address: 0x35bc50 - 0x35bcd0
void sftrn_CallTrEntry_0x35bc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sftrn_CallTrEntry_0x35bc50");
#endif

    switch (ctx->pc) {
        case 0x35bc50u: goto label_35bc50;
        case 0x35bc54u: goto label_35bc54;
        case 0x35bc58u: goto label_35bc58;
        case 0x35bc5cu: goto label_35bc5c;
        case 0x35bc60u: goto label_35bc60;
        case 0x35bc64u: goto label_35bc64;
        case 0x35bc68u: goto label_35bc68;
        case 0x35bc6cu: goto label_35bc6c;
        case 0x35bc70u: goto label_35bc70;
        case 0x35bc74u: goto label_35bc74;
        case 0x35bc78u: goto label_35bc78;
        case 0x35bc7cu: goto label_35bc7c;
        case 0x35bc80u: goto label_35bc80;
        case 0x35bc84u: goto label_35bc84;
        case 0x35bc88u: goto label_35bc88;
        case 0x35bc8cu: goto label_35bc8c;
        case 0x35bc90u: goto label_35bc90;
        case 0x35bc94u: goto label_35bc94;
        case 0x35bc98u: goto label_35bc98;
        case 0x35bc9cu: goto label_35bc9c;
        case 0x35bca0u: goto label_35bca0;
        case 0x35bca4u: goto label_35bca4;
        case 0x35bca8u: goto label_35bca8;
        case 0x35bcacu: goto label_35bcac;
        case 0x35bcb0u: goto label_35bcb0;
        case 0x35bcb4u: goto label_35bcb4;
        case 0x35bcb8u: goto label_35bcb8;
        case 0x35bcbcu: goto label_35bcbc;
        case 0x35bcc0u: goto label_35bcc0;
        case 0x35bcc4u: goto label_35bcc4;
        case 0x35bcc8u: goto label_35bcc8;
        case 0x35bcccu: goto label_35bccc;
        default: break;
    }

    ctx->pc = 0x35bc50u;

label_35bc50:
    // 0x35bc50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35bc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_35bc54:
    // 0x35bc54: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35bc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_35bc58:
    // 0x35bc58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35bc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_35bc5c:
    // 0x35bc5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35bc5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35bc60:
    // 0x35bc60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35bc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_35bc64:
    // 0x35bc64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x35bc64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35bc68:
    // 0x35bc68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35bc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_35bc6c:
    // 0x35bc6c: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x35bc6cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_35bc70:
    // 0x35bc70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35bc70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35bc74:
    // 0x35bc74: 0x2a22000f  slti        $v0, $s1, 0xF
    ctx->pc = 0x35bc74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
label_35bc78:
    // 0x35bc78: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_35bc7c:
    if (ctx->pc == 0x35BC7Cu) {
        ctx->pc = 0x35BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BC78u;
        // 0x35bc7c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35BC80u;
        goto label_35bc80;
    }
    ctx->pc = 0x35BC78u;
    {
        const bool branch_taken_0x35bc78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BC78u;
        // 0x35bc7c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bc78) {
            ctx->pc = 0x35BCB4u;
            goto label_35bcb4;
        }
    }
    ctx->pc = 0x35BC80u;
label_35bc80:
    // 0x35bc80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x35bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_35bc84:
    // 0x35bc84: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x35bc84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_35bc88:
    // 0x35bc88: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_35bc8c:
    if (ctx->pc == 0x35BC8Cu) {
        ctx->pc = 0x35BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BC88u;
        // 0x35bc8c: 0x2421821  addu        $v1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35BC90u;
        goto label_35bc90;
    }
    ctx->pc = 0x35BC88u;
    {
        const bool branch_taken_0x35bc88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BC88u;
        // 0x35bc8c: 0x2421821  addu        $v1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bc88) {
            ctx->pc = 0x35BCB4u;
            goto label_35bcb4;
        }
    }
    ctx->pc = 0x35BC90u;
label_35bc90:
    // 0x35bc90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35bc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35bc94:
    // 0x35bc94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x35bc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35bc98:
    // 0x35bc98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35bc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35bc9c:
    // 0x35bc9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x35bc9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_35bca0:
    // 0x35bca0: 0x40f809  jalr        $v0
label_35bca4:
    if (ctx->pc == 0x35BCA4u) {
        ctx->pc = 0x35BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BCA0u;
        // 0x35bca4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35BCA8u;
        goto label_35bca8;
    }
    ctx->pc = 0x35BCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x35BCA8u);
        ctx->pc = 0x35BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BCA0u;
        // 0x35bca4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BCA0u, 0x35BCA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35BCA8u;
label_35bca8:
    // 0x35bca8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x35bca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35bcac:
    // 0x35bcac: 0x1080fff2  beqz        $a0, . + 4 + (-0xE << 2)
label_35bcb0:
    if (ctx->pc == 0x35BCB0u) {
        ctx->pc = 0x35BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BCACu;
        // 0x35bcb0: 0x2a22000f  slti        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x35BCB4u;
        goto label_35bcb4;
    }
    ctx->pc = 0x35BCACu;
    {
        const bool branch_taken_0x35bcac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35BCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BCACu;
        // 0x35bcb0: 0x2a22000f  slti        $v0, $s1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)15) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bcac) {
            ctx->pc = 0x35BC78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35bc78;
        }
    }
    ctx->pc = 0x35BCB4u;
label_35bcb4:
    // 0x35bcb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35bcb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35bcb8:
    // 0x35bcb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x35bcb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35bcbc:
    // 0x35bcbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35bcbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_35bcc0:
    // 0x35bcc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35bcc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35bcc4:
    // 0x35bcc4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35bcc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_35bcc8:
    // 0x35bcc8: 0x3e00008  jr          $ra
label_35bccc:
    if (ctx->pc == 0x35BCCCu) {
        ctx->pc = 0x35BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BCC8u;
        // 0x35bccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35BCD0u;
        goto label_fallthrough_0x35bcc8;
    }
    ctx->pc = 0x35BCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35BCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35BCC8u;
        // 0x35bccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35BCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x35bcc8:
    ctx->pc = 0x35BCD0u;
}
