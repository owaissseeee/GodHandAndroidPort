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

// Function: __do_global_dtors
// Address: 0x31da48 - 0x31daa0
void ps2___do_global_dtors_0x31da48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___do_global_dtors_0x31da48");
#endif

    switch (ctx->pc) {
        case 0x31da48u: goto label_31da48;
        case 0x31da4cu: goto label_31da4c;
        case 0x31da50u: goto label_31da50;
        case 0x31da54u: goto label_31da54;
        case 0x31da58u: goto label_31da58;
        case 0x31da5cu: goto label_31da5c;
        case 0x31da60u: goto label_31da60;
        case 0x31da64u: goto label_31da64;
        case 0x31da68u: goto label_31da68;
        case 0x31da6cu: goto label_31da6c;
        case 0x31da70u: goto label_31da70;
        case 0x31da74u: goto label_31da74;
        case 0x31da78u: goto label_31da78;
        case 0x31da7cu: goto label_31da7c;
        case 0x31da80u: goto label_31da80;
        case 0x31da84u: goto label_31da84;
        case 0x31da88u: goto label_31da88;
        case 0x31da8cu: goto label_31da8c;
        case 0x31da90u: goto label_31da90;
        case 0x31da94u: goto label_31da94;
        case 0x31da98u: goto label_31da98;
        case 0x31da9cu: goto label_31da9c;
        default: break;
    }

    ctx->pc = 0x31da48u;

label_31da48:
    // 0x31da48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31da48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_31da4c:
    // 0x31da4c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x31da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_31da50:
    // 0x31da50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31da50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_31da54:
    // 0x31da54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31da54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_31da58:
    // 0x31da58: 0x8c824080  lw          $v0, 0x4080($a0)
    ctx->pc = 0x31da58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16512)));
label_31da5c:
    // 0x31da5c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31da5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31da60:
    // 0x31da60: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_31da64:
    if (ctx->pc == 0x31DA64u) {
        ctx->pc = 0x31DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA60u;
        // 0x31da64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA68u;
        goto label_31da68;
    }
    ctx->pc = 0x31DA60u;
    {
        const bool branch_taken_0x31da60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31DA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA60u;
        // 0x31da64: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da60) {
            ctx->pc = 0x31DA8Cu;
            goto label_31da8c;
        }
    }
    ctx->pc = 0x31DA68u;
label_31da68:
    // 0x31da68: 0x8e024080  lw          $v0, 0x4080($s0)
    ctx->pc = 0x31da68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16512)));
label_31da6c:
    // 0x31da6c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x31da6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_31da70:
    // 0x31da70: 0x8c43fffc  lw          $v1, -0x4($v0)
    ctx->pc = 0x31da70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_31da74:
    // 0x31da74: 0x60f809  jalr        $v1
label_31da78:
    if (ctx->pc == 0x31DA78u) {
        ctx->pc = 0x31DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA74u;
        // 0x31da78: 0xae024080  sw          $v0, 0x4080($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA7Cu;
        goto label_31da7c;
    }
    ctx->pc = 0x31DA74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31DA7Cu);
        ctx->pc = 0x31DA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA74u;
        // 0x31da78: 0xae024080  sw          $v0, 0x4080($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DA74u, 0x31DA7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31DA7Cu;
label_31da7c:
    // 0x31da7c: 0x8e024080  lw          $v0, 0x4080($s0)
    ctx->pc = 0x31da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16512)));
label_31da80:
    // 0x31da80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31da80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31da84:
    // 0x31da84: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_31da88:
    if (ctx->pc == 0x31DA88u) {
        ctx->pc = 0x31DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA84u;
        // 0x31da88: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA8Cu;
        goto label_31da8c;
    }
    ctx->pc = 0x31DA84u;
    {
        const bool branch_taken_0x31da84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31DA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA84u;
        // 0x31da88: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31da84) {
            ctx->pc = 0x31DA70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31da70;
        }
    }
    ctx->pc = 0x31DA8Cu;
label_31da8c:
    // 0x31da8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31da8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_31da90:
    // 0x31da90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31da90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31da94:
    // 0x31da94: 0x3e00008  jr          $ra
label_31da98:
    if (ctx->pc == 0x31DA98u) {
        ctx->pc = 0x31DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA94u;
        // 0x31da98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31DA9Cu;
        goto label_31da9c;
    }
    ctx->pc = 0x31DA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31DA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31DA94u;
        // 0x31da98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31DA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31DA9Cu;
label_31da9c:
    // 0x31da9c: 0x0  nop
    ctx->pc = 0x31da9cu;
    // NOP
    ctx->pc = 0x31daa0u;
}
