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

// Function: func_003762D8
// Address: 0x3762d8 - 0x376370
void func_003762D8_0x3762d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003762D8_0x3762d8");
#endif

    ctx->pc = 0x3762d8u;

    // 0x3762d8: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x3762d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x3762dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3762dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3762e0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3762E0u;
    {
        const bool branch_taken_0x3762e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3762e0) {
            ctx->pc = 0x3762E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3762E0u;
            // 0x3762e4: 0x94a2001a  lhu         $v0, 0x1A($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376300u;
            goto label_376300;
        }
    }
    ctx->pc = 0x3762E8u;
    // 0x3762e8: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x3762e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x3762ec: 0x94a30028  lhu         $v1, 0x28($a1)
    ctx->pc = 0x3762ecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x3762f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3762f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3762f4: 0xa4830020  sh          $v1, 0x20($a0)
    ctx->pc = 0x3762f4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 3));
    // 0x3762f8: 0xa4820012  sh          $v0, 0x12($a0)
    ctx->pc = 0x3762f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x3762fc: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x3762fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
label_376300:
    // 0x376300: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x376300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x376304: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x376304u;
    {
        const bool branch_taken_0x376304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376304) {
            ctx->pc = 0x376308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376304u;
            // 0x376308: 0x94a2001a  lhu         $v0, 0x1A($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376324u;
            goto label_376324;
        }
    }
    ctx->pc = 0x37630Cu;
    // 0x37630c: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x37630cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x376310: 0x94a3002a  lhu         $v1, 0x2A($a1)
    ctx->pc = 0x376310u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x376314: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x376314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x376318: 0xa4830022  sh          $v1, 0x22($a0)
    ctx->pc = 0x376318u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x37631c: 0xa4820012  sh          $v0, 0x12($a0)
    ctx->pc = 0x37631cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x376320: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x376320u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
label_376324:
    // 0x376324: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x376324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x376328: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x376328u;
    {
        const bool branch_taken_0x376328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376328) {
            ctx->pc = 0x37632Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x376328u;
            // 0x37632c: 0x94a2001a  lhu         $v0, 0x1A($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x376348u;
            goto label_376348;
        }
    }
    ctx->pc = 0x376330u;
    // 0x376330: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x376330u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x376334: 0x94a3002c  lhu         $v1, 0x2C($a1)
    ctx->pc = 0x376334u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x376338: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x376338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x37633c: 0xa4830028  sh          $v1, 0x28($a0)
    ctx->pc = 0x37633cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 3));
    // 0x376340: 0xa4820012  sh          $v0, 0x12($a0)
    ctx->pc = 0x376340u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x376344: 0x94a2001a  lhu         $v0, 0x1A($a1)
    ctx->pc = 0x376344u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 26)));
label_376348:
    // 0x376348: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x376348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37634c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37634Cu;
    {
        const bool branch_taken_0x37634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37634c) {
            ctx->pc = 0x376368u;
            goto label_376368;
        }
    }
    ctx->pc = 0x376354u;
    // 0x376354: 0x94820012  lhu         $v0, 0x12($a0)
    ctx->pc = 0x376354u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 18)));
    // 0x376358: 0x94a30034  lhu         $v1, 0x34($a1)
    ctx->pc = 0x376358u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x37635c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x37635cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x376360: 0xa4820012  sh          $v0, 0x12($a0)
    ctx->pc = 0x376360u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x376364: 0xa483002a  sh          $v1, 0x2A($a0)
    ctx->pc = 0x376364u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 3));
label_376368:
    // 0x376368: 0x3e00008  jr          $ra
    ctx->pc = 0x376368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376370u;
}
