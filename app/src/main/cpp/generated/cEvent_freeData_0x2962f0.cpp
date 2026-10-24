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

// Function: cEvent_freeData
// Address: 0x2962f0 - 0x296350
void cEvent_freeData_0x2962f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEvent_freeData_0x2962f0");
#endif

    switch (ctx->pc) {
        case 0x29631cu: goto label_29631c;
        case 0x296330u: goto label_296330;
        case 0x29633cu: goto label_29633c;
        default: break;
    }

    ctx->pc = 0x2962f0u;

    // 0x2962f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2962f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2962f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2962f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2962f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2962f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2962fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2962fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296300: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x296300u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x296304: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x296304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x296308: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296308u;
    {
        const bool branch_taken_0x296308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29630Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296308u;
        // 0x29630c: 0x3c04005f  lui         $a0, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296308) {
            ctx->pc = 0x29631Cu;
            goto label_29631c;
        }
    }
    ctx->pc = 0x296310u;
    // 0x296310: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x296310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x296314: 0xc0afa2c  jal         func_2BE8B0
    ctx->pc = 0x296314u;
    SET_GPR_U32(ctx, 31, 0x29631Cu);
    ctx->pc = 0x296318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296314u;
    // 0x296318: 0x24848640  addiu       $a0, $a0, -0x79C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE8B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE8B0u, 0x296314u, 0x29631Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29631Cu;
label_29631c:
    // 0x29631c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x29631cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x296320: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x296320u;
    {
        const bool branch_taken_0x296320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x296320) {
            ctx->pc = 0x296324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296320u;
            // 0x296324: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296334u;
            goto label_296334;
        }
    }
    ctx->pc = 0x296328u;
    // 0x296328: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x296328u;
    SET_GPR_U32(ctx, 31, 0x296330u);
    ctx->pc = 0x29632Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296328u;
    // 0x29632c: 0x8ca4ffe0  lw          $a0, -0x20($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x296328u, 0x296330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296330u;
label_296330:
    // 0x296330: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x296330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_296334:
    // 0x296334: 0xc0a5d98  jal         func_297660
    ctx->pc = 0x296334u;
    SET_GPR_U32(ctx, 31, 0x29633Cu);
    ctx->pc = 0x296338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296334u;
    // 0x296338: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x297660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x297660u, 0x296334u, 0x29633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29633Cu;
label_29633c:
    // 0x29633c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29633cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296344: 0x3e00008  jr          $ra
    ctx->pc = 0x296344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296344u;
        // 0x296348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29634Cu;
    // 0x29634c: 0x0  nop
    ctx->pc = 0x29634cu;
    // NOP
    ctx->pc = 0x296350u;
}
