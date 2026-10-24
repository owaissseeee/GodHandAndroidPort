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

// Function: func_00151688
// Address: 0x151688 - 0x151990
void func_00151688_0x151688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00151688_0x151688");
#endif

    switch (ctx->pc) {
        case 0x151780u: goto label_151780;
        case 0x1517b8u: goto label_1517b8;
        case 0x151840u: goto label_151840;
        case 0x151870u: goto label_151870;
        case 0x1518c8u: goto label_1518c8;
        case 0x1518e4u: goto label_1518e4;
        case 0x151918u: goto label_151918;
        case 0x151934u: goto label_151934;
        default: break;
    }

    ctx->pc = 0x151688u;

    // 0x151688: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x151688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x15168c: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x15168cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x151690: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x151690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x151694: 0x3c0d0074  lui         $t5, 0x74
    ctx->pc = 0x151694u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)116 << 16));
    // 0x151698: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x151698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x15169c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x15169cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x1516a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1516a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1516a4: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1516a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x1516a8: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1516a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x1516ac: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1516acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1516b0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1516b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1516b4: 0x26560018  addiu       $s6, $s2, 0x18
    ctx->pc = 0x1516b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x1516b8: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x1516b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x1516bc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1516bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1516c0: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1516c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x1516c4: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1516c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x1516c8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1516c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1516cc: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1516ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1516d0: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x1516d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
    // 0x1516d4: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x1516d4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1516d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1516d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x1516dc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1516dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1516e0: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1516e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x1516e4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1516e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1516e8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1516e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1516ec: 0x8e4b0008  lw          $t3, 0x8($s2)
    ctx->pc = 0x1516ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1516f0: 0x8e4c000c  lw          $t4, 0xC($s2)
    ctx->pc = 0x1516f0u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1516f4: 0x8e4a0000  lw          $t2, 0x0($s2)
    ctx->pc = 0x1516f4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1516f8: 0x123482a  slt         $t1, $t1, $v1
    ctx->pc = 0x1516f8u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1516fc: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1516fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x151700: 0x24b8821  addu        $s1, $s2, $t3
    ctx->pc = 0x151700u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x151704: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x151704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x151708: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x151708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15170c: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x15170cu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x151710: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x151710u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x151714: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x151714u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x151718: 0x145f024  and         $fp, $t2, $a1
    ctx->pc = 0x151718u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 10) & GPR_U64(ctx, 5));
    // 0x15171c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x15171cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x151720: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x151720u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
    // 0x151724: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x151724u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x151728: 0x24ca021  addu        $s4, $s2, $t4
    ctx->pc = 0x151728u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 12)));
    // 0x15172c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x15172cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x151730: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x151730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x151734: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x151734u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x151738: 0x8da376b0  lw          $v1, 0x76B0($t5)
    ctx->pc = 0x151738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 30384)));
    // 0x15173c: 0x13c0003a  beqz        $fp, . + 4 + (0x3A << 2)
    ctx->pc = 0x15173Cu;
    {
        const bool branch_taken_0x15173c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x151740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15173Cu;
        // 0x151740: 0x30640001  andi        $a0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15173c) {
            ctx->pc = 0x151828u;
            goto label_151828;
        }
    }
    ctx->pc = 0x151744u;
    // 0x151744: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x151744u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151748: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x151748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x15174c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15174cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x151750: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x151750u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x151754: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x151754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x151758: 0x2e29821  addu        $s3, $s7, $v0
    ctx->pc = 0x151758u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x15175c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x15175cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x151760: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x151760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151764: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x151764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
    // 0x151768: 0x26655c88  addiu       $a1, $s3, 0x5C88
    ctx->pc = 0x151768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 23688));
    // 0x15176c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x15176cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x151770: 0xafa50044  sw          $a1, 0x44($sp)
    ctx->pc = 0x151770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 5));
    // 0x151774: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x151774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x151778: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x151778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x15177c: 0xffa30038  sd          $v1, 0x38($sp)
    ctx->pc = 0x15177cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 3));
label_151780:
    // 0x151780: 0xded00008  ld          $s0, 0x8($s6)
    ctx->pc = 0x151780u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x151784: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x151784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x151788: 0xdfa40030  ld          $a0, 0x30($sp)
    ctx->pc = 0x151788u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15178c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x15178cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x151790: 0x32023fff  andi        $v0, $s0, 0x3FFF
    ctx->pc = 0x151790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16383);
    // 0x151794: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x151794u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x151798: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x151798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x15179c: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x15179cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x1517a0: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1517a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1517a4: 0x26d60018  addiu       $s6, $s6, 0x18
    ctx->pc = 0x1517a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
    // 0x1517a8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1517a8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1517ac: 0x10217e  dsrl32      $a0, $s0, 5
    ctx->pc = 0x1517acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> (32 + 5));
    // 0x1517b0: 0xc0c7784  jal         func_31DE10
    ctx->pc = 0x1517B0u;
    SET_GPR_U32(ctx, 31, 0x1517B8u);
    ctx->pc = 0x1517B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1517B0u;
    // 0x1517b4: 0x30843fff  andi        $a0, $a0, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE10u, 0x1517B0u, 0x1517B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1517B8u;
label_1517b8:
    // 0x1517b8: 0xdfa50038  ld          $a1, 0x38($sp)
    ctx->pc = 0x1517b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1517bc: 0x3404fff8  ori         $a0, $zero, 0xFFF8
    ctx->pc = 0x1517bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65528);
    // 0x1517c0: 0x426f8  dsll        $a0, $a0, 27
    ctx->pc = 0x1517c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 27);
    // 0x1517c4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1517c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1517c8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1517c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1517cc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1517ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1517d0: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x1517d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
    // 0x1517d4: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x1517d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
    // 0x1517d8: 0x966378a8  lhu         $v1, 0x78A8($s3)
    ctx->pc = 0x1517d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30888)));
    // 0x1517dc: 0x2048024  and         $s0, $s0, $a0
    ctx->pc = 0x1517dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x1517e0: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x1517e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1517e4: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x1517e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x1517e8: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1517e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x1517ec: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x1517ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1517f0: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x1517f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x1517f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1517f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1517f8: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1517f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x1517fc: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1517fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x151800: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x151800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x151804: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x151804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x151808: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x151808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15180c: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x15180cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x151810: 0x2be202b  sltu        $a0, $s5, $fp
    ctx->pc = 0x151810u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
    // 0x151814: 0xfc700000  sd          $s0, 0x0($v1)
    ctx->pc = 0x151814u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 16));
    // 0x151818: 0x966278a8  lhu         $v0, 0x78A8($s3)
    ctx->pc = 0x151818u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 30888)));
    // 0x15181c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15181cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x151820: 0x1480ffd7  bnez        $a0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x151820u;
    {
        const bool branch_taken_0x151820 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x151824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151820u;
        // 0x151824: 0xa66278a8  sh          $v0, 0x78A8($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 30888), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151820) {
            ctx->pc = 0x151780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151780;
        }
    }
    ctx->pc = 0x151828u;
label_151828:
    // 0x151828: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x151828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15182c: 0x440001c  bltz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15182Cu;
    {
        const bool branch_taken_0x15182c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x151830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15182Cu;
        // 0x151830: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15182c) {
            ctx->pc = 0x1518A0u;
            goto label_1518a0;
        }
    }
    ctx->pc = 0x151834u;
    // 0x151834: 0x96420010  lhu         $v0, 0x10($s2)
    ctx->pc = 0x151834u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x151838: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x151838u;
    {
        const bool branch_taken_0x151838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15183Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151838u;
        // 0x15183c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151838) {
            ctx->pc = 0x151860u;
            goto label_151860;
        }
    }
    ctx->pc = 0x151840u;
label_151840:
    // 0x151840: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x151840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x151844: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x151848: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x151848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15184c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x15184cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x151850: 0x96420010  lhu         $v0, 0x10($s2)
    ctx->pc = 0x151850u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x151854: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x151854u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x151858: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x151858u;
    {
        const bool branch_taken_0x151858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15185Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151858u;
        // 0x15185c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151858) {
            ctx->pc = 0x151840u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151840;
        }
    }
    ctx->pc = 0x151860u;
label_151860:
    // 0x151860: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x151860u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x151864: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x151864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151868: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x151868u;
    {
        const bool branch_taken_0x151868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151868u;
        // 0x15186c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151868) {
            ctx->pc = 0x151890u;
            goto label_151890;
        }
    }
    ctx->pc = 0x151870u;
label_151870:
    // 0x151870: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x151870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x151874: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x151878: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x151878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15187c: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x15187cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x151880: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x151880u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x151884: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x151884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x151888: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x151888u;
    {
        const bool branch_taken_0x151888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15188Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151888u;
        // 0x15188c: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151888) {
            ctx->pc = 0x151870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151870;
        }
    }
    ctx->pc = 0x151890u;
label_151890:
    // 0x151890: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x151890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x151894: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x151894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x151898: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x151898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x15189c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x15189cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1518a0:
    // 0x1518a0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x1518a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1518a4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1518a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1518a8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1518a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1518ac: 0x96440010  lhu         $a0, 0x10($s2)
    ctx->pc = 0x1518acu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1518b0: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x1518b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1518b4: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1518B4u;
    {
        const bool branch_taken_0x1518b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1518B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1518B4u;
        // 0x1518b8: 0x243a021  addu        $s4, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1518b4) {
            ctx->pc = 0x151900u;
            goto label_151900;
        }
    }
    ctx->pc = 0x1518BCu;
    // 0x1518bc: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1518bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1518c0: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1518c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1518c4: 0x2e28021  addu        $s0, $s7, $v0
    ctx->pc = 0x1518c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_1518c8:
    // 0x1518c8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x1518c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1518cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1518ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1518d0: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x1518d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1518d4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1518d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1518d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1518d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1518dc: 0xc054372  jal         func_150DC8
    ctx->pc = 0x1518DCu;
    SET_GPR_U32(ctx, 31, 0x1518E4u);
    ctx->pc = 0x1518E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1518DCu;
    // 0x1518e0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150DC8u, 0x1518DCu, 0x1518E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1518E4u;
label_1518e4:
    // 0x1518e4: 0x920278aa  lbu         $v0, 0x78AA($s0)
    ctx->pc = 0x1518e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 30890)));
    // 0x1518e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1518e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1518ec: 0xa20278aa  sb          $v0, 0x78AA($s0)
    ctx->pc = 0x1518ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 30890), (uint8_t)GPR_U32(ctx, 2));
    // 0x1518f0: 0x96430010  lhu         $v1, 0x10($s2)
    ctx->pc = 0x1518f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1518f4: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x1518f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1518f8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x1518F8u;
    {
        const bool branch_taken_0x1518f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1518FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1518F8u;
        // 0x1518fc: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1518f8) {
            ctx->pc = 0x1518C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1518c8;
        }
    }
    ctx->pc = 0x151900u;
label_151900:
    // 0x151900: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x151900u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x151904: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x151904u;
    {
        const bool branch_taken_0x151904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151904u;
        // 0x151908: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151904) {
            ctx->pc = 0x15195Cu;
            goto label_15195c;
        }
    }
    ctx->pc = 0x15190Cu;
    // 0x15190c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x15190cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x151910: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x151910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x151914: 0x2e28821  addu        $s1, $s7, $v0
    ctx->pc = 0x151914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_151918:
    // 0x151918: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x151918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15191c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x15191cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151920: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x151920u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151924: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x151924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151928: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x151928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15192c: 0xc054372  jal         func_150DC8
    ctx->pc = 0x15192Cu;
    SET_GPR_U32(ctx, 31, 0x151934u);
    ctx->pc = 0x151930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15192Cu;
    // 0x151930: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150DC8u, 0x15192Cu, 0x151934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151934u;
label_151934:
    // 0x151934: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x151934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x151938: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x151938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x15193c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x15193cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x151940: 0x922378ab  lbu         $v1, 0x78AB($s1)
    ctx->pc = 0x151940u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 30891)));
    // 0x151944: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x151944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x151948: 0xa22378ab  sb          $v1, 0x78AB($s1)
    ctx->pc = 0x151948u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 30891), (uint8_t)GPR_U32(ctx, 3));
    // 0x15194c: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x15194cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x151950: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x151950u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x151954: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x151954u;
    {
        const bool branch_taken_0x151954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151954u;
        // 0x151958: 0x26940010  addiu       $s4, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151954) {
            ctx->pc = 0x151918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_151918;
        }
    }
    ctx->pc = 0x15195Cu;
label_15195c:
    // 0x15195c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x15195cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x151960: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x151960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x151964: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x151964u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x151968: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x151968u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x15196c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x15196cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x151970: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x151970u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x151974: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x151974u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x151978: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x151978u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15197c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x15197cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151980: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x151980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x151984: 0x3e00008  jr          $ra
    ctx->pc = 0x151984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151984u;
        // 0x151988: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15198Cu;
    // 0x15198c: 0x0  nop
    ctx->pc = 0x15198cu;
    // NOP
    ctx->pc = 0x151990u;
}
