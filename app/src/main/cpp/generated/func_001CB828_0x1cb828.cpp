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

// Function: func_001CB828
// Address: 0x1cb828 - 0x1cb8c0
void func_001CB828_0x1cb828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CB828_0x1cb828");
#endif

    switch (ctx->pc) {
        case 0x1cb844u: goto label_1cb844;
        case 0x1cb854u: goto label_1cb854;
        case 0x1cb898u: goto label_1cb898;
        case 0x1cb8acu: goto label_1cb8ac;
        default: break;
    }

    ctx->pc = 0x1cb828u;

    // 0x1cb828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb82c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cb82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cb830: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cb834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cb838: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1cb838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1cb83c: 0xc0a4bd4  jal         func_292F50
    ctx->pc = 0x1CB83Cu;
    SET_GPR_U32(ctx, 31, 0x1CB844u);
    ctx->pc = 0x1CB840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB83Cu;
    // 0x1cb840: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1CB83Cu, 0x1CB844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB844u;
label_1cb844:
    // 0x1cb844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb848: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1cb848u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1cb84c: 0xc0560a2  jal         func_158288
    ctx->pc = 0x1CB84Cu;
    SET_GPR_U32(ctx, 31, 0x1CB854u);
    ctx->pc = 0x1CB850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB84Cu;
    // 0x1cb850: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x1CB84Cu, 0x1CB854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB854u;
label_1cb854:
    // 0x1cb854: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x1cb854u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cb858: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB858u;
    {
        const bool branch_taken_0x1cb858 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB858u;
        // 0x1cb85c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb858) {
            ctx->pc = 0x1CB870u;
            goto label_1cb870;
        }
    }
    ctx->pc = 0x1CB860u;
    // 0x1cb860: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1CB860u;
    {
        const bool branch_taken_0x1cb860 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1cb860) {
            ctx->pc = 0x1CB8A4u;
            goto label_1cb8a4;
        }
    }
    ctx->pc = 0x1CB868u;
    // 0x1cb868: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1CB868u;
    {
        const bool branch_taken_0x1cb868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB868u;
        // 0x1cb86c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb868) {
            ctx->pc = 0x1CB8B0u;
            goto label_1cb8b0;
        }
    }
    ctx->pc = 0x1CB870u;
label_1cb870:
    // 0x1cb870: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x1cb870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1cb874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cb874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb878: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cb878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1cb87c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cb87cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb880: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1cb880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1cb884: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cb884u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb888: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cb888u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb88c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1cb88cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb890: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x1CB890u;
    SET_GPR_U32(ctx, 31, 0x1CB898u);
    ctx->pc = 0x1CB894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB890u;
    // 0x1cb894: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x1CB890u, 0x1CB898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB898u;
label_1cb898:
    // 0x1cb898: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x1cb898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x1cb89c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb8a0: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x1cb8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_1cb8a4:
    // 0x1cb8a4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x1CB8A4u;
    SET_GPR_U32(ctx, 31, 0x1CB8ACu);
    ctx->pc = 0x1CB8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB8A4u;
    // 0x1cb8a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x1CB8A4u, 0x1CB8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB8ACu;
label_1cb8ac:
    // 0x1cb8ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cb8acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1cb8b0:
    // 0x1cb8b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cb8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB8B4u;
        // 0x1cb8b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB8BCu;
    // 0x1cb8bc: 0x0  nop
    ctx->pc = 0x1cb8bcu;
    // NOP
    ctx->pc = 0x1cb8c0u;
}
