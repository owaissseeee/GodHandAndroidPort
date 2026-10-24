#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: R000Move__Fv
// Address: 0x79b258 - 0x79b330
void R000Move__Fv_0x79b258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R000Move__Fv_0x79b258");
#endif

    switch (ctx->pc) {
        case 0x79b2b8u: goto label_79b2b8;
        case 0x79b2c0u: goto label_79b2c0;
        case 0x79b2d0u: goto label_79b2d0;
        case 0x79b2f0u: goto label_79b2f0;
        case 0x79b304u: goto label_79b304;
        case 0x79b30cu: goto label_79b30c;
        default: break;
    }

    ctx->pc = 0x79b258u;

    // 0x79b258: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79b258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79b25c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x79b25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x79b260: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x79b260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x79b264: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x79b264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x79b268: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x79b268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x79b26c: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x79b26cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x79b270: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x79b270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79b274: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x79b274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79b278: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x79b278u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b27c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x79b27cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x79b280: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b284: 0x8c439b70  lw          $v1, -0x6490($v0)
    ctx->pc = 0x79b284u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x569B70u));
    // 0x79b288: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x79b288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x79b28c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79b28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x79b290: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x79B290u;
    {
        const bool branch_taken_0x79b290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B290u;
        // 0x79b294: 0x3c13007a  lui         $s3, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b290) {
            ctx->pc = 0x79B2DCu;
            goto label_79b2dc;
        }
    }
    ctx->pc = 0x79B298u;
    // 0x79b298: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x79b298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x79b29c: 0x9c628240  lwu         $v0, -0x7DC0($v1)
    ctx->pc = 0x79b29cu;
    SET_GPR_ZE32(ctx, 2, FAST_READ32(0x568240u));
    // 0x79b2a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79b2a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79b2a4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79B2A4u;
    {
        const bool branch_taken_0x79b2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2A4u;
        // 0x79b2a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2a4) {
            ctx->pc = 0x79B2DCu;
            goto label_79b2dc;
        }
    }
    ctx->pc = 0x79B2ACu;
    // 0x79b2ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79B2ACu;
    {
        const bool branch_taken_0x79b2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2ACu;
        // 0x79b2b0: 0x26909b70  addiu       $s0, $s4, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2ac) {
            ctx->pc = 0x79B2C8u;
            goto label_79b2c8;
        }
    }
    ctx->pc = 0x79B2B4u;
    // 0x79b2b4: 0x0  nop
    ctx->pc = 0x79b2b4u;
    // NOP
label_79b2b8:
    // 0x79b2b8: 0xc07ead4  jal         func_1FAB50
    ctx->pc = 0x79B2B8u;
    SET_GPR_U32(ctx, 31, 0x79B2C0u);
    ctx->pc = 0x79B2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2B8u;
    // 0x79b2bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAB50u, 0x79B2B8u, 0x79B2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2C0u;
label_79b2c0:
    // 0x79b2c0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79b2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79b2c4: 0x26909b70  addiu       $s0, $s4, -0x6490
    ctx->pc = 0x79b2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941552));
label_79b2c8:
    // 0x79b2c8: 0xc07ebb8  jal         func_1FAEE0
    ctx->pc = 0x79B2C8u;
    SET_GPR_U32(ctx, 31, 0x79B2D0u);
    ctx->pc = 0x79B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2C8u;
    // 0x79b2cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEE0u, 0x79B2C8u, 0x79B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2D0u;
label_79b2d0:
    // 0x79b2d0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x79b2d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x79b2d4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79B2D4u;
    {
        const bool branch_taken_0x79b2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2D4u;
        // 0x79b2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b2d4) {
            ctx->pc = 0x79B2B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b2b8;
        }
    }
    ctx->pc = 0x79B2DCu;
label_79b2dc:
    // 0x79b2dc: 0x8e62ca70  lw          $v0, -0x3590($s3)
    ctx->pc = 0x79b2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953584)));
    // 0x79b2e0: 0x2644ea60  addiu       $a0, $s2, -0x15A0
    ctx->pc = 0x79b2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961760));
    // 0x79b2e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b2e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b2e8: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79B2E8u;
    SET_GPR_U32(ctx, 31, 0x79B2F0u);
    ctx->pc = 0x79B2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2E8u;
    // 0x79b2ec: 0x944501b0  lhu         $a1, 0x1B0($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 432)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79B2E8u, 0x79B2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B2F0u;
label_79b2f0:
    // 0x79b2f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x79b2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x79b2f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B2F4u;
    {
        const bool branch_taken_0x79b2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b2f4) {
            ctx->pc = 0x79B304u;
            goto label_79b304;
        }
    }
    ctx->pc = 0x79B2FCu;
    // 0x79b2fc: 0xc07a7b6  jal         func_1E9ED8
    ctx->pc = 0x79B2FCu;
    SET_GPR_U32(ctx, 31, 0x79B304u);
    ctx->pc = 0x79B300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B2FCu;
    // 0x79b300: 0x8e64ca70  lw          $a0, -0x3590($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9ED8u, 0x79B2FCu, 0x79B304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B304u;
label_79b304:
    // 0x79b304: 0xc1e6ccc  jal         func_79B330
    ctx->pc = 0x79B304u;
    SET_GPR_U32(ctx, 31, 0x79B30Cu);
    ctx->pc = 0x79B330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B330u, 0x79B304u, 0x79B30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B30Cu;
label_79b30c:
    // 0x79b30c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x79b30cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b310: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x79b310u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b314: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x79b314u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b318: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79b318u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b31c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x79b31cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b320: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b324: 0x3e00008  jr          $ra
    ctx->pc = 0x79B324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B324u;
        // 0x79b328: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B32Cu;
    // 0x79b32c: 0x0  nop
    ctx->pc = 0x79b32cu;
    // NOP
    ctx->pc = 0x79b330u;
}
} // namespace gh_r000
