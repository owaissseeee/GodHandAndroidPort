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

// Function: __7ostreami
// Address: 0x38a740 - 0x38a7e0
void ps2___7ostreami_0x38a740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___7ostreami_0x38a740");
#endif

    ctx->pc = 0x38a740u;

    // 0x38a740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a744: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x38a744u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a748: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38A748u;
    {
        const bool branch_taken_0x38a748 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A748u;
        // 0x38a74c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a748) {
            ctx->pc = 0x38A798u;
            goto label_38a798;
        }
    }
    ctx->pc = 0x38A750u;
    // 0x38a750: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x38a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x38a754: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38a754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38a758: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x38a758u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x38a75c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x38a75cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x38a760: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x38a760u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x38a764: 0x2484d340  addiu       $a0, $a0, -0x2CC0
    ctx->pc = 0x38a764u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955840));
    // 0x38a768: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x38a768u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x38a76c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x38a76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38a770: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x38a770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x38a774: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x38a774u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x38a778: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x38a778u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x38a77c: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x38a77cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x38a780: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x38a780u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x38a784: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x38a784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x38a788: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x38a788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x38a78c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x38a78cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x38a790: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x38a790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x38a794: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x38a794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_38a798:
    // 0x38a798: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x38a798u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x38a79c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38a79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x38a7a0: 0x2444d178  addiu       $a0, $v0, -0x2E88
    ctx->pc = 0x38a7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955384));
    // 0x38a7a4: 0x1500000b  bnez        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x38A7A4u;
    {
        const bool branch_taken_0x38a7a4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A7A4u;
        // 0x38a7a8: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a7a4) {
            ctx->pc = 0x38A7D4u;
            goto label_38a7d4;
        }
    }
    ctx->pc = 0x38A7ACu;
    // 0x38a7ac: 0xdc45d178  ld          $a1, -0x2E88($v0)
    ctx->pc = 0x38a7acu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294955384)));
    // 0x38a7b0: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x38a7b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38a7b4: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x38a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x38a7b8: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x38a7b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38a7bc: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x38a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x38a7c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38a7c4: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x38a7c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x38a7c8: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x38a7c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x38a7cc: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x38a7ccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x38a7d0: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x38a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_38a7d4:
    // 0x38a7d4: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x38a7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x38A7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A7D8u;
        // 0x38a7dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A7E0u;
}
