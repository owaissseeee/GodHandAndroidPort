#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: fptosi
// Address: 0x79c938 - 0x79c9c8
void fptosi_0x79c938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fptosi_0x79c938");
#endif

    switch (ctx->pc) {
        case 0x79c950u: goto label_79c950;
        case 0x79c968u: goto label_79c968;
        default: break;
    }

    ctx->pc = 0x79c938u;

    // 0x79c938: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79c938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79c93c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79c93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79c940: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79c940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79c944: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x79c944u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79c948: 0xc1e700e  jal         func_79C038
    ctx->pc = 0x79C948u;
    SET_GPR_U32(ctx, 31, 0x79C950u);
    ctx->pc = 0x79C94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C948u;
    // 0x79c94c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C038u, 0x79C948u, 0x79C950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C950u;
label_79c950:
    // 0x79c950: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x79c950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c954: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79c954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79c958: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C958u;
    {
        const bool branch_taken_0x79c958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C958u;
        // 0x79c95c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c958) {
            ctx->pc = 0x79C968u;
            goto label_79c968;
        }
    }
    ctx->pc = 0x79C960u;
    // 0x79c960: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C960u;
    {
        const bool branch_taken_0x79c960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C960u;
        // 0x79c964: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c960) {
            ctx->pc = 0x79C970u;
            goto label_79c970;
        }
    }
    ctx->pc = 0x79C968u;
label_79c968:
    // 0x79c968: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x79C968u;
    {
        const bool branch_taken_0x79c968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C968u;
        // 0x79c96c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c968) {
            ctx->pc = 0x79C9B8u;
            goto label_79c9b8;
        }
    }
    ctx->pc = 0x79C970u;
label_79c970:
    // 0x79c970: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C970u;
    {
        const bool branch_taken_0x79c970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C970u;
        // 0x79c974: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c970) {
            ctx->pc = 0x79C988u;
            goto label_79c988;
        }
    }
    ctx->pc = 0x79C978u;
    // 0x79c978: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x79C978u;
    {
        const bool branch_taken_0x79c978 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C978u;
        // 0x79c97c: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c978) {
            ctx->pc = 0x79C968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c968;
        }
    }
    ctx->pc = 0x79C980u;
    // 0x79c980: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79C980u;
    {
        const bool branch_taken_0x79c980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C980u;
        // 0x79c984: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c980) {
            ctx->pc = 0x79C9A0u;
            goto label_79c9a0;
        }
    }
    ctx->pc = 0x79C988u;
label_79c988:
    // 0x79c988: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x79c988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79c98c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x79c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x79c990: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79c990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79c994: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x79c994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x79c998: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79C998u;
    {
        const bool branch_taken_0x79c998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C998u;
        // 0x79c99c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c998) {
            ctx->pc = 0x79C9B8u;
            goto label_79c9b8;
        }
    }
    ctx->pc = 0x79C9A0u;
label_79c9a0:
    // 0x79c9a0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x79c9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x79c9a4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x79c9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x79c9a8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x79c9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79c9ac: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x79c9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x79c9b0: 0x22023  negu        $a0, $v0
    ctx->pc = 0x79c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x79c9b4: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x79c9b4u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_79c9b8:
    // 0x79c9b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79c9b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79c9bc: 0x3e00008  jr          $ra
    ctx->pc = 0x79C9BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C9BCu;
        // 0x79c9c0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C9BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C9C4u;
    // 0x79c9c4: 0x0  nop
    ctx->pc = 0x79c9c4u;
    // NOP
    ctx->pc = 0x79c9c8u;
}
} // namespace gh_r501
