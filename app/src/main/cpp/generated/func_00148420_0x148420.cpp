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

// Function: func_00148420
// Address: 0x148420 - 0x1485a0
void func_00148420_0x148420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00148420_0x148420");
#endif

    switch (ctx->pc) {
        case 0x14847cu: goto label_14847c;
        case 0x14849cu: goto label_14849c;
        case 0x1484b4u: goto label_1484b4;
        case 0x1484ccu: goto label_1484cc;
        case 0x1484e0u: goto label_1484e0;
        case 0x1484f8u: goto label_1484f8;
        case 0x148508u: goto label_148508;
        case 0x148530u: goto label_148530;
        case 0x148550u: goto label_148550;
        case 0x14856cu: goto label_14856c;
        case 0x148580u: goto label_148580;
        default: break;
    }

    ctx->pc = 0x148420u;

    // 0x148420: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x148420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x148424: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x148424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x148428: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x148428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14842c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14842cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148430: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x148430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x148434: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x148434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148438: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x148438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x14843c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x14843cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148440: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x148440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x148444: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x148444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148448: 0xae060400  sw          $a2, 0x400($s0)
    ctx->pc = 0x148448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1024), GPR_U32(ctx, 6));
    // 0x14844c: 0xa2000384  sb          $zero, 0x384($s0)
    ctx->pc = 0x14844cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 900), (uint8_t)GPR_U32(ctx, 0));
    // 0x148450: 0xae120380  sw          $s2, 0x380($s0)
    ctx->pc = 0x148450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 896), GPR_U32(ctx, 18));
    // 0x148454: 0xae000410  sw          $zero, 0x410($s0)
    ctx->pc = 0x148454u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1040), GPR_U32(ctx, 0));
    // 0x148458: 0xae050388  sw          $a1, 0x388($s0)
    ctx->pc = 0x148458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 904), GPR_U32(ctx, 5));
    // 0x14845c: 0x8e030408  lw          $v1, 0x408($s0)
    ctx->pc = 0x14845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
    // 0x148460: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x148460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x148464: 0x94a20008  lhu         $v0, 0x8($a1)
    ctx->pc = 0x148464u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x148468: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x148468u;
    {
        const bool branch_taken_0x148468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148468u;
        // 0x14846c: 0xa2020386  sb          $v0, 0x386($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 902), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148468) {
            ctx->pc = 0x14847Cu;
            goto label_14847c;
        }
    }
    ctx->pc = 0x148470u;
    // 0x148470: 0x8c64ffe0  lw          $a0, -0x20($v1)
    ctx->pc = 0x148470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967264)));
    // 0x148474: 0xc0aa5a0  jal         func_2A9680
    ctx->pc = 0x148474u;
    SET_GPR_U32(ctx, 31, 0x14847Cu);
    ctx->pc = 0x148478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148474u;
    // 0x148478: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9680u, 0x148474u, 0x14847Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14847Cu;
label_14847c:
    // 0x14847c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x14847cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x148480: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x148480u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x148484: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x148484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x148488: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x148488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x14848c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x14848Cu;
    {
        const bool branch_taken_0x14848c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14848c) {
            ctx->pc = 0x148500u;
            goto label_148500;
        }
    }
    ctx->pc = 0x148494u;
    // 0x148494: 0xc05544e  jal         func_155138
    ctx->pc = 0x148494u;
    SET_GPR_U32(ctx, 31, 0x14849Cu);
    ctx->pc = 0x148498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148494u;
    // 0x148498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155138u, 0x148494u, 0x14849Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14849Cu;
label_14849c:
    // 0x14849c: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x14849Cu;
    {
        const bool branch_taken_0x14849c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1484A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14849Cu;
        // 0x1484a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14849c) {
            ctx->pc = 0x1484D4u;
            goto label_1484d4;
        }
    }
    ctx->pc = 0x1484A4u;
    // 0x1484a4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1484a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1484a8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1484a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1484ac: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x1484ACu;
    SET_GPR_U32(ctx, 31, 0x1484B4u);
    ctx->pc = 0x1484B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1484ACu;
    // 0x1484b0: 0x8c463cf0  lw          $a2, 0x3CF0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15600)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x1484ACu, 0x1484B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1484B4u;
label_1484b4:
    // 0x1484b4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1484B4u;
    {
        const bool branch_taken_0x1484b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1484B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1484B4u;
        // 0x1484b8: 0xae020408  sw          $v0, 0x408($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1484b4) {
            ctx->pc = 0x148540u;
            goto label_148540;
        }
    }
    ctx->pc = 0x1484BCu;
    // 0x1484bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1484bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1484c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484c4: 0xc0552a4  jal         func_154A90
    ctx->pc = 0x1484C4u;
    SET_GPR_U32(ctx, 31, 0x1484CCu);
    ctx->pc = 0x1484C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1484C4u;
    // 0x1484c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A90u, 0x1484C4u, 0x1484CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1484CCu;
label_1484cc:
    // 0x1484cc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1484CCu;
    {
        const bool branch_taken_0x1484cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1484D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1484CCu;
        // 0x1484d0: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1484cc) {
            ctx->pc = 0x148554u;
            goto label_148554;
        }
    }
    ctx->pc = 0x1484D4u;
label_1484d4:
    // 0x1484d4: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1484d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1484d8: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x1484D8u;
    SET_GPR_U32(ctx, 31, 0x1484E0u);
    ctx->pc = 0x1484DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1484D8u;
    // 0x1484dc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x1484D8u, 0x1484E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1484E0u;
label_1484e0:
    // 0x1484e0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1484E0u;
    {
        const bool branch_taken_0x1484e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1484E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1484E0u;
        // 0x1484e4: 0xae020408  sw          $v0, 0x408($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1484e0) {
            ctx->pc = 0x148540u;
            goto label_148540;
        }
    }
    ctx->pc = 0x1484E8u;
    // 0x1484e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1484e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484ec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1484ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1484f0: 0xc0552a4  jal         func_154A90
    ctx->pc = 0x1484F0u;
    SET_GPR_U32(ctx, 31, 0x1484F8u);
    ctx->pc = 0x1484F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1484F0u;
    // 0x1484f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154A90u, 0x1484F0u, 0x1484F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1484F8u;
label_1484f8:
    // 0x1484f8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1484F8u;
    {
        const bool branch_taken_0x1484f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1484FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1484F8u;
        // 0x1484fc: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1484f8) {
            ctx->pc = 0x148554u;
            goto label_148554;
        }
    }
    ctx->pc = 0x148500u;
label_148500:
    // 0x148500: 0xc055492  jal         func_155248
    ctx->pc = 0x148500u;
    SET_GPR_U32(ctx, 31, 0x148508u);
    ctx->pc = 0x148504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148500u;
    // 0x148504: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155248u, 0x148500u, 0x148508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148508u;
label_148508:
    // 0x148508: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x148508u;
    {
        const bool branch_taken_0x148508 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x14850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148508u;
        // 0x14850c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148508) {
            ctx->pc = 0x148520u;
            goto label_148520;
        }
    }
    ctx->pc = 0x148510u;
    // 0x148510: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x148510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x148514: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x148514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x148518: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x148518u;
    {
        const bool branch_taken_0x148518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14851Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148518u;
        // 0x14851c: 0x8c463cf0  lw          $a2, 0x3CF0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148518) {
            ctx->pc = 0x148528u;
            goto label_148528;
        }
    }
    ctx->pc = 0x148520u;
label_148520:
    // 0x148520: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x148520u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148524: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x148524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_148528:
    // 0x148528: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x148528u;
    SET_GPR_U32(ctx, 31, 0x148530u);
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x148528u, 0x148530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148530u;
label_148530:
    // 0x148530: 0xae020408  sw          $v0, 0x408($s0)
    ctx->pc = 0x148530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1032), GPR_U32(ctx, 2));
    // 0x148534: 0x8e050408  lw          $a1, 0x408($s0)
    ctx->pc = 0x148534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1032)));
    // 0x148538: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x148538u;
    {
        const bool branch_taken_0x148538 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x14853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148538u;
        // 0x14853c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148538) {
            ctx->pc = 0x148548u;
            goto label_148548;
        }
    }
    ctx->pc = 0x148540u;
label_148540:
    // 0x148540: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x148540u;
    {
        const bool branch_taken_0x148540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148540u;
        // 0x148544: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148540) {
            ctx->pc = 0x148584u;
            goto label_148584;
        }
    }
    ctx->pc = 0x148548u;
label_148548:
    // 0x148548: 0xc0554d6  jal         func_155358
    ctx->pc = 0x148548u;
    SET_GPR_U32(ctx, 31, 0x148550u);
    ctx->pc = 0x14854Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148548u;
    // 0x14854c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155358u, 0x148548u, 0x148550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148550u;
label_148550:
    // 0x148550: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x148550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
label_148554:
    // 0x148554: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x148554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x148558: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x148558u;
    {
        const bool branch_taken_0x148558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148558u;
        // 0x14855c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x148558) {
            ctx->pc = 0x148574u;
            goto label_148574;
        }
    }
    ctx->pc = 0x148560u;
    // 0x148560: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x148560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148564: 0xc0523d4  jal         func_148F50
    ctx->pc = 0x148564u;
    SET_GPR_U32(ctx, 31, 0x14856Cu);
    ctx->pc = 0x148568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148564u;
    // 0x148568: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148F50u, 0x148564u, 0x14856Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14856Cu;
label_14856c:
    // 0x14856c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14856Cu;
    {
        const bool branch_taken_0x14856c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x148570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14856Cu;
        // 0x148570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14856c) {
            ctx->pc = 0x148584u;
            goto label_148584;
        }
    }
    ctx->pc = 0x148574u;
label_148574:
    // 0x148574: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x148574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x148578: 0xc05242c  jal         func_1490B0
    ctx->pc = 0x148578u;
    SET_GPR_U32(ctx, 31, 0x148580u);
    ctx->pc = 0x14857Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x148578u;
    // 0x14857c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1490B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1490B0u, 0x148578u, 0x148580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x148580u;
label_148580:
    // 0x148580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x148580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_148584:
    // 0x148584: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x148584u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x148588: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x148588u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14858c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14858cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x148590: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x148590u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x148594: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x148594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x148598: 0x3e00008  jr          $ra
    ctx->pc = 0x148598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x148598u;
        // 0x14859c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x148598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1485A0u;
}
