#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: ExecGameEnd__15cR301CannonGame
// Address: 0x79c500 - 0x79c590
void ExecGameEnd__15cR301CannonGame_0x79c500(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecGameEnd__15cR301CannonGame_0x79c500");
#endif

    if (__builtin_expect(ctx->pc != 0x79c500u, 0)) {
        switch (ctx->pc) {
            case 0x79c544u: goto label_79c544;
            case 0x79c55cu: goto label_79c55c;
            case 0x79c564u: goto label_79c564;
            case 0x79c570u: goto label_79c570;
            default: break;
        }
    }



    // 0x79c500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79c504: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79c504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79c508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79c508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79c50c: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c510: 0x24040001  addiu       $a0, $zero, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c514: 0x8e030098  lw          $v1, 0x98($s0)
    ctx->pc = 0x79c514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x79c518: 0x10640007  beq         $v1, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79C518u;
    {
        const bool branch_taken_0x79c518 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x79C51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C518u;
        // 0x79c51c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c518) {
            ctx->pc = 0x79C538u;
            goto label_79c538;
        }
    }
    // 0x79c520: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x79C520u;
    {
        const bool branch_taken_0x79c520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c520) {
            ctx->pc = 0x79C524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C520u;
            // 0x79c524: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C580u;
            goto label_79c580;
        }
    }
    // 0x79c528: 0x50600014  beql        $v1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x79C528u;
    {
        const bool branch_taken_0x79c528 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c528) {
            ctx->pc = 0x79C52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C528u;
            // 0x79c52c: 0xae040098  sw          $a0, 0x98($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C57Cu;
            goto label_79c57c;
        }
    }
    // 0x79c530: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x79C530u;
    {
        const bool branch_taken_0x79c530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C530u;
        // 0x79c534: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c530) {
            ctx->pc = 0x79C580u;
            goto label_79c580;
        }
    }
label_79c538:
    // 0x79c538: 0x3c040057  lui         $a0, 0x57
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x79c53c: 0xc07e804  jal         func_1FA010
    SET_GPR_U32(ctx, 31, 0x79C544u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C53Cu;
    // 0x79c540: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->callDirectStatic(rdram, ctx, &cCoreSave_getGameLevel_0x1fa010, 0x1FA010u, 0x79C544u)) {
        return;
    }
label_79c544:
    // 0x79c544: 0x2442ffff  addiu       $v0, $v0, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x79c548: 0x2c420005  sltiu       $v0, $v0, 0x5
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x79c54c: 0x3c040060  lui         $a0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79c550: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c554: 0xc0b42ae  jal         func_2D0AB8
    SET_GPR_U32(ctx, 31, 0x79C55Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C554u;
    // 0x79c558: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->callDirectStatic(rdram, ctx, &cSnd_SetBgmState_0x2d0ab8, 0x2D0AB8u, 0x79C55Cu)) {
        return;
    }
label_79c55c:
    // 0x79c55c: 0xc0b6dac  jal         func_2DB6B0
    SET_GPR_U32(ctx, 31, 0x79C564u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->callDirectStatic(rdram, ctx, &Getplayer_0x2db6b0, 0x2DB6B0u, 0x79C564u)) {
        return;
    }
label_79c564:
    // 0x79c564: 0x40202d  daddu       $a0, $v0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c568: 0xc042f30  jal         func_10BCC0
    SET_GPR_U32(ctx, 31, 0x79C570u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C568u;
    // 0x79c56c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BCC0u;
    if (!runtime->callDirectStatic(rdram, ctx, &pl00_CannonGameMode_0x10bcc0, 0x10BCC0u, 0x79C570u)) {
        return;
    }
label_79c570:
    // 0x79c570: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x79c570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x79c574: 0x24420001  addiu       $v0, $v0, 0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79c578: 0xae020098  sw          $v0, 0x98($s0)
    ctx->pc = 0x79c578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 2));
label_79c57c:
    // 0x79c57c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79c57cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79c580:
    // 0x79c580: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79c580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79c584: 0x3e00008  jr          $ra
    ctx->pc = 0x79C584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C584u;
        // 0x79c588: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x79c58c: 0x0  nop
    // NOP
    ctx->pc = 0x79c590u;
}
} // namespace gh_r301
