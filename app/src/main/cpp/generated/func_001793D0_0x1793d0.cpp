#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_001793D0
// Address: 0x1793d0 - 0x179470
void func_001793D0_0x1793d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001793D0_0x1793d0");
#endif

    switch (ctx->pc) {
        case 0x179424u: goto label_179424;
        default: break;
    }

    ctx->pc = 0x1793d0u;

    // 0x1793d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1793d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1793d4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1793d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1793d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1793d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1793dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1793dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1793e0: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x1793e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
    // 0x1793e4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1793E4u;
    {
        const bool branch_taken_0x1793e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1793E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793E4u;
        // 0x1793e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1793e4) {
            ctx->pc = 0x1793FCu;
            goto label_1793fc;
        }
    }
    ctx->pc = 0x1793ECu;
    // 0x1793ec: 0x50620014  beql        $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1793ECu;
    {
        const bool branch_taken_0x1793ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1793ec) {
            ctx->pc = 0x1793F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1793ECu;
            // 0x1793f0: 0x96020654  lhu         $v0, 0x654($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179440u;
            goto label_179440;
        }
    }
    ctx->pc = 0x1793F4u;
    // 0x1793f4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1793F4u;
    {
        const bool branch_taken_0x1793f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1793F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1793F4u;
        // 0x1793f8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1793f4) {
            ctx->pc = 0x179464u;
            goto label_179464;
        }
    }
    ctx->pc = 0x1793FCu;
label_1793fc:
    // 0x1793fc: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1793fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x179400: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x179400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x179404: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x179404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x179408: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x179408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17940c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17940cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179410: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x179410u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179414: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x179414u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179418: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x179418u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17941c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x17941Cu;
    SET_GPR_U32(ctx, 31, 0x179424u);
    ctx->pc = 0x179420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17941Cu;
    // 0x179420: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x17941Cu, 0x179424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x179424u;
label_179424:
    // 0x179424: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x179424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x179428: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x179428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17942c: 0xa6030654  sh          $v1, 0x654($s0)
    ctx->pc = 0x17942cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1620), (uint16_t)GPR_U32(ctx, 3));
    // 0x179430: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x179430u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x179434: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x179434u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x179438: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x179438u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x17943c: 0x96020654  lhu         $v0, 0x654($s0)
    ctx->pc = 0x17943cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1620)));
label_179440:
    // 0x179440: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x179440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x179444: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x179444u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x179448: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x179448u;
    {
        const bool branch_taken_0x179448 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x17944Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179448u;
        // 0x17944c: 0xa6020654  sh          $v0, 0x654($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1620), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179448) {
            ctx->pc = 0x179460u;
            goto label_179460;
        }
    }
    ctx->pc = 0x179450u;
    // 0x179450: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x179450u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x179454: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x179454u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x179458: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x179458u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x17945c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x17945cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_179460:
    // 0x179460: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x179460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_179464:
    // 0x179464: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179468: 0x3e00008  jr          $ra
    ctx->pc = 0x179468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179468u;
        // 0x17946c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179470u;
}
