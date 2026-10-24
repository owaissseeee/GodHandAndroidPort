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

// Function: func_00323840
// Address: 0x323840 - 0x323918
void func_00323840_0x323840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00323840_0x323840");
#endif

    switch (ctx->pc) {
        case 0x323878u: goto label_323878;
        case 0x32389cu: goto label_32389c;
        case 0x3238ccu: goto label_3238cc;
        case 0x3238d4u: goto label_3238d4;
        case 0x3238e8u: goto label_3238e8;
        default: break;
    }

    ctx->pc = 0x323840u;

    // 0x323840: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x323840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x323844: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x323844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x323848: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x323848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32384c: 0xffb10118  sd          $s1, 0x118($sp)
    ctx->pc = 0x32384cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 17));
    // 0x323850: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x323850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323854: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x323854u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323858: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x323858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32385c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32385cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x323860: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x323860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x323864: 0x27a80104  addiu       $t0, $sp, 0x104
    ctx->pc = 0x323864u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 260));
    // 0x323868: 0x27a90108  addiu       $t1, $sp, 0x108
    ctx->pc = 0x323868u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x32386c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x32386cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x323870: 0xc0c9190  jal         func_324640
    ctx->pc = 0x323870u;
    SET_GPR_U32(ctx, 31, 0x323878u);
    ctx->pc = 0x323874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323870u;
    // 0x323874: 0x27aa010c  addiu       $t2, $sp, 0x10C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324640u, 0x323870u, 0x323878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x323878u;
label_323878:
    // 0x323878: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x323878u;
    {
        const bool branch_taken_0x323878 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x32387Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323878u;
        // 0x32387c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323878) {
            ctx->pc = 0x323888u;
            goto label_323888;
        }
    }
    ctx->pc = 0x323880u;
    // 0x323880: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x323880u;
    {
        const bool branch_taken_0x323880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323880u;
        // 0x323884: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323880) {
            ctx->pc = 0x323900u;
            goto label_323900;
        }
    }
    ctx->pc = 0x323888u;
label_323888:
    // 0x323888: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x323888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x32388c: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x32388cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x323890: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x323890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x323894: 0xc0c9202  jal         func_324808
    ctx->pc = 0x323894u;
    SET_GPR_U32(ctx, 31, 0x32389Cu);
    ctx->pc = 0x323898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323894u;
    // 0x323898: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324808u, 0x323894u, 0x32389Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32389Cu;
label_32389c:
    // 0x32389c: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x32389cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x3238a0: 0x8e260034  lw          $a2, 0x34($s1)
    ctx->pc = 0x3238a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x3238a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3238a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3238a8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x3238a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3238ac: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x3238acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x3238b0: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x3238b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x3238b4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3238b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3238b8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x3238b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3238bc: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x3238bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x3238c0: 0xae24003c  sw          $a0, 0x3C($s1)
    ctx->pc = 0x3238c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 4));
    // 0x3238c4: 0xc0c9fc0  jal         func_327F00
    ctx->pc = 0x3238C4u;
    SET_GPR_U32(ctx, 31, 0x3238CCu);
    ctx->pc = 0x3238C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3238C4u;
    // 0x3238c8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327F00u, 0x3238C4u, 0x3238CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3238CCu;
label_3238cc:
    // 0x3238cc: 0xc0ca026  jal         func_328098
    ctx->pc = 0x3238CCu;
    SET_GPR_U32(ctx, 31, 0x3238D4u);
    ctx->pc = 0x3238D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3238CCu;
    // 0x3238d0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328098u, 0x3238CCu, 0x3238D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3238D4u;
label_3238d4:
    // 0x3238d4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3238d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3238d8: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3238D8u;
    {
        const bool branch_taken_0x3238d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3238d8) {
            ctx->pc = 0x3238DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3238D8u;
            // 0x3238dc: 0x8fa40108  lw          $a0, 0x108($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3238F0u;
            goto label_3238f0;
        }
    }
    ctx->pc = 0x3238E0u;
    // 0x3238e0: 0xc0ca006  jal         func_328018
    ctx->pc = 0x3238E0u;
    SET_GPR_U32(ctx, 31, 0x3238E8u);
    ctx->pc = 0x3238E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3238E0u;
    // 0x3238e4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328018u, 0x3238E0u, 0x3238E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3238E8u;
label_3238e8:
    // 0x3238e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3238E8u;
    {
        const bool branch_taken_0x3238e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3238ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238E8u;
        // 0x3238ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3238e8) {
            ctx->pc = 0x323900u;
            goto label_323900;
        }
    }
    ctx->pc = 0x3238F0u;
label_3238f0:
    // 0x3238f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3238f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3238f4: 0x8fa3010c  lw          $v1, 0x10C($sp)
    ctx->pc = 0x3238f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x3238f8: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x3238f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x3238fc: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3238fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
label_323900:
    // 0x323900: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x323900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x323904: 0xdfb10118  ld          $s1, 0x118($sp)
    ctx->pc = 0x323904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x323908: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x323908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x32390c: 0x3e00008  jr          $ra
    ctx->pc = 0x32390Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x323910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32390Cu;
        // 0x323910: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32390Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x323914u;
    // 0x323914: 0x0  nop
    ctx->pc = 0x323914u;
    // NOP
    ctx->pc = 0x323918u;
}
