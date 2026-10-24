#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: func_00799588
// Address: 0x799588 - 0x799608
void func_00799588_0x799588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799588_0x799588");
#endif

    switch (ctx->pc) {
        case 0x7995a4u: goto label_7995a4;
        case 0x7995c0u: goto label_7995c0;
        case 0x7995ccu: goto label_7995cc;
        case 0x7995e8u: goto label_7995e8;
        case 0x7995f4u: goto label_7995f4;
        default: break;
    }

    ctx->pc = 0x799588u;

    // 0x799588: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79958c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79958cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799590: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799594: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799598: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79959c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79959Cu;
    SET_GPR_U32(ctx, 31, 0x7995A4u);
    ctx->pc = 0x7995A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79959Cu;
    // 0x7995a0: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79959Cu, 0x7995A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995A4u;
label_7995a4:
    // 0x7995a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995a8: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7995A8u;
    {
        const bool branch_taken_0x7995a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x7995a8) {
            ctx->pc = 0x7995ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7995A8u;
            // 0x7995ac: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7995D0u;
            goto label_7995d0;
        }
    }
    ctx->pc = 0x7995B0u;
    // 0x7995b0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7995b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995b8: 0xc0b0a0e  jal         func_2C2838
    ctx->pc = 0x7995B8u;
    SET_GPR_U32(ctx, 31, 0x7995C0u);
    ctx->pc = 0x7995BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B8u;
    // 0x7995bc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2838u, 0x7995B8u, 0x7995C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C0u;
label_7995c0:
    // 0x7995c0: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7995c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7995c4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7995C4u;
    SET_GPR_U32(ctx, 31, 0x7995CCu);
    ctx->pc = 0x7995C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C4u;
    // 0x7995c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7995C4u, 0x7995CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995CCu;
label_7995cc:
    // 0x7995cc: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_7995d0:
    // 0x7995d0: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x7995d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x7995d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7995d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7995d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7995dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995e0: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x7995E0u;
    SET_GPR_U32(ctx, 31, 0x7995E8u);
    ctx->pc = 0x7995E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E0u;
    // 0x7995e4: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x7995E0u, 0x7995E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E8u;
label_7995e8:
    // 0x7995e8: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7995ec: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7995ECu;
    SET_GPR_U32(ctx, 31, 0x7995F4u);
    ctx->pc = 0x7995F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995ECu;
    // 0x7995f0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7995ECu, 0x7995F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F4u;
label_7995f4:
    // 0x7995f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7995f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7995f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7995f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7995fc: 0x3e00008  jr          $ra
    ctx->pc = 0x7995FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995FCu;
        // 0x799600: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799604u;
    // 0x799604: 0x0  nop
    ctx->pc = 0x799604u;
    // NOP
    ctx->pc = 0x799608u;
}
} // namespace gh_r305
