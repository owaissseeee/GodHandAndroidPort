#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: dptoli
// Address: 0x79c898 - 0x79c930
void dptoli_0x79c898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoli_0x79c898");
#endif

    switch (ctx->pc) {
        case 0x79c8b0u: goto label_79c8b0;
        case 0x79c8c8u: goto label_79c8c8;
        default: break;
    }

    ctx->pc = 0x79c898u;

    // 0x79c898: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79c898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79c89c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x79c89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x79c8a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79c8a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c8a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79c8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79c8a8: 0xc1e6fb2  jal         func_79BEC8
    ctx->pc = 0x79C8A8u;
    SET_GPR_U32(ctx, 31, 0x79C8B0u);
    ctx->pc = 0x79C8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C8A8u;
    // 0x79c8ac: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEC8u, 0x79C8A8u, 0x79C8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C8B0u;
label_79c8b0:
    // 0x79c8b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x79c8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c8b4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79c8b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79c8b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C8B8u;
    {
        const bool branch_taken_0x79c8b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C8BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C8B8u;
        // 0x79c8bc: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c8b8) {
            ctx->pc = 0x79C8C8u;
            goto label_79c8c8;
        }
    }
    ctx->pc = 0x79C8C0u;
    // 0x79c8c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C8C0u;
    {
        const bool branch_taken_0x79c8c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C8C0u;
        // 0x79c8c4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c8c0) {
            ctx->pc = 0x79C8D0u;
            goto label_79c8d0;
        }
    }
    ctx->pc = 0x79C8C8u;
label_79c8c8:
    // 0x79c8c8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x79C8C8u;
    {
        const bool branch_taken_0x79c8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C8C8u;
        // 0x79c8cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c8c8) {
            ctx->pc = 0x79C920u;
            goto label_79c920;
        }
    }
    ctx->pc = 0x79C8D0u;
label_79c8d0:
    // 0x79c8d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C8D0u;
    {
        const bool branch_taken_0x79c8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C8D0u;
        // 0x79c8d4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c8d0) {
            ctx->pc = 0x79C8E8u;
            goto label_79c8e8;
        }
    }
    ctx->pc = 0x79C8D8u;
    // 0x79c8d8: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79C8D8u;
    {
        const bool branch_taken_0x79c8d8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C8D8u;
        // 0x79c8dc: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c8d8) {
            ctx->pc = 0x79C8C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c8c8;
        }
    }
    ctx->pc = 0x79C8E0u;
    // 0x79c8e0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79C8E0u;
    {
        const bool branch_taken_0x79c8e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C8E0u;
        // 0x79c8e4: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c8e0) {
            ctx->pc = 0x79C900u;
            goto label_79c900;
        }
    }
    ctx->pc = 0x79C8E8u;
label_79c8e8:
    // 0x79c8e8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x79c8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79c8ec: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79c8f0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79c8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79c8f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x79c8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x79c8f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79C8F8u;
    {
        const bool branch_taken_0x79c8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C8F8u;
        // 0x79c8fc: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c8f8) {
            ctx->pc = 0x79C920u;
            goto label_79c920;
        }
    }
    ctx->pc = 0x79C900u;
label_79c900:
    // 0x79c900: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x79c900u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c904: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x79c904u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x79c908: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x79c908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x79c90c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x79c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79c910: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x79c910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x79c914: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79c914u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x79c918: 0x21823  negu        $v1, $v0
    ctx->pc = 0x79c918u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x79c91c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x79c91cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_79c920:
    // 0x79c920: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79c920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c924: 0x3e00008  jr          $ra
    ctx->pc = 0x79C924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C924u;
        // 0x79c928: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C92Cu;
    // 0x79c92c: 0x0  nop
    ctx->pc = 0x79c92cu;
    // NOP
    ctx->pc = 0x79c930u;
}
} // namespace gh_r022
