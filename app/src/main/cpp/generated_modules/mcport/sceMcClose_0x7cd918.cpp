#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: sceMcClose
// Address: 0x7cd918 - 0x7cd9d8
void sceMcClose_0x7cd918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcClose_0x7cd918");
#endif

    switch (ctx->pc) {
        case 0x7cd954u: goto label_7cd954;
        case 0x7cd998u: goto label_7cd998;
        case 0x7cd9a8u: goto label_7cd9a8;
        default: break;
    }

    ctx->pc = 0x7cd918u;

    // 0x7cd918: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7cd918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7cd91c: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cd91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cd920: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7cd920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7cd924: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7cd924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7cd928: 0x24711980  addiu       $s1, $v1, 0x1980
    ctx->pc = 0x7cd928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 6528));
    // 0x7cd92c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7cd92cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7cd930: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7cd930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7cd934: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x7cd934u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7cd938: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CD938u;
    {
        const bool branch_taken_0x7cd938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CD93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD938u;
        // 0x7cd93c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd938) {
            ctx->pc = 0x7CD948u;
            goto label_7cd948;
        }
    }
    ctx->pc = 0x7CD940u;
    // 0x7cd940: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x7CD940u;
    {
        const bool branch_taken_0x7cd940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD940u;
        // 0x7cd944: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd940) {
            ctx->pc = 0x7CD9BCu;
            goto label_7cd9bc;
        }
    }
    ctx->pc = 0x7CD948u;
label_7cd948:
    // 0x7cd948: 0x3c12007d  lui         $s2, 0x7D
    ctx->pc = 0x7cd948u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)125 << 16));
    // 0x7cd94c: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CD94Cu;
    SET_GPR_U32(ctx, 31, 0x7CD954u);
    ctx->pc = 0x7CD950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD94Cu;
    // 0x7cd950: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CD94Cu, 0x7CD954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD954u;
label_7cd954:
    // 0x7cd954: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CD954u;
    {
        const bool branch_taken_0x7cd954 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CD958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD954u;
        // 0x7cd958: 0x3c07007d  lui         $a3, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd954) {
            ctx->pc = 0x7CD964u;
            goto label_7cd964;
        }
    }
    ctx->pc = 0x7CD95Cu;
    // 0x7cd95c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x7CD95Cu;
    {
        const bool branch_taken_0x7cd95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD95Cu;
        // 0x7cd960: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd95c) {
            ctx->pc = 0x7CD9BCu;
            goto label_7cd9bc;
        }
    }
    ctx->pc = 0x7CD964u;
label_7cd964:
    // 0x7cd964: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7cd964u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7cd968: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7cd968u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7cd96c: 0xacf01a00  sw          $s0, 0x1A00($a3)
    ctx->pc = 0x7cd96cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6656), GPR_U32(ctx, 16));
    // 0x7cd970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7cd970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cd974: 0x24e71a00  addiu       $a3, $a3, 0x1A00
    ctx->pc = 0x7cd974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6656));
    // 0x7cd978: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7cd978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7cd97c: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7cd97cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7cd980: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7cd980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7cd984: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x7cd984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7cd988: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7cd988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cd98c: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x7cd98cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7cd990: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CD990u;
    SET_GPR_U32(ctx, 31, 0x7CD998u);
    ctx->pc = 0x7CD994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD990u;
    // 0x7cd994: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CD990u, 0x7CD998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD998u;
label_7cd998:
    // 0x7cd998: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CD998u;
    {
        const bool branch_taken_0x7cd998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD998u;
        // 0x7cd99c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd998) {
            ctx->pc = 0x7CD9B0u;
            goto label_7cd9b0;
        }
    }
    ctx->pc = 0x7CD9A0u;
    // 0x7cd9a0: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CD9A0u;
    SET_GPR_U32(ctx, 31, 0x7CD9A8u);
    ctx->pc = 0x7CD9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CD9A0u;
    // 0x7cd9a4: 0x8e4407b4  lw          $a0, 0x7B4($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CD9A0u, 0x7CD9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CD9A8u;
label_7cd9a8:
    // 0x7cd9a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CD9A8u;
    {
        const bool branch_taken_0x7cd9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CD9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD9A8u;
        // 0x7cd9ac: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cd9a8) {
            ctx->pc = 0x7CD9BCu;
            goto label_7cd9bc;
        }
    }
    ctx->pc = 0x7CD9B0u;
label_7cd9b0:
    // 0x7cd9b0: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7cd9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7cd9b4: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7cd9b4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7cd9b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7cd9b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7cd9bc:
    // 0x7cd9bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7cd9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cd9c0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7cd9c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cd9c4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7cd9c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cd9c8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7cd9c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cd9cc: 0x3e00008  jr          $ra
    ctx->pc = 0x7CD9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CD9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CD9CCu;
        // 0x7cd9d0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CD9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CD9D4u;
    // 0x7cd9d4: 0x0  nop
    ctx->pc = 0x7cd9d4u;
    // NOP
    ctx->pc = 0x7cd9d8u;
}
} // namespace gh_mcport
