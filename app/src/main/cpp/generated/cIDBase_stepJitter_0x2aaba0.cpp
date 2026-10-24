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

// Function: cIDBase_stepJitter
// Address: 0x2aaba0 - 0x2aac28
void cIDBase_stepJitter_0x2aaba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_stepJitter_0x2aaba0");
#endif

    switch (ctx->pc) {
        case 0x2aabc0u: goto label_2aabc0;
        default: break;
    }

    ctx->pc = 0x2aaba0u;

    // 0x2aaba0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x2aaba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aaba4: 0x9122001c  lbu         $v0, 0x1C($t1)
    ctx->pc = 0x2aaba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x2aaba8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2AABA8u;
    {
        const bool branch_taken_0x2aaba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaba8) {
            ctx->pc = 0x2AAC20u;
            goto label_2aac20;
        }
    }
    ctx->pc = 0x2AABB0u;
    // 0x2aabb0: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x2aabb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2aabb4: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2AABB4u;
    {
        const bool branch_taken_0x2aabb4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2AABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AABB4u;
        // 0x2aabb8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabb4) {
            ctx->pc = 0x2AAC20u;
            goto label_2aac20;
        }
    }
    ctx->pc = 0x2AABBCu;
    // 0x2aabbc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2aabbcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aabc0:
    // 0x2aabc0: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x2aabc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2aabc4: 0x4a3821  addu        $a3, $v0, $t2
    ctx->pc = 0x2aabc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2aabc8: 0x50e00011  beql        $a3, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2AABC8u;
    {
        const bool branch_taken_0x2aabc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aabc8) {
            ctx->pc = 0x2AABCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AABC8u;
            // 0x2aabcc: 0x8d22000c  lw          $v0, 0xC($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AAC10u;
            goto label_2aac10;
        }
    }
    ctx->pc = 0x2AABD0u;
    // 0x2aabd0: 0x94e300a0  lhu         $v1, 0xA0($a3)
    ctx->pc = 0x2aabd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 160)));
    // 0x2aabd4: 0x94e400a2  lhu         $a0, 0xA2($a3)
    ctx->pc = 0x2aabd4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 162)));
    // 0x2aabd8: 0x94e600a6  lhu         $a2, 0xA6($a3)
    ctx->pc = 0x2aabd8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 166)));
    // 0x2aabdc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2aabdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2aabe0: 0x94e500a8  lhu         $a1, 0xA8($a3)
    ctx->pc = 0x2aabe0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 168)));
    // 0x2aabe4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2aabe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2aabe8: 0x94e200a4  lhu         $v0, 0xA4($a3)
    ctx->pc = 0x2aabe8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 164)));
    // 0x2aabec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2aabecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2aabf0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2aabf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2aabf4: 0xa4e300a0  sh          $v1, 0xA0($a3)
    ctx->pc = 0x2aabf4u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 160), (uint16_t)GPR_U32(ctx, 3));
    // 0x2aabf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2aabf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2aabfc: 0xa4e400a2  sh          $a0, 0xA2($a3)
    ctx->pc = 0x2aabfcu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 162), (uint16_t)GPR_U32(ctx, 4));
    // 0x2aac00: 0xa4e200a4  sh          $v0, 0xA4($a3)
    ctx->pc = 0x2aac00u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 164), (uint16_t)GPR_U32(ctx, 2));
    // 0x2aac04: 0xa4e600a6  sh          $a2, 0xA6($a3)
    ctx->pc = 0x2aac04u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 166), (uint16_t)GPR_U32(ctx, 6));
    // 0x2aac08: 0xa4e500a8  sh          $a1, 0xA8($a3)
    ctx->pc = 0x2aac08u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 168), (uint16_t)GPR_U32(ctx, 5));
    // 0x2aac0c: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x2aac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_2aac10:
    // 0x2aac10: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2aac10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2aac14: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x2aac14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aac18: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2AAC18u;
    {
        const bool branch_taken_0x2aac18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AAC18u;
        // 0x2aac1c: 0x254a00ac  addiu       $t2, $t2, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aac18) {
            ctx->pc = 0x2AABC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aabc0;
        }
    }
    ctx->pc = 0x2AAC20u;
label_2aac20:
    // 0x2aac20: 0x3e00008  jr          $ra
    ctx->pc = 0x2AAC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AAC20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AAC28u;
}
