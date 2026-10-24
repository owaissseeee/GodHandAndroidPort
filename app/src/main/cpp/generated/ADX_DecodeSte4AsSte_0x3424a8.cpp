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

// Function: ADX_DecodeSte4AsSte
// Address: 0x3424a8 - 0x3427f0
void ADX_DecodeSte4AsSte_0x3424a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADX_DecodeSte4AsSte_0x3424a8");
#endif

    switch (ctx->pc) {
        case 0x342530u: goto label_342530;
        case 0x342600u: goto label_342600;
        default: break;
    }

    ctx->pc = 0x3424a8u;

    // 0x3424a8: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x3424a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3424ac: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3424acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3424b0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3424b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3424b4: 0x87a30078  lh          $v1, 0x78($sp)
    ctx->pc = 0x3424b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3424b8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3424b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3424bc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3424bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3424c0: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x3424c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x3424c4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x3424c4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3424c8: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x3424c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3424cc: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x3424ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x3424d0: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x3424d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x3424d4: 0xa9c03  sra         $s3, $t2, 16
    ctx->pc = 0x3424d4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 10), 16));
    // 0x3424d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3424d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x3424dc: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x3424dcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x3424e0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3424e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x3424e4: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x3424e4u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3424e8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3424e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3424ec: 0xb9403  sra         $s2, $t3, 16
    ctx->pc = 0x3424ecu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 16));
    // 0x3424f0: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x3424f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x3424f4: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x3424f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x3424f8: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x3424f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x3424fc: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x3424fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x342500: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x342500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x342504: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x342504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x342508: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x342508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x34250c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x34250cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x342510: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x342510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x342514: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x342514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x342518: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x342518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34251c: 0x84ed0000  lh          $t5, 0x0($a3)
    ctx->pc = 0x34251cu;
    SET_GPR_S32(ctx, 13, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x342520: 0x84ea0002  lh          $t2, 0x2($a3)
    ctx->pc = 0x342520u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x342524: 0x852e0000  lh          $t6, 0x0($t1)
    ctx->pc = 0x342524u;
    SET_GPR_S32(ctx, 14, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x342528: 0x1880009f  blez        $a0, . + 4 + (0x9F << 2)
    ctx->pc = 0x342528u;
    {
        const bool branch_taken_0x342528 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x34252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342528u;
        // 0x34252c: 0x85300002  lh          $s0, 0x2($t1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342528) {
            ctx->pc = 0x3427A8u;
            goto label_3427a8;
        }
    }
    ctx->pc = 0x342530u;
label_342530:
    // 0x342530: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x342530u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x342534: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x342534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x342538: 0x91e40001  lbu         $a0, 0x1($t7)
    ctx->pc = 0x342538u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x34253c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x34253cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x342540: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x342540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x342544: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x342544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x342548: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x342548u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x34254c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x34254cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x342550: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x342550u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x342554: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x342554u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x342558: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x342558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x34255c: 0x14600099  bnez        $v1, . + 4 + (0x99 << 2)
    ctx->pc = 0x34255Cu;
    {
        const bool branch_taken_0x34255c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x342560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34255Cu;
        // 0x342560: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34255c) {
            ctx->pc = 0x3427C4u;
            goto label_3427c4;
        }
    }
    ctx->pc = 0x342564u;
    // 0x342564: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x342564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x342568: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x342568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34256c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x34256cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x342570: 0xc00013  mtlo        $a2
    ctx->pc = 0x342570u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x342574: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x342574u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x342578: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x342578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x34257c: 0x70662000  madd        $a0, $v1, $a2
    ctx->pc = 0x34257cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x342580: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x342580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x342584: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x342584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x342588: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x342588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x34258c: 0x24770001  addiu       $s7, $v1, 0x1
    ctx->pc = 0x34258cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x342590: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x342590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x342594: 0x30867fff  andi        $a2, $a0, 0x7FFF
    ctx->pc = 0x342594u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x342598: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x342598u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x34259c: 0x95e30012  lhu         $v1, 0x12($t7)
    ctx->pc = 0x34259cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x3425a0: 0x91e40013  lbu         $a0, 0x13($t7)
    ctx->pc = 0x3425a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 19)));
    // 0x3425a4: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3425a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3425a8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3425a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3425ac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3425acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3425b0: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3425b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3425b4: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x3425b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3425b8: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x3425b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3425bc: 0x14600081  bnez        $v1, . + 4 + (0x81 << 2)
    ctx->pc = 0x3425BCu;
    {
        const bool branch_taken_0x3425bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3425C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3425BCu;
        // 0x3425c0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3425bc) {
            ctx->pc = 0x3427C4u;
            goto label_3427c4;
        }
    }
    ctx->pc = 0x3425C4u;
    // 0x3425c4: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x3425c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x3425c8: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x3425c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3425cc: 0x34168000  ori         $s6, $zero, 0x8000
    ctx->pc = 0x3425ccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3425d0: 0x600013  mtlo        $v1
    ctx->pc = 0x3425d0u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x3425d4: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3425d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3425d8: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x3425d8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3425dc: 0x24187fff  addiu       $t8, $zero, 0x7FFF
    ctx->pc = 0x3425dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x3425e0: 0x70661000  madd        $v0, $v1, $a2
    ctx->pc = 0x3425e0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3425e4: 0xa61826  xor         $v1, $a1, $a2
    ctx->pc = 0x3425e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x3425e8: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3425e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x3425ec: 0x241e001e  addiu       $fp, $zero, 0x1E
    ctx->pc = 0x3425ecu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x3425f0: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x3425f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3425f4: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x3425f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x3425f8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x3425f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3425fc: 0x0  nop
    ctx->pc = 0x3425fcu;
    // NOP
label_342600:
    // 0x342600: 0x91e30000  lbu         $v1, 0x0($t7)
    ctx->pc = 0x342600u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x342604: 0x24a1018  mult        $v0, $s2, $t2
    ctx->pc = 0x342604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x342608: 0x726d2018  mult1       $a0, $s3, $t5
    ctx->pc = 0x342608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x34260c: 0x91e60012  lbu         $a2, 0x12($t7)
    ctx->pc = 0x34260cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x342610: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x342610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x342614: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x342614u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342618: 0x32f03  sra         $a1, $v1, 28
    ctx->pc = 0x342618u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 28));
    // 0x34261c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x34261cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x342620: 0xb72818  mult        $a1, $a1, $s7
    ctx->pc = 0x342620u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x342624: 0x36603  sra         $t4, $v1, 24
    ctx->pc = 0x342624u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 3), 24));
    // 0x342628: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x342628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x34262c: 0x3182000f  andi        $v0, $t4, 0xF
    ctx->pc = 0x34262cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)15);
    // 0x342630: 0x61f03  sra         $v1, $a2, 28
    ctx->pc = 0x342630u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 28));
    // 0x342634: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x342634u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x342638: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x342638u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x34263c: 0x746018  mult        $t4, $v1, $s4
    ctx->pc = 0x34263cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
    // 0x342640: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x342640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x342644: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x342644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x342648: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x342648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34264c: 0x24637060  addiu       $v1, $v1, 0x7060
    ctx->pc = 0x34264cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28768));
    // 0x342650: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x342650u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342654: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x342654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x342658: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x342658u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x34265c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x34265cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x342660: 0x24a8818  mult        $s1, $s2, $t2
    ctx->pc = 0x342660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x342664: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x342664u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x342668: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x342668u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x34266c: 0x38630000  xori        $v1, $v1, 0x0
    ctx->pc = 0x34266cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
    // 0x342670: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x342670u;
    {
        const bool branch_taken_0x342670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342670u;
        // 0x342674: 0x30c9000f  andi        $t1, $a2, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342670) {
            ctx->pc = 0x342684u;
            goto label_342684;
        }
    }
    ctx->pc = 0x342678u;
    // 0x342678: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x342678u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x34267c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x34267cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x342680: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x342680u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_342684:
    // 0x342684: 0x2502018  mult        $a0, $s2, $s0
    ctx->pc = 0x342684u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x342688: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x342688u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34268c: 0x726e1018  mult1       $v0, $s3, $t6
    ctx->pc = 0x34268cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x342690: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x342690u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342694: 0x26d1818  mult        $v1, $s3, $t5
    ctx->pc = 0x342694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x342698: 0x2503818  mult        $a3, $s2, $s0
    ctx->pc = 0x342698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x34269c: 0x1a0502d  daddu       $t2, $t5, $zero
    ctx->pc = 0x34269cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3426a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3426a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3426a4: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x3426a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x3426a8: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x3426a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x3426ac: 0x4c2821  addu        $a1, $v0, $t4
    ctx->pc = 0x3426acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x3426b0: 0x33303  sra         $a2, $v1, 12
    ctx->pc = 0x3426b0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 12));
    // 0x3426b4: 0xb61821  addu        $v1, $a1, $s6
    ctx->pc = 0x3426b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x3426b8: 0x28a28000  slti        $v0, $a1, -0x8000
    ctx->pc = 0x3426b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3426bc: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x3426bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3426c0: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x3426c0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3426c4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3426C4u;
    {
        const bool branch_taken_0x3426c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3426C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3426C4u;
        // 0x3426c8: 0x384c0000  xori        $t4, $v0, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3426c4) {
            ctx->pc = 0x3426D8u;
            goto label_3426d8;
        }
    }
    ctx->pc = 0x3426CCu;
    // 0x3426cc: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x3426ccu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x3426d0: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x3426d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3426d4: 0x4c280b  movn        $a1, $v0, $t4
    ctx->pc = 0x3426d4u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_3426d8:
    // 0x3426d8: 0x8d6c0000  lw          $t4, 0x0($t3)
    ctx->pc = 0x3426d8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3426dc: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x3426dcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3426e0: 0x26e1018  mult        $v0, $s3, $t6
    ctx->pc = 0x3426e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3426e4: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x3426e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x3426e8: 0x1972018  mult        $a0, $t4, $s7
    ctx->pc = 0x3426e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3426ec: 0x24a57060  addiu       $a1, $a1, 0x7060
    ctx->pc = 0x3426ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28768));
    // 0x3426f0: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x3426f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
    // 0x3426f4: 0xa72d0000  sh          $t5, 0x0($t9)
    ctx->pc = 0x3426f4u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x3426f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3426f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3426fc: 0x1c0802d  daddu       $s0, $t6, $zero
    ctx->pc = 0x3426fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342700: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x342700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x342704: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x342704u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x342708: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x342708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x34270c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x34270cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x342710: 0x26303  sra         $t4, $v0, 12
    ctx->pc = 0x342710u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 2), 12));
    // 0x342714: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x342714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x342718: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x342718u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x34271c: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x34271cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x342720: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x342720u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x342724: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x342724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x342728: 0xd43018  mult        $a2, $a2, $s4
    ctx->pc = 0x342728u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x34272c: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x34272cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x342730: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x342730u;
    {
        const bool branch_taken_0x342730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342730u;
        // 0x342734: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342730) {
            ctx->pc = 0x342744u;
            goto label_342744;
        }
    }
    ctx->pc = 0x342738u;
    // 0x342738: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x342738u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x34273c: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x34273cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x342740: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x342740u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_342744:
    // 0x342744: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x342744u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342748: 0x1862821  addu        $a1, $t4, $a2
    ctx->pc = 0x342748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x34274c: 0xb61021  addu        $v0, $a1, $s6
    ctx->pc = 0x34274cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
    // 0x342750: 0x28a38000  slti        $v1, $a1, -0x8000
    ctx->pc = 0x342750u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x342754: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x342754u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x342758: 0x305202a  slt         $a0, $t8, $a1
    ctx->pc = 0x342758u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 24) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x34275c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34275Cu;
    {
        const bool branch_taken_0x34275c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34275Cu;
        // 0x342760: 0x38630000  xori        $v1, $v1, 0x0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34275c) {
            ctx->pc = 0x342770u;
            goto label_342770;
        }
    }
    ctx->pc = 0x342764u;
    // 0x342764: 0x304280b  movn        $a1, $t8, $a0
    ctx->pc = 0x342764u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 24));
    // 0x342768: 0x24028000  addiu       $v0, $zero, -0x8000
    ctx->pc = 0x342768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x34276c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x34276cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_342770:
    // 0x342770: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x342770u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342774: 0x27defffe  addiu       $fp, $fp, -0x2
    ctx->pc = 0x342774u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967294));
    // 0x342778: 0xa72d0000  sh          $t5, 0x0($t9)
    ctx->pc = 0x342778u;
    WRITE16(ADD32(GPR_U32(ctx, 25), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x34277c: 0x27390002  addiu       $t9, $t9, 0x2
    ctx->pc = 0x34277cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 2));
    // 0x342780: 0xa50e0000  sh          $t6, 0x0($t0)
    ctx->pc = 0x342780u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 14));
    // 0x342784: 0x7c1ff9e  bgez        $fp, . + 4 + (-0x62 << 2)
    ctx->pc = 0x342784u;
    {
        const bool branch_taken_0x342784 = (GPR_S64(ctx, 30) >= 0);
        ctx->pc = 0x342788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342784u;
        // 0x342788: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342784) {
            ctx->pc = 0x342600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342600;
        }
    }
    ctx->pc = 0x34278Cu;
    // 0x34278c: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x34278cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x342790: 0x25ef0012  addiu       $t7, $t7, 0x12
    ctx->pc = 0x342790u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18));
    // 0x342794: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x342794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x342798: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x342798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x34279c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x34279cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3427a0: 0x1440ff63  bnez        $v0, . + 4 + (-0x9D << 2)
    ctx->pc = 0x3427A0u;
    {
        const bool branch_taken_0x3427a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3427A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427A0u;
        // 0x3427a4: 0xafa60014  sw          $a2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3427a0) {
            ctx->pc = 0x342530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342530;
        }
    }
    ctx->pc = 0x3427A8u;
label_3427a8:
    // 0x3427a8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3427a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3427ac: 0xa48a0002  sh          $t2, 0x2($a0)
    ctx->pc = 0x3427acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 10));
    // 0x3427b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3427b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3427b4: 0xa48d0000  sh          $t5, 0x0($a0)
    ctx->pc = 0x3427b4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 13));
    // 0x3427b8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3427b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3427bc: 0xa4b00002  sh          $s0, 0x2($a1)
    ctx->pc = 0x3427bcu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 16));
    // 0x3427c0: 0xa4ae0000  sh          $t6, 0x0($a1)
    ctx->pc = 0x3427c0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 14));
label_3427c4:
    // 0x3427c4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3427c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3427c8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3427c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3427cc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3427ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3427d0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3427d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3427d4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3427d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3427d8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x3427d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3427dc: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x3427dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3427e0: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x3427e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3427e4: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x3427e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3427e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3427E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3427ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3427E8u;
        // 0x3427ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3427E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3427F0u;
}
