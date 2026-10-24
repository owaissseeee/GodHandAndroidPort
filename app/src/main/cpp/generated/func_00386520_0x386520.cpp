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

// Function: func_00386520
// Address: 0x386520 - 0x386640
void func_00386520_0x386520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00386520_0x386520");
#endif

    switch (ctx->pc) {
        case 0x386578u: goto label_386578;
        case 0x3865c0u: goto label_3865c0;
        case 0x3865dcu: goto label_3865dc;
        case 0x3865f8u: goto label_3865f8;
        case 0x386608u: goto label_386608;
        case 0x386624u: goto label_386624;
        default: break;
    }

    ctx->pc = 0x386520u;

    // 0x386520: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x386520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x386524: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x386524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x386528: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x386528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x38652c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x38652cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386530: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x386530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x386534: 0x26300004  addiu       $s0, $s1, 0x4
    ctx->pc = 0x386534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x386538: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x386538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38653c: 0x12300025  beq         $s1, $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x38653Cu;
    {
        const bool branch_taken_0x38653c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x386540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38653Cu;
        // 0x386540: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38653c) {
            ctx->pc = 0x3865D4u;
            goto label_3865d4;
        }
    }
    ctx->pc = 0x386544u;
    // 0x386544: 0x8e260004  lw          $a2, 0x4($s1)
    ctx->pc = 0x386544u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x386548: 0x24c5fff0  addiu       $a1, $a2, -0x10
    ctx->pc = 0x386548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x38654c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x38654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x386550: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x386550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386554: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x386554u;
    {
        const bool branch_taken_0x386554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x386558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386554u;
        // 0x386558: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386554) {
            ctx->pc = 0x3865A4u;
            goto label_3865a4;
        }
    }
    ctx->pc = 0x38655Cu;
    // 0x38655c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x38655cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x386560: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x386560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x386564: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x386564u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x386568: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x386568u;
    {
        const bool branch_taken_0x386568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386568u;
        // 0x38656c: 0x24620017  addiu       $v0, $v1, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386568) {
            ctx->pc = 0x386580u;
            goto label_386580;
        }
    }
    ctx->pc = 0x386570u;
    // 0x386570: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x386570u;
    SET_GPR_U32(ctx, 31, 0x386578u);
    ctx->pc = 0x386574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386570u;
    // 0x386574: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x386570u, 0x386578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386578u;
label_386578:
    // 0x386578: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x386578u;
    {
        const bool branch_taken_0x386578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386578u;
        // 0x38657c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386578) {
            ctx->pc = 0x3865A8u;
            goto label_3865a8;
        }
    }
    ctx->pc = 0x386580u;
label_386580:
    // 0x386580: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x386580u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x386584: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x386584u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x386588: 0x24844030  addiu       $a0, $a0, 0x4030
    ctx->pc = 0x386588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16432));
    // 0x38658c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x38658cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x386590: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x386590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x386594: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x386594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x386598: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x386598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38659c: 0xacc3fff0  sw          $v1, -0x10($a2)
    ctx->pc = 0x38659cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 3));
    // 0x3865a0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x3865a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_3865a4:
    // 0x3865a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3865a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3865a8:
    // 0x3865a8: 0x2464fff0  addiu       $a0, $v1, -0x10
    ctx->pc = 0x3865a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x3865ac: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x3865acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3865b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3865B0u;
    {
        const bool branch_taken_0x3865b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3865b0) {
            ctx->pc = 0x3865B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3865B0u;
            // 0x3865b4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3865C8u;
            goto label_3865c8;
        }
    }
    ctx->pc = 0x3865B8u;
    // 0x3865b8: 0xc0eec16  jal         func_3BB058
    ctx->pc = 0x3865B8u;
    SET_GPR_U32(ctx, 31, 0x3865C0u);
    ctx->pc = 0x3BB058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB058u, 0x3865B8u, 0x3865C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3865C0u;
label_3865c0:
    // 0x3865c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3865C0u;
    {
        const bool branch_taken_0x3865c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3865C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3865C0u;
        // 0x3865c4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3865c0) {
            ctx->pc = 0x3865D0u;
            goto label_3865d0;
        }
    }
    ctx->pc = 0x3865C8u;
label_3865c8:
    // 0x3865c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3865c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3865cc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x3865ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_3865d0:
    // 0x3865d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x3865d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_3865d4:
    // 0x3865d4: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x3865D4u;
    SET_GPR_U32(ctx, 31, 0x3865DCu);
    ctx->pc = 0x3865D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3865D4u;
    // 0x3865d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x3865D4u, 0x3865DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3865DCu;
label_3865dc:
    // 0x3865dc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3865dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3865e0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3865e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3865e4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3865e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3865e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3865e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3865ec: 0x8c65fff0  lw          $a1, -0x10($v1)
    ctx->pc = 0x3865ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x3865f0: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x3865F0u;
    SET_GPR_U32(ctx, 31, 0x3865F8u);
    ctx->pc = 0x3865F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3865F0u;
    // 0x3865f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x3865F0u, 0x3865F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3865F8u;
label_3865f8:
    // 0x3865f8: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x3865f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x3865fc: 0x2610d018  addiu       $s0, $s0, -0x2FE8
    ctx->pc = 0x3865fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294955032));
    // 0x386600: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x386600u;
    SET_GPR_U32(ctx, 31, 0x386608u);
    ctx->pc = 0x386604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x386600u;
    // 0x386604: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x386600u, 0x386608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386608u;
label_386608:
    // 0x386608: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x386608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x38660c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x38660cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386610: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x386610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386614: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x386614u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386618: 0x8c65fff0  lw          $a1, -0x10($v1)
    ctx->pc = 0x386618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
    // 0x38661c: 0xc0eec5e  jal         func_3BB178
    ctx->pc = 0x38661Cu;
    SET_GPR_U32(ctx, 31, 0x386624u);
    ctx->pc = 0x386620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38661Cu;
    // 0x386620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BB178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BB178u, 0x38661Cu, 0x386624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x386624u;
label_386624:
    // 0x386624: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x386624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x386628: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x386628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38662c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x38662cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x386630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x386634: 0x3e00008  jr          $ra
    ctx->pc = 0x386634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x386634u;
        // 0x386638: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x386634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38663Cu;
    // 0x38663c: 0x0  nop
    ctx->pc = 0x38663cu;
    // NOP
    ctx->pc = 0x386640u;
}
