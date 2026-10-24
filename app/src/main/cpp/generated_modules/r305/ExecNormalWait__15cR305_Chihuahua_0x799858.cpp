#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r305_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r305
{
// Function: ExecNormalWait__15cR305_Chihuahua
// Address: 0x799858 - 0x799908
void ExecNormalWait__15cR305_Chihuahua_0x799858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecNormalWait__15cR305_Chihuahua_0x799858");
#endif

    switch (ctx->pc) {
        case 0x799890u: goto label_799890;
        case 0x799898u: goto label_799898;
        default: break;
    }

    ctx->pc = 0x799858u;

    // 0x799858: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79985c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79985cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799860: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x799860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x799864: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x799868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79986c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x79986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x799870: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x799870u;
    {
        const bool branch_taken_0x799870 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x799874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799870u;
        // 0x799874: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799870) {
            ctx->pc = 0x7998CCu;
            goto label_7998cc;
        }
    }
    ctx->pc = 0x799878u;
    // 0x799878: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x799878u;
    {
        const bool branch_taken_0x799878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x799878) {
            ctx->pc = 0x79987Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799878u;
            // 0x79987c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998F8u;
            goto label_7998f8;
        }
    }
    ctx->pc = 0x799880u;
    // 0x799880: 0x5460001d  bnel        $v1, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x799880u;
    {
        const bool branch_taken_0x799880 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x799880) {
            ctx->pc = 0x799884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799880u;
            // 0x799884: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998F8u;
            goto label_7998f8;
        }
    }
    ctx->pc = 0x799888u;
    // 0x799888: 0xc06c7c0  jal         func_1B1F00
    ctx->pc = 0x799888u;
    SET_GPR_U32(ctx, 31, 0x799890u);
    ctx->pc = 0x79988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799888u;
    // 0x79988c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1F00u, 0x799888u, 0x799890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799890u;
label_799890:
    // 0x799890: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x799890u;
    SET_GPR_U32(ctx, 31, 0x799898u);
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x799890u, 0x799898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799898u;
label_799898:
    // 0x799898: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x799898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x79989c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x79989cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7998a0: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x7998a0u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x7998a4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7998A4u;
    {
        const bool branch_taken_0x7998a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7998a4) {
            ctx->pc = 0x7998A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7998A4u;
            // 0x7998a8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7998ACu;
            goto label_7998ac;
        }
    }
    ctx->pc = 0x7998ACu;
label_7998ac:
    // 0x7998ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x7998acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7998b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7998b4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x7998b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x7998b8: 0x2010  mfhi        $a0
    ctx->pc = 0x7998b8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x7998bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x7998bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7998c0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x7998c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x7998c4: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7998C4u;
    {
        const bool branch_taken_0x7998c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998C4u;
        // 0x7998c8: 0xae04000c  sw          $a0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998c4) {
            ctx->pc = 0x7998F4u;
            goto label_7998f4;
        }
    }
    ctx->pc = 0x7998CCu;
label_7998cc:
    // 0x7998cc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x7998ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x7998d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7998D0u;
    {
        const bool branch_taken_0x7998d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D0u;
        // 0x7998d4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998d0) {
            ctx->pc = 0x7998F0u;
            goto label_7998f0;
        }
    }
    ctx->pc = 0x7998D8u;
    // 0x7998d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x7998dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7998e0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x7998e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x7998e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x7998e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x7998e8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7998E8u;
    {
        const bool branch_taken_0x7998e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E8u;
        // 0x7998ec: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998e8) {
            ctx->pc = 0x7998F4u;
            goto label_7998f4;
        }
    }
    ctx->pc = 0x7998F0u;
label_7998f0:
    // 0x7998f0: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x7998f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_7998f4:
    // 0x7998f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7998f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7998f8:
    // 0x7998f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7998f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7998fc: 0x3e00008  jr          $ra
    ctx->pc = 0x7998FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998FCu;
        // 0x799900: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7998FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799904u;
    // 0x799904: 0x0  nop
    ctx->pc = 0x799904u;
    // NOP
    ctx->pc = 0x799908u;
}
} // namespace gh_r305
