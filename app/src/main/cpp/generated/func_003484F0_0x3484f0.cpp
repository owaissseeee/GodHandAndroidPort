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

// Function: func_003484F0
// Address: 0x3484f0 - 0x348550
void func_003484F0_0x3484f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003484F0_0x3484f0");
#endif

    switch (ctx->pc) {
        case 0x3484f0u: goto label_3484f0;
        case 0x3484f4u: goto label_3484f4;
        case 0x3484f8u: goto label_3484f8;
        case 0x3484fcu: goto label_3484fc;
        case 0x348500u: goto label_348500;
        case 0x348504u: goto label_348504;
        case 0x348508u: goto label_348508;
        case 0x34850cu: goto label_34850c;
        case 0x348510u: goto label_348510;
        case 0x348514u: goto label_348514;
        case 0x348518u: goto label_348518;
        case 0x34851cu: goto label_34851c;
        case 0x348520u: goto label_348520;
        case 0x348524u: goto label_348524;
        case 0x348528u: goto label_348528;
        case 0x34852cu: goto label_34852c;
        case 0x348530u: goto label_348530;
        case 0x348534u: goto label_348534;
        case 0x348538u: goto label_348538;
        case 0x34853cu: goto label_34853c;
        case 0x348540u: goto label_348540;
        case 0x348544u: goto label_348544;
        case 0x348548u: goto label_348548;
        case 0x34854cu: goto label_34854c;
        default: break;
    }

    ctx->pc = 0x3484f0u;

label_3484f0:
    // 0x3484f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3484f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3484f4:
    // 0x3484f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3484f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3484f8:
    // 0x3484f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3484f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3484fc:
    // 0x3484fc: 0xc0d225a  jal         func_348968
label_348500:
    if (ctx->pc == 0x348500u) {
        ctx->pc = 0x348500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3484FCu;
        // 0x348500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348504u;
        goto label_348504;
    }
    ctx->pc = 0x3484FCu;
    SET_GPR_U32(ctx, 31, 0x348504u);
    ctx->pc = 0x348500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3484FCu;
    // 0x348500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348968u, 0x3484FCu, 0x348504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348504u;
label_348504:
    // 0x348504: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x348504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348508:
    // 0x348508: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_34850c:
    if (ctx->pc == 0x34850Cu) {
        ctx->pc = 0x34850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348508u;
        // 0x34850c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348510u;
        goto label_348510;
    }
    ctx->pc = 0x348508u;
    {
        const bool branch_taken_0x348508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x34850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348508u;
        // 0x34850c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348508) {
            ctx->pc = 0x348518u;
            goto label_348518;
        }
    }
    ctx->pc = 0x348510u;
label_348510:
    // 0x348510: 0x1000000b  b           . + 4 + (0xB << 2)
label_348514:
    if (ctx->pc == 0x348514u) {
        ctx->pc = 0x348514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348510u;
        // 0x348514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348518u;
        goto label_348518;
    }
    ctx->pc = 0x348510u;
    {
        const bool branch_taken_0x348510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x348514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348510u;
        // 0x348514: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348510) {
            ctx->pc = 0x348540u;
            goto label_348540;
        }
    }
    ctx->pc = 0x348518u;
label_348518:
    // 0x348518: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x348518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_34851c:
    // 0x34851c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_348520:
    if (ctx->pc == 0x348520u) {
        ctx->pc = 0x348520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34851Cu;
        // 0x348520: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348524u;
        goto label_348524;
    }
    ctx->pc = 0x34851Cu;
    {
        const bool branch_taken_0x34851c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x348520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34851Cu;
        // 0x348520: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34851c) {
            ctx->pc = 0x34853Cu;
            goto label_34853c;
        }
    }
    ctx->pc = 0x348524u;
label_348524:
    // 0x348524: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x348524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_348528:
    // 0x348528: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_34852c:
    if (ctx->pc == 0x34852Cu) {
        ctx->pc = 0x34852Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348528u;
        // 0x34852c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348530u;
        goto label_348530;
    }
    ctx->pc = 0x348528u;
    {
        const bool branch_taken_0x348528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x348528) {
            ctx->pc = 0x34852Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348528u;
            // 0x34852c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348540u;
            goto label_348540;
        }
    }
    ctx->pc = 0x348530u;
label_348530:
    // 0x348530: 0x40f809  jalr        $v0
label_348534:
    if (ctx->pc == 0x348534u) {
        ctx->pc = 0x348538u;
        goto label_348538;
    }
    ctx->pc = 0x348530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x348538u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348530u, 0x348538u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x348538u;
label_348538:
    // 0x348538: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x348538u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34853c:
    // 0x34853c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x34853cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_348540:
    // 0x348540: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348540u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_348544:
    // 0x348544: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x348544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_348548:
    // 0x348548: 0x3e00008  jr          $ra
label_34854c:
    if (ctx->pc == 0x34854Cu) {
        ctx->pc = 0x34854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348548u;
        // 0x34854c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x348550u;
        goto label_fallthrough_0x348548;
    }
    ctx->pc = 0x348548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34854Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348548u;
        // 0x34854c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348548u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x348548:
    ctx->pc = 0x348550u;
}
