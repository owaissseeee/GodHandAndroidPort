#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: makeSaveData__7cMcSave
// Address: 0x7c67d8 - 0x7c6bc0
void makeSaveData__7cMcSave_0x7c67d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("makeSaveData__7cMcSave_0x7c67d8");
#endif

    switch (ctx->pc) {
        case 0x7c681cu: goto label_7c681c;
        case 0x7c68c4u: goto label_7c68c4;
        case 0x7c68f0u: goto label_7c68f0;
        case 0x7c6924u: goto label_7c6924;
        case 0x7c6990u: goto label_7c6990;
        case 0x7c69a4u: goto label_7c69a4;
        case 0x7c69bcu: goto label_7c69bc;
        case 0x7c6a0cu: goto label_7c6a0c;
        case 0x7c6a40u: goto label_7c6a40;
        case 0x7c6a94u: goto label_7c6a94;
        case 0x7c6b1cu: goto label_7c6b1c;
        case 0x7c6b3cu: goto label_7c6b3c;
        case 0x7c6b44u: goto label_7c6b44;
        case 0x7c6b54u: goto label_7c6b54;
        case 0x7c6b80u: goto label_7c6b80;
        case 0x7c6b98u: goto label_7c6b98;
        default: break;
    }

    ctx->pc = 0x7c67d8u;

    // 0x7c67d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x7c67d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7c67dc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x7c67dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x7c67e0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x7c67e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x7c67e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7c67e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c67e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c67e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c67ec: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x7c67ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x7c67f0: 0x8c44264c  lw          $a0, 0x264C($v0)
    ctx->pc = 0x7c67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C264Cu));
    // 0x7c67f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7c67f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c67f8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x7c67f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x7c67fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c67fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6800: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x7c6800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x7c6804: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x7c6804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x7c6808: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x7c6808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x7c680c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x7c680cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x7c6810: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7c6810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7c6814: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x7C6814u;
    SET_GPR_U32(ctx, 31, 0x7C681Cu);
    ctx->pc = 0x7C6818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6814u;
    // 0x7c6818: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x7C6814u, 0x7C681Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C681Cu;
label_7c681c:
    // 0x7c681c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x7c681cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x7c6820: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x7c6820u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6824: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x7c6824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x7c6828: 0x944305b0  lhu         $v1, 0x5B0($v0)
    ctx->pc = 0x7c6828u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x7c682c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x7C682Cu;
    {
        const bool branch_taken_0x7c682c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C682Cu;
        // 0x7c6830: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c682c) {
            ctx->pc = 0x7C683Cu;
            goto label_7c683c;
        }
    }
    ctx->pc = 0x7C6834u;
    // 0x7c6834: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C6834u;
    {
        const bool branch_taken_0x7c6834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7C6838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6834u;
        // 0x7c6838: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6834) {
            ctx->pc = 0x7C684Cu;
            goto label_7c684c;
        }
    }
    ctx->pc = 0x7C683Cu;
label_7c683c:
    // 0x7c683c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x7c683cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x7c6840: 0x24423ec0  addiu       $v0, $v0, 0x3EC0
    ctx->pc = 0x7c6840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
    // 0x7c6844: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7C6844u;
    {
        const bool branch_taken_0x7c6844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6844u;
        // 0x7c6848: 0x2454001c  addiu       $s4, $v0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6844) {
            ctx->pc = 0x7C6854u;
            goto label_7c6854;
        }
    }
    ctx->pc = 0x7C684Cu;
label_7c684c:
    // 0x7c684c: 0x24423ec0  addiu       $v0, $v0, 0x3EC0
    ctx->pc = 0x7c684cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
    // 0x7c6850: 0x24540004  addiu       $s4, $v0, 0x4
    ctx->pc = 0x7c6850u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_7c6854:
    // 0x7c6854: 0x8e42264c  lw          $v0, 0x264C($s2)
    ctx->pc = 0x7c6854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9804)));
    // 0x7c6858: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x7c6858u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x7c685c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x7c685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c6860: 0x26a774a0  addiu       $a3, $s5, 0x74A0
    ctx->pc = 0x7c6860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
    // 0x7c6864: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7c6864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x7c6868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7c6868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c686c: 0xe44030d0  swc1        $f0, 0x30D0($v0)
    ctx->pc = 0x7c686cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12496), bits); }
    // 0x7c6870: 0x3406b400  ori         $a2, $zero, 0xB400
    ctx->pc = 0x7c6870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46080);
    // 0x7c6874: 0x8e42264c  lw          $v0, 0x264C($s2)
    ctx->pc = 0x7c6874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9804)));
    // 0x7c6878: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x7c6878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c687c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7c687cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x7c6880: 0xe44030d4  swc1        $f0, 0x30D4($v0)
    ctx->pc = 0x7c6880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12500), bits); }
    // 0x7c6884: 0x8e43264c  lw          $v1, 0x264C($s2)
    ctx->pc = 0x7c6884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9804)));
    // 0x7c6888: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x7c6888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c688c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x7c688cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x7c6890: 0xe46030d8  swc1        $f0, 0x30D8($v1)
    ctx->pc = 0x7c6890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12504), bits); }
    // 0x7c6894: 0x8e42264c  lw          $v0, 0x264C($s2)
    ctx->pc = 0x7c6894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9804)));
    // 0x7c6898: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x7c6898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c689c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x7c689cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x7c68a0: 0xe44030e0  swc1        $f0, 0x30E0($v0)
    ctx->pc = 0x7c68a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12512), bits); }
    // 0x7c68a4: 0x8e43264c  lw          $v1, 0x264C($s2)
    ctx->pc = 0x7c68a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9804)));
    // 0x7c68a8: 0x96820010  lhu         $v0, 0x10($s4)
    ctx->pc = 0x7c68a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x7c68ac: 0xa462000c  sh          $v0, 0xC($v1)
    ctx->pc = 0x7c68acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x7c68b0: 0x94e405b0  lhu         $a0, 0x5B0($a3)
    ctx->pc = 0x7c68b0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1456)));
    // 0x7c68b4: 0x8e42264c  lw          $v0, 0x264C($s2)
    ctx->pc = 0x7c68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9804)));
    // 0x7c68b8: 0xa444000e  sh          $a0, 0xE($v0)
    ctx->pc = 0x7c68b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x7c68bc: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x7C68BCu;
    SET_GPR_U32(ctx, 31, 0x7C68C4u);
    ctx->pc = 0x7C68C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C68BCu;
    // 0x7c68c0: 0x8e2400f8  lw          $a0, 0xF8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x7C68BCu, 0x7C68C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C68C4u;
label_7c68c4:
    // 0x7c68c4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x7c68c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x7c68c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7c68c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c68cc: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x7c68ccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c68d0: 0x24636900  addiu       $v1, $v1, 0x6900
    ctx->pc = 0x7c68d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26880));
    // 0x7c68d4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x7c68d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5E6908u));
    // 0x7c68d8: 0x14440049  bne         $v0, $a0, . + 4 + (0x49 << 2)
    ctx->pc = 0x7C68D8u;
    {
        const bool branch_taken_0x7c68d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x7C68DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C68D8u;
        // 0x7c68dc: 0x8e2200f8  lw          $v0, 0xF8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c68d8) {
            ctx->pc = 0x7C6A00u;
            goto label_7c6a00;
        }
    }
    ctx->pc = 0x7C68E0u;
    // 0x7c68e0: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x7c68e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7c68e4: 0x8e43264c  lw          $v1, 0x264C($s2)
    ctx->pc = 0x7c68e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9804)));
    // 0x7c68e8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x7c68e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x7c68ec: 0x246414a0  addiu       $a0, $v1, 0x14A0
    ctx->pc = 0x7c68ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5280));
label_7c68f0:
    // 0x7c68f0: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x7c68f0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c68f4: 0x78660010  lq          $a2, 0x10($v1)
    ctx->pc = 0x7c68f4u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7c68f8: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x7c68f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x7c68fc: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x7c68fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    // 0x7c6900: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7c6900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7c6904: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C6904u;
    {
        const bool branch_taken_0x7c6904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x7C6908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6904u;
        // 0x7c6908: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6904) {
            ctx->pc = 0x7C68F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c68f0;
        }
    }
    ctx->pc = 0x7C690Cu;
    // 0x7c690c: 0x8e43264c  lw          $v1, 0x264C($s2)
    ctx->pc = 0x7c690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9804)));
    // 0x7c6910: 0x34049c20  ori         $a0, $zero, 0x9C20
    ctx->pc = 0x7c6910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39968);
    // 0x7c6914: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x7c6914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6918: 0x246314a0  addiu       $v1, $v1, 0x14A0
    ctx->pc = 0x7c6918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5280));
    // 0x7c691c: 0x244214c0  addiu       $v0, $v0, 0x14C0
    ctx->pc = 0x7c691cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5312));
    // 0x7c6920: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x7c6920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_7c6924:
    // 0x7c6924: 0x78650000  lq          $a1, 0x0($v1)
    ctx->pc = 0x7c6924u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c6928: 0x78660010  lq          $a2, 0x10($v1)
    ctx->pc = 0x7c6928u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7c692c: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x7c692cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x7c6930: 0x7c460010  sq          $a2, 0x10($v0)
    ctx->pc = 0x7c6930u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 6));
    // 0x7c6934: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7c6934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7c6938: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C6938u;
    {
        const bool branch_taken_0x7c6938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x7C693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6938u;
        // 0x7c693c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6938) {
            ctx->pc = 0x7C6924u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c6924;
        }
    }
    ctx->pc = 0x7C6940u;
    // 0x7c6940: 0x78640000  lq          $a0, 0x0($v1)
    ctx->pc = 0x7c6940u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c6944: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x7c6944u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x7c6948: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x7c6948u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x7c694c: 0x8e45264c  lw          $a1, 0x264C($s2)
    ctx->pc = 0x7c694cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9804)));
    // 0x7c6950: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x7c6950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x7c6954: 0x8e2600f8  lw          $a2, 0xF8($s1)
    ctx->pc = 0x7c6954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6958: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7c6958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c695c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x7c695cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x7c6960: 0x78a330d0  lq          $v1, 0x30D0($a1)
    ctx->pc = 0x7c6960u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 12496)));
    // 0x7c6964: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x7c6964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x7c6968: 0x7cc330f0  sq          $v1, 0x30F0($a2)
    ctx->pc = 0x7c6968u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 12528), GPR_VEC(ctx, 3));
    // 0x7c696c: 0x78a230e0  lq          $v0, 0x30E0($a1)
    ctx->pc = 0x7c696cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 12512)));
    // 0x7c6970: 0x7cc23100  sq          $v0, 0x3100($a2)
    ctx->pc = 0x7c6970u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 12544), GPR_VEC(ctx, 2));
    // 0x7c6974: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x7c6974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6978: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x7c6978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x7c697c: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x7c697cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6980: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x7c6980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x7c6984: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x7c6984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6988: 0xc0afa5a  jal         func_2BE968
    ctx->pc = 0x7C6988u;
    SET_GPR_U32(ctx, 31, 0x7C6990u);
    ctx->pc = 0x7C698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6988u;
    // 0x7c698c: 0xa467002c  sh          $a3, 0x2C($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE968u, 0x7C6988u, 0x7C6990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6990u;
label_7c6990:
    // 0x7c6990: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x7c6990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7c6994: 0x26a274a0  addiu       $v0, $s5, 0x74A0
    ctx->pc = 0x7c6994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 29856));
    // 0x7c6998: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7c6998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c699c: 0xc0afa64  jal         func_2BE990
    ctx->pc = 0x7C699Cu;
    SET_GPR_U32(ctx, 31, 0x7C69A4u);
    ctx->pc = 0x7C69A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C699Cu;
    // 0x7c69a0: 0x8c4505a4  lw          $a1, 0x5A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1444)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE990u, 0x7C699Cu, 0x7C69A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C69A4u;
label_7c69a4:
    // 0x7c69a4: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x7c69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c69a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7c69a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c69ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c69acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c69b0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x7c69b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c69b4: 0xc0afa66  jal         func_2BE998
    ctx->pc = 0x7C69B4u;
    SET_GPR_U32(ctx, 31, 0x7C69BCu);
    ctx->pc = 0x7C69B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C69B4u;
    // 0x7c69b8: 0x9445002c  lhu         $a1, 0x2C($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BE998u, 0x7C69B4u, 0x7C69BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C69BCu;
label_7c69bc:
    // 0x7c69bc: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x7c69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c69c0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x7c69c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c69c4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x7c69c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x7c69c8: 0xe44030f0  swc1        $f0, 0x30F0($v0)
    ctx->pc = 0x7c69c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12528), bits); }
    // 0x7c69cc: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x7c69ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c69d0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x7c69d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c69d4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x7c69d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x7c69d8: 0xe46030f4  swc1        $f0, 0x30F4($v1)
    ctx->pc = 0x7c69d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12532), bits); }
    // 0x7c69dc: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x7c69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c69e0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x7c69e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c69e4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x7c69e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x7c69e8: 0xe44030f8  swc1        $f0, 0x30F8($v0)
    ctx->pc = 0x7c69e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12536), bits); }
    // 0x7c69ec: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x7c69ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c69f0: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x7c69f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7c69f4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x7c69f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x7c69f8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x7C69F8u;
    {
        const bool branch_taken_0x7c69f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C69FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C69F8u;
        // 0x7c69fc: 0xe4603100  swc1        $f0, 0x3100($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12544), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c69f8) {
            ctx->pc = 0x7C6A88u;
            goto label_7c6a88;
        }
    }
    ctx->pc = 0x7C6A00u;
label_7c6a00:
    // 0x7c6a00: 0x8e43264c  lw          $v1, 0x264C($s2)
    ctx->pc = 0x7c6a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9804)));
    // 0x7c6a04: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x7c6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x7c6a08: 0x246414a0  addiu       $a0, $v1, 0x14A0
    ctx->pc = 0x7c6a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 5280));
label_7c6a0c:
    // 0x7c6a0c: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x7c6a0cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c6a10: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x7c6a10u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7c6a14: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x7c6a14u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x7c6a18: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x7c6a18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x7c6a1c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7c6a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7c6a20: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C6A20u;
    {
        const bool branch_taken_0x7c6a20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x7C6A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6A20u;
        // 0x7c6a24: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6a20) {
            ctx->pc = 0x7C6A0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c6a0c;
        }
    }
    ctx->pc = 0x7C6A28u;
    // 0x7c6a28: 0x8e43264c  lw          $v1, 0x264C($s2)
    ctx->pc = 0x7c6a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9804)));
    // 0x7c6a2c: 0x34049c20  ori         $a0, $zero, 0x9C20
    ctx->pc = 0x7c6a2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39968);
    // 0x7c6a30: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x7c6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6a34: 0x246314a0  addiu       $v1, $v1, 0x14A0
    ctx->pc = 0x7c6a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5280));
    // 0x7c6a38: 0x244214c0  addiu       $v0, $v0, 0x14C0
    ctx->pc = 0x7c6a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5312));
    // 0x7c6a3c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x7c6a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_7c6a40:
    // 0x7c6a40: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x7c6a40u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c6a44: 0x78650010  lq          $a1, 0x10($v1)
    ctx->pc = 0x7c6a44u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7c6a48: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x7c6a48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x7c6a4c: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x7c6a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
    // 0x7c6a50: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7c6a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7c6a54: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7C6A54u;
    {
        const bool branch_taken_0x7c6a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x7C6A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6A54u;
        // 0x7c6a58: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6a54) {
            ctx->pc = 0x7C6A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c6a40;
        }
    }
    ctx->pc = 0x7C6A5Cu;
    // 0x7c6a5c: 0x78680000  lq          $t0, 0x0($v1)
    ctx->pc = 0x7c6a5cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c6a60: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x7c6a60u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x7c6a64: 0x8e44264c  lw          $a0, 0x264C($s2)
    ctx->pc = 0x7c6a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9804)));
    // 0x7c6a68: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x7c6a68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x7c6a6c: 0x8e2500f8  lw          $a1, 0xF8($s1)
    ctx->pc = 0x7c6a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6a70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x7c6a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x7c6a74: 0x788330d0  lq          $v1, 0x30D0($a0)
    ctx->pc = 0x7c6a74u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 12496)));
    // 0x7c6a78: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x7c6a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x7c6a7c: 0x7ca330f0  sq          $v1, 0x30F0($a1)
    ctx->pc = 0x7c6a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 12528), GPR_VEC(ctx, 3));
    // 0x7c6a80: 0x788230e0  lq          $v0, 0x30E0($a0)
    ctx->pc = 0x7c6a80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 12512)));
    // 0x7c6a84: 0x7ca23100  sq          $v0, 0x3100($a1)
    ctx->pc = 0x7c6a84u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 12544), GPR_VEC(ctx, 2));
label_7c6a88:
    // 0x7c6a88: 0x8e2500f8  lw          $a1, 0xF8($s1)
    ctx->pc = 0x7c6a88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6a8c: 0xc1f24c0  jal         func_7C9300
    ctx->pc = 0x7C6A8Cu;
    SET_GPR_U32(ctx, 31, 0x7C6A94u);
    ctx->pc = 0x7C6A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6A8Cu;
    // 0x7c6a90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9300u, 0x7C6A8Cu, 0x7C6A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6A94u;
label_7c6a94:
    // 0x7c6a94: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x7c6a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6a98: 0x26c56900  addiu       $a1, $s6, 0x6900
    ctx->pc = 0x7c6a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 26880));
    // 0x7c6a9c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x7c6a9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x7c6aa0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7c6aa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x7c6aa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7c6aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7c6aa8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7c6aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c6aac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x7c6aacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x7c6ab0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x7c6ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c6ab4: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x7c6ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6ab8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x7c6ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x7c6abc: 0x8e2400f8  lw          $a0, 0xF8($s1)
    ctx->pc = 0x7c6abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6ac0: 0x9082003f  lbu         $v0, 0x3F($a0)
    ctx->pc = 0x7c6ac0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 63)));
    // 0x7c6ac4: 0xa0820010  sb          $v0, 0x10($a0)
    ctx->pc = 0x7c6ac4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x7c6ac8: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x7c6ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x7c6acc: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C6ACCu;
    {
        const bool branch_taken_0x7c6acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x7C6AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6ACCu;
        // 0x7c6ad0: 0x3c030058  lui         $v1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6acc) {
            ctx->pc = 0x7C6AE4u;
            goto label_7c6ae4;
        }
    }
    ctx->pc = 0x7C6AD4u;
    // 0x7c6ad4: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x7c6ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6ad8: 0x9462002c  lhu         $v0, 0x2C($v1)
    ctx->pc = 0x7c6ad8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x7c6adc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7C6ADCu;
    {
        const bool branch_taken_0x7c6adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6ADCu;
        // 0x7c6ae0: 0xa462000c  sh          $v0, 0xC($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c6adc) {
            ctx->pc = 0x7C6B04u;
            goto label_7c6b04;
        }
    }
    ctx->pc = 0x7C6AE4u;
label_7c6ae4:
    // 0x7c6ae4: 0x8c636b28  lw          $v1, 0x6B28($v1)
    ctx->pc = 0x7c6ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27432)));
    // 0x7c6ae8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c6ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c6aec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7c6aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7c6af0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x7C6AF0u;
    {
        const bool branch_taken_0x7c6af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c6af0) {
            ctx->pc = 0x7C6AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C6AF0u;
            // 0x7c6af4: 0x94630008  lhu         $v1, 0x8($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C6AFCu;
            goto label_7c6afc;
        }
    }
    ctx->pc = 0x7C6AF8u;
    // 0x7c6af8: 0x96830010  lhu         $v1, 0x10($s4)
    ctx->pc = 0x7c6af8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 16)));
label_7c6afc:
    // 0x7c6afc: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x7c6afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6b00: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x7c6b00u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
label_7c6b04:
    // 0x7c6b04: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x7c6b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6b08: 0x94430030  lhu         $v1, 0x30($v0)
    ctx->pc = 0x7c6b08u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x7c6b0c: 0xa443000e  sh          $v1, 0xE($v0)
    ctx->pc = 0x7c6b0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 3));
    // 0x7c6b10: 0x8e2400f8  lw          $a0, 0xF8($s1)
    ctx->pc = 0x7c6b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6b14: 0xc0e672c  jal         func_399CB0
    ctx->pc = 0x7C6B14u;
    SET_GPR_U32(ctx, 31, 0x7C6B1Cu);
    ctx->pc = 0x7C6B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6B14u;
    // 0x7c6b18: 0x24840012  addiu       $a0, $a0, 0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399CB0u, 0x7C6B14u, 0x7C6B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6B1Cu;
label_7c6b1c:
    // 0x7c6b1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C6B1Cu;
    {
        const bool branch_taken_0x7c6b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c6b1c) {
            ctx->pc = 0x7C6B34u;
            goto label_7c6b34;
        }
    }
    ctx->pc = 0x7C6B24u;
    // 0x7c6b24: 0x8e2200f8  lw          $v0, 0xF8($s1)
    ctx->pc = 0x7c6b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6b28: 0x90430012  lbu         $v1, 0x12($v0)
    ctx->pc = 0x7c6b28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x7c6b2c: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x7C6B2Cu;
    {
        const bool branch_taken_0x7c6b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c6b2c) {
            ctx->pc = 0x7C6B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C6B2Cu;
            // 0x7c6b30: 0x8e2500f8  lw          $a1, 0xF8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C6B78u;
            goto label_7c6b78;
        }
    }
    ctx->pc = 0x7C6B34u;
label_7c6b34:
    // 0x7c6b34: 0xc1f2336  jal         func_7C8CD8
    ctx->pc = 0x7C6B34u;
    SET_GPR_U32(ctx, 31, 0x7C6B3Cu);
    ctx->pc = 0x7C6B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6B34u;
    // 0x7c6b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8CD8u, 0x7C6B34u, 0x7C6B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6B3Cu;
label_7c6b3c:
    // 0x7c6b3c: 0xc1f2340  jal         func_7C8D00
    ctx->pc = 0x7C6B3Cu;
    SET_GPR_U32(ctx, 31, 0x7C6B44u);
    ctx->pc = 0x7C6B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6B3Cu;
    // 0x7c6b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8D00u, 0x7C6B3Cu, 0x7C6B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6B44u;
label_7c6b44:
    // 0x7c6b44: 0x8e3000f8  lw          $s0, 0xF8($s1)
    ctx->pc = 0x7c6b44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6b48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c6b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6b4c: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C6B4Cu;
    SET_GPR_U32(ctx, 31, 0x7C6B54u);
    ctx->pc = 0x7C6B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6B4Cu;
    // 0x7c6b50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C6B4Cu, 0x7C6B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6B54u;
label_7c6b54:
    // 0x7c6b54: 0x68470019  ldl         $a3, 0x19($v0)
    ctx->pc = 0x7c6b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 25); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x7c6b58: 0x6c470012  ldr         $a3, 0x12($v0)
    ctx->pc = 0x7c6b58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 18); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x7c6b5c: 0xb2070019  sdl         $a3, 0x19($s0)
    ctx->pc = 0x7c6b5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 25); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c6b60: 0xb6070012  sdr         $a3, 0x12($s0)
    ctx->pc = 0x7c6b60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 18); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x7c6b64: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x7c6b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6b68: 0x90620013  lbu         $v0, 0x13($v1)
    ctx->pc = 0x7c6b68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 19)));
    // 0x7c6b6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c6b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c6b70: 0xa0620013  sb          $v0, 0x13($v1)
    ctx->pc = 0x7c6b70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x7c6b74: 0x8e2500f8  lw          $a1, 0xF8($s1)
    ctx->pc = 0x7c6b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_7c6b78:
    // 0x7c6b78: 0xc1f2322  jal         func_7C8C88
    ctx->pc = 0x7C6B78u;
    SET_GPR_U32(ctx, 31, 0x7C6B80u);
    ctx->pc = 0x7C6B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6B78u;
    // 0x7c6b7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8C88u, 0x7C6B78u, 0x7C6B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6B80u;
label_7c6b80:
    // 0x7c6b80: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x7c6b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c6b84: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x7c6b84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x7c6b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c6b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c6b8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x7c6b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x7c6b90: 0xc1f1af0  jal         func_7C6BC0
    ctx->pc = 0x7C6B90u;
    SET_GPR_U32(ctx, 31, 0x7C6B98u);
    ctx->pc = 0x7C6B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C6B90u;
    // 0x7c6b94: 0xfc623110  sd          $v0, 0x3110($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 12560), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C6BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C6BC0u, 0x7C6B90u, 0x7C6B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C6B98u;
label_7c6b98:
    // 0x7c6b98: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x7c6b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7c6b9c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x7c6b9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7c6ba0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x7c6ba0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7c6ba4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x7c6ba4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7c6ba8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x7c6ba8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c6bac: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x7c6bacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c6bb0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x7c6bb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c6bb4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7c6bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c6bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x7C6BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C6BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C6BB8u;
        // 0x7c6bbc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C6BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C6BC0u;
}
} // namespace gh_mcport
