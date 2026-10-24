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
// Function: modeExit__7cMcLoad
// Address: 0x7c15b8 - 0x7c1610
void modeExit__7cMcLoad_0x7c15b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("modeExit__7cMcLoad_0x7c15b8");
#endif

    switch (ctx->pc) {
        case 0x7c15e4u: goto label_7c15e4;
        default: break;
    }

    ctx->pc = 0x7c15b8u;

    // 0x7c15b8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c15b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c15bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7c15bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7c15c0: 0x9042748c  lbu         $v0, 0x748C($v0)
    ctx->pc = 0x7c15c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x7c15c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C15C4u;
    {
        const bool branch_taken_0x7c15c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C15C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C15C4u;
        // 0x7c15c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c15c4) {
            ctx->pc = 0x7C15DCu;
            goto label_7c15dc;
        }
    }
    ctx->pc = 0x7C15CCu;
    // 0x7c15cc: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x7c15ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x7c15d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7c15d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7c15d4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7C15D4u;
    {
        const bool branch_taken_0x7c15d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C15D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C15D4u;
        // 0x7c15d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c15d4) {
            ctx->pc = 0x7C1604u;
            goto label_7c1604;
        }
    }
    ctx->pc = 0x7C15DCu;
label_7c15dc:
    // 0x7c15dc: 0xc1f22c8  jal         func_7C8B20
    ctx->pc = 0x7C15DCu;
    SET_GPR_U32(ctx, 31, 0x7C15E4u);
    ctx->pc = 0x7C8B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8B20u, 0x7C15DCu, 0x7C15E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C15E4u;
label_7c15e4:
    // 0x7c15e4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x7c15e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x7c15e8: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x7c15e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x7c15ec: 0x24847a84  addiu       $a0, $a0, 0x7A84
    ctx->pc = 0x7c15ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31364));
    // 0x7c15f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x7c15f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x7c15f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x7c15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A88u));
    // 0x7c15f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x7c15f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x7c15fc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x7c15fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x7c1600: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c1600u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7c1604:
    // 0x7c1604: 0x3e00008  jr          $ra
    ctx->pc = 0x7C1604u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C1608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1604u;
        // 0x7c1608: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C1604u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C160Cu;
    // 0x7c160c: 0x0  nop
    ctx->pc = 0x7c160cu;
    // NOP
    ctx->pc = 0x7c1610u;
}
} // namespace gh_mcport
