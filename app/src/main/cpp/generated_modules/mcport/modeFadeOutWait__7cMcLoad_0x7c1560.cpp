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
// Function: modeFadeOutWait__7cMcLoad
// Address: 0x7c1560 - 0x7c15b8
void modeFadeOutWait__7cMcLoad_0x7c1560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("modeFadeOutWait__7cMcLoad_0x7c1560");
#endif

    switch (ctx->pc) {
        case 0x7c1594u: goto label_7c1594;
        case 0x7c159cu: goto label_7c159c;
        default: break;
    }

    ctx->pc = 0x7c1560u;

    // 0x7c1560: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7c1560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7c1564: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c1564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c1568: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7c1568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7c156c: 0x9042748c  lbu         $v0, 0x748C($v0)
    ctx->pc = 0x7c156cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x7c1570: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c1570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c1574: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C1574u;
    {
        const bool branch_taken_0x7c1574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C1578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C1574u;
        // 0x7c1578: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c1574) {
            ctx->pc = 0x7C158Cu;
            goto label_7c158c;
        }
    }
    ctx->pc = 0x7C157Cu;
    // 0x7c157c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x7c157cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x7c1580: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7c1580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7c1584: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x7C1584u;
    {
        const bool branch_taken_0x7c1584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c1584) {
            ctx->pc = 0x7C1588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C1584u;
            // 0x7c1588: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C15A8u;
            goto label_7c15a8;
        }
    }
    ctx->pc = 0x7C158Cu;
label_7c158c:
    // 0x7c158c: 0xc1f22c4  jal         func_7C8B10
    ctx->pc = 0x7C158Cu;
    SET_GPR_U32(ctx, 31, 0x7C1594u);
    ctx->pc = 0x7C1590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C158Cu;
    // 0x7c1590: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8B10u, 0x7C158Cu, 0x7C1594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C1594u;
label_7c1594:
    // 0x7c1594: 0xc1f045e  jal         func_7C1178
    ctx->pc = 0x7C1594u;
    SET_GPR_U32(ctx, 31, 0x7C159Cu);
    ctx->pc = 0x7C1598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C1594u;
    // 0x7c1598: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C1178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C1178u, 0x7C1594u, 0x7C159Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C159Cu;
label_7c159c:
    // 0x7c159c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x7c159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7c15a0: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x7c15a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x7c15a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7c15a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7c15a8:
    // 0x7c15a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7c15a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c15ac: 0x3e00008  jr          $ra
    ctx->pc = 0x7C15ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C15B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C15ACu;
        // 0x7c15b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C15ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C15B4u;
    // 0x7c15b4: 0x0  nop
    ctx->pc = 0x7c15b4u;
    // NOP
    ctx->pc = 0x7c15b8u;
}
} // namespace gh_mcport
