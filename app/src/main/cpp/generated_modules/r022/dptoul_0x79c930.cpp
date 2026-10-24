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
// Function: dptoul
// Address: 0x79c930 - 0x79c9d0
void dptoul_0x79c930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoul_0x79c930");
#endif

    switch (ctx->pc) {
        case 0x79c948u: goto label_79c948;
        case 0x79c960u: goto label_79c960;
        default: break;
    }

    ctx->pc = 0x79c930u;

    // 0x79c930: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79c930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79c934: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x79c934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x79c938: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79c938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c93c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79c93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79c940: 0xc1e6fb2  jal         func_79BEC8
    ctx->pc = 0x79C940u;
    SET_GPR_U32(ctx, 31, 0x79C948u);
    ctx->pc = 0x79C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C940u;
    // 0x79c944: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BEC8u, 0x79C940u, 0x79C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C948u;
label_79c948:
    // 0x79c948: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x79c948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c94c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79c94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79c950: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C950u;
    {
        const bool branch_taken_0x79c950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C950u;
        // 0x79c954: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c950) {
            ctx->pc = 0x79C960u;
            goto label_79c960;
        }
    }
    ctx->pc = 0x79C958u;
    // 0x79c958: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C958u;
    {
        const bool branch_taken_0x79c958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C958u;
        // 0x79c95c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c958) {
            ctx->pc = 0x79C968u;
            goto label_79c968;
        }
    }
    ctx->pc = 0x79C960u;
label_79c960:
    // 0x79c960: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x79C960u;
    {
        const bool branch_taken_0x79c960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C960u;
        // 0x79c964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c960) {
            ctx->pc = 0x79C9C4u;
            goto label_79c9c4;
        }
    }
    ctx->pc = 0x79C968u;
label_79c968:
    // 0x79c968: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x79C968u;
    {
        const bool branch_taken_0x79c968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C968u;
        // 0x79c96c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c968) {
            ctx->pc = 0x79C9C4u;
            goto label_79c9c4;
        }
    }
    ctx->pc = 0x79C970u;
    // 0x79c970: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x79c970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x79c974: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C974u;
    {
        const bool branch_taken_0x79c974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C974u;
        // 0x79c978: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c974) {
            ctx->pc = 0x79C98Cu;
            goto label_79c98c;
        }
    }
    ctx->pc = 0x79C97Cu;
    // 0x79c97c: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x79C97Cu;
    {
        const bool branch_taken_0x79c97c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C97Cu;
        // 0x79c980: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c97c) {
            ctx->pc = 0x79C960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c960;
        }
    }
    ctx->pc = 0x79C984u;
    // 0x79c984: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79C984u;
    {
        const bool branch_taken_0x79c984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c984) {
            ctx->pc = 0x79C988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C984u;
            // 0x79c988: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C998u;
            goto label_79c998;
        }
    }
    ctx->pc = 0x79C98Cu;
label_79c98c:
    // 0x79c98c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79c990: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x79C990u;
    {
        const bool branch_taken_0x79c990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C990u;
        // 0x79c994: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c990) {
            ctx->pc = 0x79C9C4u;
            goto label_79c9c4;
        }
    }
    ctx->pc = 0x79C998u;
label_79c998:
    // 0x79c998: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C998u;
    {
        const bool branch_taken_0x79c998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C998u;
        // 0x79c99c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c998) {
            ctx->pc = 0x79C9B0u;
            goto label_79c9b0;
        }
    }
    ctx->pc = 0x79C9A0u;
    // 0x79c9a0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x79c9a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c9a4: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x79c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x79c9a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79C9A8u;
    {
        const bool branch_taken_0x79c9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C9A8u;
        // 0x79c9ac: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c9a8) {
            ctx->pc = 0x79C9BCu;
            goto label_79c9bc;
        }
    }
    ctx->pc = 0x79C9B0u;
label_79c9b0:
    // 0x79c9b0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x79c9b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79c9b4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x79c9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x79c9b8: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x79c9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_79c9bc:
    // 0x79c9bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x79c9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x79c9c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x79c9c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_79c9c4:
    // 0x79c9c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79c9c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x79C9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C9C8u;
        // 0x79c9cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C9D0u;
}
} // namespace gh_r022
