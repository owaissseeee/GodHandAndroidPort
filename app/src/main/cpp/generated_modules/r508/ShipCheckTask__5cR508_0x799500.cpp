#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r508_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r508
{
// Function: ShipCheckTask__5cR508
// Address: 0x799500 - 0x799580
void ShipCheckTask__5cR508_0x799500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ShipCheckTask__5cR508_0x799500");
#endif

    switch (ctx->pc) {
        case 0x799520u: goto label_799520;
        case 0x79952cu: goto label_79952c;
        case 0x799540u: goto label_799540;
        case 0x799550u: goto label_799550;
        case 0x79955cu: goto label_79955c;
        case 0x799568u: goto label_799568;
        default: break;
    }

    ctx->pc = 0x799500u;

    // 0x799500: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799504: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799508: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x799508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x79950c: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x799510: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799514: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x799518: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799518u;
    {
        const bool branch_taken_0x799518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79951Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799518u;
        // 0x79951c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799518) {
            ctx->pc = 0x79952Cu;
            goto label_79952c;
        }
    }
    ctx->pc = 0x799520u;
label_799520:
    // 0x799520: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799524: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799524u;
    SET_GPR_U32(ctx, 31, 0x79952Cu);
    ctx->pc = 0x799528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799524u;
    // 0x799528: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799524u, 0x79952Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79952Cu;
label_79952c:
    // 0x79952c: 0x2630ea60  addiu       $s0, $s1, -0x15A0
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x799530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799534: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799538: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799538u;
    SET_GPR_U32(ctx, 31, 0x799540u);
    ctx->pc = 0x79953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799538u;
    // 0x79953c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799538u, 0x799540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799540u;
label_799540:
    // 0x799540: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799540u;
    {
        const bool branch_taken_0x799540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799540u;
        // 0x799544: 0x8e422f84  lw          $v0, 0x2F84($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799540) {
            ctx->pc = 0x799520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799520;
        }
    }
    ctx->pc = 0x799548u;
    // 0x799548: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x799548u;
    SET_GPR_U32(ctx, 31, 0x799550u);
    ctx->pc = 0x79954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799548u;
    // 0x79954c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x799548u, 0x799550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799550u;
label_799550:
    // 0x799550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799554: 0xc0b0a2c  jal         func_2C28B0
    ctx->pc = 0x799554u;
    SET_GPR_U32(ctx, 31, 0x79955Cu);
    ctx->pc = 0x799558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799554u;
    // 0x799558: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28B0u, 0x799554u, 0x79955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79955Cu;
label_79955c:
    // 0x79955c: 0x8e422f84  lw          $v0, 0x2F84($s2)
    ctx->pc = 0x79955cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    // 0x799560: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799560u;
    SET_GPR_U32(ctx, 31, 0x799568u);
    ctx->pc = 0x799564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799560u;
    // 0x799564: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799560u, 0x799568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799568u;
label_799568:
    // 0x799568: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79956c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79956cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799570: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x799570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799574: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799578: 0x3e00008  jr          $ra
    ctx->pc = 0x799578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799578u;
        // 0x79957c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799580u;
}
} // namespace gh_r508
