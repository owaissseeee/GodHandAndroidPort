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

// Function: func_0037B338
// Address: 0x37b338 - 0x37b3f0
void func_0037B338_0x37b338(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037B338_0x37b338");
#endif

    if (__builtin_expect(ctx->pc != 0x37b338u, 0)) {
        switch (ctx->pc) {
            case 0x37b360u: goto label_37b360;
            case 0x37b374u: goto label_37b374;
            case 0x37b398u: goto label_37b398;
            case 0x37b3bcu: goto label_37b3bc;
            case 0x37b3dcu: goto label_37b3dc;
            default: break;
        }
    }


    // 0x37b338: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37b33c: 0x3c070046  lui         $a3, 0x46
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37b340: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37b340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x37b344: 0x24e7bd90  addiu       $a3, $a3, -0x4270
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950288));
    // 0x37b348: 0x80802d  daddu       $s0, $a0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b34c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37b350: 0x24040003  addiu       $a0, $zero, 0x3
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37b354: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b358: 0xc0b837a  jal         func_2E0DE8
    SET_GPR_U32(ctx, 31, 0x37B360u);
    ctx->pc = 0x37B35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B358u;
    // 0x37b35c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002E0DE8_0x2e0de8, 0x2e0de8u, 0x37b360u)) {
        return;
    }
label_37b360:
    // 0x37b360: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x37b360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37b364: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x37B364u;
    {
        const bool branch_taken_0x37b364 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B364u;
        // 0x37b368: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b364) {
            ctx->pc = 0x37B384u;
            goto label_37b384;
        }
    }
    // 0x37b36c: 0xc0dd438  jal         func_3750E0
    ctx->pc = 0x37B36Cu;
    SET_GPR_U32(ctx, 31, 0x37B374u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_003750E0_0x3750e0, 0x3750e0u, 0x37b374u)) {
        return;
    }
label_37b374:
    // 0x37b374: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b378: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x37B378u;
    {
        const bool branch_taken_0x37b378 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x37B37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B378u;
        // 0x37b37c: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b378) {
            ctx->pc = 0x37B3A0u;
            goto label_37b3a0;
        }
    }
    // 0x37b380: 0x3c070046  lui         $a3, 0x46
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_37b384:
    // 0x37b384: 0x2404000c  addiu       $a0, $zero, 0xC
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37b388: 0x24e7bda0  addiu       $a3, $a3, -0x4260
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950304));
    // 0x37b38c: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b390: 0xc0b837a  jal         func_2E0DE8
    SET_GPR_U32(ctx, 31, 0x37B398u);
    ctx->pc = 0x37B394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B390u;
    // 0x37b394: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002E0DE8_0x2e0de8, 0x2e0de8u, 0x37b398u)) {
        return;
    }
label_37b398:
    // 0x37b398: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x37B398u;
    {
        const bool branch_taken_0x37b398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B398u;
        // 0x37b39c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b398) {
            ctx->pc = 0x37B3E0u;
            goto label_37b3e0;
        }
    }
label_37b3a0:
    // 0x37b3a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B3A0u;
    {
        const bool branch_taken_0x37b3a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B3A0u;
        // 0x37b3a4: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b3a0) {
            ctx->pc = 0x37B3BCu;
            goto label_37b3bc;
        }
    }
    // 0x37b3a8: 0x2404000c  addiu       $a0, $zero, 0xC
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37b3ac: 0x24e7bda8  addiu       $a3, $a3, -0x4258
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950312));
    // 0x37b3b0: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b3b4: 0xc0b837a  jal         func_2E0DE8
    SET_GPR_U32(ctx, 31, 0x37B3BCu);
    ctx->pc = 0x37B3B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B3B4u;
    // 0x37b3b8: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002E0DE8_0x2e0de8, 0x2e0de8u, 0x37b3bcu)) {
        return;
    }
label_37b3bc:
    // 0x37b3bc: 0x32020002  andi        $v0, $s0, 0x2
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)2);
    // 0x37b3c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x37B3C0u;
    {
        const bool branch_taken_0x37b3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B3C0u;
        // 0x37b3c4: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37b3c0) {
            ctx->pc = 0x37B3DCu;
            goto label_37b3dc;
        }
    }
    // 0x37b3c8: 0x2404000c  addiu       $a0, $zero, 0xC
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37b3cc: 0x24e7bdb8  addiu       $a3, $a3, -0x4248
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950328));
    // 0x37b3d0: 0x24050004  addiu       $a1, $zero, 0x4
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37b3d4: 0xc0b837a  jal         func_2E0DE8
    SET_GPR_U32(ctx, 31, 0x37B3DCu);
    ctx->pc = 0x37B3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B3D4u;
    // 0x37b3d8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_002E0DE8_0x2e0de8, 0x2e0de8u, 0x37b3dcu)) {
        return;
    }
label_37b3dc:
    // 0x37b3dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x37b3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37b3e0:
    // 0x37b3e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37b3e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b3e4: 0x3e00008  jr          $ra
    ctx->pc = 0x37B3E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B3E4u;
        // 0x37b3e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B3E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x37b3ec: 0x0  nop
    // NOP
    ctx->pc = 0x37b3f0u;
}