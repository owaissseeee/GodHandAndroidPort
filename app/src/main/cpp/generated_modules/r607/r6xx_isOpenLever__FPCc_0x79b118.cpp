#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r607_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r607
{
// Function: r6xx_isOpenLever__FPCc
// Address: 0x79b118 - 0x79b198
void r6xx_isOpenLever__FPCc_0x79b118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_isOpenLever__FPCc_0x79b118");
#endif

    switch (ctx->pc) {
        case 0x79b140u: goto label_79b140;
        case 0x79b170u: goto label_79b170;
        case 0x79b180u: goto label_79b180;
        default: break;
    }

    ctx->pc = 0x79b118u;

    // 0x79b118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x79b118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x79b11c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x79b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x79b120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b124: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x79b124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x79b128: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b12c: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x79b12cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b130: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x79B130u;
    {
        const bool branch_taken_0x79b130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B130u;
        // 0x79b134: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b130) {
            ctx->pc = 0x79B168u;
            goto label_79b168;
        }
    }
    ctx->pc = 0x79B138u;
    // 0x79b138: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x79b138u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b13c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b13cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79b140:
    // 0x79b140: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79b140u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79b144: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79b148: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79b148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79b14c: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79b14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79b150: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79b150u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79b154: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B154u;
    {
        const bool branch_taken_0x79b154 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B154u;
        // 0x79b158: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b154) {
            ctx->pc = 0x79B168u;
            goto label_79b168;
        }
    }
    ctx->pc = 0x79B15Cu;
    // 0x79b15c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79b15cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79b160: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79B160u;
    {
        const bool branch_taken_0x79b160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b160) {
            ctx->pc = 0x79B164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B160u;
            // 0x79b164: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b140;
        }
    }
    ctx->pc = 0x79B168u;
label_79b168:
    // 0x79b168: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79B168u;
    SET_GPR_U32(ctx, 31, 0x79B170u);
    ctx->pc = 0x79B16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B168u;
    // 0x79b16c: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79B168u, 0x79B170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B170u;
label_79b170:
    // 0x79b170: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B170u;
    {
        const bool branch_taken_0x79b170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b170) {
            ctx->pc = 0x79B174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B170u;
            // 0x79b174: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B188u;
            goto label_79b188;
        }
    }
    ctx->pc = 0x79B178u;
    // 0x79b178: 0xc0693c4  jal         func_1A4F10
    ctx->pc = 0x79B178u;
    SET_GPR_U32(ctx, 31, 0x79B180u);
    ctx->pc = 0x79B17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B178u;
    // 0x79b17c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F10u, 0x79B178u, 0x79B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B180u;
label_79b180:
    // 0x79b180: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79B180u;
    {
        const bool branch_taken_0x79b180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B180u;
        // 0x79b184: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b180) {
            ctx->pc = 0x79B18Cu;
            goto label_79b18c;
        }
    }
    ctx->pc = 0x79B188u;
label_79b188:
    // 0x79b188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_79b18c:
    // 0x79b18c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B18Cu;
        // 0x79b190: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B194u;
    // 0x79b194: 0x0  nop
    ctx->pc = 0x79b194u;
    // NOP
    ctx->pc = 0x79b198u;
}
} // namespace gh_r607
