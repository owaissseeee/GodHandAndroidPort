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

// Function: ScrollLayer_hideAtEnd
// Address: 0x2983d0 - 0x298460
void ScrollLayer_hideAtEnd_0x2983d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScrollLayer_hideAtEnd_0x2983d0");
#endif

    switch (ctx->pc) {
        case 0x298410u: goto label_298410;
        case 0x29841cu: goto label_29841c;
        case 0x298448u: goto label_298448;
        case 0x298454u: goto label_298454;
        default: break;
    }

    ctx->pc = 0x2983d0u;

    // 0x2983d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2983d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2983d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2983D4u;
    {
        const bool branch_taken_0x2983d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2983D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983D4u;
        // 0x2983d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2983d4) {
            ctx->pc = 0x2983F0u;
            goto label_2983f0;
        }
    }
    ctx->pc = 0x2983DCu;
    // 0x2983dc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2983dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2983e0: 0x10820010  beq         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2983E0u;
    {
        const bool branch_taken_0x2983e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2983E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2983E0u;
        // 0x2983e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2983e0) {
            ctx->pc = 0x298424u;
            goto label_298424;
        }
    }
    ctx->pc = 0x2983E8u;
    // 0x2983e8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2983E8u;
    {
        const bool branch_taken_0x2983e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2983e8) {
            ctx->pc = 0x298458u;
            goto label_298458;
        }
    }
    ctx->pc = 0x2983F0u;
label_2983f0:
    // 0x2983f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2983f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2983f4: 0x0  nop
    ctx->pc = 0x2983f4u;
    // NOP
    // 0x2983f8: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x2983f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2983fc: 0x0  nop
    ctx->pc = 0x2983fcu;
    // NOP
    // 0x298400: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x298400u;
    {
        const bool branch_taken_0x298400 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x298404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298400u;
        // 0x298404: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298400) {
            ctx->pc = 0x298454u;
            goto label_298454;
        }
    }
    ctx->pc = 0x298408u;
    // 0x298408: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x298408u;
    SET_GPR_U32(ctx, 31, 0x298410u);
    ctx->pc = 0x29840Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298408u;
    // 0x29840c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x298408u, 0x298410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298410u;
label_298410:
    // 0x298410: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x298410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x298414: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x298414u;
    SET_GPR_U32(ctx, 31, 0x29841Cu);
    ctx->pc = 0x298418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298414u;
    // 0x298418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x298414u, 0x29841Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29841Cu;
label_29841c:
    // 0x29841c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x29841Cu;
    {
        const bool branch_taken_0x29841c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29841Cu;
        // 0x298420: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29841c) {
            ctx->pc = 0x298458u;
            goto label_298458;
        }
    }
    ctx->pc = 0x298424u;
label_298424:
    // 0x298424: 0x3c0142ca  lui         $at, 0x42CA
    ctx->pc = 0x298424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17098 << 16));
    // 0x298428: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x298428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29842c: 0x0  nop
    ctx->pc = 0x29842cu;
    // NOP
    // 0x298430: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x298430u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x298434: 0x0  nop
    ctx->pc = 0x298434u;
    // NOP
    // 0x298438: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x298438u;
    {
        const bool branch_taken_0x298438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298438u;
        // 0x29843c: 0x2404001e  addiu       $a0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298438) {
            ctx->pc = 0x298454u;
            goto label_298454;
        }
    }
    ctx->pc = 0x298440u;
    // 0x298440: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x298440u;
    SET_GPR_U32(ctx, 31, 0x298448u);
    ctx->pc = 0x298444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x298440u;
    // 0x298444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x298440u, 0x298448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298448u;
label_298448:
    // 0x298448: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x298448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29844c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x29844Cu;
    SET_GPR_U32(ctx, 31, 0x298454u);
    ctx->pc = 0x298450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29844Cu;
    // 0x298450: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x29844Cu, 0x298454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298454u;
label_298454:
    // 0x298454: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_298458:
    // 0x298458: 0x3e00008  jr          $ra
    ctx->pc = 0x298458u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29845Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298458u;
        // 0x29845c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298458u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298460u;
}
