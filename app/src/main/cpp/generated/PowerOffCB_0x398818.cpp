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

// Function: PowerOffCB
// Address: 0x398818 - 0x398890
void PowerOffCB_0x398818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PowerOffCB_0x398818");
#endif

    switch (ctx->pc) {
        case 0x39883cu: goto label_39883c;
        case 0x398858u: goto label_398858;
        case 0x398868u: goto label_398868;
        default: break;
    }

    ctx->pc = 0x398818u;

    // 0x398818: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x398818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x39881c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x39881cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x398820: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x398820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x398824: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x398824u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x398828: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x398828u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x39882c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39882cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x398830: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x398830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x398834: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x398834u;
    SET_GPR_U32(ctx, 31, 0x39883Cu);
    ctx->pc = 0x398838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398834u;
    // 0x398838: 0xae328664  sw          $s2, -0x799C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294936164), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x398834u, 0x39883Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39883Cu;
label_39883c:
    // 0x39883c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39883cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x398840: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x398840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x398844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x398844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x398848: 0x24a587c0  addiu       $a1, $a1, -0x7840
    ctx->pc = 0x398848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936512));
    // 0x39884c: 0x34840012  ori         $a0, $a0, 0x12
    ctx->pc = 0x39884cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)18);
    // 0x398850: 0xc0ec922  jal         func_3B2488
    ctx->pc = 0x398850u;
    SET_GPR_U32(ctx, 31, 0x398858u);
    ctx->pc = 0x398854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x398850u;
    // 0x398854: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2488u, 0x398850u, 0x398858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398858u;
label_398858:
    // 0x398858: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x398858u;
    {
        const bool branch_taken_0x398858 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398858u;
        // 0x39885c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x398858) {
            ctx->pc = 0x39886Cu;
            goto label_39886c;
        }
    }
    ctx->pc = 0x398860u;
    // 0x398860: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x398860u;
    SET_GPR_U32(ctx, 31, 0x398868u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x398860u, 0x398868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x398868u;
label_398868:
    // 0x398868: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x398868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_39886c:
    // 0x39886c: 0xae208664  sw          $zero, -0x799C($s1)
    ctx->pc = 0x39886cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294936164), GPR_U32(ctx, 0));
    // 0x398870: 0xac528688  sw          $s2, -0x7978($v0)
    ctx->pc = 0x398870u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294936200), GPR_U32(ctx, 18));
    // 0x398874: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x398874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x398878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x398878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39887c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39887cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x398880: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x398880u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x398884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x398884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x398888: 0x3e00008  jr          $ra
    ctx->pc = 0x398888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39888Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x398888u;
        // 0x39888c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x398888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x398890u;
}
