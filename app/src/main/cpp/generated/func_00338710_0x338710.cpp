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

// Function: func_00338710
// Address: 0x338710 - 0x338788
void func_00338710_0x338710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338710_0x338710");
#endif

    switch (ctx->pc) {
        case 0x338770u: goto label_338770;
        default: break;
    }

    ctx->pc = 0x338710u;

    // 0x338710: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x338710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x338714: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x338714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x338718: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x338718u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x33871c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33871cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338724: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x338724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338728: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x338728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33872c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33872cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338730: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x338730u;
    {
        const bool branch_taken_0x338730 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x338734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338730u;
        // 0x338734: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338730) {
            ctx->pc = 0x338748u;
            goto label_338748;
        }
    }
    ctx->pc = 0x338738u;
    // 0x338738: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x338738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33873c: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x33873cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x338740: 0x5860000d  blezl       $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x338740u;
    {
        const bool branch_taken_0x338740 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x338740) {
            ctx->pc = 0x338744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338740u;
            // 0x338744: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338778u;
            goto label_338778;
        }
    }
    ctx->pc = 0x338748u;
label_338748:
    // 0x338748: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x338748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
    // 0x33874c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x33874Cu;
    {
        const bool branch_taken_0x33874c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x33874c) {
            ctx->pc = 0x338750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33874Cu;
            // 0x338750: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x338754u;
            goto label_338754;
        }
    }
    ctx->pc = 0x338754u;
label_338754:
    // 0x338754: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x338754u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x338758: 0x1810  mfhi        $v1
    ctx->pc = 0x338758u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x33875c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x33875Cu;
    {
        const bool branch_taken_0x33875c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33875c) {
            ctx->pc = 0x338760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33875Cu;
            // 0x338760: 0xae300030  sw          $s0, 0x30($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338774u;
            goto label_338774;
        }
    }
    ctx->pc = 0x338764u;
    // 0x338764: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x338764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x338768: 0xc0c9814  jal         func_326050
    ctx->pc = 0x338768u;
    SET_GPR_U32(ctx, 31, 0x338770u);
    ctx->pc = 0x33876Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338768u;
    // 0x33876c: 0x24845788  addiu       $a0, $a0, 0x5788 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326050u, 0x338768u, 0x338770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338770u;
label_338770:
    // 0x338770: 0xae300030  sw          $s0, 0x30($s1)
    ctx->pc = 0x338770u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
label_338774:
    // 0x338774: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_338778:
    // 0x338778: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x338778u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33877c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33877cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x338780: 0x3e00008  jr          $ra
    ctx->pc = 0x338780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338780u;
        // 0x338784: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338788u;
}
