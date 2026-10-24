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

// Function: __7istreami
// Address: 0x38a298 - 0x38a340
void ps2___7istreami_0x38a298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___7istreami_0x38a298");
#endif

    ctx->pc = 0x38a298u;

    // 0x38a298: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a29c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x38a29cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a2a0: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x38A2A0u;
    {
        const bool branch_taken_0x38a2a0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A2A0u;
        // 0x38a2a4: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a2a0) {
            ctx->pc = 0x38A2F0u;
            goto label_38a2f0;
        }
    }
    ctx->pc = 0x38A2A8u;
    // 0x38a2a8: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x38a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x38a2ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x38a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x38a2b0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x38a2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x38a2b4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x38a2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x38a2b8: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x38a2b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x38a2bc: 0x2484d340  addiu       $a0, $a0, -0x2CC0
    ctx->pc = 0x38a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955840));
    // 0x38a2c0: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x38a2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x38a2c4: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x38a2c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x38a2c8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x38a2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x38a2cc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x38a2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x38a2d0: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x38a2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x38a2d4: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x38a2d4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x38a2d8: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x38a2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x38a2dc: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x38a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x38a2e0: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x38a2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x38a2e4: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x38a2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x38a2e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x38a2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x38a2ec: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x38a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_38a2f0:
    // 0x38a2f0: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x38a2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x38a2f4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x38a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x38a2f8: 0x2444d168  addiu       $a0, $v0, -0x2E98
    ctx->pc = 0x38a2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955368));
    // 0x38a2fc: 0x1500000b  bnez        $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x38A2FCu;
    {
        const bool branch_taken_0x38a2fc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x38A300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A2FCu;
        // 0x38a300: 0xacc40028  sw          $a0, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a2fc) {
            ctx->pc = 0x38A32Cu;
            goto label_38a32c;
        }
    }
    ctx->pc = 0x38A304u;
    // 0x38a304: 0xdc45d168  ld          $a1, -0x2E98($v0)
    ctx->pc = 0x38a304u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294955368)));
    // 0x38a308: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x38a308u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38a30c: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x38a30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x38a310: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x38a310u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x38a314: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x38a314u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x38a318: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x38a318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x38a31c: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x38a31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x38a320: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x38a320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x38a324: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x38a324u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x38a328: 0xacdd0028  sw          $sp, 0x28($a2)
    ctx->pc = 0x38a328u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
label_38a32c:
    // 0x38a32c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x38a32cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a330: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x38a330u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x38a334: 0x3e00008  jr          $ra
    ctx->pc = 0x38A334u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A334u;
        // 0x38a338: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A334u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A33Cu;
    // 0x38a33c: 0x0  nop
    ctx->pc = 0x38a33cu;
    // NOP
    ctx->pc = 0x38a340u;
}
