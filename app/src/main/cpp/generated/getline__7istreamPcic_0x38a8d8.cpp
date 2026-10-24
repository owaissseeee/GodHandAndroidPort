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

// Function: getline__7istreamPcic
// Address: 0x38a8d8 - 0x38aa60
void getline__7istreamPcic_0x38a8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getline__7istreamPcic_0x38a8d8");
#endif

    switch (ctx->pc) {
        case 0x38a96cu: goto label_38a96c;
        case 0x38a99cu: goto label_38a99c;
        case 0x38a9b0u: goto label_38a9b0;
        case 0x38aa08u: goto label_38aa08;
        default: break;
    }

    ctx->pc = 0x38a8d8u;

    // 0x38a8d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x38a8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x38a8dc: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x38a8dcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x38a8e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x38a8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x38a8e4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x38a8e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x38a8e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38a8e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a8ec: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x38a8ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x38a8f0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x38a8f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a8f4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x38a8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x38a8f8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x38a8f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a8fc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x38a8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x38a900: 0x78e03  sra         $s1, $a3, 24
    ctx->pc = 0x38a900u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 7), 24));
    // 0x38a904: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x38a904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x38a908: 0x1e400007  bgtz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x38A908u;
    {
        const bool branch_taken_0x38a908 = (GPR_S64(ctx, 18) > 0);
        ctx->pc = 0x38A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A908u;
        // 0x38a90c: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a908) {
            ctx->pc = 0x38A928u;
            goto label_38a928;
        }
    }
    ctx->pc = 0x38A910u;
    // 0x38a910: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x38a910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a914: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38a914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a918: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x38a918u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x38a91c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x38a91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x38a920: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x38A920u;
    {
        const bool branch_taken_0x38a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A920u;
        // 0x38a924: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a920) {
            ctx->pc = 0x38AA40u;
            goto label_38aa40;
        }
    }
    ctx->pc = 0x38A928u;
label_38a928:
    // 0x38a928: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38a928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a92c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x38a92cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x38a930: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A930u;
    {
        const bool branch_taken_0x38a930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A930u;
        // 0x38a934: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a930) {
            ctx->pc = 0x38A944u;
            goto label_38a944;
        }
    }
    ctx->pc = 0x38A938u;
    // 0x38a938: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x38a938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a93c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x38A93Cu;
    {
        const bool branch_taken_0x38a93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A93Cu;
        // 0x38a940: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a93c) {
            ctx->pc = 0x38A970u;
            goto label_38a970;
        }
    }
    ctx->pc = 0x38A944u;
label_38a944:
    // 0x38a944: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x38a944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x38a948: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x38A948u;
    {
        const bool branch_taken_0x38a948 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A948u;
        // 0x38a94c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a948) {
            ctx->pc = 0x38A970u;
            goto label_38a970;
        }
    }
    ctx->pc = 0x38A950u;
    // 0x38a950: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x38a950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x38a954: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x38a954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x38a958: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x38a958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x38a95c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A95Cu;
    {
        const bool branch_taken_0x38a95c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x38A960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A95Cu;
        // 0x38a960: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a95c) {
            ctx->pc = 0x38A970u;
            goto label_38a970;
        }
    }
    ctx->pc = 0x38A964u;
    // 0x38a964: 0xc0e249a  jal         func_389268
    ctx->pc = 0x38A964u;
    SET_GPR_U32(ctx, 31, 0x38A96Cu);
    ctx->pc = 0x38A968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A964u;
    // 0x38a968: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x38A964u, 0x38A96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A96Cu;
label_38a96c:
    // 0x38a96c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38a96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a970:
    // 0x38a970: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x38A970u;
    {
        const bool branch_taken_0x38a970 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A970u;
        // 0x38a974: 0x2646ffff  addiu       $a2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a970) {
            ctx->pc = 0x38AA10u;
            goto label_38aa10;
        }
    }
    ctx->pc = 0x38A978u;
    // 0x38a978: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x38a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a97c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x38a97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a980: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x38a980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a984: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x38a984u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x38a988: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x38a988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38a98c: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x38a98cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a990: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x38a990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38a994: 0xc0e3896  jal         func_38E258
    ctx->pc = 0x38A994u;
    SET_GPR_U32(ctx, 31, 0x38A99Cu);
    ctx->pc = 0x38A998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A994u;
    // 0x38a998: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E258u, 0x38A994u, 0x38A99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A99Cu;
label_38a99c:
    // 0x38a99c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x38a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a9a0: 0x10730006  beq         $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x38A9A0u;
    {
        const bool branch_taken_0x38a9a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x38A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9A0u;
        // 0x38a9a4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a9a0) {
            ctx->pc = 0x38A9BCu;
            goto label_38a9bc;
        }
    }
    ctx->pc = 0x38A9A8u;
    // 0x38a9a8: 0xc0e3ab8  jal         func_38EAE0
    ctx->pc = 0x38A9A8u;
    SET_GPR_U32(ctx, 31, 0x38A9B0u);
    ctx->pc = 0x38A9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A9A8u;
    // 0x38a9ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EAE0u, 0x38A9A8u, 0x38A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A9B0u;
label_38a9b0:
    // 0x38a9b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x38a9b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38a9b4: 0x1473000c  bne         $v1, $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x38A9B4u;
    {
        const bool branch_taken_0x38a9b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x38A9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9B4u;
        // 0x38a9b8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a9b4) {
            ctx->pc = 0x38A9E8u;
            goto label_38a9e8;
        }
    }
    ctx->pc = 0x38A9BCu;
label_38a9bc:
    // 0x38a9bc: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x38a9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a9c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x38a9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38a9c4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x38a9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38a9c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x38a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x38a9cc: 0x90c2001a  lbu         $v0, 0x1A($a2)
    ctx->pc = 0x38a9ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 26)));
    // 0x38a9d0: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x38a9d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x38a9d4: 0x85180a  movz        $v1, $a0, $a1
    ctx->pc = 0x38a9d4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x38a9d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x38a9d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x38a9dc: 0xa0c2001a  sb          $v0, 0x1A($a2)
    ctx->pc = 0x38a9dcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 26), (uint8_t)GPR_U32(ctx, 2));
    // 0x38a9e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x38A9E0u;
    {
        const bool branch_taken_0x38a9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9E0u;
        // 0x38a9e4: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a9e0) {
            ctx->pc = 0x38AA20u;
            goto label_38aa20;
        }
    }
    ctx->pc = 0x38A9E8u;
label_38a9e8:
    // 0x38a9e8: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x38a9e8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x38a9ec: 0x1071000c  beq         $v1, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x38A9ECu;
    {
        const bool branch_taken_0x38a9ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x38A9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A9ECu;
        // 0x38a9f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a9ec) {
            ctx->pc = 0x38AA20u;
            goto label_38aa20;
        }
    }
    ctx->pc = 0x38A9F4u;
    // 0x38a9f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x38a9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x38a9f8: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x38a9f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x38a9fc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x38a9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x38aa00: 0xc0e2d20  jal         func_38B480
    ctx->pc = 0x38AA00u;
    SET_GPR_U32(ctx, 31, 0x38AA08u);
    ctx->pc = 0x38AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38AA00u;
    // 0x38aa04: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B480u, 0x38AA00u, 0x38AA08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38AA08u;
label_38aa08:
    // 0x38aa08: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x38AA08u;
    {
        const bool branch_taken_0x38aa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA08u;
        // 0x38aa0c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aa08) {
            ctx->pc = 0x38AA20u;
            goto label_38aa20;
        }
    }
    ctx->pc = 0x38AA10u;
label_38aa10:
    // 0x38aa10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x38aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x38aa14: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x38aa14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x38aa18: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x38aa18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x38aa1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x38aa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_38aa20:
    // 0x38aa20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x38aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38aa24: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x38aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x38aa28: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38AA28u;
    {
        const bool branch_taken_0x38aa28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x38AA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA28u;
        // 0x38aa2c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38aa28) {
            ctx->pc = 0x38AA3Cu;
            goto label_38aa3c;
        }
    }
    ctx->pc = 0x38AA30u;
    // 0x38aa30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x38aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x38aa34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38aa34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x38aa38: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x38aa38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_38aa3c:
    // 0x38aa3c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x38aa3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38aa40:
    // 0x38aa40: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x38aa40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x38aa44: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x38aa44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x38aa48: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x38aa48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x38aa4c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x38aa4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38aa50: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x38aa50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38aa54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x38aa54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38aa58: 0x3e00008  jr          $ra
    ctx->pc = 0x38AA58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38AA58u;
        // 0x38aa5c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38AA58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38AA60u;
}
