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

// Function: sceGsResetGraph
// Address: 0x3951f8 - 0x395388
void sceGsResetGraph_0x3951f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceGsResetGraph_0x3951f8");
#endif

    switch (ctx->pc) {
        case 0x39526cu: goto label_39526c;
        case 0x3952a4u: goto label_3952a4;
        case 0x3952bcu: goto label_3952bc;
        case 0x3952c8u: goto label_3952c8;
        case 0x395318u: goto label_395318;
        default: break;
    }

    ctx->pc = 0x3951f8u;

    // 0x3951f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3951f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3951fc: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3951fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x395200: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x395200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x395204: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x395204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x395208: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x395208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x39520c: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x39520cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x395210: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x395210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x395214: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x395214u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x395218: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x395218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x39521c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x39521cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x395220: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x395220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x395224: 0x58c03  sra         $s1, $a1, 16
    ctx->pc = 0x395224u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 5), 16));
    // 0x395228: 0x69403  sra         $s2, $a2, 16
    ctx->pc = 0x395228u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 6), 16));
    // 0x39522c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x395230: 0x10820031  beq         $a0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x395230u;
    {
        const bool branch_taken_0x395230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x395234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395230u;
        // 0x395234: 0x79c03  sra         $s3, $a3, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395230) {
            ctx->pc = 0x3952F8u;
            goto label_3952f8;
        }
    }
    ctx->pc = 0x395238u;
    // 0x395238: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x395238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x39523c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x39523Cu;
    {
        const bool branch_taken_0x39523c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39523c) {
            ctx->pc = 0x395240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39523Cu;
            // 0x395240: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x395254u;
            goto label_395254;
        }
    }
    ctx->pc = 0x395244u;
    // 0x395244: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x395244u;
    {
        const bool branch_taken_0x395244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x395248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395244u;
        // 0x395248: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395244) {
            ctx->pc = 0x395264u;
            goto label_395264;
        }
    }
    ctx->pc = 0x39524Cu;
    // 0x39524c: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x39524Cu;
    {
        const bool branch_taken_0x39524c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39524Cu;
        // 0x395250: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39524c) {
            ctx->pc = 0x395374u;
            goto label_395374;
        }
    }
    ctx->pc = 0x395254u;
label_395254:
    // 0x395254: 0x1082002e  beq         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x395254u;
    {
        const bool branch_taken_0x395254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x395258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395254u;
        // 0x395258: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395254) {
            ctx->pc = 0x395310u;
            goto label_395310;
        }
    }
    ctx->pc = 0x39525Cu;
    // 0x39525c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x39525Cu;
    {
        const bool branch_taken_0x39525c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x395260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39525Cu;
        // 0x395260: 0xdfb30030  ld          $s3, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39525c) {
            ctx->pc = 0x395374u;
            goto label_395374;
        }
    }
    ctx->pc = 0x395264u;
label_395264:
    // 0x395264: 0xc0e54e2  jal         func_395388
    ctx->pc = 0x395264u;
    SET_GPR_U32(ctx, 31, 0x39526Cu);
    ctx->pc = 0x395388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395388u, 0x395264u, 0x39526Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39526Cu;
label_39526c:
    // 0x39526c: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x39526cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x395270: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x395270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x395274: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x395274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x395278: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x395278u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39527c: 0xfc640000  sd          $a0, 0x0($v1)
    ctx->pc = 0x39527cu;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x395280: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x395280u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x395284: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x395284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x395288: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x395288u;
    SET_GPR_U64(ctx, 2, runtime->Load64(rdram, ctx, 0x12001000u));
    // 0x39528c: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x39528cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x395290: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x395290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x395294: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x395294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x395298: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x395298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x39529c: 0xc0ebff8  jal         func_3AFFE0
    ctx->pc = 0x39529Cu;
    SET_GPR_U32(ctx, 31, 0x3952A4u);
    ctx->pc = 0x3952A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39529Cu;
    // 0x3952a0: 0xa6020006  sh          $v0, 0x6($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFFE0u, 0x39529Cu, 0x3952A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3952A4u;
label_3952a4:
    // 0x3952a4: 0x13182b  sltu        $v1, $zero, $s3
    ctx->pc = 0x3952a4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3952a8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3952a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3952ac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3952ACu;
    {
        const bool branch_taken_0x3952ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3952B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3952ACu;
        // 0x3952b0: 0xa6030004  sh          $v1, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3952ac) {
            ctx->pc = 0x3952D0u;
            goto label_3952d0;
        }
    }
    ctx->pc = 0x3952B4u;
    // 0x3952b4: 0xc0ec1b6  jal         func_3B06D8
    ctx->pc = 0x3952B4u;
    SET_GPR_U32(ctx, 31, 0x3952BCu);
    ctx->pc = 0x3952B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3952B4u;
    // 0x3952b8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B06D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B06D8u, 0x3952B4u, 0x3952BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3952BCu;
label_3952bc:
    // 0x3952bc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x3952bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3952c0: 0xc0ebe68  jal         func_3AF9A0
    ctx->pc = 0x3952C0u;
    SET_GPR_U32(ctx, 31, 0x3952C8u);
    ctx->pc = 0x3952C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3952C0u;
    // 0x3952c4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF9A0u, 0x3952C0u, 0x3952C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3952C8u;
label_3952c8:
    // 0x3952c8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3952c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x3952cc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3952ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3952d0:
    // 0x3952d0: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x3952d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x3952d4: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x3952d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x3952d8: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x3952d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x3952dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3952dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3952e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3952e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3952e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3952e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3952e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3952e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3952ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3952ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3952f0: 0x80ebe28  j           func_3AF8A0
    ctx->pc = 0x3952F0u;
    ctx->pc = 0x3952F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3952F0u;
    // 0x3952f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF8A0u, 0x3952F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3952F8u;
label_3952f8:
    // 0x3952f8: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x3952f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x3952fc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3952fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x395300: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x395300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x395304: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x395304u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 3));
    // 0x395308: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x395308u;
    {
        const bool branch_taken_0x395308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39530Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395308u;
        // 0x39530c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x395308) {
            ctx->pc = 0x395370u;
            goto label_395370;
        }
    }
    ctx->pc = 0x395310u;
label_395310:
    // 0x395310: 0xc0e54e2  jal         func_395388
    ctx->pc = 0x395310u;
    SET_GPR_U32(ctx, 31, 0x395318u);
    ctx->pc = 0x395388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395388u, 0x395310u, 0x395318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x395318u;
label_395318:
    // 0x395318: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x395318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x39531c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x39531cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x395320: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x395320u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x395324: 0x13302b  sltu        $a2, $zero, $s3
    ctx->pc = 0x395324u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x395328: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x395328u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x39532c: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x39532cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x395330: 0xa6060004  sh          $a2, 0x4($s0)
    ctx->pc = 0x395330u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x395334: 0x324500ff  andi        $a1, $s2, 0xFF
    ctx->pc = 0x395334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x395338: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x395338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x39533c: 0xa6110000  sh          $s1, 0x0($s0)
    ctx->pc = 0x39533cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x395340: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x395340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x395344: 0xa6120002  sh          $s2, 0x2($s0)
    ctx->pc = 0x395344u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x395348: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x395348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x39534c: 0x32660001  andi        $a2, $s3, 0x1
    ctx->pc = 0x39534cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x395350: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x395350u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x395354: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x395354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x395358: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x395358u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x39535c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x39535cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x395360: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x395360u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x395364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x395364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395368: 0x80ebe28  j           func_3AF8A0
    ctx->pc = 0x395368u;
    ctx->pc = 0x39536Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x395368u;
    // 0x39536c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF8A0u, 0x395368u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x395370u;
label_395370:
    // 0x395370: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x395370u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_395374:
    // 0x395374: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x395374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x395378: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x395378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39537c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39537cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x395380: 0x3e00008  jr          $ra
    ctx->pc = 0x395380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x395384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x395380u;
        // 0x395384: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x395380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x395388u;
}
