#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: setStartFadeIn__9cEventEnv
// Address: 0x7ae3f8 - 0x7ae490
void setStartFadeIn__9cEventEnv_0x7ae3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setStartFadeIn__9cEventEnv_0x7ae3f8");
#endif

    switch (ctx->pc) {
        case 0x7ae408u: goto label_7ae408;
        case 0x7ae448u: goto label_7ae448;
        case 0x7ae484u: goto label_7ae484;
        default: break;
    }

    ctx->pc = 0x7ae3f8u;

    // 0x7ae3f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x7ae3f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x7ae3fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ae3fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ae400: 0xc1ebb0e  jal         func_7AEC38
    ctx->pc = 0x7AE400u;
    SET_GPR_U32(ctx, 31, 0x7AE408u);
    ctx->pc = 0x7AEC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEC38u, 0x7AE400u, 0x7AE408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE408u;
label_7ae408:
    // 0x7ae408: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x7AE408u;
    {
        const bool branch_taken_0x7ae408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AE40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE408u;
        // 0x7ae40c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae408) {
            ctx->pc = 0x7AE488u;
            goto label_7ae488;
        }
    }
    ctx->pc = 0x7AE410u;
    // 0x7ae410: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x7ae410u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x7ae414: 0x8c636b34  lw          $v1, 0x6B34($v1)
    ctx->pc = 0x7ae414u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x586B34u));
    // 0x7ae418: 0x310fa  dsrl        $v0, $v1, 3
    ctx->pc = 0x7ae418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 3);
    // 0x7ae41c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ae41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ae420: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7AE420u;
    {
        const bool branch_taken_0x7ae420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE420u;
        // 0x7ae424: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae420) {
            ctx->pc = 0x7AE450u;
            goto label_7ae450;
        }
    }
    ctx->pc = 0x7AE428u;
    // 0x7ae428: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ae428u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae42c: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x7ae42cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x7ae430: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x7ae430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7ae434: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7ae434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae438: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x7ae438u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x7ae43c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7ae43cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae440: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x7AE440u;
    SET_GPR_U32(ctx, 31, 0x7AE448u);
    ctx->pc = 0x7AE444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE440u;
    // 0x7ae444: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7AE440u, 0x7AE448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE448u;
label_7ae448:
    // 0x7ae448: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7AE448u;
    {
        const bool branch_taken_0x7ae448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AE44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE448u;
        // 0x7ae44c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae448) {
            ctx->pc = 0x7AE488u;
            goto label_7ae488;
        }
    }
    ctx->pc = 0x7AE450u;
label_7ae450:
    // 0x7ae450: 0x3107a  dsrl        $v0, $v1, 1
    ctx->pc = 0x7ae450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 1);
    // 0x7ae454: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7ae454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7ae458: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7AE458u;
    {
        const bool branch_taken_0x7ae458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AE45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE458u;
        // 0x7ae45c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ae458) {
            ctx->pc = 0x7AE488u;
            goto label_7ae488;
        }
    }
    ctx->pc = 0x7AE460u;
    // 0x7ae460: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x7ae460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x7ae464: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7ae464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae468: 0x24847470  addiu       $a0, $a0, 0x7470
    ctx->pc = 0x7ae468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x7ae46c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x7ae46cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x7ae470: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7ae470u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae474: 0x3c08ff00  lui         $t0, 0xFF00
    ctx->pc = 0x7ae474u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x7ae478: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7ae478u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ae47c: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x7AE47Cu;
    SET_GPR_U32(ctx, 31, 0x7AE484u);
    ctx->pc = 0x7AE480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AE47Cu;
    // 0x7ae480: 0x240a000f  addiu       $t2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307208u, 0x7AE47Cu, 0x7AE484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AE484u;
label_7ae484:
    // 0x7ae484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ae484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_7ae488:
    // 0x7ae488: 0x3e00008  jr          $ra
    ctx->pc = 0x7AE488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AE48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AE488u;
        // 0x7ae48c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AE488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AE490u;
}
} // namespace gh_event
