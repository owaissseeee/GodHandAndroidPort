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

// Function: cCoreSave_addItem
// Address: 0x1faff0 - 0x1fb1c0
void cCoreSave_addItem_0x1faff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addItem_0x1faff0");
#endif

    switch (ctx->pc) {
        case 0x1fb030u: goto label_1fb030;
        case 0x1fb138u: goto label_1fb138;
        case 0x1fb168u: goto label_1fb168;
        case 0x1fb1b4u: goto label_1fb1b4;
        default: break;
    }

    ctx->pc = 0x1faff0u;

label_1faff0:
    // 0x1faff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1faff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1faff4: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1faff4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faff8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1faff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1faffc: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x1faffcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb000: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x1fb000u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb004: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x1fb004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb008: 0x1080006a  beqz        $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x1FB008u;
    {
        const bool branch_taken_0x1fb008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB008u;
        // 0x1fb00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb008) {
            ctx->pc = 0x1FB1B4u;
            goto label_1fb1b4;
        }
    }
    ctx->pc = 0x1FB010u;
    // 0x1fb010: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1fb010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1fb014: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1fb014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb018: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x1fb018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x1fb01c: 0x904305b1  lbu         $v1, 0x5B1($v0)
    ctx->pc = 0x1fb01cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x747A51u));
    // 0x1fb020: 0x14600041  bnez        $v1, . + 4 + (0x41 << 2)
    ctx->pc = 0x1FB020u;
    {
        const bool branch_taken_0x1fb020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB020u;
        // 0x1fb024: 0x80582d  daddu       $t3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb020) {
            ctx->pc = 0x1FB128u;
            goto label_1fb128;
        }
    }
    ctx->pc = 0x1FB028u;
    // 0x1fb028: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1FB028u;
    {
        const bool branch_taken_0x1fb028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB028u;
        // 0x1fb02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb028) {
            ctx->pc = 0x1FB1B4u;
            goto label_1fb1b4;
        }
    }
    ctx->pc = 0x1FB030u;
label_1fb030:
    // 0x1fb030: 0x95620288  lhu         $v0, 0x288($t3)
    ctx->pc = 0x1fb030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 648)));
    // 0x1fb034: 0x24c674a0  addiu       $a2, $a2, 0x74A0
    ctx->pc = 0x1fb034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29856));
    // 0x1fb038: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1fb038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x1fb03c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb03cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb040: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x1fb040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fb044: 0xa5640288  sh          $a0, 0x288($t3)
    ctx->pc = 0x1fb044u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 648), (uint16_t)GPR_U32(ctx, 4));
    // 0x1fb048: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fb048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb04c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1fb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1fb050: 0xa4620290  sh          $v0, 0x290($v1)
    ctx->pc = 0x1fb050u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 656), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fb054: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x1fb054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb058: 0x94c505b0  lhu         $a1, 0x5B0($a2)
    ctx->pc = 0x1fb058u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 1456)));
    // 0x1fb05c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1fb05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1fb060: 0xa485028a  sh          $a1, 0x28A($a0)
    ctx->pc = 0x1fb060u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 650), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fb064: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fb064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb068: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1fb068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1fb06c: 0xa46e028c  sh          $t6, 0x28C($v1)
    ctx->pc = 0x1fb06cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 652), (uint16_t)GPR_U32(ctx, 14));
    // 0x1fb070: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x1fb070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb074: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x1fb074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb078: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1fb078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1fb07c: 0x2484028a  addiu       $a0, $a0, 0x28A
    ctx->pc = 0x1fb07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 650));
    // 0x1fb080: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fb080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fb084: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb084u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fb088: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fb088u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1fb08c: 0xa4830008  sh          $v1, 0x8($a0)
    ctx->pc = 0x1fb08cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fb090: 0x8d850000  lw          $a1, 0x0($t4)
    ctx->pc = 0x1fb090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb094: 0xc5a00004  lwc1        $f0, 0x4($t5)
    ctx->pc = 0x1fb094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb098: 0x1452821  addu        $a1, $t2, $a1
    ctx->pc = 0x1fb098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x1fb09c: 0x24a5028a  addiu       $a1, $a1, 0x28A
    ctx->pc = 0x1fb09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 650));
    // 0x1fb0a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fb0a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fb0a4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb0a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fb0a8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fb0a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1fb0ac: 0xa4a3000a  sh          $v1, 0xA($a1)
    ctx->pc = 0x1fb0acu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fb0b0: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x1fb0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb0b4: 0xc5a00008  lwc1        $f0, 0x8($t5)
    ctx->pc = 0x1fb0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb0b8: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1fb0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1fb0bc: 0x2484028a  addiu       $a0, $a0, 0x28A
    ctx->pc = 0x1fb0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 650));
    // 0x1fb0c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fb0c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fb0c4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb0c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fb0c8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fb0c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1fb0cc: 0xa483000c  sh          $v1, 0xC($a0)
    ctx->pc = 0x1fb0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fb0d0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1fb0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x1fb0d4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1fb0d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x1fb0d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fb0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fb0dc: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1fb0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fb0e0: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x1fb0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb0e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1fb0e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1fb0e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1fb0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1fb0ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1fb0ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1fb0f0: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1fb0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1fb0f4: 0x2484028a  addiu       $a0, $a0, 0x28A
    ctx->pc = 0x1fb0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 650));
    // 0x1fb0f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1fb0f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1fb0fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fb0fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1fb100: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1fb100u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1fb104: 0xa0830005  sb          $v1, 0x5($a0)
    ctx->pc = 0x1fb104u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fb108: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1fb108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb10c: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x1fb10cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x1fb110: 0xa4680298  sh          $t0, 0x298($v1)
    ctx->pc = 0x1fb110u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 664), (uint16_t)GPR_U32(ctx, 8));
    // 0x1fb114: 0x8d840000  lw          $a0, 0x0($t4)
    ctx->pc = 0x1fb114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1fb118: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x1fb118u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1fb11c: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x1fb11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x1fb120: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1FB120u;
    {
        const bool branch_taken_0x1fb120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB120u;
        // 0x1fb124: 0xa083028e  sb          $v1, 0x28E($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 654), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb120) {
            ctx->pc = 0x1FB1B4u;
            goto label_1fb1b4;
        }
    }
    ctx->pc = 0x1FB128u;
label_1fb128:
    // 0x1fb128: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1fb128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fb12c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fb12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb130: 0x2563028a  addiu       $v1, $t3, 0x28A
    ctx->pc = 0x1fb130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 650));
    // 0x1fb134: 0x0  nop
    ctx->pc = 0x1fb134u;
    // NOP
label_1fb138:
    // 0x1fb138: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1fb138u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb13c: 0x1045ffbc  beq         $v0, $a1, . + 4 + (-0x44 << 2)
    ctx->pc = 0x1FB13Cu;
    {
        const bool branch_taken_0x1fb13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1FB140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB13Cu;
        // 0x1fb140: 0x45100  sll         $t2, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb13c) {
            ctx->pc = 0x1FB030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb030;
        }
    }
    ctx->pc = 0x1FB144u;
    // 0x1fb144: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1fb144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1fb148: 0x2c820080  sltiu       $v0, $a0, 0x80
    ctx->pc = 0x1fb148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1fb14c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1FB14Cu;
    {
        const bool branch_taken_0x1fb14c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB14Cu;
        // 0x1fb150: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb14c) {
            ctx->pc = 0x1FB138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb138;
        }
    }
    ctx->pc = 0x1FB154u;
    // 0x1fb154: 0x2563028a  addiu       $v1, $t3, 0x28A
    ctx->pc = 0x1fb154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 650));
    // 0x1fb158: 0x95660288  lhu         $a2, 0x288($t3)
    ctx->pc = 0x1fb158u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 648)));
    // 0x1fb15c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1fb15cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1fb160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb164: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1fb164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1fb168:
    // 0x1fb168: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x1fb168u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x1fb16c: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x1fb16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1fb170: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB170u;
    {
        const bool branch_taken_0x1fb170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb170) {
            ctx->pc = 0x1FB174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB170u;
            // 0x1fb174: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB184u;
            goto label_1fb184;
        }
    }
    ctx->pc = 0x1FB178u;
    // 0x1fb178: 0x94860006  lhu         $a2, 0x6($a0)
    ctx->pc = 0x1fb178u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1fb17c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x1fb17cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb180: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1fb180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1fb184:
    // 0x1fb184: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x1fb184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1fb188: 0x2ca20080  sltiu       $v0, $a1, 0x80
    ctx->pc = 0x1fb188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x1fb18c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FB18Cu;
    {
        const bool branch_taken_0x1fb18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FB190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB18Cu;
        // 0x1fb190: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb18c) {
            ctx->pc = 0x1FB168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fb168;
        }
    }
    ctx->pc = 0x1FB194u;
    // 0x1fb194: 0xa1100  sll         $v0, $t2, 4
    ctx->pc = 0x1fb194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x1fb198: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1fb198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1fb19c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1fb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1fb1a0: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x1fb1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb1a4: 0xa443028a  sh          $v1, 0x28A($v0)
    ctx->pc = 0x1fb1a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 650), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fb1a8: 0x1c0282d  daddu       $a1, $t6, $zero
    ctx->pc = 0x1fb1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb1ac: 0xc07ebfc  jal         func_1FAFF0
    ctx->pc = 0x1FB1ACu;
    SET_GPR_U32(ctx, 31, 0x1FB1B4u);
    ctx->pc = 0x1FB1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB1ACu;
    // 0x1fb1b0: 0x1a0302d  daddu       $a2, $t5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAFF0u;
    goto label_1faff0;
    ctx->pc = 0x1FB1B4u;
label_1fb1b4:
    // 0x1fb1b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1B8u;
        // 0x1fb1bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB1C0u;
}
