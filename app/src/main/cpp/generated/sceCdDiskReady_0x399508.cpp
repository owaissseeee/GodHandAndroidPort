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

// Function: sceCdDiskReady
// Address: 0x399508 - 0x399728
void sceCdDiskReady_0x399508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceCdDiskReady_0x399508");
#endif

    switch (ctx->pc) {
        case 0x399548u: goto label_399548;
        case 0x399550u: goto label_399550;
        case 0x39955cu: goto label_39955c;
        case 0x399574u: goto label_399574;
        case 0x399588u: goto label_399588;
        case 0x399598u: goto label_399598;
        case 0x3995bcu: goto label_3995bc;
        case 0x3995d0u: goto label_3995d0;
        case 0x3995f0u: goto label_3995f0;
        case 0x3995f8u: goto label_3995f8;
        case 0x399638u: goto label_399638;
        case 0x39964cu: goto label_39964c;
        case 0x399664u: goto label_399664;
        case 0x399694u: goto label_399694;
        case 0x3996a8u: goto label_3996a8;
        case 0x3996c8u: goto label_3996c8;
        case 0x3996d0u: goto label_3996d0;
        case 0x3996e8u: goto label_3996e8;
        case 0x3996fcu: goto label_3996fc;
        default: break;
    }

    ctx->pc = 0x399508u;

    // 0x399508: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x399508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x39950c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x39950cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x399510: 0x3c160040  lui         $s6, 0x40
    ctx->pc = 0x399510u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
    // 0x399514: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x399514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x399518: 0x8ec28650  lw          $v0, -0x79B0($s6)
    ctx->pc = 0x399518u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F8650u));
    // 0x39951c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x39951cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399520: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x399520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x399524: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x399524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x399528: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x399528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x39952c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x39952cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x399530: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x399530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x399534: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x399534u;
    {
        const bool branch_taken_0x399534 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x399538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399534u;
        // 0x399538: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399534) {
            ctx->pc = 0x399548u;
            goto label_399548;
        }
    }
    ctx->pc = 0x39953Cu;
    // 0x39953c: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x39953cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x399540: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x399540u;
    SET_GPR_U32(ctx, 31, 0x399548u);
    ctx->pc = 0x399544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399540u;
    // 0x399544: 0x2484e380  addiu       $a0, $a0, -0x1C80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x399540u, 0x399548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399548u;
label_399548:
    // 0x399548: 0xc0e618e  jal         func_398638
    ctx->pc = 0x399548u;
    SET_GPR_U32(ctx, 31, 0x399550u);
    ctx->pc = 0x39954Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399548u;
    // 0x39954c: 0x3c140040  lui         $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398638u, 0x399548u, 0x399550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399550u;
label_399550:
    // 0x399550: 0x8e848670  lw          $a0, -0x7990($s4)
    ctx->pc = 0x399550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936176)));
    // 0x399554: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x399554u;
    SET_GPR_U32(ctx, 31, 0x39955Cu);
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x399554u, 0x39955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39955Cu;
label_39955c:
    // 0x39955c: 0x8e838670  lw          $v1, -0x7990($s4)
    ctx->pc = 0x39955cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936176)));
    // 0x399560: 0x14620052  bne         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x399560u;
    {
        const bool branch_taken_0x399560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x399564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399560u;
        // 0x399564: 0x3a440008  xori        $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x399560) {
            ctx->pc = 0x3996ACu;
            goto label_3996ac;
        }
    }
    ctx->pc = 0x399568u;
    // 0x399568: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x399568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39956c: 0xc0eca40  jal         func_3B2900
    ctx->pc = 0x39956Cu;
    SET_GPR_U32(ctx, 31, 0x399574u);
    ctx->pc = 0x399570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39956Cu;
    // 0x399570: 0x3c130040  lui         $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2900u, 0x39956Cu, 0x399574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399574u;
label_399574:
    // 0x399574: 0x8e628690  lw          $v0, -0x7970($s3)
    ctx->pc = 0x399574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936208)));
    // 0x399578: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x399578u;
    {
        const bool branch_taken_0x399578 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x39957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399578u;
        // 0x39957c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399578) {
            ctx->pc = 0x39962Cu;
            goto label_39962c;
        }
    }
    ctx->pc = 0x399580u;
    // 0x399580: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x399580u;
    {
        const bool branch_taken_0x399580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399580u;
        // 0x399584: 0x3c150078  lui         $s5, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399580) {
            ctx->pc = 0x3995B8u;
            goto label_3995b8;
        }
    }
    ctx->pc = 0x399588u;
label_399588:
    // 0x399588: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x399588u;
    {
        const bool branch_taken_0x399588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399588u;
        // 0x39958c: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399588) {
            ctx->pc = 0x3996BCu;
            goto label_3996bc;
        }
    }
    ctx->pc = 0x399590u;
    // 0x399590: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x399590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x399594: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x399594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_399598:
    // 0x399598: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x399598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x39959c: 0x0  nop
    ctx->pc = 0x39959cu;
    // NOP
    // 0x3995a0: 0x0  nop
    ctx->pc = 0x3995a0u;
    // NOP
    // 0x3995a4: 0x0  nop
    ctx->pc = 0x3995a4u;
    // NOP
    // 0x3995a8: 0x0  nop
    ctx->pc = 0x3995a8u;
    // NOP
    // 0x3995ac: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3995ACu;
    {
        const bool branch_taken_0x3995ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3995ac) {
            ctx->pc = 0x399598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399598;
        }
    }
    ctx->pc = 0x3995B4u;
    // 0x3995b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3995b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3995b8:
    // 0x3995b8: 0x26b0c610  addiu       $s0, $s5, -0x39F0
    ctx->pc = 0x3995b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952464));
label_3995bc:
    // 0x3995bc: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x3995bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x3995c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3995c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3995c4: 0x34a5059c  ori         $a1, $a1, 0x59C
    ctx->pc = 0x3995c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1436);
    // 0x3995c8: 0xc0ecbd2  jal         func_3B2F48
    ctx->pc = 0x3995C8u;
    SET_GPR_U32(ctx, 31, 0x3995D0u);
    ctx->pc = 0x3995CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3995C8u;
    // 0x3995cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F48u, 0x3995C8u, 0x3995D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3995D0u;
label_3995d0:
    // 0x3995d0: 0x4430012  bgezl       $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3995D0u;
    {
        const bool branch_taken_0x3995d0 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x3995d0) {
            ctx->pc = 0x3995D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3995D0u;
            // 0x3995d4: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39961Cu;
            goto label_39961c;
        }
    }
    ctx->pc = 0x3995D8u;
    // 0x3995d8: 0x8ec28650  lw          $v0, -0x79B0($s6)
    ctx->pc = 0x3995d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936144)));
    // 0x3995dc: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3995DCu;
    {
        const bool branch_taken_0x3995dc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3995E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3995DCu;
        // 0x3995e0: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3995dc) {
            ctx->pc = 0x3995F4u;
            goto label_3995f4;
        }
    }
    ctx->pc = 0x3995E4u;
    // 0x3995e4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3995e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3995e8: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3995E8u;
    SET_GPR_U32(ctx, 31, 0x3995F0u);
    ctx->pc = 0x3995ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3995E8u;
    // 0x3995ec: 0x2484e348  addiu       $a0, $a0, -0x1CB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3995E8u, 0x3995F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3995F0u;
label_3995f0:
    // 0x3995f0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3995f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_3995f4:
    // 0x3995f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3995f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3995f8:
    // 0x3995f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3995f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3995fc: 0x0  nop
    ctx->pc = 0x3995fcu;
    // NOP
    // 0x399600: 0x0  nop
    ctx->pc = 0x399600u;
    // NOP
    // 0x399604: 0x0  nop
    ctx->pc = 0x399604u;
    // NOP
    // 0x399608: 0x0  nop
    ctx->pc = 0x399608u;
    // NOP
    // 0x39960c: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x39960Cu;
    {
        const bool branch_taken_0x39960c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39960c) {
            ctx->pc = 0x3995F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3995f8;
        }
    }
    ctx->pc = 0x399614u;
    // 0x399614: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x399614u;
    {
        const bool branch_taken_0x399614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399614u;
        // 0x399618: 0x26b0c610  addiu       $s0, $s5, -0x39F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952464));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399614) {
            ctx->pc = 0x3995BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3995bc;
        }
    }
    ctx->pc = 0x39961Cu;
label_39961c:
    // 0x39961c: 0x1040ffda  beqz        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x39961Cu;
    {
        const bool branch_taken_0x39961c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39961Cu;
        // 0x399620: 0x2a220011  slti        $v0, $s1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39961c) {
            ctx->pc = 0x399588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_399588;
        }
    }
    ctx->pc = 0x399624u;
    // 0x399624: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x399624u;
    {
        const bool branch_taken_0x399624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x399628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399624u;
        // 0x399628: 0xae608690  sw          $zero, -0x7970($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294936208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399624) {
            ctx->pc = 0x399630u;
            goto label_399630;
        }
    }
    ctx->pc = 0x39962Cu;
label_39962c:
    // 0x39962c: 0x3c150078  lui         $s5, 0x78
    ctx->pc = 0x39962cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)120 << 16));
label_399630:
    // 0x399630: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x399630u;
    SET_GPR_U32(ctx, 31, 0x399638u);
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x399630u, 0x399638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399638u;
label_399638:
    // 0x399638: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x399638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x39963c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39963Cu;
    {
        const bool branch_taken_0x39963c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39963Cu;
        // 0x399640: 0xac608680  sw          $zero, -0x7980($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39963c) {
            ctx->pc = 0x39964Cu;
            goto label_39964c;
        }
    }
    ctx->pc = 0x399644u;
    // 0x399644: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x399644u;
    SET_GPR_U32(ctx, 31, 0x39964Cu);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x399644u, 0x39964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39964Cu;
label_39964c:
    // 0x39964c: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x39964cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x399650: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x399650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x399654: 0x2450c650  addiu       $s0, $v0, -0x39B0
    ctx->pc = 0x399654u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952528));
    // 0x399658: 0xac52c650  sw          $s2, -0x39B0($v0)
    ctx->pc = 0x399658u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x77C650u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77C650u, _value); } while (0);
    // 0x39965c: 0xc0eca14  jal         func_3B2850
    ctx->pc = 0x39965Cu;
    SET_GPR_U32(ctx, 31, 0x399664u);
    ctx->pc = 0x399660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39965Cu;
    // 0x399660: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2850u, 0x39965Cu, 0x399664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399664u;
label_399664:
    // 0x399664: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x399664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x399668: 0x26a4c610  addiu       $a0, $s5, -0x39F0
    ctx->pc = 0x399668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294952464));
    // 0x39966c: 0x2451a0c0  addiu       $s1, $v0, -0x5F40
    ctx->pc = 0x39966cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942912));
    // 0x399670: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x399670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399674: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x399674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x399678: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x399678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39967c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39967cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399680: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x399680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x399684: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x399684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399688: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x399688u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39968c: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x39968Cu;
    SET_GPR_U32(ctx, 31, 0x399694u);
    ctx->pc = 0x399690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39968Cu;
    // 0x399690: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x39968Cu, 0x399694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399694u;
label_399694:
    // 0x399694: 0x4430010  bgezl       $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x399694u;
    {
        const bool branch_taken_0x399694 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x399694) {
            ctx->pc = 0x399698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399694u;
            // 0x399698: 0x8ec28650  lw          $v0, -0x79B0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294936144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3996D8u;
            goto label_3996d8;
        }
    }
    ctx->pc = 0x39969Cu;
    // 0x39969c: 0x8e848670  lw          $a0, -0x7990($s4)
    ctx->pc = 0x39969cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936176)));
    // 0x3996a0: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3996A0u;
    SET_GPR_U32(ctx, 31, 0x3996A8u);
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3996A0u, 0x3996A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3996A8u;
label_3996a8:
    // 0x3996a8: 0x3a440008  xori        $a0, $s2, 0x8
    ctx->pc = 0x3996a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
label_3996ac:
    // 0x3996ac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3996acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3996b0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x3996b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3996b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3996B4u;
    {
        const bool branch_taken_0x3996b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3996B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996B4u;
        // 0x3996b8: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3996b4) {
            ctx->pc = 0x399700u;
            goto label_399700;
        }
    }
    ctx->pc = 0x3996BCu;
label_3996bc:
    // 0x3996bc: 0x8e848670  lw          $a0, -0x7990($s4)
    ctx->pc = 0x3996bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936176)));
    // 0x3996c0: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3996C0u;
    SET_GPR_U32(ctx, 31, 0x3996C8u);
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3996C0u, 0x3996C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3996C8u;
label_3996c8:
    // 0x3996c8: 0xc0e64bc  jal         func_3992F0
    ctx->pc = 0x3996C8u;
    SET_GPR_U32(ctx, 31, 0x3996D0u);
    ctx->pc = 0x3996CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3996C8u;
    // 0x3996cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3992F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3992F0u, 0x3996C8u, 0x3996D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3996D0u;
label_3996d0:
    // 0x3996d0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3996D0u;
    {
        const bool branch_taken_0x3996d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3996D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996D0u;
        // 0x3996d4: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3996d0) {
            ctx->pc = 0x399704u;
            goto label_399704;
        }
    }
    ctx->pc = 0x3996D8u;
label_3996d8:
    // 0x3996d8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3996D8u;
    {
        const bool branch_taken_0x3996d8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3996DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3996D8u;
        // 0x3996dc: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3996d8) {
            ctx->pc = 0x3996E8u;
            goto label_3996e8;
        }
    }
    ctx->pc = 0x3996E0u;
    // 0x3996e0: 0xc0ec7ca  jal         func_3B1F28
    ctx->pc = 0x3996E0u;
    SET_GPR_U32(ctx, 31, 0x3996E8u);
    ctx->pc = 0x3996E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3996E0u;
    // 0x3996e4: 0x2484e368  addiu       $a0, $a0, -0x1C98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1F28u, 0x3996E0u, 0x3996E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3996E8u;
label_3996e8:
    // 0x3996e8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x3996e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x3996ec: 0x8e848670  lw          $a0, -0x7990($s4)
    ctx->pc = 0x3996ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936176)));
    // 0x3996f0: 0x2221025  or          $v0, $s1, $v0
    ctx->pc = 0x3996f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3996f4: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x3996F4u;
    SET_GPR_U32(ctx, 31, 0x3996FCu);
    ctx->pc = 0x3996F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3996F4u;
    // 0x3996f8: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x3996F4u, 0x3996FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3996FCu;
label_3996fc:
    // 0x3996fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3996fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399700:
    // 0x399700: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x399700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_399704:
    // 0x399704: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x399704u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x399708: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x399708u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x39970c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x39970cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x399710: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x399710u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x399714: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x399714u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x399718: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x399718u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39971c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x39971cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x399720: 0x3e00008  jr          $ra
    ctx->pc = 0x399720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399720u;
        // 0x399724: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399728u;
}
