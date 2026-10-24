#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: Fin__5cR021
// Address: 0x799920 - 0x799988
void Fin__5cR021_0x799920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Fin__5cR021_0x799920");
#endif

    switch (ctx->pc) {
        case 0x799944u: goto label_799944;
        default: break;
    }

    ctx->pc = 0x799920u;

    // 0x799920: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x799920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x799924: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799928: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x799928u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79992c: 0x4600012  bltz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x79992Cu;
    {
        const bool branch_taken_0x79992c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x799930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79992Cu;
        // 0x799930: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79992c) {
            ctx->pc = 0x799978u;
            goto label_799978;
        }
    }
    ctx->pc = 0x799934u;
    // 0x799934: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x799934u;
    {
        const bool branch_taken_0x799934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799934u;
        // 0x799938: 0x2862000c  slti        $v0, $v1, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799934) {
            ctx->pc = 0x79995Cu;
            goto label_79995c;
        }
    }
    ctx->pc = 0x79993Cu;
    // 0x79993c: 0xc0aa81e  jal         func_2AA078
    ctx->pc = 0x79993Cu;
    SET_GPR_U32(ctx, 31, 0x799944u);
    ctx->pc = 0x799940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79993Cu;
    // 0x799940: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AA078u, 0x79993Cu, 0x799944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799944u;
label_799944:
    // 0x799944: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x799944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x799948: 0x8c622384  lw          $v0, 0x2384($v1)
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2384u));
    // 0x79994c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x79994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799950: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x799950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x799954: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x799954u;
    {
        const bool branch_taken_0x799954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799954u;
        // 0x799958: 0xac800084  sw          $zero, 0x84($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799954) {
            ctx->pc = 0x799978u;
            goto label_799978;
        }
    }
    ctx->pc = 0x79995Cu;
label_79995c:
    // 0x79995c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79995Cu;
    {
        const bool branch_taken_0x79995c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79995Cu;
        // 0x799960: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79995c) {
            ctx->pc = 0x799978u;
            goto label_799978;
        }
    }
    ctx->pc = 0x799964u;
    // 0x799964: 0x3c03fffb  lui         $v1, 0xFFFB
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65531 << 16));
    // 0x799968: 0x8c447a84  lw          $a0, 0x7A84($v0)
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x79996c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79996cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x799970: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x799970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x799974: 0xac447a84  sw          $a0, 0x7A84($v0)
    ctx->pc = 0x799974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31364), GPR_U32(ctx, 4));
label_799978:
    // 0x799978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79997c: 0x3e00008  jr          $ra
    ctx->pc = 0x79997Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79997Cu;
        // 0x799980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79997Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799984u;
    // 0x799984: 0x0  nop
    ctx->pc = 0x799984u;
    // NOP
    ctx->pc = 0x799988u;
}
} // namespace gh_r021
