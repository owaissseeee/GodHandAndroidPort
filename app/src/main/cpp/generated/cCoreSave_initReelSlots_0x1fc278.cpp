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

// Function: cCoreSave_initReelSlots
// Address: 0x1fc278 - 0x1fc320
void cCoreSave_initReelSlots_0x1fc278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_initReelSlots_0x1fc278");
#endif

    switch (ctx->pc) {
        case 0x1fc298u: goto label_1fc298;
        case 0x1fc2c0u: goto label_1fc2c0;
        case 0x1fc2d0u: goto label_1fc2d0;
        case 0x1fc2e0u: goto label_1fc2e0;
        case 0x1fc2f0u: goto label_1fc2f0;
        case 0x1fc300u: goto label_1fc300;
        case 0x1fc310u: goto label_1fc310;
        default: break;
    }

    ctx->pc = 0x1fc278u;

    // 0x1fc278: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fc278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fc27c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fc27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fc280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fc280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fc284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fc284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc288: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fc288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fc28c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1FC28Cu;
    {
        const bool branch_taken_0x1fc28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FC290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC28Cu;
        // 0x1fc290: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc28c) {
            ctx->pc = 0x1FC310u;
            goto label_1fc310;
        }
    }
    ctx->pc = 0x1FC294u;
    // 0x1fc294: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x1fc294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1fc298:
    // 0x1fc298: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fc298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fc29c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fc29cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fc2a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fc2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fc2a4: 0x2c83000a  sltiu       $v1, $a0, 0xA
    ctx->pc = 0x1fc2a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1fc2a8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FC2A8u;
    {
        const bool branch_taken_0x1fc2a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FC2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC2A8u;
        // 0x1fc2ac: 0xa0450098  sb          $a1, 0x98($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 152), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fc2a8) {
            ctx->pc = 0x1FC298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fc298;
        }
    }
    ctx->pc = 0x1FC2B0u;
    // 0x1fc2b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fc2b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2b8: 0xc07f05c  jal         func_1FC170
    ctx->pc = 0x1FC2B8u;
    SET_GPR_U32(ctx, 31, 0x1FC2C0u);
    ctx->pc = 0x1FC2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC2B8u;
    // 0x1fc2bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC170u, 0x1FC2B8u, 0x1FC2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC2C0u;
label_1fc2c0:
    // 0x1fc2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1fc2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fc2c8: 0xc07f05c  jal         func_1FC170
    ctx->pc = 0x1FC2C8u;
    SET_GPR_U32(ctx, 31, 0x1FC2D0u);
    ctx->pc = 0x1FC2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC2C8u;
    // 0x1fc2cc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC170u, 0x1FC2C8u, 0x1FC2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC2D0u;
label_1fc2d0:
    // 0x1fc2d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1fc2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fc2d8: 0xc07f05c  jal         func_1FC170
    ctx->pc = 0x1FC2D8u;
    SET_GPR_U32(ctx, 31, 0x1FC2E0u);
    ctx->pc = 0x1FC2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC2D8u;
    // 0x1fc2dc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC170u, 0x1FC2D8u, 0x1FC2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC2E0u;
label_1fc2e0:
    // 0x1fc2e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2e4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1fc2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1fc2e8: 0xc07f05c  jal         func_1FC170
    ctx->pc = 0x1FC2E8u;
    SET_GPR_U32(ctx, 31, 0x1FC2F0u);
    ctx->pc = 0x1FC2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC2E8u;
    // 0x1fc2ec: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC170u, 0x1FC2E8u, 0x1FC2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC2F0u;
label_1fc2f0:
    // 0x1fc2f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc2f4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1fc2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fc2f8: 0xc07f05c  jal         func_1FC170
    ctx->pc = 0x1FC2F8u;
    SET_GPR_U32(ctx, 31, 0x1FC300u);
    ctx->pc = 0x1FC2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC2F8u;
    // 0x1fc2fc: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC170u, 0x1FC2F8u, 0x1FC300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC300u;
label_1fc300:
    // 0x1fc300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fc300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fc304: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fc304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fc308: 0xc07f05c  jal         func_1FC170
    ctx->pc = 0x1FC308u;
    SET_GPR_U32(ctx, 31, 0x1FC310u);
    ctx->pc = 0x1FC30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FC308u;
    // 0x1fc30c: 0x24060017  addiu       $a2, $zero, 0x17 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC170u, 0x1FC308u, 0x1FC310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FC310u;
label_1fc310:
    // 0x1fc310: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fc310u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fc314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fc314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fc318: 0x3e00008  jr          $ra
    ctx->pc = 0x1FC318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FC31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FC318u;
        // 0x1fc31c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FC318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FC320u;
}
