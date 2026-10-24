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

// Function: func_001CB990
// Address: 0x1cb990 - 0x1cba28
void func_001CB990_0x1cb990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CB990_0x1cb990");
#endif

    switch (ctx->pc) {
        case 0x1cb9acu: goto label_1cb9ac;
        case 0x1cb9bcu: goto label_1cb9bc;
        case 0x1cba00u: goto label_1cba00;
        case 0x1cba14u: goto label_1cba14;
        default: break;
    }

    ctx->pc = 0x1cb990u;

    // 0x1cb990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb994: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cb994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cb998: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb99c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb9a0: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1cb9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1cb9a4: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CB9A4u;
    SET_GPR_U32(ctx, 31, 0x1CB9ACu);
    ctx->pc = 0x1CB9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9A4u;
    // 0x1cb9a8: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CB9A4u, 0x1CB9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9ACu;
label_1cb9ac:
    // 0x1cb9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1cb9b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1cb9b4: 0xc0560a2  jal         func_158288
    ctx->pc = 0x1CB9B4u;
    SET_GPR_U32(ctx, 31, 0x1CB9BCu);
    ctx->pc = 0x1CB9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9B4u;
    // 0x1cb9b8: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1CB9B4u, 0x1CB9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB9BCu;
label_1cb9bc:
    // 0x1cb9bc: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cb9bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cb9c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB9C0u;
    {
        const bool branch_taken_0x1cb9c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9C0u;
        // 0x1cb9c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9c0) {
            ctx->pc = 0x1CB9D8u;
            goto label_1cb9d8;
        }
    }
    ctx->pc = 0x1CB9C8u;
    // 0x1cb9c8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB9C8u;
    {
        const bool branch_taken_0x1cb9c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb9c8) {
            ctx->pc = 0x1CBA0Cu;
            goto label_1cba0c;
        }
    }
    ctx->pc = 0x1CB9D0u;
    // 0x1cb9d0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB9D0u;
    {
        const bool branch_taken_0x1cb9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB9D0u;
        // 0x1cb9d4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb9d0) {
            ctx->pc = 0x1CBA18u;
            goto label_1cba18;
        }
    }
    ctx->pc = 0x1CB9D8u;
label_1cb9d8:
    // 0x1cb9d8: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb9e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb9e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb9e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9e8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1cb9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cb9ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb9ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9f0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb9f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9f4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb9f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb9f8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB9F8u;
    SET_GPR_U32(ctx, 31, 0x1CBA00u);
    ctx->pc = 0x1CB9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB9F8u;
    // 0x1cb9fc: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB9F8u, 0x1CBA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA00u;
label_1cba00:
    // 0x1cba00: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cba00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cba04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cba04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cba08: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cba08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cba0c:
    // 0x1cba0c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1CBA0Cu;
    SET_GPR_U32(ctx, 31, 0x1CBA14u);
    ctx->pc = 0x1CBA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBA0Cu;
    // 0x1cba10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1CBA0Cu, 0x1CBA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBA14u;
label_1cba14:
    // 0x1cba14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cba14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cba18:
    // 0x1cba18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cba18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cba1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CBA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBA1Cu;
        // 0x1cba20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBA24u;
    // 0x1cba24: 0x0  nop
    ctx->pc = 0x1cba24u;
    // NOP
    ctx->pc = 0x1cba28u;
}
