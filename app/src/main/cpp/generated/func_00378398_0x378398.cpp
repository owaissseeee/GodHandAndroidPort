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

// Function: func_00378398
// Address: 0x378398 - 0x378540
void func_00378398_0x378398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378398_0x378398");
#endif

    switch (ctx->pc) {
        case 0x3783f0u: goto label_3783f0;
        case 0x378460u: goto label_378460;
        default: break;
    }

    ctx->pc = 0x378398u;

    // 0x378398: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x378398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x37839c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x37839cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3783a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3783a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3783a4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3783a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3783a8: 0x49403  sra         $s2, $a0, 16
    ctx->pc = 0x3783a8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3783ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3783acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3783b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3783b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3783b4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3783b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3783b8: 0x6400036  bltz        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x3783B8u;
    {
        const bool branch_taken_0x3783b8 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x3783BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3783B8u;
        // 0x3783bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3783b8) {
            ctx->pc = 0x378494u;
            goto label_378494;
        }
    }
    ctx->pc = 0x3783C0u;
    // 0x3783c0: 0x84a30000  lh          $v1, 0x0($a1)
    ctx->pc = 0x3783c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3783c4: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x3783c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x3783c8: 0x2442df10  addiu       $v0, $v0, -0x20F0
    ctx->pc = 0x3783c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958864));
    // 0x3783cc: 0x80a4001e  lb          $a0, 0x1E($a1)
    ctx->pc = 0x3783ccu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 30)));
    // 0x3783d0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x3783d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x3783d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3783d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3783d8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3783d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3783dc: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x3783dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3783e0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3783e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3783e4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3783e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3783e8: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x3783E8u;
    SET_GPR_U32(ctx, 31, 0x3783F0u);
    ctx->pc = 0x3783ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3783E8u;
    // 0x3783ec: 0x448821  addu        $s1, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x3783E8u, 0x3783F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3783F0u;
label_3783f0:
    // 0x3783f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3783f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3783f4: 0x54430002  bnel        $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x3783F4u;
    {
        const bool branch_taken_0x3783f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3783f4) {
            ctx->pc = 0x3783F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3783F4u;
            // 0x3783f8: 0x82230001  lb          $v1, 0x1($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378400u;
            goto label_378400;
        }
    }
    ctx->pc = 0x3783FCu;
    // 0x3783fc: 0x82230003  lb          $v1, 0x3($s1)
    ctx->pc = 0x3783fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_378400:
    // 0x378400: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x378400u;
    {
        const bool branch_taken_0x378400 = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x378400) {
            ctx->pc = 0x378404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378400u;
            // 0x378404: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378414u;
            goto label_378414;
        }
    }
    ctx->pc = 0x378408u;
    // 0x378408: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x378408u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x37840c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x37840Cu;
    {
        const bool branch_taken_0x37840c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37840Cu;
        // 0x378410: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37840c) {
            ctx->pc = 0x37851Cu;
            goto label_37851c;
        }
    }
    ctx->pc = 0x378414u;
label_378414:
    // 0x378414: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x378414u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x378418: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x378418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37841c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x37841cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x378420: 0x94460006  lhu         $a2, 0x6($v0)
    ctx->pc = 0x378420u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x378424: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x378424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x378428: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x378428u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x37842c: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x37842cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x378430: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x378430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x378434: 0xa33821  addu        $a3, $a1, $v1
    ctx->pc = 0x378434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x378438: 0x84e20000  lh          $v0, 0x0($a3)
    ctx->pc = 0x378438u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x37843c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x37843cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x378440: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x378440u;
    {
        const bool branch_taken_0x378440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378440) {
            ctx->pc = 0x378444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378440u;
            // 0x378444: 0x94e20002  lhu         $v0, 0x2($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x378514u;
            goto label_378514;
        }
    }
    ctx->pc = 0x378448u;
    // 0x378448: 0x10c00012  beqz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x378448u;
    {
        const bool branch_taken_0x378448 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x37844Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378448u;
        // 0x37844c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378448) {
            ctx->pc = 0x378494u;
            goto label_378494;
        }
    }
    ctx->pc = 0x378450u;
    // 0x378450: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x378450u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378454: 0x3c090001  lui         $t1, 0x1
    ctx->pc = 0x378454u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1 << 16));
    // 0x378458: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x378458u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37845c: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x37845cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
label_378460:
    // 0x378460: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x378460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x378464: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x378464u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x378468: 0xa23821  addu        $a3, $a1, $v0
    ctx->pc = 0x378468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x37846c: 0x12460028  beq         $s2, $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x37846Cu;
    {
        const bool branch_taken_0x37846c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        ctx->pc = 0x378470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37846Cu;
        // 0x378470: 0x95040000  lhu         $a0, 0x0($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37846c) {
            ctx->pc = 0x378510u;
            goto label_378510;
        }
    }
    ctx->pc = 0x378474u;
    // 0x378474: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x378474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x378478: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x378478u;
    {
        const bool branch_taken_0x378478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378478u;
        // 0x37847c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378478) {
            ctx->pc = 0x3784A0u;
            goto label_3784a0;
        }
    }
    ctx->pc = 0x378480u;
    // 0x378480: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x378480u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x378484: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x378484u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x378488: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x378488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x37848c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x37848Cu;
    {
        const bool branch_taken_0x37848c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37848Cu;
        // 0x378490: 0x12a4821  addu        $t1, $t1, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37848c) {
            ctx->pc = 0x378460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378460;
        }
    }
    ctx->pc = 0x378494u;
label_378494:
    // 0x378494: 0xa6600000  sh          $zero, 0x0($s3)
    ctx->pc = 0x378494u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x378498: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x378498u;
    {
        const bool branch_taken_0x378498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378498u;
        // 0x37849c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378498) {
            ctx->pc = 0x37851Cu;
            goto label_37851c;
        }
    }
    ctx->pc = 0x3784A0u;
label_3784a0:
    // 0x3784a0: 0x94e3fffc  lhu         $v1, -0x4($a3)
    ctx->pc = 0x3784a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294967292)));
    // 0x3784a4: 0x94e5fffe  lhu         $a1, -0x2($a3)
    ctx->pc = 0x3784a4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294967294)));
    // 0x3784a8: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x3784a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x3784ac: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x3784acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3784b0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3784b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3784b4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3784b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3784b8: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x3784b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3784bc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3784bcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3784c0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3784c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3784c4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3784c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3784c8: 0x0  nop
    ctx->pc = 0x3784c8u;
    // NOP
    // 0x3784cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3784ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3784d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3784d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3784d4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x3784d4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x3784d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3784d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3784dc: 0x0  nop
    ctx->pc = 0x3784dcu;
    // NOP
    // 0x3784e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3784e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3784e4: 0x2431823  subu        $v1, $s2, $v1
    ctx->pc = 0x3784e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3784e8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3784e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3784ec: 0x0  nop
    ctx->pc = 0x3784ecu;
    // NOP
    // 0x3784f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3784f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3784f4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3784f4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x3784f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3784f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3784fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3784fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x378500: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x378500u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x378504: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x378504u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x378508: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x378508u;
    {
        const bool branch_taken_0x378508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378508u;
        // 0x37850c: 0xa6650000  sh          $a1, 0x0($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378508) {
            ctx->pc = 0x378518u;
            goto label_378518;
        }
    }
    ctx->pc = 0x378510u;
label_378510:
    // 0x378510: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x378510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_378514:
    // 0x378514: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x378514u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_378518:
    // 0x378518: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x378518u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37851c:
    // 0x37851c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x37851cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x378520: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x378520u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x378524: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x378524u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x378528: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x378528u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37852c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37852cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x378530: 0x3e00008  jr          $ra
    ctx->pc = 0x378530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378530u;
        // 0x378534: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378538u;
    // 0x378538: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x378538u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x37853c: 0x0  nop
    ctx->pc = 0x37853cu;
    // NOP
    ctx->pc = 0x378540u;
}
