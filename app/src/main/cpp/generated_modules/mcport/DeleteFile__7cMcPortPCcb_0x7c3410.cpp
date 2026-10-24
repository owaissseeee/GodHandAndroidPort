#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: DeleteFile__7cMcPortPCcb
// Address: 0x7c3410 - 0x7c34a0
void DeleteFile__7cMcPortPCcb_0x7c3410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DeleteFile__7cMcPortPCcb_0x7c3410");
#endif

    switch (ctx->pc) {
        case 0x7c3448u: goto label_7c3448;
        case 0x7c3464u: goto label_7c3464;
        case 0x7c3474u: goto label_7c3474;
        case 0x7c348cu: goto label_7c348c;
        default: break;
    }

    ctx->pc = 0x7c3410u;

    // 0x7c3410: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7c3410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7c3414: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x7c3414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3418: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7c3418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7c341c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7c341cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7c3420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c3420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3424: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7c3424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7c3428: 0x82020014  lb          $v0, 0x14($s0)
    ctx->pc = 0x7c3428u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x7c342c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7C342Cu;
    {
        const bool branch_taken_0x7c342c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C3430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C342Cu;
        // 0x7c3430: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c342c) {
            ctx->pc = 0x7C3450u;
            goto label_7c3450;
        }
    }
    ctx->pc = 0x7C3434u;
    // 0x7c3434: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c3434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c3438: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x7c3438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c343c: 0x24a50b60  addiu       $a1, $a1, 0xB60
    ctx->pc = 0x7c343cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2912));
    // 0x7c3440: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x7C3440u;
    SET_GPR_U32(ctx, 31, 0x7C3448u);
    ctx->pc = 0x7C3444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3440u;
    // 0x7c3444: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x7C3440u, 0x7C3448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3448u;
label_7c3448:
    // 0x7c3448: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7C3448u;
    {
        const bool branch_taken_0x7c3448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3448u;
        // 0x7c344c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c3448) {
            ctx->pc = 0x7C3468u;
            goto label_7c3468;
        }
    }
    ctx->pc = 0x7C3450u;
label_7c3450:
    // 0x7c3450: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c3450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c3454: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7c3454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3458: 0x24a50b58  addiu       $a1, $a1, 0xB58
    ctx->pc = 0x7c3458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2904));
    // 0x7c345c: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x7C345Cu;
    SET_GPR_U32(ctx, 31, 0x7C3464u);
    ctx->pc = 0x7C3460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C345Cu;
    // 0x7c3460: 0x26060014  addiu       $a2, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x7C345Cu, 0x7C3464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3464u;
label_7c3464:
    // 0x7c3464: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x7c3464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_7c3468:
    // 0x7c3468: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7c3468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c346c: 0xc1f393e  jal         func_7CE4F8
    ctx->pc = 0x7C346Cu;
    SET_GPR_U32(ctx, 31, 0x7C3474u);
    ctx->pc = 0x7C3470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C346Cu;
    // 0x7c3470: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CE4F8u, 0x7C346Cu, 0x7C3474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3474u;
label_7c3474:
    // 0x7c3474: 0x52200006  beql        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C3474u;
    {
        const bool branch_taken_0x7c3474 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c3474) {
            ctx->pc = 0x7C3478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C3474u;
            // 0x7c3478: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3490u;
            goto label_7c3490;
        }
    }
    ctx->pc = 0x7C347Cu;
    // 0x7c347c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x7C347Cu;
    {
        const bool branch_taken_0x7c347c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c347c) {
            ctx->pc = 0x7C3480u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C347Cu;
            // 0x7c3480: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3490u;
            goto label_7c3490;
        }
    }
    ctx->pc = 0x7C3484u;
    // 0x7c3484: 0xc1f0e60  jal         func_7C3980
    ctx->pc = 0x7C3484u;
    SET_GPR_U32(ctx, 31, 0x7C348Cu);
    ctx->pc = 0x7C3488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3484u;
    // 0x7c3488: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3980u, 0x7C3484u, 0x7C348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C348Cu;
label_7c348c:
    // 0x7c348c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7c348cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_7c3490:
    // 0x7c3490: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7c3490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c3494: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7c3494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c3498: 0x3e00008  jr          $ra
    ctx->pc = 0x7C3498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C3498u;
        // 0x7c349c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C3498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C34A0u;
}
} // namespace gh_mcport
