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

// Function: func_003383B0
// Address: 0x3383b0 - 0x338418
void func_003383B0_0x3383b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003383B0_0x3383b0");
#endif

    switch (ctx->pc) {
        case 0x3383b0u: goto label_3383b0;
        case 0x3383b4u: goto label_3383b4;
        case 0x3383b8u: goto label_3383b8;
        case 0x3383bcu: goto label_3383bc;
        case 0x3383c0u: goto label_3383c0;
        case 0x3383c4u: goto label_3383c4;
        case 0x3383c8u: goto label_3383c8;
        case 0x3383ccu: goto label_3383cc;
        case 0x3383d0u: goto label_3383d0;
        case 0x3383d4u: goto label_3383d4;
        case 0x3383d8u: goto label_3383d8;
        case 0x3383dcu: goto label_3383dc;
        case 0x3383e0u: goto label_3383e0;
        case 0x3383e4u: goto label_3383e4;
        case 0x3383e8u: goto label_3383e8;
        case 0x3383ecu: goto label_3383ec;
        case 0x3383f0u: goto label_3383f0;
        case 0x3383f4u: goto label_3383f4;
        case 0x3383f8u: goto label_3383f8;
        case 0x3383fcu: goto label_3383fc;
        case 0x338400u: goto label_338400;
        case 0x338404u: goto label_338404;
        case 0x338408u: goto label_338408;
        case 0x33840cu: goto label_33840c;
        case 0x338410u: goto label_338410;
        case 0x338414u: goto label_338414;
        default: break;
    }

    ctx->pc = 0x3383b0u;

label_3383b0:
    // 0x3383b0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3383b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
label_3383b4:
    // 0x3383b4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3383b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3383b8:
    // 0x3383b8: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x3383b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1808)));
label_3383bc:
    // 0x3383bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3383bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3383c0:
    // 0x3383c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3383c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3383c4:
    // 0x3383c4: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_3383c8:
    if (ctx->pc == 0x3383C8u) {
        ctx->pc = 0x3383C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383C4u;
        // 0x3383c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3383CCu;
        goto label_3383cc;
    }
    ctx->pc = 0x3383C4u;
    {
        const bool branch_taken_0x3383c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x3383C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383C4u;
        // 0x3383c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3383c4) {
            ctx->pc = 0x3383DCu;
            goto label_3383dc;
        }
    }
    ctx->pc = 0x3383CCu;
label_3383cc:
    // 0x3383cc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x3383ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_3383d0:
    // 0x3383d0: 0x8c830708  lw          $v1, 0x708($a0)
    ctx->pc = 0x3383d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1800)));
label_3383d4:
    // 0x3383d4: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_3383d8:
    if (ctx->pc == 0x3383D8u) {
        ctx->pc = 0x3383D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383D4u;
        // 0x3383d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3383DCu;
        goto label_3383dc;
    }
    ctx->pc = 0x3383D4u;
    {
        const bool branch_taken_0x3383d4 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3383D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383D4u;
        // 0x3383d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3383d4) {
            ctx->pc = 0x338408u;
            goto label_338408;
        }
    }
    ctx->pc = 0x3383DCu;
label_3383dc:
    // 0x3383dc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x3383dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3383e0:
    // 0x3383e0: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x3383e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3383e4:
    // 0x3383e4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3383e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3383e8:
    // 0x3383e8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x3383e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_3383ec:
    // 0x3383ec: 0x40f809  jalr        $v0
label_3383f0:
    if (ctx->pc == 0x3383F0u) {
        ctx->pc = 0x3383F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383ECu;
        // 0x3383f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3383F4u;
        goto label_3383f4;
    }
    ctx->pc = 0x3383ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3383F4u);
        ctx->pc = 0x3383F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383ECu;
        // 0x3383f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3383ECu, 0x3383F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3383F4u;
label_3383f4:
    // 0x3383f4: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x3383f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_3383f8:
    // 0x3383f8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3383f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3383fc:
    // 0x3383fc: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x3383fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_338400:
    // 0x338400: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x338400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_338404:
    // 0x338404: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x338404u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_338408:
    // 0x338408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x338408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33840c:
    // 0x33840c: 0x3e00008  jr          $ra
label_338410:
    if (ctx->pc == 0x338410u) {
        ctx->pc = 0x338410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33840Cu;
        // 0x338410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x338414u;
        goto label_338414;
    }
    ctx->pc = 0x33840Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33840Cu;
        // 0x338410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33840Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338414u;
label_338414:
    // 0x338414: 0x0  nop
    ctx->pc = 0x338414u;
    // NOP
    ctx->pc = 0x338418u;
}
