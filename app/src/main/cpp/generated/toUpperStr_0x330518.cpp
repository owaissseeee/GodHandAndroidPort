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

// Function: toUpperStr
// Address: 0x330518 - 0x330580
void toUpperStr_0x330518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("toUpperStr_0x330518");
#endif

    switch (ctx->pc) {
        case 0x33052cu: goto label_33052c;
        case 0x330540u: goto label_330540;
        default: break;
    }

    ctx->pc = 0x330518u;

    // 0x330518: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x330518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33051c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33051cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x330520: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x330520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x330524: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x330524u;
    SET_GPR_U32(ctx, 31, 0x33052Cu);
    ctx->pc = 0x330528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330524u;
    // 0x330528: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x330524u, 0x33052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33052Cu;
label_33052c:
    // 0x33052c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33052cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x330530: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x330530u;
    {
        const bool branch_taken_0x330530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330530u;
        // 0x330534: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330530) {
            ctx->pc = 0x330568u;
            goto label_330568;
        }
    }
    ctx->pc = 0x330538u;
    // 0x330538: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x330538u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33053c: 0x2062021  addu        $a0, $s0, $a2
    ctx->pc = 0x33053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_330540:
    // 0x330540: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x330540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x330544: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x330544u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x330548: 0x2443ffe0  addiu       $v1, $v0, -0x20
    ctx->pc = 0x330548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x33054c: 0x2442ff9f  addiu       $v0, $v0, -0x61
    ctx->pc = 0x33054cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967199));
    // 0x330550: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x330550u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x330554: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x330554u;
    {
        const bool branch_taken_0x330554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x330558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330554u;
        // 0x330558: 0xc7282b  sltu        $a1, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x330554) {
            ctx->pc = 0x330560u;
            goto label_330560;
        }
    }
    ctx->pc = 0x33055Cu;
    // 0x33055c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x33055cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_330560:
    // 0x330560: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x330560u;
    {
        const bool branch_taken_0x330560 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x330564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330560u;
        // 0x330564: 0x2062021  addu        $a0, $s0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330560) {
            ctx->pc = 0x330540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_330540;
        }
    }
    ctx->pc = 0x330568u;
label_330568:
    // 0x330568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33056c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33056cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x330570: 0x3e00008  jr          $ra
    ctx->pc = 0x330570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330570u;
        // 0x330574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330578u;
    // 0x330578: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x330578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x33057c: 0x0  nop
    ctx->pc = 0x33057cu;
    // NOP
    ctx->pc = 0x330580u;
}
