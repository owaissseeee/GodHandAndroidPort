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

// Function: func_003420E0
// Address: 0x3420e0 - 0x3424a8
void func_003420E0_0x3420e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003420E0_0x3420e0");
#endif

    switch (ctx->pc) {
        case 0x342170u: goto label_342170;
        case 0x342240u: goto label_342240;
        default: break;
    }

    ctx->pc = 0x3420e0u;

    // 0x3420e0: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x3420e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x3420e4: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3420e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3420e8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3420e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3420ec: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x3420ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x3420f0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x3420f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x3420f4: 0x87a30078  lh          $v1, 0x78($sp)
    ctx->pc = 0x3420f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3420f8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x3420f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x3420fc: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x3420fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342100: 0x87a20080  lh          $v0, 0x80($sp)
    ctx->pc = 0x342100u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x342104: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x342104u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x342108: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x342108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x34210c: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x34210cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x342110: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x342110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x342114: 0xa9c03  sra         $s3, $t2, 16
    ctx->pc = 0x342114u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 10), 16));
    // 0x342118: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x342118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x34211c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x34211cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342120: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x342120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x342124: 0xb9403  sra         $s2, $t3, 16
    ctx->pc = 0x342124u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 11), 16));
    // 0x342128: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x342128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x34212c: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x34212cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342130: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x342130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x342134: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x342134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x342138: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x342138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x34213c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x34213cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x342140: 0xffbe0060  sd          $fp, 0x60($sp)
    ctx->pc = 0x342140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 30));
    // 0x342144: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x342144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x342148: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x342148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x34214c: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x34214cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x342150: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x342150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342154: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x342154u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x342158: 0x84f80000  lh          $t8, 0x0($a3)
    ctx->pc = 0x342158u;
    SET_GPR_S32(ctx, 24, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x34215c: 0x84ec0002  lh          $t4, 0x2($a3)
    ctx->pc = 0x34215cu;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x342160: 0x84b90000  lh          $t9, 0x0($a1)
    ctx->pc = 0x342160u;
    SET_GPR_S32(ctx, 25, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x342164: 0x18c000bd  blez        $a2, . + 4 + (0xBD << 2)
    ctx->pc = 0x342164u;
    {
        const bool branch_taken_0x342164 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x342168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342164u;
        // 0x342168: 0x84b10002  lh          $s1, 0x2($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342164) {
            ctx->pc = 0x34245Cu;
            goto label_34245c;
        }
    }
    ctx->pc = 0x34216Cu;
    // 0x34216c: 0x0  nop
    ctx->pc = 0x34216cu;
    // NOP
label_342170:
    // 0x342170: 0x95e30000  lhu         $v1, 0x0($t7)
    ctx->pc = 0x342170u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x342174: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x342174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x342178: 0x91e40001  lbu         $a0, 0x1($t7)
    ctx->pc = 0x342178u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 1)));
    // 0x34217c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x34217cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x342180: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x342180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x342184: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x342184u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x342188: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x342188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x34218c: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x34218cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x342190: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x342190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x342194: 0x146000b8  bnez        $v1, . + 4 + (0xB8 << 2)
    ctx->pc = 0x342194u;
    {
        const bool branch_taken_0x342194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x342198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342194u;
        // 0x342198: 0x171040  sll         $v0, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342194) {
            ctx->pc = 0x342478u;
            goto label_342478;
        }
    }
    ctx->pc = 0x34219Cu;
    // 0x34219c: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x34219cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3421a0: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x3421a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3421a4: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3421a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3421a8: 0xc00013  mtlo        $a2
    ctx->pc = 0x3421a8u;
    ctx->lo = GPR_U64(ctx, 6);
    // 0x3421ac: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x3421acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3421b0: 0x70662000  madd        $a0, $v1, $a2
    ctx->pc = 0x3421b0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3421b4: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x3421b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
    // 0x3421b8: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x3421b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x3421bc: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x3421bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x3421c0: 0x24750001  addiu       $s5, $v1, 0x1
    ctx->pc = 0x3421c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3421c4: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x3421c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3421c8: 0x30867fff  andi        $a2, $a0, 0x7FFF
    ctx->pc = 0x3421c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32767);
    // 0x3421cc: 0xa4660000  sh          $a2, 0x0($v1)
    ctx->pc = 0x3421ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x3421d0: 0x95e30012  lhu         $v1, 0x12($t7)
    ctx->pc = 0x3421d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x3421d4: 0x91e40013  lbu         $a0, 0x13($t7)
    ctx->pc = 0x3421d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 19)));
    // 0x3421d8: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x3421d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x3421dc: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x3421dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x3421e0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3421e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3421e4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3421e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3421e8: 0x42c03  sra         $a1, $a0, 16
    ctx->pc = 0x3421e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3421ec: 0x30a38000  andi        $v1, $a1, 0x8000
    ctx->pc = 0x3421ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32768);
    // 0x3421f0: 0x146000a1  bnez        $v1, . + 4 + (0xA1 << 2)
    ctx->pc = 0x3421F0u;
    {
        const bool branch_taken_0x3421f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3421F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3421F0u;
        // 0x3421f4: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3421f0) {
            ctx->pc = 0x342478u;
            goto label_342478;
        }
    }
    ctx->pc = 0x3421F8u;
    // 0x3421f8: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3421f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3421fc: 0x249e7060  addiu       $fp, $a0, 0x7060
    ctx->pc = 0x3421fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 28768));
    // 0x342200: 0x25ef0002  addiu       $t7, $t7, 0x2
    ctx->pc = 0x342200u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 2));
    // 0x342204: 0x600013  mtlo        $v1
    ctx->pc = 0x342204u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x342208: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x342208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34220c: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x34220cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x342210: 0x340bffff  ori         $t3, $zero, 0xFFFF
    ctx->pc = 0x342210u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x342214: 0x70661000  madd        $v0, $v1, $a2
    ctx->pc = 0x342214u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x342218: 0xa61826  xor         $v1, $a1, $a2
    ctx->pc = 0x342218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 6));
    // 0x34221c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x34221cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x342220: 0x30631fff  andi        $v1, $v1, 0x1FFF
    ctx->pc = 0x342220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8191);
    // 0x342224: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x342224u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x342228: 0x240d7fff  addiu       $t5, $zero, 0x7FFF
    ctx->pc = 0x342228u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
    // 0x34222c: 0x240a000a  addiu       $t2, $zero, 0xA
    ctx->pc = 0x34222cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x342230: 0x2416001e  addiu       $s6, $zero, 0x1E
    ctx->pc = 0x342230u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x342234: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x342234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x342238: 0xa4a20000  sh          $v0, 0x0($a1)
    ctx->pc = 0x342238u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x34223c: 0x0  nop
    ctx->pc = 0x34223cu;
    // NOP
label_342240:
    // 0x342240: 0x91e20000  lbu         $v0, 0x0($t7)
    ctx->pc = 0x342240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x342244: 0x24c3018  mult        $a2, $s2, $t4
    ctx->pc = 0x342244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x342248: 0x72781818  mult1       $v1, $s3, $t8
    ctx->pc = 0x342248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x34224c: 0x91e40012  lbu         $a0, 0x12($t7)
    ctx->pc = 0x34224cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 18)));
    // 0x342250: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x342250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x342254: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x342254u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x342258: 0x22f03  sra         $a1, $v0, 28
    ctx->pc = 0x342258u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 28));
    // 0x34225c: 0x27603  sra         $t6, $v0, 24
    ctx->pc = 0x34225cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 2), 24));
    // 0x342260: 0xb52818  mult        $a1, $a1, $s5
    ctx->pc = 0x342260u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x342264: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x342264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x342268: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x342268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x34226c: 0x46703  sra         $t4, $a0, 28
    ctx->pc = 0x34226cu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 4), 28));
    // 0x342270: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x342270u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x342274: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x342274u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x342278: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x342278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x34227c: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x34227cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x342280: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x342280u;
    {
        const bool branch_taken_0x342280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342280u;
        // 0x342284: 0x43e03  sra         $a3, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342280) {
            ctx->pc = 0x3422A0u;
            goto label_3422a0;
        }
    }
    ctx->pc = 0x342288u;
    // 0x342288: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x342288u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x34228c: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x34228cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x342290: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x342290u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x342294: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x342294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x342298: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x342298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x34229c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x34229cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_3422a0:
    // 0x3422a0: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x3422a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3422a4: 0x72791818  mult1       $v1, $s3, $t9
    ctx->pc = 0x3422a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 25); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3422a8: 0x1942018  mult        $a0, $t4, $s4
    ctx->pc = 0x3422a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3422ac: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x3422acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3422b0: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x3422b0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3422b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3422b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3422b8: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x3422b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x3422bc: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x3422bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3422c0: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x3422c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3422c4: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x3422c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3422c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3422C8u;
    {
        const bool branch_taken_0x3422c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3422CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3422C8u;
        // 0x3422cc: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3422c8) {
            ctx->pc = 0x3422E8u;
            goto label_3422e8;
        }
    }
    ctx->pc = 0x3422D0u;
    // 0x3422d0: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x3422d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3422d4: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x3422d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3422d8: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x3422d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x3422dc: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x3422dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3422e0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x3422e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x3422e4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x3422e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_3422e8:
    // 0x3422e8: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x3422e8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3422ec: 0x3191821  addu        $v1, $t8, $t9
    ctx->pc = 0x3422ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x3422f0: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3422F0u;
    {
        const bool branch_taken_0x3422f0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x3422f0) {
            ctx->pc = 0x3422F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3422F0u;
            // 0x3422f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3422F8u;
            goto label_3422f8;
        }
    }
    ctx->pc = 0x3422F8u;
label_3422f8:
    // 0x3422f8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3422f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3422fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3422fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342300: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x342300u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x342304: 0x1012  mflo        $v0
    ctx->pc = 0x342304u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x342308: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x342308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34230c: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x34230cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x342310: 0x163182b  sltu        $v1, $t3, $v1
    ctx->pc = 0x342310u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x342314: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x342314u;
    {
        const bool branch_taken_0x342314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x342318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342314u;
        // 0x342318: 0x31c2000f  andi        $v0, $t6, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x342314) {
            ctx->pc = 0x342338u;
            goto label_342338;
        }
    }
    ctx->pc = 0x34231Cu;
    // 0x34231c: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x34231cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x342320: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x342320u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x342324: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x342324u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x342328: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x342328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x34232c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x34232cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x342330: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x342330u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x342334: 0x31c2000f  andi        $v0, $t6, 0xF
    ctx->pc = 0x342334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
label_342338:
    // 0x342338: 0x24c2818  mult        $a1, $s2, $t4
    ctx->pc = 0x342338u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x34233c: 0x72782018  mult1       $a0, $s3, $t8
    ctx->pc = 0x34233cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 24); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x342340: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x342340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x342344: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x342344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x342348: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x342348u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x34234c: 0x8c4e0000  lw          $t6, 0x0($v0)
    ctx->pc = 0x34234cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x342350: 0x30e3000f  andi        $v1, $a3, 0xF
    ctx->pc = 0x342350u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x342354: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x342354u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x342358: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x342358u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x34235c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x34235cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x342360: 0x1d52818  mult        $a1, $t6, $s5
    ctx->pc = 0x342360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x342364: 0x42303  sra         $a0, $a0, 12
    ctx->pc = 0x342364u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 12));
    // 0x342368: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x342368u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x34236c: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x34236cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x342370: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x342370u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x342374: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x342374u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x342378: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x342378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x34237c: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x34237cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x342380: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x342380u;
    {
        const bool branch_taken_0x342380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x342384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342380u;
        // 0x342384: 0x8c670000  lw          $a3, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342380) {
            ctx->pc = 0x3423A0u;
            goto label_3423a0;
        }
    }
    ctx->pc = 0x342388u;
    // 0x342388: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x342388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x34238c: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x34238cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x342390: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x342390u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x342394: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x342394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x342398: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x342398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x34239c: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x34239cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_3423a0:
    // 0x3423a0: 0x2511018  mult        $v0, $s2, $s1
    ctx->pc = 0x3423a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3423a4: 0x72791818  mult1       $v1, $s3, $t9
    ctx->pc = 0x3423a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 25); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3423a8: 0xf42018  mult        $a0, $a3, $s4
    ctx->pc = 0x3423a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3423ac: 0x300602d  daddu       $t4, $t8, $zero
    ctx->pc = 0x3423acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3423b0: 0xc0c02d  daddu       $t8, $a2, $zero
    ctx->pc = 0x3423b0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3423b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3423b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3423b8: 0x31b03  sra         $v1, $v1, 12
    ctx->pc = 0x3423b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 12));
    // 0x3423bc: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x3423bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3423c0: 0xd01021  addu        $v0, $a2, $s0
    ctx->pc = 0x3423c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x3423c4: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x3423c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3423c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3423C8u;
    {
        const bool branch_taken_0x3423c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3423CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3423C8u;
        // 0x3423cc: 0x320882d  daddu       $s1, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3423c8) {
            ctx->pc = 0x3423E8u;
            goto label_3423e8;
        }
    }
    ctx->pc = 0x3423D0u;
    // 0x3423d0: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x3423d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x3423d4: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x3423d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x3423d8: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x3423d8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x3423dc: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x3423dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x3423e0: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x3423e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x3423e4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x3423e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_3423e8:
    // 0x3423e8: 0xc0c82d  daddu       $t9, $a2, $zero
    ctx->pc = 0x3423e8u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3423ec: 0x3191821  addu        $v1, $t8, $t9
    ctx->pc = 0x3423ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 25)));
    // 0x3423f0: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3423F0u;
    {
        const bool branch_taken_0x3423f0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x3423f0) {
            ctx->pc = 0x3423F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3423F0u;
            // 0x3423f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3423F8u;
            goto label_3423f8;
        }
    }
    ctx->pc = 0x3423F8u;
label_3423f8:
    // 0x3423f8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3423f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3423fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3423fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342400: 0x4a001a  div         $zero, $v0, $t2
    ctx->pc = 0x342400u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x342404: 0x1012  mflo        $v0
    ctx->pc = 0x342404u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x342408: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x342408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34240c: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x34240cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x342410: 0x163182b  sltu        $v1, $t3, $v1
    ctx->pc = 0x342410u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x342414: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x342414u;
    {
        const bool branch_taken_0x342414 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x342418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342414u;
        // 0x342418: 0x26d6fffe  addiu       $s6, $s6, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342414) {
            ctx->pc = 0x342434u;
            goto label_342434;
        }
    }
    ctx->pc = 0x34241Cu;
    // 0x34241c: 0x28c28000  slti        $v0, $a2, -0x8000
    ctx->pc = 0x34241cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294934528) ? 1 : 0);
    // 0x342420: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x342420u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x342424: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x342424u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x342428: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x342428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x34242c: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x34242cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)0);
    // 0x342430: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x342430u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
label_342434:
    // 0x342434: 0xa5060000  sh          $a2, 0x0($t0)
    ctx->pc = 0x342434u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x342438: 0xa5260000  sh          $a2, 0x0($t1)
    ctx->pc = 0x342438u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x34243c: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x34243cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x342440: 0x6c1ff7f  bgez        $s6, . + 4 + (-0x81 << 2)
    ctx->pc = 0x342440u;
    {
        const bool branch_taken_0x342440 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x342444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342440u;
        // 0x342444: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342440) {
            ctx->pc = 0x342240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342240;
        }
    }
    ctx->pc = 0x342448u;
    // 0x342448: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x342448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x34244c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x34244cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x342450: 0x2e3102a  slt         $v0, $s7, $v1
    ctx->pc = 0x342450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x342454: 0x1440ff46  bnez        $v0, . + 4 + (-0xBA << 2)
    ctx->pc = 0x342454u;
    {
        const bool branch_taken_0x342454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x342458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342454u;
        // 0x342458: 0x25ef0012  addiu       $t7, $t7, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342454) {
            ctx->pc = 0x342170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_342170;
        }
    }
    ctx->pc = 0x34245Cu;
label_34245c:
    // 0x34245c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x34245cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x342460: 0xa4ac0002  sh          $t4, 0x2($a1)
    ctx->pc = 0x342460u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 12));
    // 0x342464: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x342464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x342468: 0xa4b80000  sh          $t8, 0x0($a1)
    ctx->pc = 0x342468u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 24));
    // 0x34246c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x34246cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x342470: 0xa4d10002  sh          $s1, 0x2($a2)
    ctx->pc = 0x342470u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x342474: 0xa4d90000  sh          $t9, 0x0($a2)
    ctx->pc = 0x342474u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 25));
label_342478:
    // 0x342478: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x342478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34247c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x34247cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x342480: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x342480u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x342484: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x342484u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x342488: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x342488u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34248c: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x34248cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x342490: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x342490u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x342494: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x342494u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x342498: 0xdfbe0060  ld          $fp, 0x60($sp)
    ctx->pc = 0x342498u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x34249c: 0x3e00008  jr          $ra
    ctx->pc = 0x34249Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3424A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34249Cu;
        // 0x3424a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34249Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3424A4u;
    // 0x3424a4: 0x0  nop
    ctx->pc = 0x3424a4u;
    // NOP
    ctx->pc = 0x3424a8u;
}
