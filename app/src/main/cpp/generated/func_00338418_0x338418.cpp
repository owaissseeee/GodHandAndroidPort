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

// Function: func_00338418
// Address: 0x338418 - 0x338478
void func_00338418_0x338418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338418_0x338418");
#endif

    switch (ctx->pc) {
        case 0x338418u: goto label_338418;
        case 0x33841cu: goto label_33841c;
        case 0x338420u: goto label_338420;
        case 0x338424u: goto label_338424;
        case 0x338428u: goto label_338428;
        case 0x33842cu: goto label_33842c;
        case 0x338430u: goto label_338430;
        case 0x338434u: goto label_338434;
        case 0x338438u: goto label_338438;
        case 0x33843cu: goto label_33843c;
        case 0x338440u: goto label_338440;
        case 0x338444u: goto label_338444;
        case 0x338448u: goto label_338448;
        case 0x33844cu: goto label_33844c;
        case 0x338450u: goto label_338450;
        case 0x338454u: goto label_338454;
        case 0x338458u: goto label_338458;
        case 0x33845cu: goto label_33845c;
        case 0x338460u: goto label_338460;
        case 0x338464u: goto label_338464;
        case 0x338468u: goto label_338468;
        case 0x33846cu: goto label_33846c;
        case 0x338470u: goto label_338470;
        case 0x338474u: goto label_338474;
        default: break;
    }

    ctx->pc = 0x338418u;

label_338418:
    // 0x338418: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x338418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_33841c:
    // 0x33841c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33841cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_338420:
    // 0x338420: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x338420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1808)));
label_338424:
    // 0x338424: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x338424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338428:
    // 0x338428: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x338428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_33842c:
    // 0x33842c: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_338430:
    if (ctx->pc == 0x338430u) {
        ctx->pc = 0x338430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33842Cu;
        // 0x338430: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338434u;
        goto label_338434;
    }
    ctx->pc = 0x33842Cu;
    {
        const bool branch_taken_0x33842c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x338430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33842Cu;
        // 0x338430: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33842c) {
            ctx->pc = 0x338444u;
            goto label_338444;
        }
    }
    ctx->pc = 0x338434u;
label_338434:
    // 0x338434: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x338434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_338438:
    // 0x338438: 0x8c830708  lw          $v1, 0x708($a0)
    ctx->pc = 0x338438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1800)));
label_33843c:
    // 0x33843c: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
label_338440:
    if (ctx->pc == 0x338440u) {
        ctx->pc = 0x338440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33843Cu;
        // 0x338440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338444u;
        goto label_338444;
    }
    ctx->pc = 0x33843Cu;
    {
        const bool branch_taken_0x33843c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x338440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33843Cu;
        // 0x338440: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33843c) {
            ctx->pc = 0x338468u;
            goto label_338468;
        }
    }
    ctx->pc = 0x338444u;
label_338444:
    // 0x338444: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x338444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_338448:
    // 0x338448: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x338448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_33844c:
    // 0x33844c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x33844cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_338450:
    // 0x338450: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x338450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_338454:
    // 0x338454: 0x40f809  jalr        $v0
label_338458:
    if (ctx->pc == 0x338458u) {
        ctx->pc = 0x338458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338454u;
        // 0x338458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33845Cu;
        goto label_33845c;
    }
    ctx->pc = 0x338454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33845Cu);
        ctx->pc = 0x338458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338454u;
        // 0x338458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338454u, 0x33845Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33845Cu;
label_33845c:
    // 0x33845c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x33845cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_338460:
    // 0x338460: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x338460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_338464:
    // 0x338464: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x338464u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_338468:
    // 0x338468: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33846c:
    // 0x33846c: 0x3e00008  jr          $ra
label_338470:
    if (ctx->pc == 0x338470u) {
        ctx->pc = 0x338470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33846Cu;
        // 0x338470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338474u;
        goto label_338474;
    }
    ctx->pc = 0x33846Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33846Cu;
        // 0x338470: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33846Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338474u;
label_338474:
    // 0x338474: 0x0  nop
    ctx->pc = 0x338474u;
    // NOP
    ctx->pc = 0x338478u;
}
