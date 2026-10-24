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

// Function: _IO_default_uflow
// Address: 0x38c860 - 0x38c8b0
void ps2__IO_default_uflow_0x38c860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__IO_default_uflow_0x38c860");
#endif

    switch (ctx->pc) {
        case 0x38c860u: goto label_38c860;
        case 0x38c864u: goto label_38c864;
        case 0x38c868u: goto label_38c868;
        case 0x38c86cu: goto label_38c86c;
        case 0x38c870u: goto label_38c870;
        case 0x38c874u: goto label_38c874;
        case 0x38c878u: goto label_38c878;
        case 0x38c87cu: goto label_38c87c;
        case 0x38c880u: goto label_38c880;
        case 0x38c884u: goto label_38c884;
        case 0x38c888u: goto label_38c888;
        case 0x38c88cu: goto label_38c88c;
        case 0x38c890u: goto label_38c890;
        case 0x38c894u: goto label_38c894;
        case 0x38c898u: goto label_38c898;
        case 0x38c89cu: goto label_38c89c;
        case 0x38c8a0u: goto label_38c8a0;
        case 0x38c8a4u: goto label_38c8a4;
        case 0x38c8a8u: goto label_38c8a8;
        case 0x38c8acu: goto label_38c8ac;
        default: break;
    }

    ctx->pc = 0x38c860u;

label_38c860:
    // 0x38c860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38c860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_38c864:
    // 0x38c864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38c864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_38c868:
    // 0x38c868: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38c868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_38c86c:
    // 0x38c86c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38c86cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38c870:
    // 0x38c870: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x38c870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_38c874:
    // 0x38c874: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x38c874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_38c878:
    // 0x38c878: 0x40f809  jalr        $v0
label_38c87c:
    if (ctx->pc == 0x38C87Cu) {
        ctx->pc = 0x38C880u;
        goto label_38c880;
    }
    ctx->pc = 0x38C878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38C880u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C878u, 0x38C880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38C880u;
label_38c880:
    // 0x38c880: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38c880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38c884:
    // 0x38c884: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_38c888:
    if (ctx->pc == 0x38C888u) {
        ctx->pc = 0x38C888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C884u;
        // 0x38c888: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C88Cu;
        goto label_38c88c;
    }
    ctx->pc = 0x38C884u;
    {
        const bool branch_taken_0x38c884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x38c884) {
            ctx->pc = 0x38C888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38C884u;
            // 0x38c888: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C894u;
            goto label_38c894;
        }
    }
    ctx->pc = 0x38C88Cu;
label_38c88c:
    // 0x38c88c: 0x10000004  b           . + 4 + (0x4 << 2)
label_38c890:
    if (ctx->pc == 0x38C890u) {
        ctx->pc = 0x38C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C88Cu;
        // 0x38c890: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C894u;
        goto label_38c894;
    }
    ctx->pc = 0x38C88Cu;
    {
        const bool branch_taken_0x38c88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C88Cu;
        // 0x38c890: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c88c) {
            ctx->pc = 0x38C8A0u;
            goto label_38c8a0;
        }
    }
    ctx->pc = 0x38C894u;
label_38c894:
    // 0x38c894: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x38c894u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_38c898:
    // 0x38c898: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x38c898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_38c89c:
    // 0x38c89c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x38c89cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_38c8a0:
    // 0x38c8a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38c8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38c8a4:
    // 0x38c8a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38c8a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_38c8a8:
    // 0x38c8a8: 0x3e00008  jr          $ra
label_38c8ac:
    if (ctx->pc == 0x38C8ACu) {
        ctx->pc = 0x38C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8A8u;
        // 0x38c8ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38C8B0u;
        goto label_fallthrough_0x38c8a8;
    }
    ctx->pc = 0x38C8A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38C8A8u;
        // 0x38c8ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38C8A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x38c8a8:
    ctx->pc = 0x38C8B0u;
}
