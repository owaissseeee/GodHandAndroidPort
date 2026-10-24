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

// Function: cMc_DllLoad
// Address: 0x2ae4a8 - 0x2ae5e8
void cMc_DllLoad_0x2ae4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMc_DllLoad_0x2ae4a8");
#endif

    switch (ctx->pc) {
        case 0x2ae4fcu: goto label_2ae4fc;
        case 0x2ae510u: goto label_2ae510;
        case 0x2ae540u: goto label_2ae540;
        case 0x2ae558u: goto label_2ae558;
        case 0x2ae568u: goto label_2ae568;
        case 0x2ae570u: goto label_2ae570;
        case 0x2ae57cu: goto label_2ae57c;
        case 0x2ae588u: goto label_2ae588;
        case 0x2ae59cu: goto label_2ae59c;
        case 0x2ae5acu: goto label_2ae5ac;
        case 0x2ae5c4u: goto label_2ae5c4;
        default: break;
    }

    ctx->pc = 0x2ae4a8u;

    // 0x2ae4a8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2ae4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x2ae4ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ae4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae4b0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x2ae4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x2ae4b4: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x2ae4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x2ae4b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ae4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae4bc: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x2ae4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x2ae4c0: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x2ae4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x2ae4c4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x2ae4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x2ae4c8: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x2ae4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x2ae4cc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2ae4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2ae4d0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2ae4d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ae4d4: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2AE4D4u;
    {
        const bool branch_taken_0x2ae4d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4D4u;
        // 0x2ae4d8: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4d4) {
            ctx->pc = 0x2AE5C4u;
            goto label_2ae5c4;
        }
    }
    ctx->pc = 0x2AE4DCu;
    // 0x2ae4dc: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2ae4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2ae4e0: 0x8c627a30  lw          $v0, 0x7A30($v1)
    ctx->pc = 0x2ae4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A30u));
    // 0x2ae4e4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x2ae4e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x2ae4e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE4E8u;
    {
        const bool branch_taken_0x2ae4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4E8u;
        // 0x2ae4ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4e8) {
            ctx->pc = 0x2AE504u;
            goto label_2ae504;
        }
    }
    ctx->pc = 0x2AE4F0u;
    // 0x2ae4f0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ae4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ae4f4: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2AE4F4u;
    SET_GPR_U32(ctx, 31, 0x2AE4FCu);
    ctx->pc = 0x2AE4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE4F4u;
    // 0x2ae4f8: 0x24a5b0b0  addiu       $a1, $a1, -0x4F50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2AE4F4u, 0x2AE4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE4FCu;
label_2ae4fc:
    // 0x2ae4fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE4FCu;
    {
        const bool branch_taken_0x2ae4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE4FCu;
        // 0x2ae500: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae4fc) {
            ctx->pc = 0x2AE514u;
            goto label_2ae514;
        }
    }
    ctx->pc = 0x2AE504u;
label_2ae504:
    // 0x2ae504: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2ae504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2ae508: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x2AE508u;
    SET_GPR_U32(ctx, 31, 0x2AE510u);
    ctx->pc = 0x2AE50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE508u;
    // 0x2ae50c: 0x24a5b0e8  addiu       $a1, $a1, -0x4F18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x2AE508u, 0x2AE510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE510u;
label_2ae510:
    // 0x2ae510: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x2ae510u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_2ae514:
    // 0x2ae514: 0x3c070075  lui         $a3, 0x75
    ctx->pc = 0x2ae514u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)117 << 16));
    // 0x2ae518: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2ae518u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae51c: 0x24e74230  addiu       $a3, $a3, 0x4230
    ctx->pc = 0x2ae51cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16944));
    // 0x2ae520: 0x24843f20  addiu       $a0, $a0, 0x3F20
    ctx->pc = 0x2ae520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16160));
    // 0x2ae524: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2ae524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae528: 0x26060004  addiu       $a2, $s0, 0x4
    ctx->pc = 0x2ae528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2ae52c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2ae52cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae530: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ae530u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae534: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2ae534u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae538: 0xc08032c  jal         func_200CB0
    ctx->pc = 0x2AE538u;
    SET_GPR_U32(ctx, 31, 0x2AE540u);
    ctx->pc = 0x2AE53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE538u;
    // 0x2ae53c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200CB0u, 0x2AE538u, 0x2AE540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE540u;
label_2ae540:
    // 0x2ae540: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ae540u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ae544: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x2AE544u;
    {
        const bool branch_taken_0x2ae544 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE544u;
        // 0x2ae548: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae544) {
            ctx->pc = 0x2AE5C4u;
            goto label_2ae5c4;
        }
    }
    ctx->pc = 0x2AE54Cu;
    // 0x2ae54c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2ae54cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ae550: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2AE550u;
    {
        const bool branch_taken_0x2ae550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE550u;
        // 0x2ae554: 0x24522c00  addiu       $s2, $v0, 0x2C00 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 11264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae550) {
            ctx->pc = 0x2AE57Cu;
            goto label_2ae57c;
        }
    }
    ctx->pc = 0x2AE558u;
label_2ae558:
    // 0x2ae558: 0x56930006  bnel        $s4, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE558u;
    {
        const bool branch_taken_0x2ae558 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        if (branch_taken_0x2ae558) {
            ctx->pc = 0x2AE55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AE558u;
            // 0x2ae55c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AE574u;
            goto label_2ae574;
        }
    }
    ctx->pc = 0x2AE560u;
    // 0x2ae560: 0xc0ab994  jal         func_2AE650
    ctx->pc = 0x2AE560u;
    SET_GPR_U32(ctx, 31, 0x2AE568u);
    ctx->pc = 0x2AE564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE560u;
    // 0x2ae564: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE650u, 0x2AE560u, 0x2AE568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE568u;
label_2ae568:
    // 0x2ae568: 0xc0ab9c6  jal         func_2AE718
    ctx->pc = 0x2AE568u;
    SET_GPR_U32(ctx, 31, 0x2AE570u);
    ctx->pc = 0x2AE56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE568u;
    // 0x2ae56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE718u, 0x2AE568u, 0x2AE570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE570u;
label_2ae570:
    // 0x2ae570: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x2ae570u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2ae574:
    // 0x2ae574: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x2AE574u;
    SET_GPR_U32(ctx, 31, 0x2AE57Cu);
    ctx->pc = 0x2AE578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE574u;
    // 0x2ae578: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x2AE574u, 0x2AE57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE57Cu;
label_2ae57c:
    // 0x2ae57c: 0x26a43f20  addiu       $a0, $s5, 0x3F20
    ctx->pc = 0x2ae57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 16160));
    // 0x2ae580: 0xc080426  jal         func_201098
    ctx->pc = 0x2AE580u;
    SET_GPR_U32(ctx, 31, 0x2AE588u);
    ctx->pc = 0x2AE584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE580u;
    // 0x2ae584: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201098u, 0x2AE580u, 0x2AE588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE588u;
label_2ae588:
    // 0x2ae588: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2AE588u;
    {
        const bool branch_taken_0x2ae588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ae588) {
            ctx->pc = 0x2AE558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ae558;
        }
    }
    ctx->pc = 0x2AE590u;
    // 0x2ae590: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2ae590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ae594: 0xc0e5376  jal         func_394DD8
    ctx->pc = 0x2AE594u;
    SET_GPR_U32(ctx, 31, 0x2AE59Cu);
    ctx->pc = 0x2AE598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE594u;
    // 0x2ae598: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394DD8u, 0x2AE594u, 0x2AE59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE59Cu;
label_2ae59c:
    // 0x2ae59c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AE59Cu;
    {
        const bool branch_taken_0x2ae59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE59Cu;
        // 0x2ae5a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae59c) {
            ctx->pc = 0x2AE5B4u;
            goto label_2ae5b4;
        }
    }
    ctx->pc = 0x2AE5A4u;
    // 0x2ae5a4: 0xc0ab97a  jal         func_2AE5E8
    ctx->pc = 0x2AE5A4u;
    SET_GPR_U32(ctx, 31, 0x2AE5ACu);
    ctx->pc = 0x2AE5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AE5A4u;
    // 0x2ae5a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE5E8u, 0x2AE5A4u, 0x2AE5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AE5ACu;
label_2ae5ac:
    // 0x2ae5ac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2AE5ACu;
    {
        const bool branch_taken_0x2ae5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AE5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5ACu;
        // 0x2ae5b0: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ae5ac) {
            ctx->pc = 0x2AE5C8u;
            goto label_2ae5c8;
        }
    }
    ctx->pc = 0x2AE5B4u;
label_2ae5b4:
    // 0x2ae5b4: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x2ae5b4u;
    /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)((uint32_t)(FAST_READ32(0x2AE5B4u) & 0xFFFFu)) << 16));
    // 0x2ae5b8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2ae5b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ae5bc: 0xc000000  jal         func_000000
    ctx->pc = 0x2AE5BCu;
    {
        const uint32_t jumpTarget = ((FAST_READ32(0x2AE5BCu) & 0x03FFFFFFu) << 2) | 0x0u;
        SET_GPR_U32(ctx, 31, 0x2AE5C4u);
        ctx->pc = 0x2AE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5BCu;
        // 0x2ae5c0: 0x24840000  addiu       $a0, $a0, 0x0 (Delay Slot)
        /* runtime-relocated */ SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), ((uint32_t)(int32_t)(int16_t)(FAST_READ32(0x2AE5C0u) & 0xFFFFu))));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5BCu, 0x2AE5C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AE5C4u;
label_2ae5c4:
    // 0x2ae5c4: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x2ae5c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2ae5c8:
    // 0x2ae5c8: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x2ae5c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ae5cc: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x2ae5ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2ae5d0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x2ae5d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ae5d4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x2ae5d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ae5d8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x2ae5d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ae5dc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2ae5dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ae5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AE5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AE5E0u;
        // 0x2ae5e4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AE5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AE5E8u;
}
