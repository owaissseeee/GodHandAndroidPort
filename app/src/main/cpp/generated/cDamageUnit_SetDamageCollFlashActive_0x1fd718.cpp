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

// Function: cDamageUnit_SetDamageCollFlashActive
// Address: 0x1fd718 - 0x1fd770
void cDamageUnit_SetDamageCollFlashActive_0x1fd718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDamageUnit_SetDamageCollFlashActive_0x1fd718");
#endif

    switch (ctx->pc) {
        case 0x1fd738u: goto label_1fd738;
        default: break;
    }

    ctx->pc = 0x1fd718u;

    // 0x1fd718: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x1fd718u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x1fd71c: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x1fd71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1fd720: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FD720u;
    {
        const bool branch_taken_0x1fd720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD720u;
        // 0x1fd724: 0x63403  sra         $a2, $a2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd720) {
            ctx->pc = 0x1FD768u;
            goto label_1fd768;
        }
    }
    ctx->pc = 0x1FD728u;
    // 0x1fd728: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1fd728u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x1fd72c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1fd72cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fd730: 0x34e7fffd  ori         $a3, $a3, 0xFFFD
    ctx->pc = 0x1fd730u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65533);
    // 0x1fd734: 0x0  nop
    ctx->pc = 0x1fd734u;
    // NOP
label_1fd738:
    // 0x1fd738: 0x14a80004  bne         $a1, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD738u;
    {
        const bool branch_taken_0x1fd738 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        ctx->pc = 0x1FD73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD738u;
        // 0x1fd73c: 0x8c830028  lw          $v1, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd738) {
            ctx->pc = 0x1FD74Cu;
            goto label_1fd74c;
        }
    }
    ctx->pc = 0x1FD740u;
    // 0x1fd740: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd744: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD744u;
    {
        const bool branch_taken_0x1fd744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD744u;
        // 0x1fd748: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd744) {
            ctx->pc = 0x1FD754u;
            goto label_1fd754;
        }
    }
    ctx->pc = 0x1FD74Cu;
label_1fd74c:
    // 0x1fd74c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1fd74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd750: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1fd750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_1fd754:
    // 0x1fd754: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1fd754u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1fd758: 0xa4860030  sh          $a2, 0x30($a0)
    ctx->pc = 0x1fd758u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 48), (uint16_t)GPR_U32(ctx, 6));
    // 0x1fd75c: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x1fd75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1fd760: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FD760u;
    {
        const bool branch_taken_0x1fd760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fd760) {
            ctx->pc = 0x1FD738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fd738;
        }
    }
    ctx->pc = 0x1FD768u;
label_1fd768:
    // 0x1fd768: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD770u;
}
