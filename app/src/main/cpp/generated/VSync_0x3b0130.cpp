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

// Function: VSync
// Address: 0x3b0130 - 0x3b01c0
void VSync_0x3b0130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("VSync_0x3b0130");
#endif

    switch (ctx->pc) {
        case 0x3b0140u: goto label_3b0140;
        case 0x3b0164u: goto label_3b0164;
        case 0x3b0170u: goto label_3b0170;
        case 0x3b0194u: goto label_3b0194;
        default: break;
    }

    ctx->pc = 0x3b0130u;

    // 0x3b0130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3b0130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3b0134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b0134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b0138: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B0138u;
    SET_GPR_U32(ctx, 31, 0x3B0140u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B0138u, 0x3B0140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0140u;
label_3b0140:
    // 0x3b0140: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3b0140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3b0144: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b0144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b0148: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3b0148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3b014c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3b014cu;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4));
    // 0x3b0150: 0xf  sync
    ctx->pc = 0x3b0150u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b0154: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0154u;
    {
        const bool branch_taken_0x3b0154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0154u;
        // 0x3b0158: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0154) {
            ctx->pc = 0x3B0168u;
            goto label_3b0168;
        }
    }
    ctx->pc = 0x3B015Cu;
    // 0x3b015c: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B015Cu;
    SET_GPR_U32(ctx, 31, 0x3B0164u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B015Cu, 0x3B0164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0164u;
label_3b0164:
    // 0x3b0164: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3b0164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_3b0168:
    // 0x3b0168: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3b0168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3b016c: 0x0  nop
    ctx->pc = 0x3b016cu;
    // NOP
label_3b0170:
    // 0x3b0170: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3b0170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b0174: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3b0174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3b0178: 0x0  nop
    ctx->pc = 0x3b0178u;
    // NOP
    // 0x3b017c: 0x0  nop
    ctx->pc = 0x3b017cu;
    // NOP
    // 0x3b0180: 0x0  nop
    ctx->pc = 0x3b0180u;
    // NOP
    // 0x3b0184: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3B0184u;
    {
        const bool branch_taken_0x3b0184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b0184) {
            ctx->pc = 0x3B0170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0170;
        }
    }
    ctx->pc = 0x3B018Cu;
    // 0x3b018c: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B018Cu;
    SET_GPR_U32(ctx, 31, 0x3B0194u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B018Cu, 0x3B0194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0194u;
label_3b0194:
    // 0x3b0194: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3b0194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3b0198: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3b0198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3b019c: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x3b019cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x3b01a0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3b01a0u;
    runtime->Store32(rdram, ctx, 0x1000F000u, GPR_U32(ctx, 4));
    // 0x3b01a4: 0xf  sync
    ctx->pc = 0x3b01a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3b01a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B01A8u;
    {
        const bool branch_taken_0x3b01a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B01ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B01A8u;
        // 0x3b01ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b01a8) {
            ctx->pc = 0x3B01B8u;
            goto label_3b01b8;
        }
    }
    ctx->pc = 0x3B01B0u;
    // 0x3b01b0: 0x80ed8fc  j           func_3B63F0
    ctx->pc = 0x3B01B0u;
    ctx->pc = 0x3B01B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B01B0u;
    // 0x3b01b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B01B0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B01B8u;
label_3b01b8:
    // 0x3b01b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B01B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B01B8u;
        // 0x3b01bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B01B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B01C0u;
}
