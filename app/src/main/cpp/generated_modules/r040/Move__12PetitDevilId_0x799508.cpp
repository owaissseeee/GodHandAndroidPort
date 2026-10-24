#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: Move__12PetitDevilId
// Address: 0x799508 - 0x7995b8
void Move__12PetitDevilId_0x799508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move__12PetitDevilId_0x799508");
#endif

    switch (ctx->pc) {
        case 0x799530u: goto label_799530;
        case 0x79953cu: goto label_79953c;
        case 0x799554u: goto label_799554;
        case 0x799564u: goto label_799564;
        case 0x79956cu: goto label_79956c;
        case 0x799574u: goto label_799574;
        case 0x799578u: goto label_799578;
        case 0x799584u: goto label_799584;
        case 0x799598u: goto label_799598;
        default: break;
    }

    ctx->pc = 0x799508u;

    // 0x799508: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79950c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79950cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799510: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799514: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x799514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799518: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79951c: 0x26300060  addiu       $s0, $s1, 0x60
    ctx->pc = 0x79951cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x799520: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x799524: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x799528: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79952c: 0x0  nop
    ctx->pc = 0x79952cu;
    // NOP
label_799530:
    // 0x799530: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799534: 0xc0b5778  jal         func_2D5DE0
    ctx->pc = 0x799534u;
    SET_GPR_U32(ctx, 31, 0x79953Cu);
    ctx->pc = 0x799538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799534u;
    // 0x799538: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DE0u, 0x799534u, 0x79953Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79953Cu;
label_79953c:
    // 0x79953c: 0x0  nop
    ctx->pc = 0x79953cu;
    // NOP
    // 0x799540: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799540u;
    {
        const bool branch_taken_0x799540 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x799544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799540u;
        // 0x799544: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799540) {
            ctx->pc = 0x799530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799530;
        }
    }
    ctx->pc = 0x799548u;
    // 0x799548: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x79954c: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x79954Cu;
    SET_GPR_U32(ctx, 31, 0x799554u);
    ctx->pc = 0x799550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79954Cu;
    // 0x799550: 0x26300700  addiu       $s0, $s1, 0x700 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x79954Cu, 0x799554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799554u;
label_799554:
    // 0x799554: 0x263306b0  addiu       $s3, $s1, 0x6B0
    ctx->pc = 0x799554u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1712));
    // 0x799558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79955c: 0xc1e66da  jal         func_799B68
    ctx->pc = 0x79955Cu;
    SET_GPR_U32(ctx, 31, 0x799564u);
    ctx->pc = 0x799560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79955Cu;
    // 0x799560: 0x2412000f  addiu       $s2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799B68u, 0x79955Cu, 0x799564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799564u;
label_799564:
    // 0x799564: 0xc1e67ca  jal         func_799F28
    ctx->pc = 0x799564u;
    SET_GPR_U32(ctx, 31, 0x79956Cu);
    ctx->pc = 0x799568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799564u;
    // 0x799568: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799F28u, 0x799564u, 0x79956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79956Cu;
label_79956c:
    // 0x79956c: 0xc1e682c  jal         func_79A0B0
    ctx->pc = 0x79956Cu;
    SET_GPR_U32(ctx, 31, 0x799574u);
    ctx->pc = 0x799570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79956Cu;
    // 0x799570: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A0B0u, 0x79956Cu, 0x799574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799574u;
label_799574:
    // 0x799574: 0x0  nop
    ctx->pc = 0x799574u;
    // NOP
label_799578:
    // 0x799578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79957c: 0xc0b5778  jal         func_2D5DE0
    ctx->pc = 0x79957Cu;
    SET_GPR_U32(ctx, 31, 0x799584u);
    ctx->pc = 0x799580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79957Cu;
    // 0x799580: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5DE0u, 0x79957Cu, 0x799584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799584u;
label_799584:
    // 0x799584: 0x0  nop
    ctx->pc = 0x799584u;
    // NOP
    // 0x799588: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x799588u;
    {
        const bool branch_taken_0x799588 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x79958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799588u;
        // 0x79958c: 0x2610007c  addiu       $s0, $s0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799588) {
            ctx->pc = 0x799578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799578;
        }
    }
    ctx->pc = 0x799590u;
    // 0x799590: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x799590u;
    SET_GPR_U32(ctx, 31, 0x799598u);
    ctx->pc = 0x799594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799590u;
    // 0x799594: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x799590u, 0x799598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799598u;
label_799598:
    // 0x799598: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79959c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79959cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7995a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x7995a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7995a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x7995a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7995a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7995a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7995ac: 0x3e00008  jr          $ra
    ctx->pc = 0x7995ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ACu;
        // 0x7995b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995B4u;
    // 0x7995b4: 0x0  nop
    ctx->pc = 0x7995b4u;
    // NOP
    ctx->pc = 0x7995b8u;
}
} // namespace gh_r040
