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

// Function: func_00165638
// Address: 0x165638 - 0x165e88
void func_00165638_0x165638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00165638_0x165638");
#endif

    switch (ctx->pc) {
        case 0x1656b8u: goto label_1656b8;
        case 0x16570cu: goto label_16570c;
        case 0x165768u: goto label_165768;
        case 0x1657a0u: goto label_1657a0;
        case 0x1657acu: goto label_1657ac;
        case 0x1657e8u: goto label_1657e8;
        case 0x1657fcu: goto label_1657fc;
        case 0x165810u: goto label_165810;
        case 0x165824u: goto label_165824;
        case 0x165838u: goto label_165838;
        case 0x165848u: goto label_165848;
        case 0x165858u: goto label_165858;
        case 0x165868u: goto label_165868;
        case 0x165880u: goto label_165880;
        case 0x165890u: goto label_165890;
        case 0x1658a0u: goto label_1658a0;
        case 0x1658b0u: goto label_1658b0;
        case 0x165968u: goto label_165968;
        case 0x1659acu: goto label_1659ac;
        case 0x1659f0u: goto label_1659f0;
        case 0x165a04u: goto label_165a04;
        case 0x165a20u: goto label_165a20;
        case 0x165a5cu: goto label_165a5c;
        case 0x165ba0u: goto label_165ba0;
        case 0x165c20u: goto label_165c20;
        case 0x165c70u: goto label_165c70;
        case 0x165d74u: goto label_165d74;
        case 0x165e4cu: goto label_165e4c;
        case 0x165e54u: goto label_165e54;
        default: break;
    }

    ctx->pc = 0x165638u;

    // 0x165638: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x165638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x16563c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x16563cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x165640: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x165640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x165644: 0x2463d9d8  addiu       $v1, $v1, -0x2628
    ctx->pc = 0x165644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957528));
    // 0x165648: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x165648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x16564c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x16564cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165650: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x165650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x165654: 0x26860080  addiu       $a2, $s4, 0x80
    ctx->pc = 0x165654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x165658: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x165658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x16565c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x16565cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165660: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x165660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x165664: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x165664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165668: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x165668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x16566c: 0x3c160057  lui         $s6, 0x57
    ctx->pc = 0x16566cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)87 << 16));
    // 0x165670: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x165670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x165674: 0x27be0004  addiu       $fp, $sp, 0x4
    ctx->pc = 0x165674u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x165678: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x165678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16567c: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x16567cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x165680: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x165680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x165684: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x165684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x165688: 0x8282005a  lb          $v0, 0x5A($s4)
    ctx->pc = 0x165688u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 90)));
    // 0x16568c: 0x8e840094  lw          $a0, 0x94($s4)
    ctx->pc = 0x16568cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 148)));
    // 0x165690: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x165690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x165694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x165694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x165698: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x165698u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16569c: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x16569cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1656a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1656a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1656a4: 0x0  nop
    ctx->pc = 0x1656a4u;
    // NOP
    // 0x1656a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1656a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1656ac: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x1656acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x1656b0: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x1656b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x1656b4: 0x0  nop
    ctx->pc = 0x1656b4u;
    // NOP
label_1656b8:
    // 0x1656b8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1656b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1656bc: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x1656bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1656c0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1656c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1656c4: 0x3065ffff  andi        $a1, $v1, 0xFFFF
    ctx->pc = 0x1656c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x1656c8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1656c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1656cc: 0x2ca30005  sltiu       $v1, $a1, 0x5
    ctx->pc = 0x1656ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1656d0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1656d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1656d4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1656d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1656d8: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1656D8u;
    {
        const bool branch_taken_0x1656d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1656DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1656D8u;
        // 0x1656dc: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1656d8) {
            ctx->pc = 0x1656B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1656b8;
        }
    }
    ctx->pc = 0x1656E0u;
    // 0x1656e0: 0x8283005a  lb          $v1, 0x5A($s4)
    ctx->pc = 0x1656e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 90)));
    // 0x1656e4: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x1656e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x1656e8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1656e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1656ec: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x1656ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x1656f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1656f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1656f4: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x1656f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x1656f8: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1656f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1656fc: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x1656fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x165700: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x165700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x165704: 0xc07e9c4  jal         func_1FA710
    ctx->pc = 0x165704u;
    SET_GPR_U32(ctx, 31, 0x16570Cu);
    ctx->pc = 0x165708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165704u;
    // 0x165708: 0xacc2002c  sw          $v0, 0x2C($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x165704u, 0x16570Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16570Cu;
label_16570c:
    // 0x16570c: 0x8e830098  lw          $v1, 0x98($s4)
    ctx->pc = 0x16570cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
    // 0x165710: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x165710u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
    // 0x165714: 0x24a4a990  addiu       $a0, $a1, -0x5670
    ctx->pc = 0x165714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945168));
    // 0x165718: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x165718u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x16571c: 0x9282005a  lbu         $v0, 0x5A($s4)
    ctx->pc = 0x16571cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 90)));
    // 0x165720: 0x8e8500c0  lw          $a1, 0xC0($s4)
    ctx->pc = 0x165720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
    // 0x165724: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x165724u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x165728: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x165728u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x16572c: 0x24422000  addiu       $v0, $v0, 0x2000
    ctx->pc = 0x16572cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8192));
    // 0x165730: 0xa4a20090  sh          $v0, 0x90($a1)
    ctx->pc = 0x165730u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x165734: 0x9283005a  lbu         $v1, 0x5A($s4)
    ctx->pc = 0x165734u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 90)));
    // 0x165738: 0x8e8200c4  lw          $v0, 0xC4($s4)
    ctx->pc = 0x165738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 196)));
    // 0x16573c: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x16573cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x165740: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x165740u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x165744: 0x24632000  addiu       $v1, $v1, 0x2000
    ctx->pc = 0x165744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8192));
    // 0x165748: 0xa4430090  sh          $v1, 0x90($v0)
    ctx->pc = 0x165748u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 144), (uint16_t)GPR_U32(ctx, 3));
    // 0x16574c: 0x8e8500b4  lw          $a1, 0xB4($s4)
    ctx->pc = 0x16574cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x165750: 0x8e8600b8  lw          $a2, 0xB8($s4)
    ctx->pc = 0x165750u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x165754: 0x8e8700bc  lw          $a3, 0xBC($s4)
    ctx->pc = 0x165754u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x165758: 0x24a50084  addiu       $a1, $a1, 0x84
    ctx->pc = 0x165758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 132));
    // 0x16575c: 0x24c60084  addiu       $a2, $a2, 0x84
    ctx->pc = 0x16575cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 132));
    // 0x165760: 0xc0b676e  jal         func_2D9DB8
    ctx->pc = 0x165760u;
    SET_GPR_U32(ctx, 31, 0x165768u);
    ctx->pc = 0x165764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165760u;
    // 0x165764: 0x24e70084  addiu       $a3, $a3, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9DB8u, 0x165760u, 0x165768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165768u;
label_165768:
    // 0x165768: 0x8e8500b4  lw          $a1, 0xB4($s4)
    ctx->pc = 0x165768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 180)));
    // 0x16576c: 0x8ca20084  lw          $v0, 0x84($a1)
    ctx->pc = 0x16576cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x165770: 0x28420065  slti        $v0, $v0, 0x65
    ctx->pc = 0x165770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)101) ? 1 : 0);
    // 0x165774: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x165774u;
    {
        const bool branch_taken_0x165774 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165774u;
        // 0x165778: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165774) {
            ctx->pc = 0x165798u;
            goto label_165798;
        }
    }
    ctx->pc = 0x16577Cu;
    // 0x16577c: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x16577cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x165780: 0x2404003b  addiu       $a0, $zero, 0x3B
    ctx->pc = 0x165780u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x165784: 0xaca30084  sw          $v1, 0x84($a1)
    ctx->pc = 0x165784u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 3));
    // 0x165788: 0x8e8200b8  lw          $v0, 0xB8($s4)
    ctx->pc = 0x165788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
    // 0x16578c: 0xac440084  sw          $a0, 0x84($v0)
    ctx->pc = 0x16578cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 4));
    // 0x165790: 0x8e8300bc  lw          $v1, 0xBC($s4)
    ctx->pc = 0x165790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
    // 0x165794: 0xac640084  sw          $a0, 0x84($v1)
    ctx->pc = 0x165794u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 4));
label_165798:
    // 0x165798: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x165798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16579c: 0x0  nop
    ctx->pc = 0x16579cu;
    // NOP
label_1657a0:
    // 0x1657a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1657a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657a4: 0xc07ee4a  jal         func_1FB928
    ctx->pc = 0x1657A4u;
    SET_GPR_U32(ctx, 31, 0x1657ACu);
    ctx->pc = 0x1657A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657A4u;
    // 0x1657a8: 0x26c49b70  addiu       $a0, $s6, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB928u, 0x1657A4u, 0x1657ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657ACu;
label_1657ac:
    // 0x1657ac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1657acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1657b0: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x1657b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1657b4: 0x2e04001f  sltiu       $a0, $s0, 0x1F
    ctx->pc = 0x1657b4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x1657b8: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1657B8u;
    {
        const bool branch_taken_0x1657b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1657BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1657B8u;
        // 0x1657bc: 0x62a80b  movn        $s5, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1657b8) {
            ctx->pc = 0x1657A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1657a0;
        }
    }
    ctx->pc = 0x1657C0u;
    // 0x1657c0: 0x8e8300ac  lw          $v1, 0xAC($s4)
    ctx->pc = 0x1657c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 172)));
    // 0x1657c4: 0x26a2fffe  addiu       $v0, $s5, -0x2
    ctx->pc = 0x1657c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967294));
    // 0x1657c8: 0x2406001d  addiu       $a2, $zero, 0x1D
    ctx->pc = 0x1657c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1657cc: 0x26d19b70  addiu       $s1, $s6, -0x6490
    ctx->pc = 0x1657ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x1657d0: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x1657d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x1657d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1657d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1657d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1657dc: 0x8e8200b0  lw          $v0, 0xB0($s4)
    ctx->pc = 0x1657dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 176)));
    // 0x1657e0: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x1657E0u;
    SET_GPR_U32(ctx, 31, 0x1657E8u);
    ctx->pc = 0x1657E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657E0u;
    // 0x1657e4: 0xac460084  sw          $a2, 0x84($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x1657E0u, 0x1657E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657E8u;
label_1657e8:
    // 0x1657e8: 0x8e8300e4  lw          $v1, 0xE4($s4)
    ctx->pc = 0x1657e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
    // 0x1657ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1657ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1657f0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1657f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1657f4: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x1657F4u;
    SET_GPR_U32(ctx, 31, 0x1657FCu);
    ctx->pc = 0x1657F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1657F4u;
    // 0x1657f8: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x1657F4u, 0x1657FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1657FCu;
label_1657fc:
    // 0x1657fc: 0x8e8300e8  lw          $v1, 0xE8($s4)
    ctx->pc = 0x1657fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
    // 0x165800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165804: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x165804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x165808: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x165808u;
    SET_GPR_U32(ctx, 31, 0x165810u);
    ctx->pc = 0x16580Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165808u;
    // 0x16580c: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x165808u, 0x165810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165810u;
label_165810:
    // 0x165810: 0x8e8300ec  lw          $v1, 0xEC($s4)
    ctx->pc = 0x165810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 236)));
    // 0x165814: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165818: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x165818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x16581c: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x16581Cu;
    SET_GPR_U32(ctx, 31, 0x165824u);
    ctx->pc = 0x165820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16581Cu;
    // 0x165820: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x16581Cu, 0x165824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165824u;
label_165824:
    // 0x165824: 0x8e8300f0  lw          $v1, 0xF0($s4)
    ctx->pc = 0x165824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 240)));
    // 0x165828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16582c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x16582cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165830: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x165830u;
    SET_GPR_U32(ctx, 31, 0x165838u);
    ctx->pc = 0x165834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165830u;
    // 0x165834: 0xac620084  sw          $v0, 0x84($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x165830u, 0x165838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165838u;
label_165838:
    // 0x165838: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16583c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16583cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165840: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x165840u;
    SET_GPR_U32(ctx, 31, 0x165848u);
    ctx->pc = 0x165844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165840u;
    // 0x165844: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x165840u, 0x165848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165848u;
label_165848:
    // 0x165848: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x165848u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16584c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16584cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165850: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x165850u;
    SET_GPR_U32(ctx, 31, 0x165858u);
    ctx->pc = 0x165854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165850u;
    // 0x165854: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x165850u, 0x165858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165858u;
label_165858:
    // 0x165858: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x165858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16585c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16585cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165860: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x165860u;
    SET_GPR_U32(ctx, 31, 0x165868u);
    ctx->pc = 0x165864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165860u;
    // 0x165864: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x165860u, 0x165868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165868u;
label_165868:
    // 0x165868: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x165868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x16586c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16586cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165870: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x165870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x165874: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x165874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165878: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x165878u;
    SET_GPR_U32(ctx, 31, 0x165880u);
    ctx->pc = 0x16587Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165878u;
    // 0x16587c: 0x202a821  addu        $s5, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x165878u, 0x165880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165880u;
label_165880:
    // 0x165880: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x165880u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165888: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x165888u;
    SET_GPR_U32(ctx, 31, 0x165890u);
    ctx->pc = 0x16588Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165888u;
    // 0x16588c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x165888u, 0x165890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165890u;
label_165890:
    // 0x165890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x165890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x165894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165898: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x165898u;
    SET_GPR_U32(ctx, 31, 0x1658A0u);
    ctx->pc = 0x16589Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165898u;
    // 0x16589c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x165898u, 0x1658A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658A0u;
label_1658a0:
    // 0x1658a0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1658a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1658a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1658a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1658a8: 0xc07ef82  jal         func_1FBE08
    ctx->pc = 0x1658A8u;
    SET_GPR_U32(ctx, 31, 0x1658B0u);
    ctx->pc = 0x1658ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1658A8u;
    // 0x1658ac: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBE08u, 0x1658A8u, 0x1658B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1658B0u;
label_1658b0:
    // 0x1658b0: 0x44901800  mtc1        $s0, $f3
    ctx->pc = 0x1658b0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1658b4: 0x0  nop
    ctx->pc = 0x1658b4u;
    // NOP
    // 0x1658b8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1658b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1658bc: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x1658bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x1658c0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1658c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1658c4: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1658c4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1658c8: 0x0  nop
    ctx->pc = 0x1658c8u;
    // NOP
    // 0x1658cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1658ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1658d0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1658d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1658d4: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1658d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1658d8: 0x44921000  mtc1        $s2, $f2
    ctx->pc = 0x1658d8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1658dc: 0x0  nop
    ctx->pc = 0x1658dcu;
    // NOP
    // 0x1658e0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1658e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1658e4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1658e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x1658e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1658e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1658ec: 0x0  nop
    ctx->pc = 0x1658ecu;
    // NOP
    // 0x1658f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1658f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1658f4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1658f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1658f8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1658f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1658fc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1658fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x165900: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x165900u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x165904: 0x6a00006  bltz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x165904u;
    {
        const bool branch_taken_0x165904 = (GPR_S64(ctx, 21) < 0);
        ctx->pc = 0x165908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165904u;
        // 0x165908: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x165904) {
            ctx->pc = 0x165920u;
            goto label_165920;
        }
    }
    ctx->pc = 0x16590Cu;
    // 0x16590c: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x16590cu;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165910: 0x0  nop
    ctx->pc = 0x165910u;
    // NOP
    // 0x165914: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x165914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x165918: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x165918u;
    {
        const bool branch_taken_0x165918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x165918) {
            ctx->pc = 0x16593Cu;
            goto label_16593c;
        }
    }
    ctx->pc = 0x165920u;
label_165920:
    // 0x165920: 0x151842  srl         $v1, $s5, 1
    ctx->pc = 0x165920u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 1));
    // 0x165924: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x165924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x165928: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x165928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x16592c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16592cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165930: 0x0  nop
    ctx->pc = 0x165930u;
    // NOP
    // 0x165934: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x165934u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x165938: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x165938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16593c:
    // 0x16593c: 0x0  nop
    ctx->pc = 0x16593cu;
    // NOP
    // 0x165940: 0x0  nop
    ctx->pc = 0x165940u;
    // NOP
    // 0x165944: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x165944u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x165948: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x165948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x16594c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x16594cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x165950: 0x3c15f7ff  lui         $s5, 0xF7FF
    ctx->pc = 0x165950u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63487 << 16));
    // 0x165954: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x165954u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165958: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x165958u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16595c: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x16595cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x165960: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x165960u;
    SET_GPR_U32(ctx, 31, 0x165968u);
    ctx->pc = 0x165964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165960u;
    // 0x165964: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x165960u, 0x165968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165968u;
label_165968:
    // 0x165968: 0x8e85009c  lw          $a1, 0x9C($s4)
    ctx->pc = 0x165968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
    // 0x16596c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x16596cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x165970: 0x2463ec58  addiu       $v1, $v1, -0x13A8
    ctx->pc = 0x165970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962264));
    // 0x165974: 0x24090072  addiu       $t1, $zero, 0x72
    ctx->pc = 0x165974u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
    // 0x165978: 0xaca20084  sw          $v0, 0x84($a1)
    ctx->pc = 0x165978u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 2));
    // 0x16597c: 0x3c060062  lui         $a2, 0x62
    ctx->pc = 0x16597cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)98 << 16));
    // 0x165980: 0x24c4a990  addiu       $a0, $a2, -0x5670
    ctx->pc = 0x165980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945168));
    // 0x165984: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x165984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165988: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x165988u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x5FEC68u));
    // 0x16598c: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x16598cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165990: 0x8e8200a4  lw          $v0, 0xA4($s4)
    ctx->pc = 0x165990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 164)));
    // 0x165994: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x165994u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x165998: 0xac480084  sw          $t0, 0x84($v0)
    ctx->pc = 0x165998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 8));
    // 0x16599c: 0x8e8300a8  lw          $v1, 0xA8($s4)
    ctx->pc = 0x16599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x1659a0: 0xac690084  sw          $t1, 0x84($v1)
    ctx->pc = 0x1659a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 9));
    // 0x1659a4: 0xc0b677a  jal         func_2D9DE8
    ctx->pc = 0x1659A4u;
    SET_GPR_U32(ctx, 31, 0x1659ACu);
    ctx->pc = 0x1659A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1659A4u;
    // 0x1659a8: 0xa28002a4  sb          $zero, 0x2A4($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 676), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9DE8u, 0x1659A4u, 0x1659ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1659ACu;
label_1659ac:
    // 0x1659ac: 0x8e8600d4  lw          $a2, 0xD4($s4)
    ctx->pc = 0x1659acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x1659b0: 0x3c04f7ff  lui         $a0, 0xF7FF
    ctx->pc = 0x1659b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63487 << 16));
    // 0x1659b4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1659b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1659b8: 0x3c070800  lui         $a3, 0x800
    ctx->pc = 0x1659b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)2048 << 16));
    // 0x1659bc: 0x8cc2002c  lw          $v0, 0x2C($a2)
    ctx->pc = 0x1659bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    // 0x1659c0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1659c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1659c4: 0x2463f718  addiu       $v1, $v1, -0x8E8
    ctx->pc = 0x1659c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965016));
    // 0x1659c8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x1659c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x1659cc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1659ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1659d0: 0x24b29b70  addiu       $s2, $a1, -0x6490
    ctx->pc = 0x1659d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941552));
    // 0x1659d4: 0xacc2002c  sw          $v0, 0x2C($a2)
    ctx->pc = 0x1659d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 2));
    // 0x1659d8: 0x24710020  addiu       $s1, $v1, 0x20
    ctx->pc = 0x1659d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1659dc: 0x8e8400f8  lw          $a0, 0xF8($s4)
    ctx->pc = 0x1659dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
    // 0x1659e0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x1659e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1659e4: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1659e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1659e8: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x1659e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x1659ec: 0x0  nop
    ctx->pc = 0x1659ecu;
    // NOP
label_1659f0:
    // 0x1659f0: 0x96300000  lhu         $s0, 0x0($s1)
    ctx->pc = 0x1659f0u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1659f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1659f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1659f8: 0x2605ffff  addiu       $a1, $s0, -0x1
    ctx->pc = 0x1659f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x1659fc: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x1659FCu;
    SET_GPR_U32(ctx, 31, 0x165A04u);
    ctx->pc = 0x165A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1659FCu;
    // 0x165a00: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x1659FCu, 0x165A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A04u;
label_165a04:
    // 0x165a04: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x165A04u;
    {
        const bool branch_taken_0x165a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165a04) {
            ctx->pc = 0x165A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165A04u;
            // 0x165a08: 0x96250000  lhu         $a1, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165A18u;
            goto label_165a18;
        }
    }
    ctx->pc = 0x165A0Cu;
    // 0x165a0c: 0x56170019  bnel        $s0, $s7, . + 4 + (0x19 << 2)
    ctx->pc = 0x165A0Cu;
    {
        const bool branch_taken_0x165a0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        if (branch_taken_0x165a0c) {
            ctx->pc = 0x165A10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165A0Cu;
            // 0x165a10: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165A74u;
            goto label_165a74;
        }
    }
    ctx->pc = 0x165A14u;
    // 0x165a14: 0x96250000  lhu         $a1, 0x0($s1)
    ctx->pc = 0x165a14u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_165a18:
    // 0x165a18: 0xc07eff4  jal         func_1FBFD0
    ctx->pc = 0x165A18u;
    SET_GPR_U32(ctx, 31, 0x165A20u);
    ctx->pc = 0x165A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165A18u;
    // 0x165a1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FBFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FBFD0u, 0x165A18u, 0x165A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A20u;
label_165a20:
    // 0x165a20: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x165A20u;
    {
        const bool branch_taken_0x165a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165a20) {
            ctx->pc = 0x165A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165A20u;
            // 0x165a24: 0x928202a4  lbu         $v0, 0x2A4($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 676)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165A48u;
            goto label_165a48;
        }
    }
    ctx->pc = 0x165A28u;
    // 0x165a28: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x165a28u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x165a2c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x165a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x165a30: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x165a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x165a34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165A34u;
    {
        const bool branch_taken_0x165a34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A34u;
        // 0x165a38: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a34) {
            ctx->pc = 0x165A44u;
            goto label_165a44;
        }
    }
    ctx->pc = 0x165A3Cu;
    // 0x165a3c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x165A3Cu;
    {
        const bool branch_taken_0x165a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165a3c) {
            ctx->pc = 0x165A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165A3Cu;
            // 0x165a40: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165A74u;
            goto label_165a74;
        }
    }
    ctx->pc = 0x165A44u;
label_165a44:
    // 0x165a44: 0x928202a4  lbu         $v0, 0x2A4($s4)
    ctx->pc = 0x165a44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 676)));
label_165a48:
    // 0x165a48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x165a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a4c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x165a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165a50: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165a54: 0xc07f0d8  jal         func_1FC360
    ctx->pc = 0x165A54u;
    SET_GPR_U32(ctx, 31, 0x165A5Cu);
    ctx->pc = 0x165A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165A54u;
    // 0x165a58: 0xa28202a4  sb          $v0, 0x2A4($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 676), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC360u, 0x165A54u, 0x165A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165A5Cu;
label_165a5c:
    // 0x165a5c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165A5Cu;
    {
        const bool branch_taken_0x165a5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A5Cu;
        // 0x165a60: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a5c) {
            ctx->pc = 0x165A74u;
            goto label_165a74;
        }
    }
    ctx->pc = 0x165A64u;
    // 0x165a64: 0x8e8300f8  lw          $v1, 0xF8($s4)
    ctx->pc = 0x165a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
    // 0x165a68: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x165a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x165a6c: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x165a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x165a70: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x165a70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
label_165a74:
    // 0x165a74: 0x2e620018  sltiu       $v0, $s3, 0x18
    ctx->pc = 0x165a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x165a78: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x165A78u;
    {
        const bool branch_taken_0x165a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165A78u;
        // 0x165a7c: 0x26310024  addiu       $s1, $s1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165a78) {
            ctx->pc = 0x1659F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1659f0;
        }
    }
    ctx->pc = 0x165A80u;
    // 0x165a80: 0x828202a4  lb          $v0, 0x2A4($s4)
    ctx->pc = 0x165a80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 676)));
    // 0x165a84: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x165A84u;
    {
        const bool branch_taken_0x165a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165a84) {
            ctx->pc = 0x165A88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165A84u;
            // 0x165a88: 0x828202a0  lb          $v0, 0x2A0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165AA4u;
            goto label_165aa4;
        }
    }
    ctx->pc = 0x165A8Cu;
    // 0x165a8c: 0x8e8400d4  lw          $a0, 0xD4($s4)
    ctx->pc = 0x165a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x165a90: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x165a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x165a94: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x165a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x165a98: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x165a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x165a9c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x165a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x165aa0: 0x828202a0  lb          $v0, 0x2A0($s4)
    ctx->pc = 0x165aa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
label_165aa4:
    // 0x165aa4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x165AA4u;
    {
        const bool branch_taken_0x165aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AA4u;
        // 0x165aa8: 0x8e8400c8  lw          $a0, 0xC8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165aa4) {
            ctx->pc = 0x165AB8u;
            goto label_165ab8;
        }
    }
    ctx->pc = 0x165AACu;
    // 0x165aac: 0x828202a1  lb          $v0, 0x2A1($s4)
    ctx->pc = 0x165aacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 673)));
    // 0x165ab0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165AB0u;
    {
        const bool branch_taken_0x165ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165ab0) {
            ctx->pc = 0x165AC8u;
            goto label_165ac8;
        }
    }
    ctx->pc = 0x165AB8u;
label_165ab8:
    // 0x165ab8: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x165ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x165abc: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x165abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x165ac0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x165AC0u;
    {
        const bool branch_taken_0x165ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AC0u;
        // 0x165ac4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ac0) {
            ctx->pc = 0x165AD8u;
            goto label_165ad8;
        }
    }
    ctx->pc = 0x165AC8u;
label_165ac8:
    // 0x165ac8: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x165ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x165acc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x165accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x165ad0: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x165ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x165ad4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x165ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_165ad8:
    // 0x165ad8: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x165ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x165adc: 0x828302a0  lb          $v1, 0x2A0($s4)
    ctx->pc = 0x165adcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
    // 0x165ae0: 0x828202a1  lb          $v0, 0x2A1($s4)
    ctx->pc = 0x165ae0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 673)));
    // 0x165ae4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165AE4u;
    {
        const bool branch_taken_0x165ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x165AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165AE4u;
        // 0x165ae8: 0x9284005b  lbu         $a0, 0x5B($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ae4) {
            ctx->pc = 0x165AF4u;
            goto label_165af4;
        }
    }
    ctx->pc = 0x165AECu;
    // 0x165aec: 0x508000b5  beql        $a0, $zero, . + 4 + (0xB5 << 2)
    ctx->pc = 0x165AECu;
    {
        const bool branch_taken_0x165aec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x165aec) {
            ctx->pc = 0x165AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165AECu;
            // 0x165af0: 0x928202a3  lbu         $v0, 0x2A3($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 675)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165DC4u;
            goto label_165dc4;
        }
    }
    ctx->pc = 0x165AF4u;
label_165af4:
    // 0x165af4: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x165af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x165af8: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x165af8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x165afc: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x165afcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x165b00: 0x106000a4  beqz        $v1, . + 4 + (0xA4 << 2)
    ctx->pc = 0x165B00u;
    {
        const bool branch_taken_0x165b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x165B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165B00u;
        // 0x165b04: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165b00) {
            ctx->pc = 0x165D94u;
            goto label_165d94;
        }
    }
    ctx->pc = 0x165B08u;
    // 0x165b08: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x165b08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x165b0c: 0x2442f6b0  addiu       $v0, $v0, -0x950
    ctx->pc = 0x165b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964912));
    // 0x165b10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x165b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x165b14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x165b14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x165b18: 0x800008  jr          $a0
    ctx->pc = 0x165B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x165B20u: goto label_165b20;
            case 0x165B40u: goto label_165b40;
            case 0x165BB0u: goto label_165bb0;
            case 0x165C04u: goto label_165c04;
            case 0x165C88u: goto label_165c88;
            case 0x165D30u: goto label_165d30;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165B18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x165B20u;
label_165b20:
    // 0x165b20: 0x928202a2  lbu         $v0, 0x2A2($s4)
    ctx->pc = 0x165b20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 674)));
    // 0x165b24: 0x8e8300dc  lw          $v1, 0xDC($s4)
    ctx->pc = 0x165b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x165b28: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x165b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x165b2c: 0xa28202a2  sb          $v0, 0x2A2($s4)
    ctx->pc = 0x165b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 674), (uint8_t)GPR_U32(ctx, 2));
    // 0x165b30: 0xa060004f  sb          $zero, 0x4F($v1)
    ctx->pc = 0x165b30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x165b34: 0x9282005b  lbu         $v0, 0x5B($s4)
    ctx->pc = 0x165b34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
    // 0x165b38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165b3c: 0xa282005b  sb          $v0, 0x5B($s4)
    ctx->pc = 0x165b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 2));
label_165b40:
    // 0x165b40: 0x8e8300dc  lw          $v1, 0xDC($s4)
    ctx->pc = 0x165b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x165b44: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x165b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x165b48: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x165b48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x165b4c: 0x9062004f  lbu         $v0, 0x4F($v1)
    ctx->pc = 0x165b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x165b50: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x165b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x165b54: 0xa062004f  sb          $v0, 0x4F($v1)
    ctx->pc = 0x165b54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
    // 0x165b58: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x165b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x165b5c: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x165b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x165b60: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x165b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x165b64: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x165b64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x165b68: 0x828302a0  lb          $v1, 0x2A0($s4)
    ctx->pc = 0x165b68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
    // 0x165b6c: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x165B6Cu;
    {
        const bool branch_taken_0x165b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165b6c) {
            ctx->pc = 0x165B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165B6Cu;
            // 0x165b70: 0x8e8400dc  lw          $a0, 0xDC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165B88u;
            goto label_165b88;
        }
    }
    ctx->pc = 0x165B74u;
    // 0x165b74: 0x8e8300c8  lw          $v1, 0xC8($s4)
    ctx->pc = 0x165b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x165b78: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x165b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x165b7c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x165b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x165b80: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x165b80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x165b84: 0x8e8400dc  lw          $a0, 0xDC($s4)
    ctx->pc = 0x165b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_165b88:
    // 0x165b88: 0x9082004f  lbu         $v0, 0x4F($a0)
    ctx->pc = 0x165b88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 79)));
    // 0x165b8c: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x165b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x165b90: 0x54400052  bnel        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x165B90u;
    {
        const bool branch_taken_0x165b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165b90) {
            ctx->pc = 0x165B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165B90u;
            // 0x165b94: 0x8e8200dc  lw          $v0, 0xDC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165CDCu;
            goto label_165cdc;
        }
    }
    ctx->pc = 0x165B98u;
    // 0x165b98: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x165b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x165b9c: 0xa083004f  sb          $v1, 0x4F($a0)
    ctx->pc = 0x165b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 3));
label_165ba0:
    // 0x165ba0: 0x9282005b  lbu         $v0, 0x5B($s4)
    ctx->pc = 0x165ba0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
    // 0x165ba4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165ba8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x165BA8u;
    {
        const bool branch_taken_0x165ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BA8u;
        // 0x165bac: 0xa282005b  sb          $v0, 0x5B($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165ba8) {
            ctx->pc = 0x165CD8u;
            goto label_165cd8;
        }
    }
    ctx->pc = 0x165BB0u;
label_165bb0:
    // 0x165bb0: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x165bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x165bb4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x165bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x165bb8: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x165bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x165bbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x165bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x165bc0: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x165bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x165bc4: 0x828302a0  lb          $v1, 0x2A0($s4)
    ctx->pc = 0x165bc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
    // 0x165bc8: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x165BC8u;
    {
        const bool branch_taken_0x165bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165bc8) {
            ctx->pc = 0x165BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165BC8u;
            // 0x165bcc: 0x828202a3  lb          $v0, 0x2A3($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 675)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165BECu;
            goto label_165bec;
        }
    }
    ctx->pc = 0x165BD0u;
    // 0x165bd0: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x165bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x165bd4: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x165bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x165bd8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x165bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x165bdc: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x165bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x165be0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x165be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x165be4: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x165be4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x165be8: 0x828202a3  lb          $v0, 0x2A3($s4)
    ctx->pc = 0x165be8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 675)));
label_165bec:
    // 0x165bec: 0x5440006a  bnel        $v0, $zero, . + 4 + (0x6A << 2)
    ctx->pc = 0x165BECu;
    {
        const bool branch_taken_0x165bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165bec) {
            ctx->pc = 0x165BF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165BECu;
            // 0x165bf0: 0x828302a0  lb          $v1, 0x2A0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165D98u;
            goto label_165d98;
        }
    }
    ctx->pc = 0x165BF4u;
    // 0x165bf4: 0x9282005b  lbu         $v0, 0x5B($s4)
    ctx->pc = 0x165bf4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
    // 0x165bf8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165bfc: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x165BFCu;
    {
        const bool branch_taken_0x165bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165BFCu;
        // 0x165c00: 0xa282005b  sb          $v0, 0x5B($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165bfc) {
            ctx->pc = 0x165D94u;
            goto label_165d94;
        }
    }
    ctx->pc = 0x165C04u;
label_165c04:
    // 0x165c04: 0x928202a2  lbu         $v0, 0x2A2($s4)
    ctx->pc = 0x165c04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 674)));
    // 0x165c08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x165c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c0c: 0x8e8500d4  lw          $a1, 0xD4($s4)
    ctx->pc = 0x165c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x165c10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x165c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c14: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x165c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x165c18: 0xc0ab26e  jal         func_2AC9B8
    ctx->pc = 0x165C18u;
    SET_GPR_U32(ctx, 31, 0x165C20u);
    ctx->pc = 0x165C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C18u;
    // 0x165c1c: 0xa28202a2  sb          $v0, 0x2A2($s4) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 20), 674), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC9B8u, 0x165C18u, 0x165C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C20u;
label_165c20:
    // 0x165c20: 0x828202a0  lb          $v0, 0x2A0($s4)
    ctx->pc = 0x165c20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
    // 0x165c24: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x165C24u;
    {
        const bool branch_taken_0x165c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165c24) {
            ctx->pc = 0x165C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165C24u;
            // 0x165c28: 0x9282005b  lbu         $v0, 0x5B($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165C80u;
            goto label_165c80;
        }
    }
    ctx->pc = 0x165C2Cu;
    // 0x165c2c: 0x828202a1  lb          $v0, 0x2A1($s4)
    ctx->pc = 0x165c2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 673)));
    // 0x165c30: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x165C30u;
    {
        const bool branch_taken_0x165c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165c30) {
            ctx->pc = 0x165C34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165C30u;
            // 0x165c34: 0x828202a0  lb          $v0, 0x2A0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165C54u;
            goto label_165c54;
        }
    }
    ctx->pc = 0x165C38u;
    // 0x165c38: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x165c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x165c3c: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x165c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x165c40: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x165c40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x165c44: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x165c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x165c48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x165c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x165c4c: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x165c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x165c50: 0x828202a0  lb          $v0, 0x2A0($s4)
    ctx->pc = 0x165c50u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
label_165c54:
    // 0x165c54: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x165c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x165c58: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x165c58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x165c5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x165c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165c60: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x165c60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x165c64: 0x24a5f6f4  addiu       $a1, $a1, -0x90C
    ctx->pc = 0x165c64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964980));
    // 0x165c68: 0xc059950  jal         func_166540
    ctx->pc = 0x165C68u;
    SET_GPR_U32(ctx, 31, 0x165C70u);
    ctx->pc = 0x165C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165C68u;
    // 0x165c6c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166540u, 0x165C68u, 0x165C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165C70u;
label_165c70:
    // 0x165c70: 0x8e8300c8  lw          $v1, 0xC8($s4)
    ctx->pc = 0x165c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x165c74: 0x8e820298  lw          $v0, 0x298($s4)
    ctx->pc = 0x165c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 664)));
    // 0x165c78: 0xac620024  sw          $v0, 0x24($v1)
    ctx->pc = 0x165c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 2));
    // 0x165c7c: 0x9282005b  lbu         $v0, 0x5B($s4)
    ctx->pc = 0x165c7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 91)));
label_165c80:
    // 0x165c80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x165c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x165c84: 0xa282005b  sb          $v0, 0x5B($s4)
    ctx->pc = 0x165c84u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 2));
label_165c88:
    // 0x165c88: 0x8e8200dc  lw          $v0, 0xDC($s4)
    ctx->pc = 0x165c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x165c8c: 0x3c05f7ff  lui         $a1, 0xF7FF
    ctx->pc = 0x165c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63487 << 16));
    // 0x165c90: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x165c90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x165c94: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x165c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x165c98: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x165c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x165c9c: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x165c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    // 0x165ca0: 0x828402a1  lb          $a0, 0x2A1($s4)
    ctx->pc = 0x165ca0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 673)));
    // 0x165ca4: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x165CA4u;
    {
        const bool branch_taken_0x165ca4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x165ca4) {
            ctx->pc = 0x165CA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165CA4u;
            // 0x165ca8: 0x8e8300dc  lw          $v1, 0xDC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165CC0u;
            goto label_165cc0;
        }
    }
    ctx->pc = 0x165CACu;
    // 0x165cac: 0x8e8300c8  lw          $v1, 0xC8($s4)
    ctx->pc = 0x165cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x165cb0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x165cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x165cb4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x165cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x165cb8: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x165cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x165cbc: 0x8e8300dc  lw          $v1, 0xDC($s4)
    ctx->pc = 0x165cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_165cc0:
    // 0x165cc0: 0x9062004f  lbu         $v0, 0x4F($v1)
    ctx->pc = 0x165cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 79)));
    // 0x165cc4: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x165cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x165cc8: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165CC8u;
    {
        const bool branch_taken_0x165cc8 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x165cc8) {
            ctx->pc = 0x165CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165CC8u;
            // 0x165ccc: 0xa062004f  sb          $v0, 0x4F($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165CD8u;
            goto label_165cd8;
        }
    }
    ctx->pc = 0x165CD0u;
    // 0x165cd0: 0x1000ffb3  b           . + 4 + (-0x4D << 2)
    ctx->pc = 0x165CD0u;
    {
        const bool branch_taken_0x165cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165CD0u;
        // 0x165cd4: 0xa060004f  sb          $zero, 0x4F($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 79), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165cd0) {
            ctx->pc = 0x165BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_165ba0;
        }
    }
    ctx->pc = 0x165CD8u;
label_165cd8:
    // 0x165cd8: 0x8e8200dc  lw          $v0, 0xDC($s4)
    ctx->pc = 0x165cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_165cdc:
    // 0x165cdc: 0x8e8400f4  lw          $a0, 0xF4($s4)
    ctx->pc = 0x165cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
    // 0x165ce0: 0x9043004f  lbu         $v1, 0x4F($v0)
    ctx->pc = 0x165ce0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 79)));
    // 0x165ce4: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x165ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
    // 0x165ce8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x165ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x165cec: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x165cecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165cf0: 0x0  nop
    ctx->pc = 0x165cf0u;
    // NOP
    // 0x165cf4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x165cf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x165cf8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x165cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x165cfc: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x165cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x165d00: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x165d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x165d04: 0x90430053  lbu         $v1, 0x53($v0)
    ctx->pc = 0x165d04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 83)));
    // 0x165d08: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x165d08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x165d0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x165d0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165d10: 0x0  nop
    ctx->pc = 0x165d10u;
    // NOP
    // 0x165d14: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x165d14u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x165d18: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x165d18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x165d1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x165d1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x165d20: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x165d20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x165d24: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x165d24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x165d28: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x165D28u;
    {
        const bool branch_taken_0x165d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x165D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165D28u;
        // 0x165d2c: 0xa082004f  sb          $v0, 0x4F($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 79), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165d28) {
            ctx->pc = 0x165D94u;
            goto label_165d94;
        }
    }
    ctx->pc = 0x165D30u;
label_165d30:
    // 0x165d30: 0x828202a1  lb          $v0, 0x2A1($s4)
    ctx->pc = 0x165d30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 673)));
    // 0x165d34: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x165D34u;
    {
        const bool branch_taken_0x165d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165d34) {
            ctx->pc = 0x165D38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165D34u;
            // 0x165d38: 0x8e8500dc  lw          $a1, 0xDC($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165D58u;
            goto label_165d58;
        }
    }
    ctx->pc = 0x165D3Cu;
    // 0x165d3c: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x165d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x165d40: 0x3c03f7ff  lui         $v1, 0xF7FF
    ctx->pc = 0x165d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63487 << 16));
    // 0x165d44: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x165d44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x165d48: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x165d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x165d4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x165d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x165d50: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x165d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x165d54: 0x8e8500dc  lw          $a1, 0xDC($s4)
    ctx->pc = 0x165d54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
label_165d58:
    // 0x165d58: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x165d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x165d5c: 0x26c49b70  addiu       $a0, $s6, -0x6490
    ctx->pc = 0x165d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294941552));
    // 0x165d60: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x165d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x165d64: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x165d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x165d68: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x165d68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x165d6c: 0xc07f0ce  jal         func_1FC338
    ctx->pc = 0x165D6Cu;
    SET_GPR_U32(ctx, 31, 0x165D74u);
    ctx->pc = 0x165D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165D6Cu;
    // 0x165d70: 0x828502a0  lb          $a1, 0x2A0($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC338u, 0x165D6Cu, 0x165D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165D74u;
label_165d74:
    // 0x165d74: 0x8e8200dc  lw          $v0, 0xDC($s4)
    ctx->pc = 0x165d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 220)));
    // 0x165d78: 0xa040004f  sb          $zero, 0x4F($v0)
    ctx->pc = 0x165d78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 79), (uint8_t)GPR_U32(ctx, 0));
    // 0x165d7c: 0xa280005b  sb          $zero, 0x5B($s4)
    ctx->pc = 0x165d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 91), (uint8_t)GPR_U32(ctx, 0));
    // 0x165d80: 0x928202a2  lbu         $v0, 0x2A2($s4)
    ctx->pc = 0x165d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 674)));
    // 0x165d84: 0x928302a0  lbu         $v1, 0x2A0($s4)
    ctx->pc = 0x165d84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
    // 0x165d88: 0x304200fc  andi        $v0, $v0, 0xFC
    ctx->pc = 0x165d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)252);
    // 0x165d8c: 0xa28302a1  sb          $v1, 0x2A1($s4)
    ctx->pc = 0x165d8cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 673), (uint8_t)GPR_U32(ctx, 3));
    // 0x165d90: 0xa28202a2  sb          $v0, 0x2A2($s4)
    ctx->pc = 0x165d90u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 674), (uint8_t)GPR_U32(ctx, 2));
label_165d94:
    // 0x165d94: 0x828302a0  lb          $v1, 0x2A0($s4)
    ctx->pc = 0x165d94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
label_165d98:
    // 0x165d98: 0x828202a1  lb          $v0, 0x2A1($s4)
    ctx->pc = 0x165d98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 673)));
    // 0x165d9c: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x165D9Cu;
    {
        const bool branch_taken_0x165d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x165d9c) {
            ctx->pc = 0x165DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165D9Cu;
            // 0x165da0: 0x928202a3  lbu         $v0, 0x2A3($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 675)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165DC4u;
            goto label_165dc4;
        }
    }
    ctx->pc = 0x165DA4u;
    // 0x165da4: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x165DA4u;
    {
        const bool branch_taken_0x165da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x165da4) {
            ctx->pc = 0x165DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165DA4u;
            // 0x165da8: 0x928202a3  lbu         $v0, 0x2A3($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 675)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165DC4u;
            goto label_165dc4;
        }
    }
    ctx->pc = 0x165DACu;
    // 0x165dac: 0x8e8400c8  lw          $a0, 0xC8($s4)
    ctx->pc = 0x165dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 200)));
    // 0x165db0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x165db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x165db4: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x165db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x165db8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x165db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x165dbc: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x165dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x165dc0: 0x928202a3  lbu         $v0, 0x2A3($s4)
    ctx->pc = 0x165dc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 675)));
label_165dc4:
    // 0x165dc4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x165dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x165dc8: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x165dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x165dcc: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x165DCCu;
    {
        const bool branch_taken_0x165dcc = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x165DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165DCCu;
        // 0x165dd0: 0xa28202a3  sb          $v0, 0x2A3($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 675), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165dcc) {
            ctx->pc = 0x165DD8u;
            goto label_165dd8;
        }
    }
    ctx->pc = 0x165DD4u;
    // 0x165dd4: 0xa28002a3  sb          $zero, 0x2A3($s4)
    ctx->pc = 0x165dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 675), (uint8_t)GPR_U32(ctx, 0));
label_165dd8:
    // 0x165dd8: 0x8e8300cc  lw          $v1, 0xCC($s4)
    ctx->pc = 0x165dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 204)));
    // 0x165ddc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x165ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165de0: 0x828202a0  lb          $v0, 0x2A0($s4)
    ctx->pc = 0x165de0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
    // 0x165de4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x165de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x165de8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x165de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x165dec: 0xac620084  sw          $v0, 0x84($v1)
    ctx->pc = 0x165decu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 2));
    // 0x165df0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x165df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x165df4: 0x34212f1b  ori         $at, $at, 0x2F1B
    ctx->pc = 0x165df4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12059);
    // 0x165df8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x165df8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x165dfc: 0x928202a0  lbu         $v0, 0x2A0($s4)
    ctx->pc = 0x165dfcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
    // 0x165e00: 0x8e8500d8  lw          $a1, 0xD8($s4)
    ctx->pc = 0x165e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 216)));
    // 0x165e04: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x165e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x165e08: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x165e08u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x165e0c: 0x24422005  addiu       $v0, $v0, 0x2005
    ctx->pc = 0x165e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8197));
    // 0x165e10: 0xa4a20090  sh          $v0, 0x90($a1)
    ctx->pc = 0x165e10u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 144), (uint16_t)GPR_U32(ctx, 2));
    // 0x165e14: 0x828302a4  lb          $v1, 0x2A4($s4)
    ctx->pc = 0x165e14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 676)));
    // 0x165e18: 0x828202a0  lb          $v0, 0x2A0($s4)
    ctx->pc = 0x165e18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 672)));
    // 0x165e1c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x165e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x165e20: 0x0  nop
    ctx->pc = 0x165e20u;
    // NOP
    // 0x165e24: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x165e24u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x165e28: 0x8e8500d0  lw          $a1, 0xD0($s4)
    ctx->pc = 0x165e28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 208)));
    // 0x165e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x165e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165e30: 0x0  nop
    ctx->pc = 0x165e30u;
    // NOP
    // 0x165e34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x165e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x165e38: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x165e38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x165e3c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x165e3cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x165e40: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x165e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x165e44: 0xc059868  jal         func_1661A0
    ctx->pc = 0x165E44u;
    SET_GPR_U32(ctx, 31, 0x165E4Cu);
    ctx->pc = 0x165E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E44u;
    // 0x165e48: 0xe4a00048  swc1        $f0, 0x48($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1661A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1661A0u, 0x165E44u, 0x165E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E4Cu;
label_165e4c:
    // 0x165e4c: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x165E4Cu;
    SET_GPR_U32(ctx, 31, 0x165E54u);
    ctx->pc = 0x165E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165E4Cu;
    // 0x165e50: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x165E4Cu, 0x165E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x165E54u;
label_165e54:
    // 0x165e54: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x165e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x165e58: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x165e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x165e5c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x165e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x165e60: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x165e60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x165e64: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x165e64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x165e68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x165e68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x165e6c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x165e6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x165e70: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x165e70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x165e74: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x165e74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x165e78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x165e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x165e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x165E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165E7Cu;
        // 0x165e80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165E84u;
    // 0x165e84: 0x0  nop
    ctx->pc = 0x165e84u;
    // NOP
    ctx->pc = 0x165e88u;
}
