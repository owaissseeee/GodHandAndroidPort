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

// Function: func_002987F8
// Address: 0x2987f8 - 0x2988a8
void func_002987F8_0x2987f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002987F8_0x2987f8");
#endif

    switch (ctx->pc) {
        case 0x298840u: goto label_298840;
        case 0x29884cu: goto label_29884c;
        case 0x298860u: goto label_298860;
        case 0x298870u: goto label_298870;
        case 0x29887cu: goto label_29887c;
        case 0x29888cu: goto label_29888c;
        case 0x298898u: goto label_298898;
        default: break;
    }

    ctx->pc = 0x2987f8u;

    // 0x2987f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2987f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2987fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2987fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x298800: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x298800u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298804: 0x0  nop
    ctx->pc = 0x298804u;
    // NOP
    // 0x298808: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x298808u;
    {
        const bool branch_taken_0x298808 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29880Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298808u;
        // 0x29880c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298808) {
            ctx->pc = 0x298898u;
            goto label_298898;
        }
    }
    ctx->pc = 0x298810u;
    // 0x298810: 0x2c820018  sltiu       $v0, $a0, 0x18
    ctx->pc = 0x298810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x298814: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x298814u;
    {
        const bool branch_taken_0x298814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298814u;
        // 0x298818: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298814) {
            ctx->pc = 0x298898u;
            goto label_298898;
        }
    }
    ctx->pc = 0x29881Cu;
    // 0x29881c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x29881cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x298820: 0x2442ab00  addiu       $v0, $v0, -0x5500
    ctx->pc = 0x298820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945536));
    // 0x298824: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x298824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x298828: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x298828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29882c: 0x800008  jr          $a0
    ctx->pc = 0x29882Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x298834u: goto label_298834;
            case 0x298854u: goto label_298854;
            case 0x298898u: goto label_298898;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29882Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x298834u;
label_298834:
    // 0x298834: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x298834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x298838: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x298838u;
    SET_GPR_U32(ctx, 31, 0x298840u);
    ctx->pc = 0x29883Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298838u;
    // 0x29883c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x298838u, 0x298840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298840u;
label_298840:
    // 0x298840: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x298840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x298844: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x298844u;
    SET_GPR_U32(ctx, 31, 0x29884Cu);
    ctx->pc = 0x298848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298844u;
    // 0x298848: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x298844u, 0x29884Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29884Cu;
label_29884c:
    // 0x29884c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x29884Cu;
    {
        const bool branch_taken_0x29884c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29884Cu;
        // 0x298850: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29884c) {
            ctx->pc = 0x29889Cu;
            goto label_29889c;
        }
    }
    ctx->pc = 0x298854u;
label_298854:
    // 0x298854: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x298854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x298858: 0xc07f1d0  jal         func_1FC740
    ctx->pc = 0x298858u;
    SET_GPR_U32(ctx, 31, 0x298860u);
    ctx->pc = 0x29885Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298858u;
    // 0x29885c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC740u, 0x298858u, 0x298860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298860u;
label_298860:
    // 0x298860: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x298860u;
    {
        const bool branch_taken_0x298860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298860u;
        // 0x298864: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298860) {
            ctx->pc = 0x298884u;
            goto label_298884;
        }
    }
    ctx->pc = 0x298868u;
    // 0x298868: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x298868u;
    SET_GPR_U32(ctx, 31, 0x298870u);
    ctx->pc = 0x29886Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298868u;
    // 0x29886c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x298868u, 0x298870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298870u;
label_298870:
    // 0x298870: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x298870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x298874: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x298874u;
    SET_GPR_U32(ctx, 31, 0x29887Cu);
    ctx->pc = 0x298878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298874u;
    // 0x298878: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x298874u, 0x29887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29887Cu;
label_29887c:
    // 0x29887c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29887Cu;
    {
        const bool branch_taken_0x29887c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29887Cu;
        // 0x298880: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29887c) {
            ctx->pc = 0x29889Cu;
            goto label_29889c;
        }
    }
    ctx->pc = 0x298884u;
label_298884:
    // 0x298884: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x298884u;
    SET_GPR_U32(ctx, 31, 0x29888Cu);
    ctx->pc = 0x298888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298884u;
    // 0x298888: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x298884u, 0x29888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29888Cu;
label_29888c:
    // 0x29888c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x29888cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x298890: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x298890u;
    SET_GPR_U32(ctx, 31, 0x298898u);
    ctx->pc = 0x298894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298890u;
    // 0x298894: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x298890u, 0x298898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298898u;
label_298898:
    // 0x298898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29889c:
    // 0x29889c: 0x3e00008  jr          $ra
    ctx->pc = 0x29889Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2988A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29889Cu;
        // 0x2988a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29889Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2988A4u;
    // 0x2988a4: 0x0  nop
    ctx->pc = 0x2988a4u;
    // NOP
    ctx->pc = 0x2988a8u;
}
