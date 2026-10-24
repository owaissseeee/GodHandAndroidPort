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

// Function: func_0013E6E0
// Address: 0x13e6e0 - 0x13e750
void func_0013E6E0_0x13e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0013E6E0_0x13e6e0");
#endif

    switch (ctx->pc) {
        case 0x13e728u: goto label_13e728;
        case 0x13e73cu: goto label_13e73c;
        default: break;
    }

    ctx->pc = 0x13e6e0u;

    // 0x13e6e0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x13e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x13e6e4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13e6e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13e6e8: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x13e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x13e6ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13e6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13e6f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13e6f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e6f4: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x13e6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x13e6f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13e6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13e6fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13e6fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13e700: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13E700u;
    {
        const bool branch_taken_0x13e700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E700u;
        // 0x13e704: 0x24647a24  addiu       $a0, $v1, 0x7A24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 31268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e700) {
            ctx->pc = 0x13E73Cu;
            goto label_13e73c;
        }
    }
    ctx->pc = 0x13E708u;
    // 0x13e708: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13e708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13e70c: 0x442000c  bltzl       $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13E70Cu;
    {
        const bool branch_taken_0x13e70c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x13e70c) {
            ctx->pc = 0x13E710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E70Cu;
            // 0x13e710: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E740u;
            goto label_13e740;
        }
    }
    ctx->pc = 0x13E714u;
    // 0x13e714: 0x9082002d  lbu         $v0, 0x2D($a0)
    ctx->pc = 0x13e714u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 45)));
    // 0x13e718: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E718u;
    {
        const bool branch_taken_0x13e718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e718) {
            ctx->pc = 0x13E71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E718u;
            // 0x13e71c: 0x8e020090  lw          $v0, 0x90($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E72Cu;
            goto label_13e72c;
        }
    }
    ctx->pc = 0x13E720u;
    // 0x13e720: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x13E720u;
    SET_GPR_U32(ctx, 31, 0x13E728u);
    ctx->pc = 0x13E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E720u;
    // 0x13e724: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x13E720u, 0x13E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E728u;
label_13e728:
    // 0x13e728: 0x8e020090  lw          $v0, 0x90($s0)
    ctx->pc = 0x13e728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_13e72c:
    // 0x13e72c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13E72Cu;
    {
        const bool branch_taken_0x13e72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e72c) {
            ctx->pc = 0x13E730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13E72Cu;
            // 0x13e730: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13E740u;
            goto label_13e740;
        }
    }
    ctx->pc = 0x13E734u;
    // 0x13e734: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x13E734u;
    SET_GPR_U32(ctx, 31, 0x13E73Cu);
    ctx->pc = 0x13E738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E734u;
    // 0x13e738: 0x260400b0  addiu       $a0, $s0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x13E734u, 0x13E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E73Cu;
label_13e73c:
    // 0x13e73c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13e73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_13e740:
    // 0x13e740: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13e740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e744: 0x3e00008  jr          $ra
    ctx->pc = 0x13E744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E744u;
        // 0x13e748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E74Cu;
    // 0x13e74c: 0x0  nop
    ctx->pc = 0x13e74cu;
    // NOP
    ctx->pc = 0x13e750u;
}
