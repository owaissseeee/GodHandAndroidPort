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
// Function: SetCountDownAnim__16r301CannonGameIdb
// Address: 0x79d528 - 0x79d5a0
void SetCountDownAnim__16r301CannonGameIdb_0x79d528(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCountDownAnim__16r301CannonGameIdb_0x79d528");
#endif

    if (__builtin_expect(ctx->pc != 0x79d528u, 0)) {
        switch (ctx->pc) {
            case 0x79d558u: goto label_79d558;
            case 0x79d564u: goto label_79d564;
            case 0x79d570u: goto label_79d570;
            case 0x79d57cu: goto label_79d57c;
            default: break;
        }
    }



    // 0x79d528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79d52c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79d52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79d530: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79d530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79d534: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x79D534u;
    {
        const bool branch_taken_0x79d534 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D534u;
        // 0x79d538: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d534) {
            ctx->pc = 0x79D54Cu;
            goto label_79d54c;
        }
    }
    // 0x79d53c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79d53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79d540: 0xa6000348  sh          $zero, 0x348($s0)
    ctx->pc = 0x79d540u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 840), (uint16_t)GPR_U32(ctx, 0));
    // 0x79d544: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x79D544u;
    {
        const bool branch_taken_0x79d544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D544u;
        // 0x79d548: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d544) {
            ctx->pc = 0x79D588u;
            goto label_79d588;
        }
    }
label_79d54c:
    // 0x79d54c: 0x26040060  addiu       $a0, $s0, 0x60
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x79d550: 0xc0b5924  jal         func_2D6490
    SET_GPR_U32(ctx, 31, 0x79D558u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D550u;
    // 0x79d554: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetDisp_0x2d6490, 0x2D6490u, 0x79D558u)) {
        return;
    }
label_79d558:
    // 0x79d558: 0x260400dc  addiu       $a0, $s0, 0xDC
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 220));
    // 0x79d55c: 0xc0b5924  jal         func_2D6490
    SET_GPR_U32(ctx, 31, 0x79D564u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D55Cu;
    // 0x79d560: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetDisp_0x2d6490, 0x2D6490u, 0x79D564u)) {
        return;
    }
label_79d564:
    // 0x79d564: 0x26040158  addiu       $a0, $s0, 0x158
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 344));
    // 0x79d568: 0xc0b5924  jal         func_2D6490
    SET_GPR_U32(ctx, 31, 0x79D570u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D568u;
    // 0x79d56c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetDisp_0x2d6490, 0x2D6490u, 0x79D570u)) {
        return;
    }
label_79d570:
    // 0x79d570: 0x260401d4  addiu       $a0, $s0, 0x1D4
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 468));
    // 0x79d574: 0xc0b5924  jal         func_2D6490
    SET_GPR_U32(ctx, 31, 0x79D57Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79D574u;
    // 0x79d578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6490u;
    if (!runtime->callDirectStatic(rdram, ctx, &CustomIDWork_SetDisp_0x2d6490, 0x2D6490u, 0x79D57Cu)) {
        return;
    }
label_79d57c:
    // 0x79d57c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x79d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79d580: 0x2403fffe  addiu       $v1, $zero, -0x2
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x79d584: 0x431024  and         $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_79d588:
    // 0x79d588: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x79d588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x79d58c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79d58cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79d590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79d590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79d594: 0x3e00008  jr          $ra
    ctx->pc = 0x79D594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79D598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D594u;
        // 0x79d598: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x79d59c: 0x0  nop
    // NOP
    ctx->pc = 0x79d5a0u;
}
} // namespace gh_r301
