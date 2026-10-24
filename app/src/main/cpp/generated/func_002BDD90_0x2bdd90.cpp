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

// Function: func_002BDD90
// Address: 0x2bdd90 - 0x2bdde0
void func_002BDD90_0x2bdd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BDD90_0x2bdd90");
#endif

    ctx->pc = 0x2bdd90u;

    // 0x2bdd90: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x2bdd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bdd94: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x2bdd94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bdd98: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BDD98u;
    {
        const bool branch_taken_0x2bdd98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDD98u;
        // 0x2bdd9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bdd98) {
            ctx->pc = 0x2BDDB4u;
            goto label_2bddb4;
        }
    }
    ctx->pc = 0x2BDDA0u;
    // 0x2bdda0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2bdda0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2bdda4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2bdda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2bdda8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bdda8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bddac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bddacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bddb0: 0x94460002  lhu         $a2, 0x2($v0)
    ctx->pc = 0x2bddb0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2bddb4:
    // 0x2bddb4: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x2bddb4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x2bddb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2BDDB8u;
    {
        const bool branch_taken_0x2bddb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDB8u;
        // 0x2bddbc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bddb8) {
            ctx->pc = 0x2BDDD8u;
            goto label_2bddd8;
        }
    }
    ctx->pc = 0x2BDDC0u;
    // 0x2bddc0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2bddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2bddc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2bddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2bddc8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2bddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2bddcc: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x2bddccu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2bddd0: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x2bddd0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2bddd4: 0x83300b  movn        $a2, $a0, $v1
    ctx->pc = 0x2bddd4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
label_2bddd8:
    // 0x2bddd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDDD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDDD8u;
        // 0x2bdddc: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDDD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDDE0u;
}
