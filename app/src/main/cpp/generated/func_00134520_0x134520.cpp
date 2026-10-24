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

// Function: func_00134520
// Address: 0x134520 - 0x134608
void func_00134520_0x134520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00134520_0x134520");
#endif

    switch (ctx->pc) {
        case 0x134570u: goto label_134570;
        case 0x134590u: goto label_134590;
        case 0x1345a4u: goto label_1345a4;
        case 0x1345b4u: goto label_1345b4;
        case 0x1345c8u: goto label_1345c8;
        default: break;
    }

    ctx->pc = 0x134520u;

    // 0x134520: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x134520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x134524: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x134524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x134528: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x134528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13452c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13452cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134530: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x134530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x134534: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x134534u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134538: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x134538u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x13453c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x13453cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x134540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x134544: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x134544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134548: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x134548u;
    {
        const bool branch_taken_0x134548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134548u;
        // 0x13454c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134548) {
            ctx->pc = 0x1345E0u;
            goto label_1345e0;
        }
    }
    ctx->pc = 0x134550u;
    // 0x134550: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x134550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x134554: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x134554u;
    {
        const bool branch_taken_0x134554 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134554) {
            ctx->pc = 0x1345ACu;
            goto label_1345ac;
        }
    }
    ctx->pc = 0x13455Cu;
    // 0x13455c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13455cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134560: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x134560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134564: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x134564u;
    {
        const bool branch_taken_0x134564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134564) {
            ctx->pc = 0x134588u;
            goto label_134588;
        }
    }
    ctx->pc = 0x13456Cu;
    // 0x13456c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x13456cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_134570:
    // 0x134570: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x134570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x134574: 0x0  nop
    ctx->pc = 0x134574u;
    // NOP
    // 0x134578: 0x0  nop
    ctx->pc = 0x134578u;
    // NOP
    // 0x13457c: 0x0  nop
    ctx->pc = 0x13457cu;
    // NOP
    // 0x134580: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x134580u;
    {
        const bool branch_taken_0x134580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x134580) {
            ctx->pc = 0x134584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x134580u;
            // 0x134584: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x134570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_134570;
        }
    }
    ctx->pc = 0x134588u;
label_134588:
    // 0x134588: 0xc0c3d54  jal         func_30F550
    ctx->pc = 0x134588u;
    SET_GPR_U32(ctx, 31, 0x134590u);
    ctx->pc = 0x13458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134588u;
    // 0x13458c: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F550u, 0x134588u, 0x134590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x134590u;
label_134590:
    // 0x134590: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134594: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x134594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134598: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x134598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13459c: 0xc04ce7c  jal         func_1339F0
    ctx->pc = 0x13459Cu;
    SET_GPR_U32(ctx, 31, 0x1345A4u);
    ctx->pc = 0x1345A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13459Cu;
    // 0x1345a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1339F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1339F0u, 0x13459Cu, 0x1345A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345A4u;
label_1345a4:
    // 0x1345a4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1345A4u;
    {
        const bool branch_taken_0x1345a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345A4u;
        // 0x1345a8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345a4) {
            ctx->pc = 0x1345CCu;
            goto label_1345cc;
        }
    }
    ctx->pc = 0x1345ACu;
label_1345ac:
    // 0x1345ac: 0xc0c3d54  jal         func_30F550
    ctx->pc = 0x1345ACu;
    SET_GPR_U32(ctx, 31, 0x1345B4u);
    ctx->pc = 0x1345B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345ACu;
    // 0x1345b0: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30F550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F550u, 0x1345ACu, 0x1345B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345B4u;
label_1345b4:
    // 0x1345b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1345b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1345b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345bc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1345bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1345c0: 0xc04ce7c  jal         func_1339F0
    ctx->pc = 0x1345C0u;
    SET_GPR_U32(ctx, 31, 0x1345C8u);
    ctx->pc = 0x1345C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1345C0u;
    // 0x1345c4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1339F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1339F0u, 0x1345C0u, 0x1345C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1345C8u;
label_1345c8:
    // 0x1345c8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1345c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1345cc:
    // 0x1345cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1345CCu;
    {
        const bool branch_taken_0x1345cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1345D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345CCu;
        // 0x1345d0: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1345cc) {
            ctx->pc = 0x1345E0u;
            goto label_1345e0;
        }
    }
    ctx->pc = 0x1345D4u;
    // 0x1345d4: 0x8c620d18  lw          $v0, 0xD18($v1)
    ctx->pc = 0x1345d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3352)));
    // 0x1345d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1345d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1345dc: 0xac620d18  sw          $v0, 0xD18($v1)
    ctx->pc = 0x1345dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3352), GPR_U32(ctx, 2));
label_1345e0:
    // 0x1345e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1345e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1345e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1345e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1345e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1345e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1345ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1345ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1345f0: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1345f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1345f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1345F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1345F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1345F4u;
        // 0x1345f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1345F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1345FCu;
    // 0x1345fc: 0x0  nop
    ctx->pc = 0x1345fcu;
    // NOP
    // 0x134600: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x134600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x134604: 0x0  nop
    ctx->pc = 0x134604u;
    // NOP
    ctx->pc = 0x134608u;
}
