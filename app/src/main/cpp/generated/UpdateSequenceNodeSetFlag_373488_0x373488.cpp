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

// Function: UpdateSequenceNodeSetFlag_373488
// Address: 0x373488 - 0x3734f0
void UpdateSequenceNodeSetFlag_373488_0x373488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateSequenceNodeSetFlag_373488_0x373488");
#endif

    switch (ctx->pc) {
        case 0x37349cu: goto label_37349c;
        case 0x3734acu: goto label_3734ac;
        case 0x3734c0u: goto label_3734c0;
        case 0x3734d0u: goto label_3734d0;
        default: break;
    }

    ctx->pc = 0x373488u;

    // 0x373488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x373488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37348c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37348cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x373490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373494: 0xc0dce94  jal         func_373A50
    ctx->pc = 0x373494u;
    SET_GPR_U32(ctx, 31, 0x37349Cu);
    ctx->pc = 0x373498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373494u;
    // 0x373498: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373A50u, 0x373494u, 0x37349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37349Cu;
label_37349c:
    // 0x37349c: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x37349Cu;
    {
        const bool branch_taken_0x37349c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37349c) {
            ctx->pc = 0x3734A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37349Cu;
            // 0x3734a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3734E0u;
            goto label_3734e0;
        }
    }
    ctx->pc = 0x3734A4u;
    // 0x3734a4: 0xc0dcec8  jal         func_373B20
    ctx->pc = 0x3734A4u;
    SET_GPR_U32(ctx, 31, 0x3734ACu);
    ctx->pc = 0x3734A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734A4u;
    // 0x3734a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373B20u, 0x3734A4u, 0x3734ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3734ACu;
label_3734ac:
    // 0x3734ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3734acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3734b0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3734B0u;
    {
        const bool branch_taken_0x3734b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3734b0) {
            ctx->pc = 0x3734C8u;
            goto label_3734c8;
        }
    }
    ctx->pc = 0x3734B8u;
    // 0x3734b8: 0xc0dd15c  jal         func_374570
    ctx->pc = 0x3734B8u;
    SET_GPR_U32(ctx, 31, 0x3734C0u);
    ctx->pc = 0x3734BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734B8u;
    // 0x3734bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374570u, 0x3734B8u, 0x3734C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3734C0u;
label_3734c0:
    // 0x3734c0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3734C0u;
    {
        const bool branch_taken_0x3734c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3734C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3734C0u;
        // 0x3734c4: 0x8e02004c  lw          $v0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3734c0) {
            ctx->pc = 0x3734D4u;
            goto label_3734d4;
        }
    }
    ctx->pc = 0x3734C8u;
label_3734c8:
    // 0x3734c8: 0xc0dcfe8  jal         func_373FA0
    ctx->pc = 0x3734C8u;
    SET_GPR_U32(ctx, 31, 0x3734D0u);
    ctx->pc = 0x3734CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3734C8u;
    // 0x3734cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373FA0u, 0x3734C8u, 0x3734D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3734D0u;
label_3734d0:
    // 0x3734d0: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x3734d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_3734d4:
    // 0x3734d4: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x3734d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x3734d8: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x3734d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x3734dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3734dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3734e0:
    // 0x3734e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3734e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3734e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3734E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3734E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3734E4u;
        // 0x3734e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3734E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3734ECu;
    // 0x3734ec: 0x0  nop
    ctx->pc = 0x3734ecu;
    // NOP
    ctx->pc = 0x3734f0u;
}
