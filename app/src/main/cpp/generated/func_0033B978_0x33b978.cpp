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

// Function: func_0033B978
// Address: 0x33b978 - 0x33ba10
void func_0033B978_0x33b978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033B978_0x33b978");
#endif

    ctx->pc = 0x33b978u;

    // 0x33b978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33b97c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x33b97cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b980: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x33b980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x33b984: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33b984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33b988: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x33B988u;
    {
        const bool branch_taken_0x33b988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B988u;
        // 0x33b98c: 0x2cc30008  sltiu       $v1, $a2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b988) {
            ctx->pc = 0x33B9A8u;
            goto label_33b9a8;
        }
    }
    ctx->pc = 0x33B990u;
    // 0x33b990: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33b990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33b994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b998: 0x24845f28  addiu       $a0, $a0, 0x5F28
    ctx->pc = 0x33b998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24360));
    // 0x33b99c: 0x80cede4  j           func_33B790
    ctx->pc = 0x33B99Cu;
    ctx->pc = 0x33B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B99Cu;
    // 0x33b9a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B790u, 0x33B99Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33B9A4u;
    // 0x33b9a4: 0x0  nop
    ctx->pc = 0x33b9a4u;
    // NOP
label_33b9a8:
    // 0x33b9a8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x33B9A8u;
    {
        const bool branch_taken_0x33b9a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33B9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B9A8u;
        // 0x33b9ac: 0x51840  sll         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b9a8) {
            ctx->pc = 0x33B9C8u;
            goto label_33b9c8;
        }
    }
    ctx->pc = 0x33B9B0u;
    // 0x33b9b0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33b9b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b9b8: 0x24845f48  addiu       $a0, $a0, 0x5F48
    ctx->pc = 0x33b9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24392));
    // 0x33b9bc: 0x80cede4  j           func_33B790
    ctx->pc = 0x33B9BCu;
    ctx->pc = 0x33B9C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B9BCu;
    // 0x33b9c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B790u, 0x33B9BCu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x33B9C4u;
    // 0x33b9c4: 0x0  nop
    ctx->pc = 0x33b9c4u;
    // NOP
label_33b9c8:
    // 0x33b9c8: 0x620c0  sll         $a0, $a2, 3
    ctx->pc = 0x33b9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x33b9cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x33b9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33b9d0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x33b9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x33b9d4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x33b9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x33b9d8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x33b9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33b9dc: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x33b9e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x33b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x33b9e4: 0x24428620  addiu       $v0, $v0, -0x79E0
    ctx->pc = 0x33b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936096));
    // 0x33b9e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33b9e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b9ec: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x33b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b9f0: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x33b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x33b9f4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x33b9f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b9f8: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x33b9f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x33b9fc: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x33b9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x33ba00: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x33ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x33ba04: 0x3e00008  jr          $ra
    ctx->pc = 0x33BA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BA04u;
        // 0x33ba08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BA0Cu;
    // 0x33ba0c: 0x0  nop
    ctx->pc = 0x33ba0cu;
    // NOP
    ctx->pc = 0x33ba10u;
}
