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

// Function: func_00332838
// Address: 0x332838 - 0x332890
void func_00332838_0x332838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00332838_0x332838");
#endif

    switch (ctx->pc) {
        case 0x332858u: goto label_332858;
        case 0x33286cu: goto label_33286c;
        case 0x332878u: goto label_332878;
        default: break;
    }

    ctx->pc = 0x332838u;

    // 0x332838: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x332838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33283c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x332840: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x332840u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332844: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x332844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x332848: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x332848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x33284c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x33284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x332850: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x332850u;
    SET_GPR_U32(ctx, 31, 0x332858u);
    ctx->pc = 0x332854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332850u;
    // 0x332854: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x332850u, 0x332858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332858u;
label_332858:
    // 0x332858: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x332858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33285c: 0x8c4690dc  lw          $a2, -0x6F24($v0)
    ctx->pc = 0x33285cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3D90DCu));
    // 0x332860: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x332860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332864: 0xc0e6224  jal         func_398890
    ctx->pc = 0x332864u;
    SET_GPR_U32(ctx, 31, 0x33286Cu);
    ctx->pc = 0x332868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332864u;
    // 0x332868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398890u, 0x332864u, 0x33286Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33286Cu;
label_33286c:
    // 0x33286c: 0x34048001  ori         $a0, $zero, 0x8001
    ctx->pc = 0x33286cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x332870: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x332870u;
    SET_GPR_U32(ctx, 31, 0x332878u);
    ctx->pc = 0x332874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332870u;
    // 0x332874: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x332870u, 0x332878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332878u;
label_332878:
    // 0x332878: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x332878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33287c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33287cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332880: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x332880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332884: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x332884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x332888: 0x3e00008  jr          $ra
    ctx->pc = 0x332888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33288Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332888u;
        // 0x33288c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x332888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332890u;
}
