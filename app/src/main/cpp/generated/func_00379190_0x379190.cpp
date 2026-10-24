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

// Function: func_00379190
// Address: 0x379190 - 0x3794d0
void func_00379190_0x379190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00379190_0x379190");
#endif

    switch (ctx->pc) {
        case 0x3791d8u: goto label_3791d8;
        case 0x3791f0u: goto label_3791f0;
        case 0x379204u: goto label_379204;
        case 0x379228u: goto label_379228;
        case 0x37924cu: goto label_37924c;
        case 0x37926cu: goto label_37926c;
        case 0x379298u: goto label_379298;
        case 0x3792bcu: goto label_3792bc;
        case 0x3792dcu: goto label_3792dc;
        case 0x379300u: goto label_379300;
        case 0x379320u: goto label_379320;
        case 0x379340u: goto label_379340;
        case 0x37935cu: goto label_37935c;
        case 0x379378u: goto label_379378;
        case 0x379394u: goto label_379394;
        case 0x3793b0u: goto label_3793b0;
        case 0x3793ccu: goto label_3793cc;
        case 0x3793fcu: goto label_3793fc;
        case 0x379418u: goto label_379418;
        case 0x379434u: goto label_379434;
        case 0x379450u: goto label_379450;
        case 0x37946cu: goto label_37946c;
        case 0x379488u: goto label_379488;
        case 0x3794a4u: goto label_3794a4;
        case 0x3794acu: goto label_3794ac;
        case 0x3794b4u: goto label_3794b4;
        default: break;
    }

    ctx->pc = 0x379190u;

    // 0x379190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x379190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x379194: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x379194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x379198: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x379198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x37919c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x37919cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3791a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3791a4: 0x267100cc  addiu       $s1, $s3, 0xCC
    ctx->pc = 0x3791a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 204));
    // 0x3791a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3791a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3791ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3791acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3791b0: 0x9622000e  lhu         $v0, 0xE($s1)
    ctx->pc = 0x3791b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x3791b4: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x3791b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x3791b8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3791B8u;
    {
        const bool branch_taken_0x3791b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3791BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3791B8u;
        // 0x3791bc: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3791b8) {
            ctx->pc = 0x37920Cu;
            goto label_37920c;
        }
    }
    ctx->pc = 0x3791C0u;
    // 0x3791c0: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x3791c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3791c4: 0x2610b350  addiu       $s0, $s0, -0x4CB0
    ctx->pc = 0x3791c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947664));
    // 0x3791c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3791c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3791cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3791ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791d0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3791D0u;
    SET_GPR_U32(ctx, 31, 0x3791D8u);
    ctx->pc = 0x3791D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3791D0u;
    // 0x3791d4: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3791D0u, 0x3791D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3791D8u;
label_3791d8:
    // 0x3791d8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3791d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3791dc: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x3791dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3791e0: 0x24e7b360  addiu       $a3, $a3, -0x4CA0
    ctx->pc = 0x3791e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947680));
    // 0x3791e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x3791e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3791e8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3791E8u;
    SET_GPR_U32(ctx, 31, 0x3791F0u);
    ctx->pc = 0x3791ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3791E8u;
    // 0x3791ec: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3791E8u, 0x3791F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3791F0u;
label_3791f0:
    // 0x3791f0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3791f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3791f4: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x3791f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3791f8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3791f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x3791fc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3791FCu;
    SET_GPR_U32(ctx, 31, 0x379204u);
    ctx->pc = 0x379200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3791FCu;
    // 0x379200: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3791FCu, 0x379204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379204u;
label_379204:
    // 0x379204: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x379204u;
    {
        const bool branch_taken_0x379204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379204u;
        // 0x379208: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379204) {
            ctx->pc = 0x3794B8u;
            goto label_3794b8;
        }
    }
    ctx->pc = 0x37920Cu;
label_37920c:
    // 0x37920c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37920cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379210: 0x86280004  lh          $t0, 0x4($s1)
    ctx->pc = 0x379210u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x379214: 0x24e7b5c0  addiu       $a3, $a3, -0x4A40
    ctx->pc = 0x379214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948288));
    // 0x379218: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x379218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37921c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37921cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x379220: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379220u;
    SET_GPR_U32(ctx, 31, 0x379228u);
    ctx->pc = 0x379224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379220u;
    // 0x379224: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379220u, 0x379228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379228u;
label_379228:
    // 0x379228: 0x92220006  lbu         $v0, 0x6($s1)
    ctx->pc = 0x379228u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x37922c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37922cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x379230: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x379230u;
    {
        const bool branch_taken_0x379230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379230u;
        // 0x379234: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379230) {
            ctx->pc = 0x379254u;
            goto label_379254;
        }
    }
    ctx->pc = 0x379238u;
    // 0x379238: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x379238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37923c: 0x24e7b5d8  addiu       $a3, $a3, -0x4A28
    ctx->pc = 0x37923cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948312));
    // 0x379240: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x379240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x379244: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379244u;
    SET_GPR_U32(ctx, 31, 0x37924Cu);
    ctx->pc = 0x379248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379244u;
    // 0x379248: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379244u, 0x37924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37924Cu;
label_37924c:
    // 0x37924c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x37924Cu;
    {
        const bool branch_taken_0x37924c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37924Cu;
        // 0x379250: 0x2402001b  addiu       $v0, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37924c) {
            ctx->pc = 0x379270u;
            goto label_379270;
        }
    }
    ctx->pc = 0x379254u;
label_379254:
    // 0x379254: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379254u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379258: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x379258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37925c: 0x24e7b5f0  addiu       $a3, $a3, -0x4A10
    ctx->pc = 0x37925cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948336));
    // 0x379260: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x379260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x379264: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379264u;
    SET_GPR_U32(ctx, 31, 0x37926Cu);
    ctx->pc = 0x379268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379264u;
    // 0x379268: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379264u, 0x37926Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37926Cu;
label_37926c:
    // 0x37926c: 0x2402001b  addiu       $v0, $zero, 0x1B
    ctx->pc = 0x37926cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_379270:
    // 0x379270: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379270u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379274: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x379274u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x379278: 0x82280007  lb          $t0, 0x7($s1)
    ctx->pc = 0x379278u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x37927c: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x37927cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x379280: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x379280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379284: 0x24e7b4c0  addiu       $a3, $a3, -0x4B40
    ctx->pc = 0x379284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948032));
    // 0x379288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37928c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x37928cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x379290: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379290u;
    SET_GPR_U32(ctx, 31, 0x379298u);
    ctx->pc = 0x379294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379290u;
    // 0x379294: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379290u, 0x379298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379298u;
label_379298:
    // 0x379298: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x379298u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37929c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x37929cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3792a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3792A0u;
    {
        const bool branch_taken_0x3792a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3792A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792A0u;
        // 0x3792a4: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3792a0) {
            ctx->pc = 0x3792C4u;
            goto label_3792c4;
        }
    }
    ctx->pc = 0x3792A8u;
    // 0x3792a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3792a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3792ac: 0x24e7b608  addiu       $a3, $a3, -0x49F8
    ctx->pc = 0x3792acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948360));
    // 0x3792b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3792b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3792b4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3792B4u;
    SET_GPR_U32(ctx, 31, 0x3792BCu);
    ctx->pc = 0x3792B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3792B4u;
    // 0x3792b8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3792B4u, 0x3792BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3792BCu;
label_3792bc:
    // 0x3792bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3792BCu;
    {
        const bool branch_taken_0x3792bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3792C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792BCu;
        // 0x3792c0: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3792bc) {
            ctx->pc = 0x3792E0u;
            goto label_3792e0;
        }
    }
    ctx->pc = 0x3792C4u;
label_3792c4:
    // 0x3792c4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3792c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3792c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3792c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3792cc: 0x24e7b620  addiu       $a3, $a3, -0x49E0
    ctx->pc = 0x3792ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948384));
    // 0x3792d0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3792d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x3792d4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3792D4u;
    SET_GPR_U32(ctx, 31, 0x3792DCu);
    ctx->pc = 0x3792D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3792D4u;
    // 0x3792d8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3792D4u, 0x3792DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3792DCu;
label_3792dc:
    // 0x3792dc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x3792dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_3792e0:
    // 0x3792e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3792e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3792e4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3792E4u;
    {
        const bool branch_taken_0x3792e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3792E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3792E4u;
        // 0x3792e8: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3792e4) {
            ctx->pc = 0x379308u;
            goto label_379308;
        }
    }
    ctx->pc = 0x3792ECu;
    // 0x3792ec: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x3792ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x3792f0: 0x24e7b460  addiu       $a3, $a3, -0x4BA0
    ctx->pc = 0x3792f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947936));
    // 0x3792f4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x3792f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3792f8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3792F8u;
    SET_GPR_U32(ctx, 31, 0x379300u);
    ctx->pc = 0x3792FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3792F8u;
    // 0x3792fc: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3792F8u, 0x379300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379300u;
label_379300:
    // 0x379300: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x379300u;
    {
        const bool branch_taken_0x379300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x379304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x379300u;
        // 0x379304: 0x128403  sra         $s0, $s2, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379300) {
            ctx->pc = 0x379324u;
            goto label_379324;
        }
    }
    ctx->pc = 0x379308u;
label_379308:
    // 0x379308: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379308u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37930c: 0x122402  srl         $a0, $s2, 16
    ctx->pc = 0x37930cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 18), 16));
    // 0x379310: 0x24e7b478  addiu       $a3, $a3, -0x4B88
    ctx->pc = 0x379310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947960));
    // 0x379314: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x379314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x379318: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379318u;
    SET_GPR_U32(ctx, 31, 0x379320u);
    ctx->pc = 0x37931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379318u;
    // 0x37931c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379318u, 0x379320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379320u;
label_379320:
    // 0x379320: 0x128403  sra         $s0, $s2, 16
    ctx->pc = 0x379320u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 18), 16));
label_379324:
    // 0x379324: 0x8e280040  lw          $t0, 0x40($s1)
    ctx->pc = 0x379324u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x379328: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379328u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37932c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379330: 0x24e7b638  addiu       $a3, $a3, -0x49C8
    ctx->pc = 0x379330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948408));
    // 0x379334: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x379334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x379338: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379338u;
    SET_GPR_U32(ctx, 31, 0x379340u);
    ctx->pc = 0x37933Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379338u;
    // 0x37933c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379338u, 0x379340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379340u;
label_379340:
    // 0x379340: 0x8e280044  lw          $t0, 0x44($s1)
    ctx->pc = 0x379340u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x379344: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379344u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379348: 0x24e7b650  addiu       $a3, $a3, -0x49B0
    ctx->pc = 0x379348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948432));
    // 0x37934c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379350: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x379350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x379354: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379354u;
    SET_GPR_U32(ctx, 31, 0x37935Cu);
    ctx->pc = 0x379358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379354u;
    // 0x379358: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379354u, 0x37935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37935Cu;
label_37935c:
    // 0x37935c: 0x86280034  lh          $t0, 0x34($s1)
    ctx->pc = 0x37935cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x379360: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379360u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379364: 0x24e7b3e8  addiu       $a3, $a3, -0x4C18
    ctx->pc = 0x379364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947816));
    // 0x379368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37936c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x37936cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x379370: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379370u;
    SET_GPR_U32(ctx, 31, 0x379378u);
    ctx->pc = 0x379374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379370u;
    // 0x379374: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379370u, 0x379378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379378u;
label_379378:
    // 0x379378: 0x86280036  lh          $t0, 0x36($s1)
    ctx->pc = 0x379378u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 54)));
    // 0x37937c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37937cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379380: 0x24e7b400  addiu       $a3, $a3, -0x4C00
    ctx->pc = 0x379380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294947840));
    // 0x379384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379388: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x379388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37938c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37938Cu;
    SET_GPR_U32(ctx, 31, 0x379394u);
    ctx->pc = 0x379390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37938Cu;
    // 0x379390: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37938Cu, 0x379394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379394u;
label_379394:
    // 0x379394: 0x86280038  lh          $t0, 0x38($s1)
    ctx->pc = 0x379394u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x379398: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379398u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37939c: 0x24e7b668  addiu       $a3, $a3, -0x4998
    ctx->pc = 0x37939cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948456));
    // 0x3793a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3793a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3793a4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3793a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x3793a8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3793A8u;
    SET_GPR_U32(ctx, 31, 0x3793B0u);
    ctx->pc = 0x3793ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3793A8u;
    // 0x3793ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3793A8u, 0x3793B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3793B0u;
label_3793b0:
    // 0x3793b0: 0x8628003a  lh          $t0, 0x3A($s1)
    ctx->pc = 0x3793b0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 58)));
    // 0x3793b4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3793b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3793b8: 0x24e7b680  addiu       $a3, $a3, -0x4980
    ctx->pc = 0x3793b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948480));
    // 0x3793bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3793bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3793c0: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3793c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3793c4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3793C4u;
    SET_GPR_U32(ctx, 31, 0x3793CCu);
    ctx->pc = 0x3793C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3793C4u;
    // 0x3793c8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3793C4u, 0x3793CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3793CCu;
label_3793cc:
    // 0x3793cc: 0x82230008  lb          $v1, 0x8($s1)
    ctx->pc = 0x3793ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3793d0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3793d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3793d4: 0x24422610  addiu       $v0, $v0, 0x2610
    ctx->pc = 0x3793d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9744));
    // 0x3793d8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3793d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3793dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3793dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3793e0: 0x24e7b550  addiu       $a3, $a3, -0x4AB0
    ctx->pc = 0x3793e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948176));
    // 0x3793e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3793e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3793e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3793e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3793ec: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x3793ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3793f0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3793f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3793f4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3793F4u;
    SET_GPR_U32(ctx, 31, 0x3793FCu);
    ctx->pc = 0x3793F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3793F4u;
    // 0x3793f8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3793F4u, 0x3793FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3793FCu;
label_3793fc:
    // 0x3793fc: 0x8628003c  lh          $t0, 0x3C($s1)
    ctx->pc = 0x3793fcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x379400: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379400u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379404: 0x24e7b698  addiu       $a3, $a3, -0x4968
    ctx->pc = 0x379404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948504));
    // 0x379408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37940c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x37940cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x379410: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379410u;
    SET_GPR_U32(ctx, 31, 0x379418u);
    ctx->pc = 0x379414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379410u;
    // 0x379414: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379410u, 0x379418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379418u;
label_379418:
    // 0x379418: 0x8628003e  lh          $t0, 0x3E($s1)
    ctx->pc = 0x379418u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 62)));
    // 0x37941c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37941cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379420: 0x24e7b6b0  addiu       $a3, $a3, -0x4950
    ctx->pc = 0x379420u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948528));
    // 0x379424: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379428: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x379428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x37942c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37942Cu;
    SET_GPR_U32(ctx, 31, 0x379434u);
    ctx->pc = 0x379430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37942Cu;
    // 0x379430: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37942Cu, 0x379434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379434u;
label_379434:
    // 0x379434: 0x82280058  lb          $t0, 0x58($s1)
    ctx->pc = 0x379434u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x379438: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379438u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37943c: 0x24e7b560  addiu       $a3, $a3, -0x4AA0
    ctx->pc = 0x37943cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948192));
    // 0x379440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379444: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x379444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x379448: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379448u;
    SET_GPR_U32(ctx, 31, 0x379450u);
    ctx->pc = 0x37944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379448u;
    // 0x37944c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379448u, 0x379450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379450u;
label_379450:
    // 0x379450: 0x82280059  lb          $t0, 0x59($s1)
    ctx->pc = 0x379450u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 89)));
    // 0x379454: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379454u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379458: 0x24e7b578  addiu       $a3, $a3, -0x4A88
    ctx->pc = 0x379458u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948216));
    // 0x37945c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37945cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379460: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x379460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x379464: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379464u;
    SET_GPR_U32(ctx, 31, 0x37946Cu);
    ctx->pc = 0x379468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379464u;
    // 0x379468: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379464u, 0x37946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37946Cu;
label_37946c:
    // 0x37946c: 0x8228005a  lb          $t0, 0x5A($s1)
    ctx->pc = 0x37946cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 90)));
    // 0x379470: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x379470u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379474: 0x24e7b590  addiu       $a3, $a3, -0x4A70
    ctx->pc = 0x379474u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948240));
    // 0x379478: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37947c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x37947cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x379480: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x379480u;
    SET_GPR_U32(ctx, 31, 0x379488u);
    ctx->pc = 0x379484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x379480u;
    // 0x379484: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x379480u, 0x379488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379488u;
label_379488:
    // 0x379488: 0x8228005b  lb          $t0, 0x5B($s1)
    ctx->pc = 0x379488u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 91)));
    // 0x37948c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37948cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x379490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379494: 0x24e7b5a8  addiu       $a3, $a3, -0x4A58
    ctx->pc = 0x379494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948264));
    // 0x379498: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x379498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x37949c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37949Cu;
    SET_GPR_U32(ctx, 31, 0x3794A4u);
    ctx->pc = 0x3794A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37949Cu;
    // 0x3794a0: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37949Cu, 0x3794A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3794A4u;
label_3794a4:
    // 0x3794a4: 0xc0de60e  jal         func_379838
    ctx->pc = 0x3794A4u;
    SET_GPR_U32(ctx, 31, 0x3794ACu);
    ctx->pc = 0x3794A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3794A4u;
    // 0x3794a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379838u, 0x3794A4u, 0x3794ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3794ACu;
label_3794ac:
    // 0x3794ac: 0xc0de644  jal         func_379910
    ctx->pc = 0x3794ACu;
    SET_GPR_U32(ctx, 31, 0x3794B4u);
    ctx->pc = 0x3794B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3794ACu;
    // 0x3794b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379910u, 0x3794ACu, 0x3794B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3794B4u;
label_3794b4:
    // 0x3794b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3794b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3794b8:
    // 0x3794b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3794b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3794bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3794bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3794c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x3794c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3794c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3794c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3794c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3794C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3794CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3794C8u;
        // 0x3794cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3794C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3794D0u;
}
