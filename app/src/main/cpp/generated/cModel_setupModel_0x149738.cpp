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

// Function: cModel_setupModel
// Address: 0x149738 - 0x149ad8
void cModel_setupModel_0x149738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_setupModel_0x149738");
#endif

    switch (ctx->pc) {
        case 0x149820u: goto label_149820;
        case 0x149840u: goto label_149840;
        case 0x149848u: goto label_149848;
        case 0x149854u: goto label_149854;
        case 0x149864u: goto label_149864;
        case 0x149878u: goto label_149878;
        case 0x149898u: goto label_149898;
        case 0x14993cu: goto label_14993c;
        case 0x149948u: goto label_149948;
        case 0x149964u: goto label_149964;
        case 0x149970u: goto label_149970;
        case 0x1499acu: goto label_1499ac;
        case 0x1499d0u: goto label_1499d0;
        case 0x1499f4u: goto label_1499f4;
        case 0x149a4cu: goto label_149a4c;
        case 0x149a5cu: goto label_149a5c;
        case 0x149a70u: goto label_149a70;
        default: break;
    }

    ctx->pc = 0x149738u;

    // 0x149738: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x149738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x14973c: 0x3c0a0074  lui         $t2, 0x74
    ctx->pc = 0x14973cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)116 << 16));
    // 0x149740: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x149740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x149744: 0x3c09ffbf  lui         $t1, 0xFFBF
    ctx->pc = 0x149744u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65471 << 16));
    // 0x149748: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x149748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x14974c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14974cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149750: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x149750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x149754: 0x3c04ff7f  lui         $a0, 0xFF7F
    ctx->pc = 0x149754u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65407 << 16));
    // 0x149758: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x149758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x14975c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x14975cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x149760: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x149760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x149764: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x149764u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x149768: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x149768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x14976c: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x14976cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x149770: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x149770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x149774: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x149774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x149778: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x149778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x14977c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x14977cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x149780: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x149780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x149784: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x149784u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149788: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x149788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14978c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x14978cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149790: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x149790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x149794: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x149794u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x149798: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x149798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14979c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14979cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1497a0: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x1497a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x1497a4: 0x8d427a24  lw          $v0, 0x7A24($t2)
    ctx->pc = 0x1497a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A24u));
    // 0x1497a8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1497a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1497ac: 0x491024  and         $v0, $v0, $t1
    ctx->pc = 0x1497acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 9));
    // 0x1497b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1497b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1497b4: 0xad427a24  sw          $v0, 0x7A24($t2)
    ctx->pc = 0x1497b4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 31268), GPR_U32(ctx, 2));
    // 0x1497b8: 0xae6b02c4  sw          $t3, 0x2C4($s3)
    ctx->pc = 0x1497b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 708), GPR_U32(ctx, 11));
    // 0x1497bc: 0x12a000b8  beqz        $s5, . + 4 + (0xB8 << 2)
    ctx->pc = 0x1497BCu;
    {
        const bool branch_taken_0x1497bc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1497C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497BCu;
        // 0x1497c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497bc) {
            ctx->pc = 0x149AA0u;
            goto label_149aa0;
        }
    }
    ctx->pc = 0x1497C4u;
    // 0x1497c4: 0x39020001  xori        $v0, $t0, 0x1
    ctx->pc = 0x1497c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)1);
    // 0x1497c8: 0x3c160200  lui         $s6, 0x200
    ctx->pc = 0x1497c8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)512 << 16));
    // 0x1497cc: 0x2b00b  movn        $s6, $zero, $v0
    ctx->pc = 0x1497ccu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
    // 0x1497d0: 0xae750280  sw          $s5, 0x280($s3)
    ctx->pc = 0x1497d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 640), GPR_U32(ctx, 21));
    // 0x1497d4: 0x16c0000d  bnez        $s6, . + 4 + (0xD << 2)
    ctx->pc = 0x1497D4u;
    {
        const bool branch_taken_0x1497d4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1497D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1497D4u;
        // 0x1497d8: 0xae770284  sw          $s7, 0x284($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 644), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497d4) {
            ctx->pc = 0x14980Cu;
            goto label_14980c;
        }
    }
    ctx->pc = 0x1497DCu;
    // 0x1497dc: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x1497dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1497e0: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x1497e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x1497e4: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1497E4u;
    {
        const bool branch_taken_0x1497e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1497e4) {
            ctx->pc = 0x1497E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1497E4u;
            // 0x1497e8: 0x96a20008  lhu         $v0, 0x8($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149810u;
            goto label_149810;
        }
    }
    ctx->pc = 0x1497ECu;
    // 0x1497ec: 0x82e30002  lb          $v1, 0x2($s7)
    ctx->pc = 0x1497ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x1497f0: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x1497f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x1497f4: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1497F4u;
    {
        const bool branch_taken_0x1497f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1497f4) {
            ctx->pc = 0x1497F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1497F4u;
            // 0x1497f8: 0x96a20008  lhu         $v0, 0x8($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149810u;
            goto label_149810;
        }
    }
    ctx->pc = 0x1497FCu;
    // 0x1497fc: 0x8ee3000c  lw          $v1, 0xC($s7)
    ctx->pc = 0x1497fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x149800: 0x3c160800  lui         $s6, 0x800
    ctx->pc = 0x149800u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)2048 << 16));
    // 0x149804: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x149804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x149808: 0x43b00b  movn        $s6, $v0, $v1
    ctx->pc = 0x149808u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
label_14980c:
    // 0x14980c: 0x96a20008  lhu         $v0, 0x8($s5)
    ctx->pc = 0x14980cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
label_149810:
    // 0x149810: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x149810u;
    {
        const bool branch_taken_0x149810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149810u;
        // 0x149814: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149810) {
            ctx->pc = 0x149958u;
            goto label_149958;
        }
    }
    ctx->pc = 0x149818u;
    // 0x149818: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x149818u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x14981c: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x14981cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_149820:
    // 0x149820: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x149820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x149824: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x149824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x149828: 0x758821  addu        $s1, $v1, $s5
    ctx->pc = 0x149828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x14982c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x14982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x149830: 0x1680000a  bnez        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x149830u;
    {
        const bool branch_taken_0x149830 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x149834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149830u;
        // 0x149834: 0x519021  addu        $s2, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149830) {
            ctx->pc = 0x14985Cu;
            goto label_14985c;
        }
    }
    ctx->pc = 0x149838u;
    // 0x149838: 0xc052de6  jal         func_14B798
    ctx->pc = 0x149838u;
    SET_GPR_U32(ctx, 31, 0x149840u);
    ctx->pc = 0x14983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149838u;
    // 0x14983c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B798u, 0x149838u, 0x149840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149840u;
label_149840:
    // 0x149840: 0xc052798  jal         func_149E60
    ctx->pc = 0x149840u;
    SET_GPR_U32(ctx, 31, 0x149848u);
    ctx->pc = 0x149844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149840u;
    // 0x149844: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149E60u, 0x149840u, 0x149848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149848u;
label_149848:
    // 0x149848: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x149848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14984c: 0xc052708  jal         func_149C20
    ctx->pc = 0x14984Cu;
    SET_GPR_U32(ctx, 31, 0x149854u);
    ctx->pc = 0x149850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14984Cu;
    // 0x149850: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149C20u, 0x14984Cu, 0x149854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149854u;
label_149854:
    // 0x149854: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x149854u;
    {
        const bool branch_taken_0x149854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149854u;
        // 0x149858: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149854) {
            ctx->pc = 0x149A08u;
            goto label_149a08;
        }
    }
    ctx->pc = 0x14985Cu;
label_14985c:
    // 0x14985c: 0xc0524c4  jal         func_149310
    ctx->pc = 0x14985Cu;
    SET_GPR_U32(ctx, 31, 0x149864u);
    ctx->pc = 0x149310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149310u, 0x14985Cu, 0x149864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149864u;
label_149864:
    // 0x149864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x149864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149868: 0x12000069  beqz        $s0, . + 4 + (0x69 << 2)
    ctx->pc = 0x149868u;
    {
        const bool branch_taken_0x149868 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149868u;
        // 0x14986c: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149868) {
            ctx->pc = 0x149A10u;
            goto label_149a10;
        }
    }
    ctx->pc = 0x149870u;
    // 0x149870: 0xc07e290  jal         func_1F8A40
    ctx->pc = 0x149870u;
    SET_GPR_U32(ctx, 31, 0x149878u);
    ctx->pc = 0x149874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149870u;
    // 0x149874: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A40u, 0x149870u, 0x149878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149878u;
label_149878:
    // 0x149878: 0x8e6a02c8  lw          $t2, 0x2C8($s3)
    ctx->pc = 0x149878u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
    // 0x14987c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14987cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149880: 0x8fa80024  lw          $t0, 0x24($sp)
    ctx->pc = 0x149880u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x149884: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x149884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149888: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x149888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14988c: 0x36c71080  ori         $a3, $s6, 0x1080
    ctx->pc = 0x14988cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)4224);
    // 0x149890: 0xc052108  jal         func_148420
    ctx->pc = 0x149890u;
    SET_GPR_U32(ctx, 31, 0x149898u);
    ctx->pc = 0x149894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149890u;
    // 0x149894: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148420u, 0x149890u, 0x149898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149898u;
label_149898:
    // 0x149898: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x149898u;
    {
        const bool branch_taken_0x149898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149898u;
        // 0x14989c: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149898) {
            ctx->pc = 0x149A2Cu;
            goto label_149a2c;
        }
    }
    ctx->pc = 0x1498A0u;
    // 0x1498a0: 0xae110414  sw          $s1, 0x414($s0)
    ctx->pc = 0x1498a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1044), GPR_U32(ctx, 17));
    // 0x1498a4: 0x92220058  lbu         $v0, 0x58($s1)
    ctx->pc = 0x1498a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1498a8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1498A8u;
    {
        const bool branch_taken_0x1498a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1498a8) {
            ctx->pc = 0x1498ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1498A8u;
            // 0x1498ac: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1498CCu;
            goto label_1498cc;
        }
    }
    ctx->pc = 0x1498B0u;
    // 0x1498b0: 0x8e020380  lw          $v0, 0x380($s0)
    ctx->pc = 0x1498b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x1498b4: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x1498b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x1498b8: 0xae020380  sw          $v0, 0x380($s0)
    ctx->pc = 0x1498b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 2));
    // 0x1498bc: 0x8e630254  lw          $v1, 0x254($s3)
    ctx->pc = 0x1498bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 596)));
    // 0x1498c0: 0x7e1825  or          $v1, $v1, $fp
    ctx->pc = 0x1498c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 30));
    // 0x1498c4: 0xae630254  sw          $v1, 0x254($s3)
    ctx->pc = 0x1498c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 596), GPR_U32(ctx, 3));
    // 0x1498c8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1498c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1498cc:
    // 0x1498cc: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x1498ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1498d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1498D0u;
    {
        const bool branch_taken_0x1498d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1498D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1498D0u;
        // 0x1498d4: 0x3c034000  lui         $v1, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1498d0) {
            ctx->pc = 0x1498E4u;
            goto label_1498e4;
        }
    }
    ctx->pc = 0x1498D8u;
    // 0x1498d8: 0x8e020380  lw          $v0, 0x380($s0)
    ctx->pc = 0x1498d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x1498dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1498dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1498e0: 0xae020380  sw          $v0, 0x380($s0)
    ctx->pc = 0x1498e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 2));
label_1498e4:
    // 0x1498e4: 0x92230043  lbu         $v1, 0x43($s1)
    ctx->pc = 0x1498e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 67)));
    // 0x1498e8: 0xa203040c  sb          $v1, 0x40C($s0)
    ctx->pc = 0x1498e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1036), (uint8_t)GPR_U32(ctx, 3));
    // 0x1498ec: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1498ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1498f0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1498f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1498f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1498f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1498f8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1498F8u;
    {
        const bool branch_taken_0x1498f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1498FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1498F8u;
        // 0x1498fc: 0x3c030080  lui         $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1498f8) {
            ctx->pc = 0x14990Cu;
            goto label_14990c;
        }
    }
    ctx->pc = 0x149900u;
    // 0x149900: 0x8e020380  lw          $v0, 0x380($s0)
    ctx->pc = 0x149900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 896)));
    // 0x149904: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x149904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x149908: 0xae020380  sw          $v0, 0x380($s0)
    ctx->pc = 0x149908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 2));
label_14990c:
    // 0x14990c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x14990cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x149910: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x149910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x149914: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x149914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x149918: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149918u;
    {
        const bool branch_taken_0x149918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149918u;
        // 0x14991c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149918) {
            ctx->pc = 0x14992Cu;
            goto label_14992c;
        }
    }
    ctx->pc = 0x149920u;
    // 0x149920: 0x8e020410  lw          $v0, 0x410($s0)
    ctx->pc = 0x149920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1040)));
    // 0x149924: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x149924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x149928: 0xae020410  sw          $v0, 0x410($s0)
    ctx->pc = 0x149928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 2));
label_14992c:
    // 0x14992c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x14992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149930: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x149930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149934: 0xc052d90  jal         func_14B640
    ctx->pc = 0x149934u;
    SET_GPR_U32(ctx, 31, 0x14993Cu);
    ctx->pc = 0x149938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149934u;
    // 0x149938: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B640u, 0x149934u, 0x14993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14993Cu;
label_14993c:
    // 0x14993c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14993cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149940: 0xc07e298  jal         func_1F8A60
    ctx->pc = 0x149940u;
    SET_GPR_U32(ctx, 31, 0x149948u);
    ctx->pc = 0x149944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149940u;
    // 0x149944: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A60u, 0x149940u, 0x149948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149948u;
label_149948:
    // 0x149948: 0x96a20008  lhu         $v0, 0x8($s5)
    ctx->pc = 0x149948u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x14994c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x14994cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x149950: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
    ctx->pc = 0x149950u;
    {
        const bool branch_taken_0x149950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149950u;
        // 0x149954: 0x141080  sll         $v0, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149950) {
            ctx->pc = 0x149820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149820;
        }
    }
    ctx->pc = 0x149958u;
label_149958:
    // 0x149958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x149958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14995c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14995Cu;
    SET_GPR_U32(ctx, 31, 0x149964u);
    ctx->pc = 0x149960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14995Cu;
    // 0x149960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14995Cu, 0x149964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149964u;
label_149964:
    // 0x149964: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x149964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149968: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x149968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14996c: 0x0  nop
    ctx->pc = 0x14996cu;
    // NOP
label_149970:
    // 0x149970: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x149970u;
    {
        const bool branch_taken_0x149970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x149974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149970u;
        // 0x149974: 0x3c040100  lui         $a0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149970) {
            ctx->pc = 0x149990u;
            goto label_149990;
        }
    }
    ctx->pc = 0x149978u;
    // 0x149978: 0x8ca20414  lw          $v0, 0x414($a1)
    ctx->pc = 0x149978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1044)));
    // 0x14997c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x14997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x149980: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x149980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x149984: 0x5060fffa  beql        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x149984u;
    {
        const bool branch_taken_0x149984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x149984) {
            ctx->pc = 0x149988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149984u;
            // 0x149988: 0x8ca50404  lw          $a1, 0x404($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149970;
        }
    }
    ctx->pc = 0x14998Cu;
    // 0x14998c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x14998cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149990:
    // 0x149990: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x149990u;
    {
        const bool branch_taken_0x149990 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x149994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149990u;
        // 0x149994: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149990) {
            ctx->pc = 0x1499A4u;
            goto label_1499a4;
        }
    }
    ctx->pc = 0x149998u;
    // 0x149998: 0x8e620250  lw          $v0, 0x250($s3)
    ctx->pc = 0x149998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 592)));
    // 0x14999c: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x14999cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x1499a0: 0xae620250  sw          $v0, 0x250($s3)
    ctx->pc = 0x1499a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 592), GPR_U32(ctx, 2));
label_1499a4:
    // 0x1499a4: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1499A4u;
    SET_GPR_U32(ctx, 31, 0x1499ACu);
    ctx->pc = 0x1499A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1499A4u;
    // 0x1499a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1499A4u, 0x1499ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1499ACu;
label_1499ac:
    // 0x1499ac: 0x8c430388  lw          $v1, 0x388($v0)
    ctx->pc = 0x1499acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
    // 0x1499b0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1499b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1499b4: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x1499b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1499b8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1499b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1499bc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1499bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1499c0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1499C0u;
    {
        const bool branch_taken_0x1499c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1499c0) {
            ctx->pc = 0x1499ECu;
            goto label_1499ec;
        }
    }
    ctx->pc = 0x1499C8u;
    // 0x1499c8: 0xc0530ca  jal         func_14C328
    ctx->pc = 0x1499C8u;
    SET_GPR_U32(ctx, 31, 0x1499D0u);
    ctx->pc = 0x1499CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1499C8u;
    // 0x1499cc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14C328u, 0x1499C8u, 0x1499D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1499D0u;
label_1499d0:
    // 0x1499d0: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1499D0u;
    {
        const bool branch_taken_0x1499d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1499d0) {
            ctx->pc = 0x1499D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1499D0u;
            // 0x1499d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149A54u;
            goto label_149a54;
        }
    }
    ctx->pc = 0x1499D8u;
    // 0x1499d8: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x1499d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x1499dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1499dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1499e0: 0x8c837a24  lw          $v1, 0x7A24($a0)
    ctx->pc = 0x1499e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A24u));
    // 0x1499e4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1499E4u;
    {
        const bool branch_taken_0x1499e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1499E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1499E4u;
        // 0x1499e8: 0x3c040020  lui         $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1499e4) {
            ctx->pc = 0x149A1Cu;
            goto label_149a1c;
        }
    }
    ctx->pc = 0x1499ECu;
label_1499ec:
    // 0x1499ec: 0xc052ff8  jal         func_14BFE0
    ctx->pc = 0x1499ECu;
    SET_GPR_U32(ctx, 31, 0x1499F4u);
    ctx->pc = 0x1499F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1499ECu;
    // 0x1499f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14BFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14BFE0u, 0x1499ECu, 0x1499F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1499F4u;
label_1499f4:
    // 0x1499f4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1499F4u;
    {
        const bool branch_taken_0x1499f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1499F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1499F4u;
        // 0x1499f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1499f4) {
            ctx->pc = 0x149A54u;
            goto label_149a54;
        }
    }
    ctx->pc = 0x1499FCu;
    // 0x1499fc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1499fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x149a00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x149A00u;
    {
        const bool branch_taken_0x149a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A00u;
        // 0x149a04: 0x3c040020  lui         $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a00) {
            ctx->pc = 0x149A14u;
            goto label_149a14;
        }
    }
    ctx->pc = 0x149A08u;
label_149a08:
    // 0x149a08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x149A08u;
    {
        const bool branch_taken_0x149a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A08u;
        // 0x149a0c: 0x3c040080  lui         $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a08) {
            ctx->pc = 0x149A14u;
            goto label_149a14;
        }
    }
    ctx->pc = 0x149A10u;
label_149a10:
    // 0x149a10: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x149a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_149a14:
    // 0x149a14: 0x8c437a24  lw          $v1, 0x7A24($v0)
    ctx->pc = 0x149a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31268)));
    // 0x149a18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x149a18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_149a1c:
    // 0x149a1c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x149a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x149a20: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x149a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x149a24: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x149A24u;
    {
        const bool branch_taken_0x149a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A24u;
        // 0x149a28: 0xac837a24  sw          $v1, 0x7A24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 31268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a24) {
            ctx->pc = 0x149AA0u;
            goto label_149aa0;
        }
    }
    ctx->pc = 0x149A2Cu;
label_149a2c:
    // 0x149a2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x149a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a30: 0x8c627a24  lw          $v0, 0x7A24($v1)
    ctx->pc = 0x149a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31268)));
    // 0x149a34: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x149a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x149a38: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x149a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x149a3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x149a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x149a40: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x149a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x149a44: 0xc07e298  jal         func_1F8A60
    ctx->pc = 0x149A44u;
    SET_GPR_U32(ctx, 31, 0x149A4Cu);
    ctx->pc = 0x149A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A44u;
    // 0x149a48: 0xac627a24  sw          $v0, 0x7A24($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 31268), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8A60u, 0x149A44u, 0x149A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A4Cu;
label_149a4c:
    // 0x149a4c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x149A4Cu;
    {
        const bool branch_taken_0x149a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A4Cu;
        // 0x149a50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a4c) {
            ctx->pc = 0x149AA0u;
            goto label_149aa0;
        }
    }
    ctx->pc = 0x149A54u;
label_149a54:
    // 0x149a54: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x149A54u;
    SET_GPR_U32(ctx, 31, 0x149A5Cu);
    ctx->pc = 0x149A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x149A54u;
    // 0x149a58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x149A54u, 0x149A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x149A5Cu;
label_149a5c:
    // 0x149a5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x149a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149a60: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x149A60u;
    {
        const bool branch_taken_0x149a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x149A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149A60u;
        // 0x149a64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149a60) {
            ctx->pc = 0x149AA0u;
            goto label_149aa0;
        }
    }
    ctx->pc = 0x149A68u;
    // 0x149a68: 0x8c830414  lw          $v1, 0x414($a0)
    ctx->pc = 0x149a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1044)));
    // 0x149a6c: 0x0  nop
    ctx->pc = 0x149a6cu;
    // NOP
label_149a70:
    // 0x149a70: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x149a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x149a74: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x149a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x149a78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x149a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x149a7c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x149A7Cu;
    {
        const bool branch_taken_0x149a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x149a7c) {
            ctx->pc = 0x149A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149A7Cu;
            // 0x149a80: 0x8c840404  lw          $a0, 0x404($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149A94u;
            goto label_149a94;
        }
    }
    ctx->pc = 0x149A84u;
    // 0x149a84: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x149a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x149a88: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x149a88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x149a8c: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x149a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
    // 0x149a90: 0x8c840404  lw          $a0, 0x404($a0)
    ctx->pc = 0x149a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1028)));
label_149a94:
    // 0x149a94: 0x5480fff6  bnel        $a0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x149A94u;
    {
        const bool branch_taken_0x149a94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x149a94) {
            ctx->pc = 0x149A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x149A94u;
            // 0x149a98: 0x8c830414  lw          $v1, 0x414($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1044)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x149A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_149a70;
        }
    }
    ctx->pc = 0x149A9Cu;
    // 0x149a9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x149a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_149aa0:
    // 0x149aa0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x149aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x149aa4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x149aa4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x149aa8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x149aa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x149aac: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x149aacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x149ab0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x149ab0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x149ab4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x149ab4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x149ab8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x149ab8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x149abc: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x149abcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x149ac0: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x149ac0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x149ac4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x149ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x149ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x149AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149AC8u;
        // 0x149acc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149AD0u;
    // 0x149ad0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x149ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x149ad4: 0x0  nop
    ctx->pc = 0x149ad4u;
    // NOP
    ctx->pc = 0x149ad8u;
}
