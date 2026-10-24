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

// Function: cEmWrap_StartEscape
// Address: 0x296180 - 0x2961d0
void cEmWrap_StartEscape_0x296180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_StartEscape_0x296180");
#endif

    switch (ctx->pc) {
        case 0x296194u: goto label_296194;
        case 0x2961b0u: goto label_2961b0;
        case 0x2961c0u: goto label_2961c0;
        default: break;
    }

    ctx->pc = 0x296180u;

    // 0x296180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296184: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x296184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x296188: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29618c: 0xc0a565e  jal         func_295978
    ctx->pc = 0x29618Cu;
    SET_GPR_U32(ctx, 31, 0x296194u);
    ctx->pc = 0x296190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29618Cu;
    // 0x296190: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x29618Cu, 0x296194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296194u;
label_296194:
    // 0x296194: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x296194u;
    {
        const bool branch_taken_0x296194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296194) {
            ctx->pc = 0x296198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296194u;
            // 0x296198: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2961C4u;
            goto label_2961c4;
        }
    }
    ctx->pc = 0x29619Cu;
    // 0x29619c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29619cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2961a0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x2961a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x2961a4: 0x2484a878  addiu       $a0, $a0, -0x5788
    ctx->pc = 0x2961a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944888));
    // 0x2961a8: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x2961A8u;
    SET_GPR_U32(ctx, 31, 0x2961B0u);
    ctx->pc = 0x2961ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2961A8u;
    // 0x2961ac: 0x8c4504ac  lw          $a1, 0x4AC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x2961A8u, 0x2961B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961B0u;
label_2961b0:
    // 0x2961b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2961B0u;
    {
        const bool branch_taken_0x2961b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2961b0) {
            ctx->pc = 0x2961B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2961B0u;
            // 0x2961b4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2961C4u;
            goto label_2961c4;
        }
    }
    ctx->pc = 0x2961B8u;
    // 0x2961b8: 0xc0a240a  jal         func_289028
    ctx->pc = 0x2961B8u;
    SET_GPR_U32(ctx, 31, 0x2961C0u);
    ctx->pc = 0x2961BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2961B8u;
    // 0x2961bc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x289028u, 0x2961B8u, 0x2961C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2961C0u;
label_2961c0:
    // 0x2961c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2961c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2961c4:
    // 0x2961c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2961c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2961c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2961C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2961CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2961C8u;
        // 0x2961cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2961C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2961D0u;
}
