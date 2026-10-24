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

// Function: func_00202058
// Address: 0x202058 - 0x2022d0
void func_00202058_0x202058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00202058_0x202058");
#endif

    switch (ctx->pc) {
        case 0x202084u: goto label_202084;
        case 0x20210cu: goto label_20210c;
        case 0x202118u: goto label_202118;
        case 0x202134u: goto label_202134;
        case 0x202140u: goto label_202140;
        case 0x202174u: goto label_202174;
        case 0x202180u: goto label_202180;
        case 0x2021b4u: goto label_2021b4;
        case 0x2021c0u: goto label_2021c0;
        case 0x2021e8u: goto label_2021e8;
        case 0x2021f4u: goto label_2021f4;
        case 0x202264u: goto label_202264;
        case 0x202270u: goto label_202270;
        case 0x202288u: goto label_202288;
        case 0x2022a0u: goto label_2022a0;
        case 0x2022a8u: goto label_2022a8;
        case 0x2022b4u: goto label_2022b4;
        default: break;
    }

    ctx->pc = 0x202058u;

    // 0x202058: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x202058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20205c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x20205cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x202060: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x202060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x202064: 0x244279c8  addiu       $v0, $v0, 0x79C8
    ctx->pc = 0x202064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31176));
    // 0x202068: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x202068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x20206c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20206cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202070: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x202070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x202074: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x202074u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x202078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20207c: 0xc0aa12a  jal         func_2A84A8
    ctx->pc = 0x20207Cu;
    SET_GPR_U32(ctx, 31, 0x202084u);
    ctx->pc = 0x202080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20207Cu;
    // 0x202080: 0xae220214  sw          $v0, 0x214($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A84A8u, 0x20207Cu, 0x202084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202084u;
label_202084:
    // 0x202084: 0x962302fe  lhu         $v1, 0x2FE($s1)
    ctx->pc = 0x202084u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
    // 0x202088: 0x28620223  slti        $v0, $v1, 0x223
    ctx->pc = 0x202088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
    // 0x20208c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x20208Cu;
    {
        const bool branch_taken_0x20208c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x202090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20208Cu;
        // 0x202090: 0x28620220  slti        $v0, $v1, 0x220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)544) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20208c) {
            ctx->pc = 0x20209Cu;
            goto label_20209c;
        }
    }
    ctx->pc = 0x202094u;
    // 0x202094: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x202094u;
    {
        const bool branch_taken_0x202094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x202094) {
            ctx->pc = 0x2022A0u;
            goto label_2022a0;
        }
    }
    ctx->pc = 0x20209Cu;
label_20209c:
    // 0x20209c: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x20209cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2020a0: 0x2444fdf8  addiu       $a0, $v0, -0x208
    ctx->pc = 0x2020a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966776));
    // 0x2020a4: 0x2c830077  sltiu       $v1, $a0, 0x77
    ctx->pc = 0x2020a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)119) ? 1 : 0);
    // 0x2020a8: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
    ctx->pc = 0x2020A8u;
    {
        const bool branch_taken_0x2020a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2020ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020A8u;
        // 0x2020ac: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020a8) {
            ctx->pc = 0x2022A0u;
            goto label_2022a0;
        }
    }
    ctx->pc = 0x2020B0u;
    // 0x2020b0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2020b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2020b4: 0x2442c800  addiu       $v0, $v0, -0x3800
    ctx->pc = 0x2020b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952960));
    // 0x2020b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2020b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2020bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2020bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2020c0: 0x800008  jr          $a0
    ctx->pc = 0x2020C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2020C8u: goto label_2020c8;
            case 0x2020D4u: goto label_2020d4;
            case 0x2020E0u: goto label_2020e0;
            case 0x2020ECu: goto label_2020ec;
            case 0x2020F8u: goto label_2020f8;
            case 0x202120u: goto label_202120;
            case 0x202148u: goto label_202148;
            case 0x202154u: goto label_202154;
            case 0x202160u: goto label_202160;
            case 0x202188u: goto label_202188;
            case 0x202194u: goto label_202194;
            case 0x2021A0u: goto label_2021a0;
            case 0x2021C8u: goto label_2021c8;
            case 0x2021D4u: goto label_2021d4;
            case 0x2021FCu: goto label_2021fc;
            case 0x202208u: goto label_202208;
            case 0x202214u: goto label_202214;
            case 0x202220u: goto label_202220;
            case 0x20222Cu: goto label_20222c;
            case 0x202238u: goto label_202238;
            case 0x202244u: goto label_202244;
            case 0x202250u: goto label_202250;
            case 0x202278u: goto label_202278;
            case 0x202290u: goto label_202290;
            case 0x2022A0u: goto label_2022a0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2020C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2020C8u;
label_2020c8:
    // 0x2020c8: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2020c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2020cc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x2020CCu;
    {
        const bool branch_taken_0x2020cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2020D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020CCu;
        // 0x2020d0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020cc) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x2020D4u;
label_2020d4:
    // 0x2020d4: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2020d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2020d8: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x2020D8u;
    {
        const bool branch_taken_0x2020d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2020DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020D8u;
        // 0x2020dc: 0x2405006c  addiu       $a1, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020d8) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x2020E0u;
label_2020e0:
    // 0x2020e0: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2020e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2020e4: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2020E4u;
    {
        const bool branch_taken_0x2020e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2020E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020E4u;
        // 0x2020e8: 0x2405007b  addiu       $a1, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020e4) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x2020ECu;
label_2020ec:
    // 0x2020ec: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2020ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2020f0: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2020F0u;
    {
        const bool branch_taken_0x2020f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2020F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2020F0u;
        // 0x2020f4: 0x24050099  addiu       $a1, $zero, 0x99 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 153));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2020f0) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x2020F8u;
label_2020f8:
    // 0x2020f8: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x2020f8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x2020fc: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x2020fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x202100: 0x261019a0  addiu       $s0, $s0, 0x19A0
    ctx->pc = 0x202100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6560));
    // 0x202104: 0xc0c15de  jal         func_305778
    ctx->pc = 0x202104u;
    SET_GPR_U32(ctx, 31, 0x20210Cu);
    ctx->pc = 0x202108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202104u;
    // 0x202108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x202104u, 0x20210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20210Cu;
label_20210c:
    // 0x20210c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20210cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202110: 0xc0c15de  jal         func_305778
    ctx->pc = 0x202110u;
    SET_GPR_U32(ctx, 31, 0x202118u);
    ctx->pc = 0x202114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202110u;
    // 0x202114: 0x240500aa  addiu       $a1, $zero, 0xAA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x202110u, 0x202118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202118u;
label_202118:
    // 0x202118: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x202118u;
    {
        const bool branch_taken_0x202118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202118) {
            ctx->pc = 0x2022A0u;
            goto label_2022a0;
        }
    }
    ctx->pc = 0x202120u;
label_202120:
    // 0x202120: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x202120u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x202124: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x202124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x202128: 0x261019a0  addiu       $s0, $s0, 0x19A0
    ctx->pc = 0x202128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6560));
    // 0x20212c: 0xc0c15de  jal         func_305778
    ctx->pc = 0x20212Cu;
    SET_GPR_U32(ctx, 31, 0x202134u);
    ctx->pc = 0x202130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20212Cu;
    // 0x202130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x20212Cu, 0x202134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202134u;
label_202134:
    // 0x202134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202138: 0xc0c15de  jal         func_305778
    ctx->pc = 0x202138u;
    SET_GPR_U32(ctx, 31, 0x202140u);
    ctx->pc = 0x20213Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202138u;
    // 0x20213c: 0x240500bc  addiu       $a1, $zero, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x202138u, 0x202140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202140u;
label_202140:
    // 0x202140: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x202140u;
    {
        const bool branch_taken_0x202140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202140) {
            ctx->pc = 0x2022A0u;
            goto label_2022a0;
        }
    }
    ctx->pc = 0x202148u;
label_202148:
    // 0x202148: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x202148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x20214c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x20214Cu;
    {
        const bool branch_taken_0x20214c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20214Cu;
        // 0x202150: 0x240500bd  addiu       $a1, $zero, 0xBD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20214c) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x202154u;
label_202154:
    // 0x202154: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x202154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x202158: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x202158u;
    {
        const bool branch_taken_0x202158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20215Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202158u;
        // 0x20215c: 0x240500a8  addiu       $a1, $zero, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202158) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x202160u;
label_202160:
    // 0x202160: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x202160u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x202164: 0x240500a8  addiu       $a1, $zero, 0xA8
    ctx->pc = 0x202164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
    // 0x202168: 0x261019a0  addiu       $s0, $s0, 0x19A0
    ctx->pc = 0x202168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6560));
    // 0x20216c: 0xc0c15de  jal         func_305778
    ctx->pc = 0x20216Cu;
    SET_GPR_U32(ctx, 31, 0x202174u);
    ctx->pc = 0x202170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20216Cu;
    // 0x202170: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x20216Cu, 0x202174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202174u;
label_202174:
    // 0x202174: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202178: 0xc0c15de  jal         func_305778
    ctx->pc = 0x202178u;
    SET_GPR_U32(ctx, 31, 0x202180u);
    ctx->pc = 0x20217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202178u;
    // 0x20217c: 0x240500b8  addiu       $a1, $zero, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x202178u, 0x202180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202180u;
label_202180:
    // 0x202180: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x202180u;
    {
        const bool branch_taken_0x202180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202180) {
            ctx->pc = 0x2022A0u;
            goto label_2022a0;
        }
    }
    ctx->pc = 0x202188u;
label_202188:
    // 0x202188: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x202188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x20218c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x20218Cu;
    {
        const bool branch_taken_0x20218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20218Cu;
        // 0x202190: 0x240500ae  addiu       $a1, $zero, 0xAE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20218c) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x202194u;
label_202194:
    // 0x202194: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x202194u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x202198: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x202198u;
    {
        const bool branch_taken_0x202198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202198u;
        // 0x20219c: 0x24050061  addiu       $a1, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202198) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x2021A0u;
label_2021a0:
    // 0x2021a0: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x2021a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x2021a4: 0x24050061  addiu       $a1, $zero, 0x61
    ctx->pc = 0x2021a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x2021a8: 0x261019a0  addiu       $s0, $s0, 0x19A0
    ctx->pc = 0x2021a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6560));
    // 0x2021ac: 0xc0c15de  jal         func_305778
    ctx->pc = 0x2021ACu;
    SET_GPR_U32(ctx, 31, 0x2021B4u);
    ctx->pc = 0x2021B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021ACu;
    // 0x2021b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x2021ACu, 0x2021B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021B4u;
label_2021b4:
    // 0x2021b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2021b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021b8: 0xc0c15de  jal         func_305778
    ctx->pc = 0x2021B8u;
    SET_GPR_U32(ctx, 31, 0x2021C0u);
    ctx->pc = 0x2021BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021B8u;
    // 0x2021bc: 0x24050077  addiu       $a1, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x2021B8u, 0x2021C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021C0u;
label_2021c0:
    // 0x2021c0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x2021C0u;
    {
        const bool branch_taken_0x2021c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2021c0) {
            ctx->pc = 0x2022A0u;
            goto label_2022a0;
        }
    }
    ctx->pc = 0x2021C8u;
label_2021c8:
    // 0x2021c8: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2021c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x2021cc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2021CCu;
    {
        const bool branch_taken_0x2021cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2021D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2021CCu;
        // 0x2021d0: 0x24050063  addiu       $a1, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2021cc) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x2021D4u;
label_2021d4:
    // 0x2021d4: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x2021d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x2021d8: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x2021d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x2021dc: 0x261019a0  addiu       $s0, $s0, 0x19A0
    ctx->pc = 0x2021dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6560));
    // 0x2021e0: 0xc0c15de  jal         func_305778
    ctx->pc = 0x2021E0u;
    SET_GPR_U32(ctx, 31, 0x2021E8u);
    ctx->pc = 0x2021E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021E0u;
    // 0x2021e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x2021E0u, 0x2021E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021E8u;
label_2021e8:
    // 0x2021e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2021e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2021ec: 0xc0c15de  jal         func_305778
    ctx->pc = 0x2021ECu;
    SET_GPR_U32(ctx, 31, 0x2021F4u);
    ctx->pc = 0x2021F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2021ECu;
    // 0x2021f0: 0x24050072  addiu       $a1, $zero, 0x72 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x2021ECu, 0x2021F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2021F4u;
label_2021f4:
    // 0x2021f4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2021F4u;
    {
        const bool branch_taken_0x2021f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2021f4) {
            ctx->pc = 0x2022A0u;
            goto label_2022a0;
        }
    }
    ctx->pc = 0x2021FCu;
label_2021fc:
    // 0x2021fc: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x2021fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x202200: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x202200u;
    {
        const bool branch_taken_0x202200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202200u;
        // 0x202204: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202200) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x202208u;
label_202208:
    // 0x202208: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x202208u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x20220c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x20220Cu;
    {
        const bool branch_taken_0x20220c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20220Cu;
        // 0x202210: 0x240500cd  addiu       $a1, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20220c) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x202214u;
label_202214:
    // 0x202214: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x202214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x202218: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x202218u;
    {
        const bool branch_taken_0x202218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202218u;
        // 0x20221c: 0x24050069  addiu       $a1, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202218) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x202220u;
label_202220:
    // 0x202220: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x202220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x202224: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x202224u;
    {
        const bool branch_taken_0x202224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202224u;
        // 0x202228: 0x2405006f  addiu       $a1, $zero, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202224) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x20222Cu;
label_20222c:
    // 0x20222c: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x20222cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x202230: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x202230u;
    {
        const bool branch_taken_0x202230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202230u;
        // 0x202234: 0x240500c2  addiu       $a1, $zero, 0xC2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 194));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202230) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x202238u;
label_202238:
    // 0x202238: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x202238u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x20223c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x20223Cu;
    {
        const bool branch_taken_0x20223c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20223Cu;
        // 0x202240: 0x2405009f  addiu       $a1, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20223c) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x202244u;
label_202244:
    // 0x202244: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x202244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x202248: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x202248u;
    {
        const bool branch_taken_0x202248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202248u;
        // 0x20224c: 0x2405009e  addiu       $a1, $zero, 0x9E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202248) {
            ctx->pc = 0x202280u;
            goto label_202280;
        }
    }
    ctx->pc = 0x202250u;
label_202250:
    // 0x202250: 0x3c100074  lui         $s0, 0x74
    ctx->pc = 0x202250u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)116 << 16));
    // 0x202254: 0x240500d0  addiu       $a1, $zero, 0xD0
    ctx->pc = 0x202254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x202258: 0x261019a0  addiu       $s0, $s0, 0x19A0
    ctx->pc = 0x202258u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 6560));
    // 0x20225c: 0xc0c15de  jal         func_305778
    ctx->pc = 0x20225Cu;
    SET_GPR_U32(ctx, 31, 0x202264u);
    ctx->pc = 0x202260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20225Cu;
    // 0x202260: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x20225Cu, 0x202264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202264u;
label_202264:
    // 0x202264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x202264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x202268: 0xc0c15de  jal         func_305778
    ctx->pc = 0x202268u;
    SET_GPR_U32(ctx, 31, 0x202270u);
    ctx->pc = 0x20226Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202268u;
    // 0x20226c: 0x2405009e  addiu       $a1, $zero, 0x9E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x202268u, 0x202270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202270u;
label_202270:
    // 0x202270: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x202270u;
    {
        const bool branch_taken_0x202270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202270) {
            ctx->pc = 0x2022A0u;
            goto label_2022a0;
        }
    }
    ctx->pc = 0x202278u;
label_202278:
    // 0x202278: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x202278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x20227c: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x20227cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_202280:
    // 0x202280: 0xc0c15de  jal         func_305778
    ctx->pc = 0x202280u;
    SET_GPR_U32(ctx, 31, 0x202288u);
    ctx->pc = 0x202284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202280u;
    // 0x202284: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x202280u, 0x202288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202288u;
label_202288:
    // 0x202288: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x202288u;
    {
        const bool branch_taken_0x202288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202288) {
            ctx->pc = 0x2022A0u;
            goto label_2022a0;
        }
    }
    ctx->pc = 0x202290u;
label_202290:
    // 0x202290: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x202290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x202294: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x202294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x202298: 0xc0c15de  jal         func_305778
    ctx->pc = 0x202298u;
    SET_GPR_U32(ctx, 31, 0x2022A0u);
    ctx->pc = 0x20229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202298u;
    // 0x20229c: 0x248419a0  addiu       $a0, $a0, 0x19A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x305778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305778u, 0x202298u, 0x2022A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022A0u;
label_2022a0:
    // 0x2022a0: 0xc082216  jal         func_208858
    ctx->pc = 0x2022A0u;
    SET_GPR_U32(ctx, 31, 0x2022A8u);
    ctx->pc = 0x2022A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022A0u;
    // 0x2022a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208858u, 0x2022A0u, 0x2022A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022A8u;
label_2022a8:
    // 0x2022a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2022a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2022ac: 0xc0a3ae2  jal         func_28EB88
    ctx->pc = 0x2022ACu;
    SET_GPR_U32(ctx, 31, 0x2022B4u);
    ctx->pc = 0x2022B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2022ACu;
    // 0x2022b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EB88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EB88u, 0x2022ACu, 0x2022B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2022B4u;
label_2022b4:
    // 0x2022b4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2022b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2022b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2022b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2022bc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2022bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2022c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2022c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2022c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2022C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2022C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2022C4u;
        // 0x2022c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2022C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2022CCu;
    // 0x2022cc: 0x0  nop
    ctx->pc = 0x2022ccu;
    // NOP
    ctx->pc = 0x2022d0u;
}
