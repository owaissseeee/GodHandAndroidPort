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
// Function: func_007A83D8
// Address: 0x7a83d8 - 0x7a8480
void func_007A83D8_0x7a83d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007A83D8_0x7a83d8");
#endif

    switch (ctx->pc) {
        case 0x7a840cu: goto label_7a840c;
        case 0x7a8424u: goto label_7a8424;
        case 0x7a8458u: goto label_7a8458;
        default: break;
    }

    ctx->pc = 0x7a83d8u;

    // 0x7a83d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7a83d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7a83dc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7a83dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7a83e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7a83e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7a83e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7a83e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a83e8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7a83e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a83ec: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x7A83ECu;
    {
        const bool branch_taken_0x7a83ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A83F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A83ECu;
        // 0x7a83f0: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a83ec) {
            ctx->pc = 0x7A8468u;
            goto label_7a8468;
        }
    }
    ctx->pc = 0x7A83F4u;
    // 0x7a83f4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x7A83F4u;
    {
        const bool branch_taken_0x7a83f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A83F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A83F4u;
        // 0x7a83f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a83f4) {
            ctx->pc = 0x7A8468u;
            goto label_7a8468;
        }
    }
    ctx->pc = 0x7A83FCu;
    // 0x7a83fc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x7a83fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7a8400: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7a8400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8404: 0xc1ea060  jal         func_7A8180
    ctx->pc = 0x7A8404u;
    SET_GPR_U32(ctx, 31, 0x7A840Cu);
    ctx->pc = 0x7A8408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8404u;
    // 0x7a8408: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7A8404u, 0x7A840Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A840Cu;
label_7a840c:
    // 0x7a840c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x7A840Cu;
    {
        const bool branch_taken_0x7a840c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A840Cu;
        // 0x7a8410: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a840c) {
            ctx->pc = 0x7A8468u;
            goto label_7a8468;
        }
    }
    ctx->pc = 0x7A8414u;
    // 0x7a8414: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x7a8414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7a8418: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x7a8418u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a841c: 0xc1ea060  jal         func_7A8180
    ctx->pc = 0x7A841Cu;
    SET_GPR_U32(ctx, 31, 0x7A8424u);
    ctx->pc = 0x7A8420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A841Cu;
    // 0x7a8420: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A8180u, 0x7A841Cu, 0x7A8424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8424u;
label_7a8424:
    // 0x7a8424: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7A8424u;
    {
        const bool branch_taken_0x7a8424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8424u;
        // 0x7a8428: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8424) {
            ctx->pc = 0x7A8468u;
            goto label_7a8468;
        }
    }
    ctx->pc = 0x7A842Cu;
    // 0x7a842c: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x7a842cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x7a8430: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7a8430u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7a8434: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x7a8434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a8438: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x7a8438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7a843c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7a843cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7a8440: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x7a8440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7a8444: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7a8444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a8448: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7a8448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7a844c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7a844cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7a8450: 0xc0ae162  jal         func_2B8588
    ctx->pc = 0x7A8450u;
    SET_GPR_U32(ctx, 31, 0x7A8458u);
    ctx->pc = 0x7A8454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7A8450u;
    // 0x7a8454: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8588u, 0x7A8450u, 0x7A8458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7A8458u;
label_7a8458:
    // 0x7a8458: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x7a8458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7a845c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7a845cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7a8460: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7A8460u;
    {
        const bool branch_taken_0x7a8460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7A8464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8460u;
        // 0x7a8464: 0xae2330a4  sw          $v1, 0x30A4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12452), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7a8460) {
            ctx->pc = 0x7A846Cu;
            goto label_7a846c;
        }
    }
    ctx->pc = 0x7A8468u;
label_7a8468:
    // 0x7a8468: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7a8468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7a846c:
    // 0x7a846c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7a846cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7a8470: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7a8470u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7a8474: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7a8474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7a8478: 0x3e00008  jr          $ra
    ctx->pc = 0x7A8478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7A847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7A8478u;
        // 0x7a847c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7A8478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7A8480u;
}
} // namespace gh_event
