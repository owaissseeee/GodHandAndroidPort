#include "godhand_patches_mobile.h"
#include <stdexcept>
#include <cstdlib>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_0030B870
// Address: 0x30b870 - 0x30caa0
void func_0030B870_0x30b870(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0030B870_0x30b870");
#endif

    if (__builtin_expect(ctx->pc != 0x30b870u, 0)) {
        switch (ctx->pc) {
            case 0x30b9a4u: goto label_30b9a4;
            case 0x30b9bcu: goto label_30b9bc;
            case 0x30b9dcu: goto label_30b9dc;
            case 0x30b9f4u: goto label_30b9f4;
            case 0x30bcb0u: goto label_30bcb0;
            case 0x30be68u: goto label_30be68;
            case 0x30bfc0u: goto label_30bfc0;
            case 0x30c250u: goto label_30c250;
            case 0x30c42cu: goto label_30c42c;
            case 0x30c448u: goto label_30c448;
            case 0x30c46cu: goto label_30c46c;
            case 0x30c488u: goto label_30c488;
            case 0x30c6e0u: goto label_30c6e0;
            case 0x30c898u: goto label_30c898;
            case 0x30c9f0u: goto label_30c9f0;
            default: break;
        }
    }


    // 0x30b870: 0x27bdff40  addiu       $sp, $sp, -0xC0
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x30b874: 0x3c020075  lui         $v0, 0x75
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x30b878: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x30b878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x30b87c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x30b87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x30b880: 0x245e2d80  addiu       $fp, $v0, 0x2D80
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 11648));
    // 0x30b884: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x30b884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x30b888: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x30b888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x30b88c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x30b88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x30b890: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x30b890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x30b894: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x30b894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x30b898: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x30b898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x30b89c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x30b89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x30b8a0: 0x148002a8  bnez        $a0, . + 4 + (0x2A8 << 2)
    ctx->pc = 0x30B8A0u;
    {
        const bool branch_taken_0x30b8a0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B8A0u;
        // 0x30b8a4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b8a0) {
            ctx->pc = 0x30C344u;
            goto label_30c344;
        }
    }
    // 0x30b8a8: 0x3c160074  lui         $s6, 0x74
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)116 << 16));
    // 0x30b8ac: 0x3c0143e0  lui         $at, 0x43E0
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x30b8b0: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30b8b4: 0x26d774a0  addiu       $s7, $s6, 0x74A0
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 29856));
    // 0x30b8b8: 0x24190200  addiu       $t9, $zero, 0x200
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x30b8bc: 0x8ee20214  lw          $v0, 0x214($s7)
    ctx->pc = 0x30b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B4u));
    // 0x30b8c0: 0x3c06003c  lui         $a2, 0x3C
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x30b8c4: 0x3c0b003c  lui         $t3, 0x3C
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x30b8c8: 0x24032800  addiu       $v1, $zero, 0x2800
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
    // 0x30b8cc: 0x3c014380  lui         $at, 0x4380
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x30b8d0: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30b8d4: 0x3c05003c  lui         $a1, 0x3C
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30b8d8: 0x3c014400  lui         $at, 0x4400
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x30b8dc: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30b8e0: 0x3c11003c  lui         $s1, 0x3C
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x30b8e4: 0x3c0144e4  lui         $at, 0x44E4
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17636 << 16));
    // 0x30b8e8: 0x44811800  mtc1        $at, $f3
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30b8ec: 0x3c18003c  lui         $t8, 0x3C
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)60 << 16));
    // 0x30b8f0 / 0x30b8f4: widescreen patch (Arapapa / nemesis2000 SLUS-21503 + Dynamic Full Screen Hor+)
    ctx->pc = 0x30b8f0u;
    {
        const int aspectIdx = godhand::mobile::getAspectMode();
        uint32_t atVal = 0x3F9F49F1u; // 16:9 = 1.2444438f
        if (aspectIdx == 1) {
            atVal = 0x3F6EEEEFu; // 4:3 = 0.93333334f
        } else if (aspectIdx == 2) {
            uint32_t sw = 0, sh = 0;
            godhand::mobile::getScreenDimensions(&sw, &sh);
            float fov = (sw > 0 && sh > 0) ? (0.700000005f * (static_cast<float>(sw) / static_cast<float>(sh))) : 1.5555556f;
            std::memcpy(&atVal, &fov, sizeof(atVal));
        }
        SET_GPR_S32(ctx, 1, static_cast<int32_t>(atVal));
    }
    // 0x30b8f8: 0x44812000  mtc1        $at, $f4
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30b8fc: 0x3c07003c  lui         $a3, 0x3C
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x30b900: 0xe4c01190  swc1        $f0, 0x1190($a2)
    ctx->pc = 0x30b900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3C1190u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C1190u, _value); } while (0); }
    // 0x30b904: 0x3c0e003c  lui         $t6, 0x3C
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)60 << 16));
    // 0x30b908: 0xad791198  sw          $t9, 0x1198($t3)
    ctx->pc = 0x30b908u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 25)); ps2TraceGuestWrite(rdram, 0x3C1198u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C1198u, _value); } while (0);
    // 0x30b90c: 0x240601c0  addiu       $a2, $zero, 0x1C0
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x30b910: 0xaca311ac  sw          $v1, 0x11AC($a1)
    ctx->pc = 0x30b910u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3C11ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C11ACu, _value); } while (0);
    // 0x30b914: 0x3c150058  lui         $s5, 0x58
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
    // 0x30b918: 0x24120720  addiu       $s2, $zero, 0x720
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1824));
    // 0x30b91c: 0x3c130058  lui         $s3, 0x58
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
    // 0x30b920: 0x3c14003c  lui         $s4, 0x3C
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x30b924: 0x240f0100  addiu       $t7, $zero, 0x100
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30b928: 0x3c10003c  lui         $s0, 0x3C
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x30b92c: 0x240c0009  addiu       $t4, $zero, 0x9
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30b930: 0x3c0d003c  lui         $t5, 0x3C
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
    // 0x30b934: 0x24080008  addiu       $t0, $zero, 0x8
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30b938: 0x3c090058  lui         $t1, 0x58
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)88 << 16));
    // 0x30b93c: 0x3c0a003c  lui         $t2, 0x3C
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x30b940: 0x24040400  addiu       $a0, $zero, 0x400
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x30b944: 0xe62211a0  swc1        $f2, 0x11A0($s1)
    ctx->pc = 0x30b944u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3C11A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C11A0u, _value); } while (0); }
    // 0x30b948: 0x3c0b003c  lui         $t3, 0x3C
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x30b94c: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30b950: 0xace611c4  sw          $a2, 0x11C4($a3)
    ctx->pc = 0x30b950u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3C11C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C11C4u, _value); } while (0);
    // 0x30b954: 0x30420001  andi        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30b958: 0xe5c1119c  swc1        $f1, 0x119C($t6)
    ctx->pc = 0x30b958u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3C119Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C119Cu, _value); } while (0); }
    // 0x30b95c: 0x3c113000  lui         $s1, 0x3000
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)12288 << 16));
    // 0x30b960: 0xaeb26b80  sw          $s2, 0x6B80($s5)
    ctx->pc = 0x30b960u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x586B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x586B80u, _value); } while (0);
    // 0x30b964: 0xe6636b84  swc1        $f3, 0x6B84($s3)
    ctx->pc = 0x30b964u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x586B84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x586B84u, _value); } while (0); }
    // 0x30b968: 0xae8f11b4  sw          $t7, 0x11B4($s4)
    ctx->pc = 0x30b968u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 15)); ps2TraceGuestWrite(rdram, 0x3C11B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C11B4u, _value); } while (0);
    // 0x30b96c: 0xae0c11b8  sw          $t4, 0x11B8($s0)
    ctx->pc = 0x30b96cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x3C11B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C11B8u, _value); } while (0);
    // 0x30b970: 0xada811bc  sw          $t0, 0x11BC($t5)
    ctx->pc = 0x30b970u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x3C11BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C11BCu, _value); } while (0);
    // 0x30b974: 0xe5246b88  swc1        $f4, 0x6B88($t1)
    ctx->pc = 0x30b974u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x586B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x586B88u, _value); } while (0); }
    // 0x30b978: 0xad4411c8  sw          $a0, 0x11C8($t2)
    ctx->pc = 0x30b978u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3C11C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C11C8u, _value); } while (0);
    // 0x30b97c: 0xe5611184  swc1        $f1, 0x1184($t3)
    ctx->pc = 0x30b97cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3C1184u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C1184u, _value); } while (0); }
    // 0x30b980: 0xac791180  sw          $t9, 0x1180($v1)
    ctx->pc = 0x30b980u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 25)); ps2TraceGuestWrite(rdram, 0x3C1180u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C1180u, _value); } while (0);
    // 0x30b984: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x30B984u;
    {
        const bool branch_taken_0x30b984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B984u;
        // 0x30b988: 0xaf06118c  sw          $a2, 0x118C($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 4492), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b984) {
            ctx->pc = 0x30B9C4u;
            goto label_30b9c4;
        }
    }
    // 0x30b98c: 0x26e403f0  addiu       $a0, $s7, 0x3F0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1008));
    // 0x30b990: 0x24050800  addiu       $a1, $zero, 0x800
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30b994: 0x912025  or          $a0, $a0, $s1
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x30b998: 0x24060800  addiu       $a2, $zero, 0x800
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30b99c: 0xc0e5812  jal         func_396048
    SET_GPR_U32(ctx, 31, 0x30B9A4u);
    ctx->pc = 0x30B9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B99Cu;
    // 0x30b9a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceGsSetHalfOffset_0x396048, 0x396048u, 0x30b9a4u)) {
        return;
    }
label_30b9a4:
    // 0x30b9a4: 0x26e40470  addiu       $a0, $s7, 0x470
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 1136));
    // 0x30b9a8: 0x24050800  addiu       $a1, $zero, 0x800
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30b9ac: 0x912025  or          $a0, $a0, $s1
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x30b9b0: 0x24060800  addiu       $a2, $zero, 0x800
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30b9b4: 0xc0e5834  jal         func_3960D0
    SET_GPR_U32(ctx, 31, 0x30B9BCu);
    ctx->pc = 0x30B9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B9B4u;
    // 0x30b9b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003960D0_0x3960d0, 0x3960d0u, 0x30b9bcu)) {
        return;
    }
label_30b9bc:
    // 0x30b9bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x30B9BCu;
    {
        const bool branch_taken_0x30b9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B9BCu;
        // 0x30b9c0: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b9bc) {
            ctx->pc = 0x30B9F8u;
            goto label_30b9f8;
        }
    }
label_30b9c4:
    // 0x30b9c4: 0x26e40280  addiu       $a0, $s7, 0x280
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 640));
    // 0x30b9c8: 0x24050800  addiu       $a1, $zero, 0x800
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30b9cc: 0x2242025  or          $a0, $s1, $a0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x30b9d0: 0x24060800  addiu       $a2, $zero, 0x800
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30b9d4: 0xc0e5812  jal         func_396048
    SET_GPR_U32(ctx, 31, 0x30B9DCu);
    ctx->pc = 0x30B9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B9D4u;
    // 0x30b9d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceGsSetHalfOffset_0x396048, 0x396048u, 0x30b9dcu)) {
        return;
    }
label_30b9dc:
    // 0x30b9dc: 0x26e40300  addiu       $a0, $s7, 0x300
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 768));
    // 0x30b9e0: 0x24050800  addiu       $a1, $zero, 0x800
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30b9e4: 0x2242025  or          $a0, $s1, $a0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x30b9e8: 0x24060800  addiu       $a2, $zero, 0x800
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30b9ec: 0xc0e5834  jal         func_3960D0
    SET_GPR_U32(ctx, 31, 0x30B9F4u);
    ctx->pc = 0x30B9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B9ECu;
    // 0x30b9f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003960D0_0x3960d0, 0x3960d0u, 0x30b9f4u)) {
        return;
    }
label_30b9f4:
    // 0x30b9f4: 0x3c040074  lui         $a0, 0x74
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_30b9f8:
    // 0x30b9f8: 0x248374a0  addiu       $v1, $a0, 0x74A0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 29856));
    // 0x30b9fc: 0x8c620578  lw          $v0, 0x578($v1)
    ctx->pc = 0x30b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1400)));
    // 0x30ba00: 0x38420001  xori        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30ba04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x30BA04u;
    {
        const bool branch_taken_0x30ba04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA04u;
        // 0x30ba08: 0x3c06003c  lui         $a2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba04) {
            ctx->pc = 0x30BA30u;
            goto label_30ba30;
        }
    }
    // 0x30ba0c: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30ba10: 0x8ccd1180  lw          $t5, 0x1180($a2)
    ctx->pc = 0x30ba10u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4480)));
    // 0x30ba14: 0x1ad001a  div         $zero, $t5, $t5
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30ba18: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x30BA18u;
    {
        const bool branch_taken_0x30ba18 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ba18) {
            ctx->pc = 0x30BA1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BA18u;
            // 0x30ba1c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BA20u;
            goto label_30ba20;
        }
    }
label_30ba20:
    // 0x30ba20: 0x8c71118c  lw          $s1, 0x118C($v1)
    ctx->pc = 0x30ba20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4492)));
    // 0x30ba24: 0x1012  mflo        $v0
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x30ba28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30BA28u;
    {
        const bool branch_taken_0x30ba28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA28u;
        // 0x30ba2c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba28) {
            ctx->pc = 0x30BA54u;
            goto label_30ba54;
        }
    }
label_30ba30:
    // 0x30ba30: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30ba34: 0x3c04003c  lui         $a0, 0x3C
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x30ba38: 0x8c4d11a4  lw          $t5, 0x11A4($v0)
    ctx->pc = 0x30ba38u;
    SET_GPR_S32(ctx, 13, (int32_t)FAST_READ32(0x3C11A4u));
    // 0x30ba3c: 0x1ad001a  div         $zero, $t5, $t5
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 13);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x30ba40: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x30BA40u;
    {
        const bool branch_taken_0x30ba40 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x30ba40) {
            ctx->pc = 0x30BA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30BA40u;
            // 0x30ba44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x30BA48u;
            goto label_30ba48;
        }
    }
label_30ba48:
    // 0x30ba48: 0x8c9111a8  lw          $s1, 0x11A8($a0)
    ctx->pc = 0x30ba48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4520)));
    // 0x30ba4c: 0x1812  mflo        $v1
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x30ba50: 0x60a02d  daddu       $s4, $v1, $zero
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_30ba54:
    // 0x30ba54: 0x3c030074  lui         $v1, 0x74
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30ba58: 0x3c05003c  lui         $a1, 0x3C
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30ba5c: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x30ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x30ba60: 0x3c04003c  lui         $a0, 0x3C
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x30ba64: 0x246c7a78  addiu       $t4, $v1, 0x7A78
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 31352));
    // 0x30ba68: 0xacad1188  sw          $t5, 0x1188($a1)
    ctx->pc = 0x30ba68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 13)); ps2TraceGuestWrite(rdram, 0x3C1188u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C1188u, _value); } while (0);
    // 0x30ba6c: 0x30428000  andi        $v0, $v0, 0x8000
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x30ba70: 0x14400182  bnez        $v0, . + 4 + (0x182 << 2)
    ctx->pc = 0x30BA70u;
    {
        const bool branch_taken_0x30ba70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BA70u;
        // 0x30ba74: 0xac911194  sw          $s1, 0x1194($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4500), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ba70) {
            ctx->pc = 0x30C07Cu;
            goto label_30c07c;
        }
    }
    // 0x30ba78: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x30ba78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x30ba7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30ba80: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30ba84: 0x4d102a  slt         $v0, $v0, $t5
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x30ba88: 0x25a6003f  addiu       $a2, $t5, 0x3F
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 63));
    // 0x30ba8c: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30ba8cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30ba90: 0x1a2300b  movn        $a2, $t5, $v0
    ctx->pc = 0x30ba90u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x30ba94: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30ba98: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30ba9c: 0xafbe0004  sw          $fp, 0x4($sp)
    ctx->pc = 0x30ba9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 30));
    // 0x30baa0: 0x90433cc8  lbu         $v1, 0x3CC8($v0)
    ctx->pc = 0x30baa0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3C3CC8u));
    // 0x30baa4: 0x3c05003c  lui         $a1, 0x3C
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30baa8: 0x63183  sra         $a2, $a2, 6
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x30baac: 0x90a43cc9  lbu         $a0, 0x3CC9($a1)
    ctx->pc = 0x30baacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15561)));
    // 0x30bab0: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bab4: 0x2402000e  addiu       $v0, $zero, 0xE
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30bab8: 0x62c38  dsll        $a1, $a2, 16
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << 16);
    // 0x30babc: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30babcu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30bac0: 0x651825  or          $v1, $v1, $a1
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30bac4: 0x42638  dsll        $a0, $a0, 24
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x30bac8: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bacc: 0x641825  or          $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30bad0: 0x3c0102d  daddu       $v0, $fp, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bad4: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x30bad4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x30bad8: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30badc: 0x2402004d  addiu       $v0, $zero, 0x4D
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x30bae0: 0x2403003f  addiu       $v1, $zero, 0x3F
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30bae4: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30bae4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30bae8: 0x24040015  addiu       $a0, $zero, 0x15
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x30baec: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30baf0: 0x24070049  addiu       $a3, $zero, 0x49
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x30baf4: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30baf8: 0x34088000  ori         $t0, $zero, 0x8000
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30bafc: 0x84638  dsll        $t0, $t0, 24
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x30bb00: 0x35080029  ori         $t0, $t0, 0x29
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)41);
    // 0x30bb04: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bb08: 0x24090043  addiu       $t1, $zero, 0x43
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x30bb0c: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30bb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30bb10: 0x3c0a0003  lui         $t2, 0x3
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)3 << 16));
    // 0x30bb14: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bb18: 0x240b0048  addiu       $t3, $zero, 0x48
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x30bb1c: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30bb1cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30bb20: 0x3402cc80  ori         $v0, $zero, 0xCC80
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52352);
    // 0x30bb24: 0x214f8  dsll        $v0, $v0, 19
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x30bb28: 0x34420e00  ori         $v0, $v0, 0xE00
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3584);
    // 0x30bb2c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bb30: 0x633b8  dsll        $a2, $a2, 14
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x30bb34: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30bb34u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30bb38: 0xc23025  or          $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x30bb3c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bb40: 0x24040007  addiu       $a0, $zero, 0x7
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30bb44: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30bb44u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30bb48: 0x24050316  addiu       $a1, $zero, 0x316
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x30bb4c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bb50: 0x8d83ffa0  lw          $v1, -0x60($t4)
    ctx->pc = 0x30bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294967200)));
    // 0x30bb54: 0xffc70000  sd          $a3, 0x0($fp)
    ctx->pc = 0x30bb54u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 7));
    // 0x30bb58: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bb5c: 0x38630001  xori        $v1, $v1, 0x1
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x30bb60: 0xffc80000  sd          $t0, 0x0($fp)
    ctx->pc = 0x30bb60u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 8));
    // 0x30bb64: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bb68: 0xffc90000  sd          $t1, 0x0($fp)
    ctx->pc = 0x30bb68u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 9));
    // 0x30bb6c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bb70: 0xffca0000  sd          $t2, 0x0($fp)
    ctx->pc = 0x30bb70u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 10));
    // 0x30bb74: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bb78: 0xffcb0000  sd          $t3, 0x0($fp)
    ctx->pc = 0x30bb78u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 11));
    // 0x30bb7c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bb80: 0x3c0102d  daddu       $v0, $fp, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bb84: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x30bb84u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x30bb88: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bb8c: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30bb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30bb90: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bb94: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30bb94u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30bb98: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bb9c: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30bb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30bba0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x30BBA0u;
    {
        const bool branch_taken_0x30bba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBA0u;
        // 0x30bba4: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bba0) {
            ctx->pc = 0x30BBD0u;
            goto label_30bbd0;
        }
    }
    // 0x30bba8: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30bbac: 0x34058000  ori         $a1, $zero, 0x8000
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30bbb0: 0x52c38  dsll        $a1, $a1, 16
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x30bbb4: 0x9c623ccc  lwu         $v0, 0x3CCC($v1)
    ctx->pc = 0x30bbb4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15564)));
    // 0x30bbb8: 0x21c38  dsll        $v1, $v0, 16
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
    // 0x30bbbc: 0x22238  dsll        $a0, $v0, 8
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 8);
    // 0x30bbc0: 0x441025  or          $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30bbc4: 0x431025  or          $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30bbc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x30BBC8u;
    {
        const bool branch_taken_0x30bbc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BBC8u;
        // 0x30bbcc: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bbc8) {
            ctx->pc = 0x30BBDCu;
            goto label_30bbdc;
        }
    }
label_30bbd0:
    // 0x30bbd0: 0x34028080  ori         $v0, $zero, 0x8080
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x30bbd4: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30bbd8: 0x34428080  ori         $v0, $v0, 0x8080
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
label_30bbdc:
    // 0x30bbdc: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30bbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30bbe0: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bbe4: 0x1117c3  sra         $v0, $s1, 31
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 31));
    // 0x30bbe8: 0xd1fc3  sra         $v1, $t5, 31
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 13), 31));
    // 0x30bbec: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x30bbecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x30bbf0: 0x24040800  addiu       $a0, $zero, 0x800
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30bbf4: 0x2221023  subu        $v0, $s1, $v0
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x30bbf8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x30bbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x30bbfc: 0x23043  sra         $a2, $v0, 1
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30bc00: 0x1a31823  subu        $v1, $t5, $v1
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x30bc04: 0x861023  subu        $v0, $a0, $a2
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x30bc08: 0x32843  sra         $a1, $v1, 1
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 1));
    // 0x30bc0c: 0x21100  sll         $v0, $v0, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30bc10: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bc14: 0x40382d  daddu       $a3, $v0, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc18: 0x852023  subu        $a0, $a0, $a1
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30bc1c: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30bc1cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30bc20: 0x42100  sll         $a0, $a0, 4
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30bc24: 0x7103c  dsll32      $v0, $a3, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x30bc28: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bc2c: 0x821025  or          $v0, $a0, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30bc30: 0x24030019  addiu       $v1, $zero, 0x19
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x30bc34: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30bc34u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30bc38: 0x582d  daddu       $t3, $zero, $zero
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc3c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bc40: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30bc40u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30bc44: 0x1a800044  blez        $s4, . + 4 + (0x44 << 2)
    ctx->pc = 0x30BC44u;
    {
        const bool branch_taken_0x30bc44 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x30BC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BC44u;
        // 0x30bc48: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bc44) {
            ctx->pc = 0x30BD58u;
            goto label_30bd58;
        }
    }
    // 0x30bc4c: 0x111100  sll         $v0, $s1, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x30bc50: 0x24c30800  addiu       $v1, $a2, 0x800
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x30bc54: 0x24420008  addiu       $v0, $v0, 0x8
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x30bc58: 0x52023  negu        $a0, $a1
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x30bc5c: 0x31900  sll         $v1, $v1, 4
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30bc60: 0x2c438  dsll        $t8, $v0, 16
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) << 16);
    // 0x30bc64: 0x24840800  addiu       $a0, $a0, 0x800
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x30bc68: 0xd2900  sll         $a1, $t5, 4
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x30bc6c: 0x2622ffff  addiu       $v0, $s1, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x30bc70: 0x7ac38  dsll        $s5, $a3, 16
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7) << 16);
    // 0x30bc74: 0x3bc38  dsll        $s7, $v1, 16
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << 16);
    // 0x30bc78: 0x2b43c  dsll32      $s6, $v0, 16
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30bc7c: 0xa0602d  daddu       $t4, $a1, $zero
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc80: 0x80502d  daddu       $t2, $a0, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bc84: 0x3c190008  lui         $t9, 0x8
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)8 << 16));
    // 0x30bc88: 0x24130003  addiu       $s3, $zero, 0x3
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30bc8c: 0x34128000  ori         $s2, $zero, 0x8000
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30bc90: 0x129678  dsll        $s2, $s2, 25
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 25);
    // 0x30bc94: 0x24100004  addiu       $s0, $zero, 0x4
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30bc98: 0x1a44821  addu        $t1, $t5, $a0
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x30bc9c: 0x24a80008  addiu       $t0, $a1, 0x8
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x30bca0: 0x240f0008  addiu       $t7, $zero, 0x8
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30bca4: 0x25a7ffff  addiu       $a3, $t5, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x30bca8: 0x702d  daddu       $t6, $zero, $zero
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bcac: 0x0  nop
    // NOP
label_30bcb0:
    // 0x30bcb0: 0xe0102d  daddu       $v0, $a3, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bcb4: 0xa1900  sll         $v1, $t2, 4
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x30bcb8: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30bcbc: 0x752025  or          $a0, $v1, $s5
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x30bcc0: 0x1c21025  or          $v0, $t6, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x30bcc4: 0x24030041  addiu       $v1, $zero, 0x41
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x30bcc8: 0x561025  or          $v0, $v0, $s6
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x30bccc: 0x1f92825  or          $a1, $t7, $t9
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) | GPR_U64(ctx, 25));
    // 0x30bcd0: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30bcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30bcd4: 0x922025  or          $a0, $a0, $s2
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x30bcd8: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bcdc: 0x1183025  or          $a2, $t0, $t8
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 24));
    // 0x30bce0: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30bce0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30bce4: 0x91100  sll         $v0, $t1, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x30bce8: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bcec: 0x571825  or          $v1, $v0, $s7
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x30bcf0: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30bcf0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30bcf4: 0x721825  or          $v1, $v1, $s2
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x30bcf8: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bcfc: 0x256b0001  addiu       $t3, $t3, 0x1
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x30bd00: 0xffd30000  sd          $s3, 0x0($fp)
    ctx->pc = 0x30bd00u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 19));
    // 0x30bd04: 0x12d4821  addu        $t1, $t1, $t5
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x30bd08: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bd0c: 0x10c4021  addu        $t0, $t0, $t4
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x30bd10: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30bd10u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30bd14: 0x14d5021  addu        $t2, $t2, $t5
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x30bd18: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bd1c: 0x1ec7821  addu        $t7, $t7, $t4
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x30bd20: 0xffd00000  sd          $s0, 0x0($fp)
    ctx->pc = 0x30bd20u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 16));
    // 0x30bd24: 0xed3821  addu        $a3, $a3, $t5
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x30bd28: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bd2c: 0x1cd7021  addu        $t6, $t6, $t5
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x30bd30: 0xffc60000  sd          $a2, 0x0($fp)
    ctx->pc = 0x30bd30u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 6));
    // 0x30bd34: 0x174102a  slt         $v0, $t3, $s4
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x30bd38: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bd3c: 0xffd30000  sd          $s3, 0x0($fp)
    ctx->pc = 0x30bd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 19));
    // 0x30bd40: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bd44: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30bd44u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30bd48: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bd4c: 0xffd00000  sd          $s0, 0x0($fp)
    ctx->pc = 0x30bd4cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 16));
    // 0x30bd50: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x30BD50u;
    {
        const bool branch_taken_0x30bd50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD50u;
        // 0x30bd54: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd50) {
            ctx->pc = 0x30BCB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30bcb0;
        }
    }
label_30bd58:
    // 0x30bd58: 0x3c040074  lui         $a0, 0x74
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x30bd5c: 0x248374a0  addiu       $v1, $a0, 0x74A0
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 29856));
    // 0x30bd60: 0x8c620578  lw          $v0, 0x578($v1)
    ctx->pc = 0x30bd60u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A18u));
    // 0x30bd64: 0x38420001  xori        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x30bd68: 0x10400162  beqz        $v0, . + 4 + (0x162 << 2)
    ctx->pc = 0x30BD68u;
    {
        const bool branch_taken_0x30bd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BD68u;
        // 0x30bd6c: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bd68) {
            ctx->pc = 0x30C2F4u;
            goto label_30c2f4;
        }
    }
    // 0x30bd70: 0x24020080  addiu       $v0, $zero, 0x80
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30bd74: 0x8c853ccc  lw          $a1, 0x3CCC($a0)
    ctx->pc = 0x30bd74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15564)));
    // 0x30bd78: 0x24030356  addiu       $v1, $zero, 0x356
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x30bd7c: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30bd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30bd80: 0x34068000  ori         $a2, $zero, 0x8000
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30bd84: 0x63438  dsll        $a2, $a2, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30bd88: 0x451023  subu        $v0, $v0, $a1
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30bd8c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bd90: 0x21042  srl         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x30bd94: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30bd94u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30bd98: 0x2103c  dsll32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30bd9c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bda0: 0x2103e  dsrl32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30bda4: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30bda8: 0x22438  dsll        $a0, $v0, 16
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x30bdac: 0x21a38  dsll        $v1, $v0, 8
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x30bdb0: 0x431025  or          $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30bdb4: 0x602d  daddu       $t4, $zero, $zero
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bdb8: 0x441025  or          $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30bdbc: 0x461025  or          $v0, $v0, $a2
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30bdc0: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30bdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30bdc4: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bdc8: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30bdcc: 0x1a800054  blez        $s4, . + 4 + (0x54 << 2)
    ctx->pc = 0x30BDCCu;
    {
        const bool branch_taken_0x30bdcc = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x30BDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BDCCu;
        // 0x30bdd0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bdcc) {
            ctx->pc = 0x30BF20u;
            goto label_30bf20;
        }
    }
    // 0x30bdd4: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x30bdd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30bdd8: 0x24040800  addiu       $a0, $zero, 0x800
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30bddc: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30bde0: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x30bde0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30bde4: 0x2261023  subu        $v0, $s1, $a2
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x30bde8: 0x8c653cd0  lw          $a1, 0x3CD0($v1)
    ctx->pc = 0x30bde8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15568)));
    // 0x30bdec: 0x21043  sra         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30bdf0: 0x1ab1823  subu        $v1, $t5, $t3
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x30bdf4: 0x822023  subu        $a0, $a0, $v0
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30bdf8: 0x31843  sra         $v1, $v1, 1
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x30bdfc: 0x24420800  addiu       $v0, $v0, 0x800
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x30be00: 0x42100  sll         $a0, $a0, 4
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30be04: 0x21100  sll         $v0, $v0, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30be08: 0x852023  subu        $a0, $a0, $a1
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x30be0c: 0x451023  subu        $v0, $v0, $a1
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30be10: 0x4203c  dsll32      $a0, $a0, 0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30be14: 0x2103c  dsll32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30be18: 0x31823  negu        $v1, $v1
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x30be1c: 0x4bc3a  dsrl        $s7, $a0, 16
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 4) >> 16);
    // 0x30be20: 0x2b43a  dsrl        $s6, $v0, 16
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) >> 16);
    // 0x30be24: 0x24630800  addiu       $v1, $v1, 0x800
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x30be28: 0xd2100  sll         $a0, $t5, 4
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x30be2c: 0x2622ffff  addiu       $v0, $s1, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x30be30: 0x80582d  daddu       $t3, $a0, $zero
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30be34: 0x2ac3c  dsll32      $s5, $v0, 16
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30be38: 0x60502d  daddu       $t2, $v1, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30be3c: 0x3c190008  lui         $t9, 0x8
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)8 << 16));
    // 0x30be40: 0x24130003  addiu       $s3, $zero, 0x3
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30be44: 0x34128000  ori         $s2, $zero, 0x8000
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30be48: 0x129678  dsll        $s2, $s2, 25
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << 25);
    // 0x30be4c: 0x24100004  addiu       $s0, $zero, 0x4
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30be50: 0x1a34821  addu        $t1, $t5, $v1
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x30be54: 0x24880008  addiu       $t0, $a0, 0x8
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x30be58: 0x240f0008  addiu       $t7, $zero, 0x8
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30be5c: 0x25a7ffff  addiu       $a3, $t5, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x30be60: 0x702d  daddu       $t6, $zero, $zero
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30be64: 0x3c18003c  lui         $t8, 0x3C
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)60 << 16));
label_30be68:
    // 0x30be68: 0xe0102d  daddu       $v0, $a3, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30be6c: 0x8f03118c  lw          $v1, 0x118C($t8)
    ctx->pc = 0x30be6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4492)));
    // 0x30be70: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30be74: 0x1f93025  or          $a2, $t7, $t9
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 15) | GPR_U64(ctx, 25));
    // 0x30be78: 0x1c21025  or          $v0, $t6, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x30be7c: 0xa2100  sll         $a0, $t2, 4
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x30be80: 0x551025  or          $v0, $v0, $s5
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x30be84: 0x972825  or          $a1, $a0, $s7
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 23));
    // 0x30be88: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30be88u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30be8c: 0xb22825  or          $a1, $a1, $s2
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 18));
    // 0x30be90: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30be94: 0x24020041  addiu       $v0, $zero, 0x41
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x30be98: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30be98u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30be9c: 0x31900  sll         $v1, $v1, 4
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30bea0: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bea4: 0x24630008  addiu       $v1, $v1, 0x8
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x30bea8: 0xffc60000  sd          $a2, 0x0($fp)
    ctx->pc = 0x30bea8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 6));
    // 0x30beac: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30beb0: 0x31c38  dsll        $v1, $v1, 16
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30beb4: 0xffd30000  sd          $s3, 0x0($fp)
    ctx->pc = 0x30beb4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 19));
    // 0x30beb8: 0x1031825  or          $v1, $t0, $v1
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x30bebc: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bec0: 0x91100  sll         $v0, $t1, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x30bec4: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30bec4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30bec8: 0x562025  or          $a0, $v0, $s6
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 22));
    // 0x30becc: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bed0: 0x922025  or          $a0, $a0, $s2
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 18));
    // 0x30bed4: 0xffd00000  sd          $s0, 0x0($fp)
    ctx->pc = 0x30bed4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 16));
    // 0x30bed8: 0x258c0001  addiu       $t4, $t4, 0x1
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x30bedc: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bee0: 0x12d4821  addu        $t1, $t1, $t5
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x30bee4: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30bee4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30bee8: 0x10b4021  addu        $t0, $t0, $t3
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x30beec: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bef0: 0x14d5021  addu        $t2, $t2, $t5
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x30bef4: 0xffd30000  sd          $s3, 0x0($fp)
    ctx->pc = 0x30bef4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 19));
    // 0x30bef8: 0x1eb7821  addu        $t7, $t7, $t3
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x30befc: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bf00: 0xed3821  addu        $a3, $a3, $t5
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x30bf04: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30bf08: 0x1cd7021  addu        $t6, $t6, $t5
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x30bf0c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bf10: 0x194102a  slt         $v0, $t4, $s4
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x30bf14: 0xffd00000  sd          $s0, 0x0($fp)
    ctx->pc = 0x30bf14u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 16));
    // 0x30bf18: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x30BF18u;
    {
        const bool branch_taken_0x30bf18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30BF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF18u;
        // 0x30bf1c: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf18) {
            ctx->pc = 0x30BE68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30be68;
        }
    }
label_30bf20:
    // 0x30bf20: 0x1a8000f4  blez        $s4, . + 4 + (0xF4 << 2)
    ctx->pc = 0x30BF20u;
    {
        const bool branch_taken_0x30bf20 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x30BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30BF20u;
        // 0x30bf24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30bf20) {
            ctx->pc = 0x30C2F4u;
            goto label_30c2f4;
        }
    }
    // 0x30bf28: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x30bf28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30bf2c: 0x24040800  addiu       $a0, $zero, 0x800
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30bf30: 0x24190041  addiu       $t9, $zero, 0x41
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x30bf34: 0x3c170008  lui         $s7, 0x8
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)8 << 16));
    // 0x30bf38: 0x2231023  subu        $v0, $s1, $v1
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x30bf3c: 0x24120003  addiu       $s2, $zero, 0x3
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30bf40: 0x21043  sra         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30bf44: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30bf48: 0x8c663cd0  lw          $a2, 0x3CD0($v1)
    ctx->pc = 0x30bf48u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C3CD0u));
    // 0x30bf4c: 0x822023  subu        $a0, $a0, $v0
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x30bf50: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x30bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x30bf54: 0x24420800  addiu       $v0, $v0, 0x800
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x30bf58: 0x21100  sll         $v0, $v0, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30bf5c: 0x42100  sll         $a0, $a0, 4
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x30bf60: 0x1a32823  subu        $a1, $t5, $v1
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x30bf64: 0x461021  addu        $v0, $v0, $a2
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x30bf68: 0x2103c  dsll32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30bf6c: 0x52843  sra         $a1, $a1, 1
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x30bf70: 0x862021  addu        $a0, $a0, $a2
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x30bf74: 0x52823  negu        $a1, $a1
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x30bf78: 0x29c3a  dsrl        $s3, $v0, 16
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) >> 16);
    // 0x30bf7c: 0x24a50800  addiu       $a1, $a1, 0x800
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2048));
    // 0x30bf80: 0xd1900  sll         $v1, $t5, 4
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x30bf84: 0x2622ffff  addiu       $v0, $s1, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x30bf88: 0x4203c  dsll32      $a0, $a0, 0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30bf8c: 0x60602d  daddu       $t4, $v1, $zero
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bf90: 0x4ac3a  dsrl        $s5, $a0, 16
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) >> 16);
    // 0x30bf94: 0x2c43c  dsll32      $t8, $v0, 16
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30bf98: 0xa0502d  daddu       $t2, $a1, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bf9c: 0x34118000  ori         $s1, $zero, 0x8000
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30bfa0: 0x118e78  dsll        $s1, $s1, 25
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 25);
    // 0x30bfa4: 0x24100004  addiu       $s0, $zero, 0x4
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30bfa8: 0x1a54821  addu        $t1, $t5, $a1
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x30bfac: 0x24680008  addiu       $t0, $v1, 0x8
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x30bfb0: 0x240f0008  addiu       $t7, $zero, 0x8
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30bfb4: 0x25a7ffff  addiu       $a3, $t5, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x30bfb8: 0x702d  daddu       $t6, $zero, $zero
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bfbc: 0x3c16003c  lui         $s6, 0x3C
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
label_30bfc0:
    // 0x30bfc0: 0xe0102d  daddu       $v0, $a3, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30bfc4: 0x8ec3118c  lw          $v1, 0x118C($s6)
    ctx->pc = 0x30bfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4492)));
    // 0x30bfc8: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30bfcc: 0x1f73025  or          $a2, $t7, $s7
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 15) | GPR_U64(ctx, 23));
    // 0x30bfd0: 0x1c21025  or          $v0, $t6, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x30bfd4: 0xa2100  sll         $a0, $t2, 4
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x30bfd8: 0x581025  or          $v0, $v0, $t8
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x30bfdc: 0x952825  or          $a1, $a0, $s5
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 21));
    // 0x30bfe0: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30bfe0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30bfe4: 0xb12825  or          $a1, $a1, $s1
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 17));
    // 0x30bfe8: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bfec: 0x31900  sll         $v1, $v1, 4
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30bff0: 0xffd90000  sd          $t9, 0x0($fp)
    ctx->pc = 0x30bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 25));
    // 0x30bff4: 0x24630008  addiu       $v1, $v1, 0x8
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x30bff8: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30bffc: 0xffc60000  sd          $a2, 0x0($fp)
    ctx->pc = 0x30bffcu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 6));
    // 0x30c000: 0x31c38  dsll        $v1, $v1, 16
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30c004: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c008: 0x1031825  or          $v1, $t0, $v1
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x30c00c: 0xffd20000  sd          $s2, 0x0($fp)
    ctx->pc = 0x30c00cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 18));
    // 0x30c010: 0x91100  sll         $v0, $t1, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x30c014: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c018: 0x532025  or          $a0, $v0, $s3
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x30c01c: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30c01cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30c020: 0x912025  or          $a0, $a0, $s1
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x30c024: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c028: 0x256b0001  addiu       $t3, $t3, 0x1
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x30c02c: 0xffd00000  sd          $s0, 0x0($fp)
    ctx->pc = 0x30c02cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 16));
    // 0x30c030: 0x12d4821  addu        $t1, $t1, $t5
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x30c034: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c038: 0x10c4021  addu        $t0, $t0, $t4
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x30c03c: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30c03cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30c040: 0x14d5021  addu        $t2, $t2, $t5
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x30c044: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c048: 0x1ec7821  addu        $t7, $t7, $t4
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 12)));
    // 0x30c04c: 0xffd20000  sd          $s2, 0x0($fp)
    ctx->pc = 0x30c04cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 18));
    // 0x30c050: 0xed3821  addu        $a3, $a3, $t5
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x30c054: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c058: 0x1cd7021  addu        $t6, $t6, $t5
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 13)));
    // 0x30c05c: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30c05cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30c060: 0x174102a  slt         $v0, $t3, $s4
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x30c064: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c068: 0xffd00000  sd          $s0, 0x0($fp)
    ctx->pc = 0x30c068u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 16));
    // 0x30c06c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x30C06Cu;
    {
        const bool branch_taken_0x30c06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C06Cu;
        // 0x30c070: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c06c) {
            ctx->pc = 0x30BFC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30bfc0;
        }
    }
    // 0x30c074: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x30C074u;
    {
        const bool branch_taken_0x30c074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C074u;
        // 0x30c078: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c074) {
            ctx->pc = 0x30C2F8u;
            goto label_30c2f8;
        }
    }
label_30c07c:
    // 0x30c07c: 0xafbe0000  sw          $fp, 0x0($sp)
    ctx->pc = 0x30c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 30));
    // 0x30c080: 0x2402ffff  addiu       $v0, $zero, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30c084: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c088: 0x4d102a  slt         $v0, $v0, $t5
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x30c08c: 0x25a6003f  addiu       $a2, $t5, 0x3F
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 63));
    // 0x30c090: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30c090u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30c094: 0x1a2300b  movn        $a2, $t5, $v0
    ctx->pc = 0x30c094u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x30c098: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c09c: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30c0a0: 0xafbe0004  sw          $fp, 0x4($sp)
    ctx->pc = 0x30c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 30));
    // 0x30c0a4: 0x90433cc8  lbu         $v1, 0x3CC8($v0)
    ctx->pc = 0x30c0a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3C3CC8u));
    // 0x30c0a8: 0x3c05003c  lui         $a1, 0x3C
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30c0ac: 0x63183  sra         $a2, $a2, 6
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x30c0b0: 0x90a43cc9  lbu         $a0, 0x3CC9($a1)
    ctx->pc = 0x30c0b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15561)));
    // 0x30c0b4: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c0b8: 0x2402000e  addiu       $v0, $zero, 0xE
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30c0bc: 0x62c38  dsll        $a1, $a2, 16
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << 16);
    // 0x30c0c0: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30c0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30c0c4: 0x651825  or          $v1, $v1, $a1
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30c0c8: 0x42638  dsll        $a0, $a0, 24
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x30c0cc: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c0d0: 0x641825  or          $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30c0d4: 0x3c0102d  daddu       $v0, $fp, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c0d8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x30c0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x30c0dc: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c0e0: 0x2402004d  addiu       $v0, $zero, 0x4D
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x30c0e4: 0x2403003f  addiu       $v1, $zero, 0x3F
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30c0e8: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30c0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30c0ec: 0x24040015  addiu       $a0, $zero, 0x15
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x30c0f0: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c0f4: 0x24050049  addiu       $a1, $zero, 0x49
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x30c0f8: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30c0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30c0fc: 0x34098000  ori         $t1, $zero, 0x8000
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30c100: 0x94e38  dsll        $t1, $t1, 24
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 24);
    // 0x30c104: 0x35290029  ori         $t1, $t1, 0x29
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)41);
    // 0x30c108: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c10c: 0x240a0043  addiu       $t2, $zero, 0x43
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x30c110: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30c110u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30c114: 0x3c0b0003  lui         $t3, 0x3
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)3 << 16));
    // 0x30c118: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c11c: 0x240c0048  addiu       $t4, $zero, 0x48
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x30c120: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30c120u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30c124: 0x3402cc80  ori         $v0, $zero, 0xCC80
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52352);
    // 0x30c128: 0x214f8  dsll        $v0, $v0, 19
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x30c12c: 0x34420e00  ori         $v0, $v0, 0xE00
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3584);
    // 0x30c130: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c134: 0x633b8  dsll        $a2, $a2, 14
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x30c138: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30c138u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30c13c: 0xc23025  or          $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x30c140: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c144: 0x24030007  addiu       $v1, $zero, 0x7
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30c148: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30c148u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30c14c: 0x24040316  addiu       $a0, $zero, 0x316
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x30c150: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c154: 0x34078080  ori         $a3, $zero, 0x8080
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x30c158: 0x73c38  dsll        $a3, $a3, 16
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x30c15c: 0x34e78080  ori         $a3, $a3, 0x8080
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x30c160: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30c160u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30c164: 0x24080001  addiu       $t0, $zero, 0x1
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c168: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c16c: 0x782d  daddu       $t7, $zero, $zero
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c170: 0xffc90000  sd          $t1, 0x0($fp)
    ctx->pc = 0x30c170u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 9));
    // 0x30c174: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c178: 0xffca0000  sd          $t2, 0x0($fp)
    ctx->pc = 0x30c178u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 10));
    // 0x30c17c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c180: 0xffcb0000  sd          $t3, 0x0($fp)
    ctx->pc = 0x30c180u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 11));
    // 0x30c184: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c188: 0xffcc0000  sd          $t4, 0x0($fp)
    ctx->pc = 0x30c188u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 12));
    // 0x30c18c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c190: 0x3c0102d  daddu       $v0, $fp, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c194: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x30c194u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x30c198: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c19c: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30c19cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30c1a0: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c1a4: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30c1a8: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c1ac: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30c1acu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30c1b0: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c1b4: 0xffc70000  sd          $a3, 0x0($fp)
    ctx->pc = 0x30c1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 7));
    // 0x30c1b8: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c1bc: 0xffc80000  sd          $t0, 0x0($fp)
    ctx->pc = 0x30c1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 8));
    // 0x30c1c0: 0x1a80004c  blez        $s4, . + 4 + (0x4C << 2)
    ctx->pc = 0x30C1C0u;
    {
        const bool branch_taken_0x30c1c0 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x30C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C1C0u;
        // 0x30c1c4: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c1c0) {
            ctx->pc = 0x30C2F4u;
            goto label_30c2f4;
        }
    }
    // 0x30c1c8: 0x1117c2  srl         $v0, $s1, 31
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 31));
    // 0x30c1cc: 0x24030800  addiu       $v1, $zero, 0x800
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30c1d0: 0x2221021  addu        $v0, $s1, $v0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x30c1d4: 0xd27c2  srl         $a0, $t5, 31
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
    // 0x30c1d8: 0x21043  sra         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30c1dc: 0x1a42021  addu        $a0, $t5, $a0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x30c1e0: 0x621823  subu        $v1, $v1, $v0
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x30c1e4: 0x112900  sll         $a1, $s1, 4
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x30c1e8: 0x24420800  addiu       $v0, $v0, 0x800
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x30c1ec: 0x31900  sll         $v1, $v1, 4
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30c1f0: 0x21100  sll         $v0, $v0, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30c1f4: 0x42043  sra         $a0, $a0, 1
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x30c1f8: 0x24a50008  addiu       $a1, $a1, 0x8
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x30c1fc: 0x42023  negu        $a0, $a0
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x30c200: 0x3b438  dsll        $s6, $v1, 16
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) << 16);
    // 0x30c204: 0x29c38  dsll        $s3, $v0, 16
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << 16);
    // 0x30c208: 0x24840800  addiu       $a0, $a0, 0x800
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2048));
    // 0x30c20c: 0xd1900  sll         $v1, $t5, 4
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x30c210: 0x2622ffff  addiu       $v0, $s1, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x30c214: 0x5ac38  dsll        $s5, $a1, 16
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) << 16);
    // 0x30c218: 0x60582d  daddu       $t3, $v1, $zero
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c21c: 0x2c43c  dsll32      $t8, $v0, 16
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) << (32 + 16));
    // 0x30c220: 0x80502d  daddu       $t2, $a0, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c224: 0x24190041  addiu       $t9, $zero, 0x41
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x30c228: 0x3c170008  lui         $s7, 0x8
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)8 << 16));
    // 0x30c22c: 0x24120003  addiu       $s2, $zero, 0x3
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30c230: 0x34118000  ori         $s1, $zero, 0x8000
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30c234: 0x118e78  dsll        $s1, $s1, 25
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 25);
    // 0x30c238: 0x24100004  addiu       $s0, $zero, 0x4
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c23c: 0x1a44821  addu        $t1, $t5, $a0
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x30c240: 0x24680008  addiu       $t0, $v1, 0x8
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x30c244: 0x240e0008  addiu       $t6, $zero, 0x8
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30c248: 0x25a7ffff  addiu       $a3, $t5, -0x1
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x30c24c: 0x602d  daddu       $t4, $zero, $zero
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30c250:
    // 0x30c250: 0xe0102d  daddu       $v0, $a3, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c254: 0x1d72825  or          $a1, $t6, $s7
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14) | GPR_U64(ctx, 23));
    // 0x30c258: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30c25c: 0xa1900  sll         $v1, $t2, 4
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x30c260: 0x1821025  or          $v0, $t4, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x30c264: 0x762025  or          $a0, $v1, $s6
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x30c268: 0x581025  or          $v0, $v0, $t8
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x30c26c: 0x912025  or          $a0, $a0, $s1
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 17));
    // 0x30c270: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30c270u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30c274: 0x1153025  or          $a2, $t0, $s5
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 21));
    // 0x30c278: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c27c: 0x91100  sll         $v0, $t1, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x30c280: 0xffd90000  sd          $t9, 0x0($fp)
    ctx->pc = 0x30c280u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 25));
    // 0x30c284: 0x531825  or          $v1, $v0, $s3
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x30c288: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c28c: 0x711825  or          $v1, $v1, $s1
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x30c290: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30c290u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30c294: 0x25ef0001  addiu       $t7, $t7, 0x1
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x30c298: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c29c: 0x12d4821  addu        $t1, $t1, $t5
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x30c2a0: 0xffd20000  sd          $s2, 0x0($fp)
    ctx->pc = 0x30c2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 18));
    // 0x30c2a4: 0x10b4021  addu        $t0, $t0, $t3
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x30c2a8: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c2ac: 0x14d5021  addu        $t2, $t2, $t5
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 13)));
    // 0x30c2b0: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30c2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30c2b4: 0x1cb7021  addu        $t6, $t6, $t3
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x30c2b8: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c2bc: 0xed3821  addu        $a3, $a3, $t5
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 13)));
    // 0x30c2c0: 0xffd00000  sd          $s0, 0x0($fp)
    ctx->pc = 0x30c2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 16));
    // 0x30c2c4: 0x18d6021  addu        $t4, $t4, $t5
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
    // 0x30c2c8: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c2cc: 0x1f4102a  slt         $v0, $t7, $s4
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x30c2d0: 0xffc60000  sd          $a2, 0x0($fp)
    ctx->pc = 0x30c2d0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 6));
    // 0x30c2d4: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c2d8: 0xffd20000  sd          $s2, 0x0($fp)
    ctx->pc = 0x30c2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 18));
    // 0x30c2dc: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c2e0: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30c2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30c2e4: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c2e8: 0xffd00000  sd          $s0, 0x0($fp)
    ctx->pc = 0x30c2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 16));
    // 0x30c2ec: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x30C2ECu;
    {
        const bool branch_taken_0x30c2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C2ECu;
        // 0x30c2f0: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c2ec) {
            ctx->pc = 0x30C250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c250;
        }
    }
label_30c2f4:
    // 0x30c2f4: 0x3c020005  lui         $v0, 0x5
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_30c2f8:
    // 0x30c2f8: 0x24030048  addiu       $v1, $zero, 0x48
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x30c2fc: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30c2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30c300: 0x3c047000  lui         $a0, 0x7000
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x30c304: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c308: 0x34058000  ori         $a1, $zero, 0x8000
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30c30c: 0x52b7c  dsll32      $a1, $a1, 13
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x30c310: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30c310u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30c314: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c318: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x30c318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c31c: 0x3c61023  subu        $v0, $fp, $a2
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
    // 0x30c320: 0x21102  srl         $v0, $v0, 4
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x30c324: 0x2443ffff  addiu       $v1, $v0, -0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x30c328: 0x441025  or          $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30c32c: 0x34638000  ori         $v1, $v1, 0x8000
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x30c330: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x30c330u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x30c334: 0x651825  or          $v1, $v1, $a1
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30c338: 0x8fab0004  lw          $t3, 0x4($sp)
    ctx->pc = 0x30c338u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x30c33c: 0x100001cb  b           . + 4 + (0x1CB << 2)
    ctx->pc = 0x30C33Cu;
    {
        const bool branch_taken_0x30c33c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C33Cu;
        // 0x30c340: 0xfd630000  sd          $v1, 0x0($t3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c33c) {
            ctx->pc = 0x30CA6Cu;
            goto label_30ca6c;
        }
    }
label_30c344:
    // 0x30c344: 0x3c140074  lui         $s4, 0x74
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)116 << 16));
    // 0x30c348: 0x240b0100  addiu       $t3, $zero, 0x100
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x30c34c: 0x269974a0  addiu       $t9, $s4, 0x74A0
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 20), 29856));
    // 0x30c350: 0x3c014380  lui         $at, 0x4380
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x30c354: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30c358: 0x8f220210  lw          $v0, 0x210($t9)
    ctx->pc = 0x30c358u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x30c35c: 0x3c0f003c  lui         $t7, 0x3C
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x30c360: 0x3c10003c  lui         $s0, 0x3C
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x30c364: 0x3c014360  lui         $at, 0x4360
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x30c368: 0x44810000  mtc1        $at, $f0
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30c36c: 0x3c014300  lui         $at, 0x4300
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x30c370: 0x44811000  mtc1        $at, $f2
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30c374: 0x3c18003c  lui         $t8, 0x3C
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)60 << 16));
    // 0x30c378: 0x3c0144f2  lui         $at, 0x44F2
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17650 << 16));
    // 0x30c37c: 0x44811800  mtc1        $at, $f3
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x30c380: 0x241500e0  addiu       $s5, $zero, 0xE0
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x30c384 / 0x30c388: widescreen patch (half-height mode + Dynamic Full Screen Hor+)
    ctx->pc = 0x30c384u;
    {
        const int aspectIdx = godhand::mobile::getAspectMode();
        uint32_t atVal = 0x3F1F49F1u; // 16:9 = 0.6222219f
        if (aspectIdx == 1) {
            atVal = 0x3EEEEEEFu; // 4:3 = 0.46666667f
        } else if (aspectIdx == 2) {
            uint32_t sw = 0, sh = 0;
            godhand::mobile::getScreenDimensions(&sw, &sh);
            float fov = (sw > 0 && sh > 0) ? (0.700000005f * (static_cast<float>(sw) / static_cast<float>(sh))) : 1.5555556f;
            fov *= 0.5f;
            std::memcpy(&atVal, &fov, sizeof(atVal));
        }
        SET_GPR_S32(ctx, 1, static_cast<int32_t>(atVal));
    }
    // 0x30c38c: 0x44812000  mtc1        $at, $f4
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x30c390: 0x3c0e003c  lui         $t6, 0x3C
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)60 << 16));
    // 0x30c394: 0xadeb1198  sw          $t3, 0x1198($t7)
    ctx->pc = 0x30c394u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x3C1198u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C1198u, _value); } while (0);
    // 0x30c398: 0x3c16003c  lui         $s6, 0x3C
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x30c39c: 0x24110790  addiu       $s1, $zero, 0x790
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
    // 0x30c3a0: 0x3c120058  lui         $s2, 0x58
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)88 << 16));
    // 0x30c3a4: 0x3c13003c  lui         $s3, 0x3C
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x30c3a8: 0x240c0080  addiu       $t4, $zero, 0x80
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30c3ac: 0x3c0d003c  lui         $t5, 0x3C
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
    // 0x30c3b0: 0x24090008  addiu       $t1, $zero, 0x8
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30c3b4: 0x3c0a003c  lui         $t2, 0x3C
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x30c3b8: 0x24060007  addiu       $a2, $zero, 0x7
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30c3bc: 0x3c070058  lui         $a3, 0x58
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)88 << 16));
    // 0x30c3c0: 0x3c08003c  lui         $t0, 0x3C
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x30c3c4: 0x24040200  addiu       $a0, $zero, 0x200
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x30c3c8: 0x3c05003c  lui         $a1, 0x3C
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30c3cc: 0x24031500  addiu       $v1, $zero, 0x1500
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5376));
    // 0x30c3d0: 0xe601119c  swc1        $f1, 0x119C($s0)
    ctx->pc = 0x30c3d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3C119Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C119Cu, _value); } while (0); }
    // 0x30c3d4: 0x3c0b0058  lui         $t3, 0x58
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)88 << 16));
    // 0x30c3d8: 0xaf15118c  sw          $s5, 0x118C($t8)
    ctx->pc = 0x30c3d8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x3C118Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C118Cu, _value); } while (0);
    // 0x30c3dc: 0xe5c01190  swc1        $f0, 0x1190($t6)
    ctx->pc = 0x30c3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3C1190u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C1190u, _value); } while (0); }
    // 0x30c3e0: 0x30420001  andi        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x30c3e4: 0x3c103000  lui         $s0, 0x3000
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)12288 << 16));
    // 0x30c3e8: 0xe6c211a0  swc1        $f2, 0x11A0($s6)
    ctx->pc = 0x30c3e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3C11A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C11A0u, _value); } while (0); }
    // 0x30c3ec: 0xad716b80  sw          $s1, 0x6B80($t3)
    ctx->pc = 0x30c3ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x586B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x586B80u, _value); } while (0);
    // 0x30c3f0: 0xe6436b84  swc1        $f3, 0x6B84($s2)
    ctx->pc = 0x30c3f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x586B84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x586B84u, _value); } while (0); }
    // 0x30c3f4: 0xae6c11b4  sw          $t4, 0x11B4($s3)
    ctx->pc = 0x30c3f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 12)); ps2TraceGuestWrite(rdram, 0x3C11B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C11B4u, _value); } while (0);
    // 0x30c3f8: 0xada911b8  sw          $t1, 0x11B8($t5)
    ctx->pc = 0x30c3f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x3C11B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C11B8u, _value); } while (0);
    // 0x30c3fc: 0xad4611bc  sw          $a2, 0x11BC($t2)
    ctx->pc = 0x30c3fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3C11BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C11BCu, _value); } while (0);
    // 0x30c400: 0xe4e46b88  swc1        $f4, 0x6B88($a3)
    ctx->pc = 0x30c400u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x586B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x586B88u, _value); } while (0); }
    // 0x30c404: 0xad0411c8  sw          $a0, 0x11C8($t0)
    ctx->pc = 0x30c404u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3C11C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C11C8u, _value); } while (0);
    // 0x30c408: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x30C408u;
    {
        const bool branch_taken_0x30c408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C408u;
        // 0x30c40c: 0xaca311ac  sw          $v1, 0x11AC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4524), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c408) {
            ctx->pc = 0x30C450u;
            goto label_30c450;
        }
    }
    // 0x30c410: 0x87270214  lh          $a3, 0x214($t9)
    ctx->pc = 0x30c410u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 532)));
    // 0x30c414: 0x272403f0  addiu       $a0, $t9, 0x3F0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 1008));
    // 0x30c418: 0x902025  or          $a0, $a0, $s0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    // 0x30c41c: 0x24050800  addiu       $a1, $zero, 0x800
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30c420: 0x24060800  addiu       $a2, $zero, 0x800
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30c424: 0xc0e5812  jal         func_396048
    SET_GPR_U32(ctx, 31, 0x30C42Cu);
    ctx->pc = 0x30C428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C424u;
    // 0x30c428: 0x7fb90010  sq          $t9, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceGsSetHalfOffset_0x396048, 0x396048u, 0x30c42cu)) {
        return;
    }
label_30c42c:
    // 0x30c42c: 0x7bb90010  lq          $t9, 0x10($sp)
    ctx->pc = 0x30c42cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c430: 0x24050800  addiu       $a1, $zero, 0x800
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30c434: 0x24060800  addiu       $a2, $zero, 0x800
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30c438: 0x27240470  addiu       $a0, $t9, 0x470
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 1136));
    // 0x30c43c: 0x87270214  lh          $a3, 0x214($t9)
    ctx->pc = 0x30c43cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 532)));
    // 0x30c440: 0xc0e5834  jal         func_3960D0
    SET_GPR_U32(ctx, 31, 0x30C448u);
    ctx->pc = 0x30C444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C440u;
    // 0x30c444: 0x902025  or          $a0, $a0, $s0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003960D0_0x3960d0, 0x3960d0u, 0x30c448u)) {
        return;
    }
label_30c448:
    // 0x30c448: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x30C448u;
    {
        const bool branch_taken_0x30c448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C448u;
        // 0x30c44c: 0x3c0d003c  lui         $t5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c448) {
            ctx->pc = 0x30C48Cu;
            goto label_30c48c;
        }
    }
label_30c450:
    // 0x30c450: 0x87270214  lh          $a3, 0x214($t9)
    ctx->pc = 0x30c450u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 532)));
    // 0x30c454: 0x27240280  addiu       $a0, $t9, 0x280
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 640));
    // 0x30c458: 0x2042025  or          $a0, $s0, $a0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x30c45c: 0x24050800  addiu       $a1, $zero, 0x800
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30c460: 0x24060800  addiu       $a2, $zero, 0x800
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30c464: 0xc0e5812  jal         func_396048
    SET_GPR_U32(ctx, 31, 0x30C46Cu);
    ctx->pc = 0x30C468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C464u;
    // 0x30c468: 0x7fb90010  sq          $t9, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceGsSetHalfOffset_0x396048, 0x396048u, 0x30c46cu)) {
        return;
    }
label_30c46c:
    // 0x30c46c: 0x7bb90010  lq          $t9, 0x10($sp)
    ctx->pc = 0x30c46cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30c470: 0x24050800  addiu       $a1, $zero, 0x800
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30c474: 0x24060800  addiu       $a2, $zero, 0x800
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30c478: 0x27240300  addiu       $a0, $t9, 0x300
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 768));
    // 0x30c47c: 0x87270214  lh          $a3, 0x214($t9)
    ctx->pc = 0x30c47cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 25), 532)));
    // 0x30c480: 0xc0e5834  jal         func_3960D0
    SET_GPR_U32(ctx, 31, 0x30C488u);
    ctx->pc = 0x30C484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C480u;
    // 0x30c484: 0x2042025  or          $a0, $s0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003960D0_0x3960d0, 0x3960d0u, 0x30c488u)) {
        return;
    }
label_30c488:
    // 0x30c488: 0x3c0d003c  lui         $t5, 0x3C
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)60 << 16));
label_30c48c:
    // 0x30c48c: 0x3c037000  lui         $v1, 0x7000
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x30c490: 0x346300fd  ori         $v1, $v1, 0xFD
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)253);
    // 0x30c494: 0x8dae1180  lw          $t6, 0x1180($t5)
    ctx->pc = 0x30c494u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4480)));
    // 0x30c498: 0x2402ffff  addiu       $v0, $zero, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30c49c: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30c49cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30c4a0: 0x34048000  ori         $a0, $zero, 0x8000
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30c4a4: 0x4237c  dsll32      $a0, $a0, 13
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x30c4a8: 0x348480fc  ori         $a0, $a0, 0x80FC
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)33020);
    // 0x30c4ac: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c4b0: 0x4e102a  slt         $v0, $v0, $t6
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 14)) ? 1 : 0);
    // 0x30c4b4: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30c4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30c4b8: 0x25c6003f  addiu       $a2, $t6, 0x3F
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 14), 63));
    // 0x30c4bc: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c4c0: 0x1c2300b  movn        $a2, $t6, $v0
    ctx->pc = 0x30c4c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 14));
    // 0x30c4c4: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30c4c4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30c4c8: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30c4cc: 0x3c05003c  lui         $a1, 0x3C
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x30c4d0: 0x63183  sra         $a2, $a2, 6
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x30c4d4: 0x90433cc8  lbu         $v1, 0x3CC8($v0)
    ctx->pc = 0x30c4d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15560)));
    // 0x30c4d8: 0x90a43cc9  lbu         $a0, 0x3CC9($a1)
    ctx->pc = 0x30c4d8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 15561)));
    // 0x30c4dc: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c4e0: 0x2402000e  addiu       $v0, $zero, 0xE
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x30c4e4: 0x62c38  dsll        $a1, $a2, 16
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) << 16);
    // 0x30c4e8: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30c4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30c4ec: 0x651825  or          $v1, $v1, $a1
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x30c4f0: 0x42638  dsll        $a0, $a0, 24
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x30c4f4: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c4f8: 0x641825  or          $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x30c4fc: 0x3c0102d  daddu       $v0, $fp, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c500: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x30c500u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x30c504: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c508: 0x2402004d  addiu       $v0, $zero, 0x4D
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x30c50c: 0x2403003f  addiu       $v1, $zero, 0x3F
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x30c510: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30c510u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30c514: 0x24040015  addiu       $a0, $zero, 0x15
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x30c518: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c51c: 0x24050049  addiu       $a1, $zero, 0x49
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x30c520: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30c520u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30c524: 0x3402c480  ori         $v0, $zero, 0xC480
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50304);
    // 0x30c528: 0x214f8  dsll        $v0, $v0, 19
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x30c52c: 0x34420e00  ori         $v0, $v0, 0xE00
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3584);
    // 0x30c530: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c534: 0x633b8  dsll        $a2, $a2, 14
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x30c538: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30c538u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30c53c: 0xc23025  or          $a2, $a2, $v0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x30c540: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c544: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30c548: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30c548u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30c54c: 0x34078000  ori         $a3, $zero, 0x8000
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30c550: 0x73e38  dsll        $a3, $a3, 24
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x30c554: 0x34e70029  ori         $a3, $a3, 0x29
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)41);
    // 0x30c558: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c55c: 0x24080043  addiu       $t0, $zero, 0x43
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x30c560: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30c560u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30c564: 0x3c0a0003  lui         $t2, 0x3
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)3 << 16));
    // 0x30c568: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c56c: 0x60782d  daddu       $t7, $v1, $zero
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c570: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30c570u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30c574: 0x240c0048  addiu       $t4, $zero, 0x48
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x30c578: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c57c: 0x24090007  addiu       $t1, $zero, 0x7
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x30c580: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30c580u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30c584: 0x240b0316  addiu       $t3, $zero, 0x316
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    // 0x30c588: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c58c: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c590: 0x9c623ccc  lwu         $v0, 0x3CCC($v1)
    ctx->pc = 0x30c590u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 15564)));
    // 0x30c594: 0xffc70000  sd          $a3, 0x0($fp)
    ctx->pc = 0x30c594u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 7));
    // 0x30c598: 0x34038000  ori         $v1, $zero, 0x8000
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30c59c: 0x31c38  dsll        $v1, $v1, 16
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x30c5a0: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c5a4: 0x22238  dsll        $a0, $v0, 8
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 8);
    // 0x30c5a8: 0xffc80000  sd          $t0, 0x0($fp)
    ctx->pc = 0x30c5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 8));
    // 0x30c5ac: 0x442025  or          $a0, $v0, $a0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30c5b0: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c5b4: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30c5b8: 0xffca0000  sd          $t2, 0x0($fp)
    ctx->pc = 0x30c5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 10));
    // 0x30c5bc: 0x822025  or          $a0, $a0, $v0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x30c5c0: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c5c4: 0x832025  or          $a0, $a0, $v1
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x30c5c8: 0xffcc0000  sd          $t4, 0x0($fp)
    ctx->pc = 0x30c5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 12));
    // 0x30c5cc: 0x3c030074  lui         $v1, 0x74
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30c5d0: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c5d4: 0x246274a0  addiu       $v0, $v1, 0x74A0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
    // 0x30c5d8: 0x8c540214  lw          $s4, 0x214($v0)
    ctx->pc = 0x30c5d8u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x7476B4u));
    // 0x30c5dc: 0x3c0182d  daddu       $v1, $fp, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c5e0: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x30c5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x30c5e4: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c5e8: 0xffc90000  sd          $t1, 0x0($fp)
    ctx->pc = 0x30c5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 9));
    // 0x30c5ec: 0x502d  daddu       $t2, $zero, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c5f0: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c5f4: 0xffcb0000  sd          $t3, 0x0($fp)
    ctx->pc = 0x30c5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 11));
    // 0x30c5f8: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c5fc: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30c5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30c600: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c604: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30c604u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30c608: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c60c: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30c60cu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30c610: 0x19c0004e  blez        $t6, . + 4 + (0x4E << 2)
    ctx->pc = 0x30C610u;
    {
        const bool branch_taken_0x30c610 = (GPR_S64(ctx, 14) <= 0);
        ctx->pc = 0x30C614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C610u;
        // 0x30c614: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c610) {
            ctx->pc = 0x30C74Cu;
            goto label_30c74c;
        }
    }
    // 0x30c618: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30c61c: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30c620: 0x8c49118c  lw          $t1, 0x118C($v0)
    ctx->pc = 0x30c620u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x30c624: 0x1c0582d  daddu       $t3, $t6, $zero
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c628: 0x90683cd8  lbu         $t0, 0x3CD8($v1)
    ctx->pc = 0x30c628u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x3C3CD8u));
    // 0x30c62c: 0x24060870  addiu       $a2, $zero, 0x870
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2160));
    // 0x30c630: 0x917c2  srl         $v0, $t1, 31
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x30c634: 0xb1fc2  srl         $v1, $t3, 31
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x30c638: 0x1221021  addu        $v0, $t1, $v0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x30c63c: 0x1144018  mult        $t0, $t0, $s4
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x30c640: 0x21043  sra         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30c644: 0x1631821  addu        $v1, $t3, $v1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x30c648: 0xc23023  subu        $a2, $a2, $v0
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x30c64c: 0x31843  sra         $v1, $v1, 1
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x30c650: 0x24420870  addiu       $v0, $v0, 0x870
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    // 0x30c654: 0x24070800  addiu       $a3, $zero, 0x800
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30c658: 0x25250001  addiu       $a1, $t1, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x30c65c: 0xe33823  subu        $a3, $a3, $v1
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x30c660: 0x21100  sll         $v0, $v0, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30c664: 0x528c0  sll         $a1, $a1, 3
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x30c668: 0x63100  sll         $a2, $a2, 4
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x30c66c: 0x24630800  addiu       $v1, $v1, 0x800
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x30c670: 0xa82821  addu        $a1, $a1, $t0
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x30c674: 0x31900  sll         $v1, $v1, 4
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30c678: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30c67c: 0x73900  sll         $a3, $a3, 4
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x30c680: 0x621025  or          $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30c684: 0x24a50008  addiu       $a1, $a1, 0x8
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x30c688: 0x63438  dsll        $a2, $a2, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30c68c: 0x34038000  ori         $v1, $zero, 0x8000
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30c690: 0x31e78  dsll        $v1, $v1, 25
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 25);
    // 0x30c694: 0xe63025  or          $a2, $a3, $a2
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x30c698: 0x25080010  addiu       $t0, $t0, 0x10
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x30c69c: 0x5283c  dsll32      $a1, $a1, 0
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x30c6a0: 0xb2100  sll         $a0, $t3, 4
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x30c6a4: 0x34840008  ori         $a0, $a0, 0x8
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x30c6a8: 0x52c3a  dsrl        $a1, $a1, 16
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 16);
    // 0x30c6ac: 0x8403c  dsll32      $t0, $t0, 0
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x30c6b0: 0x433825  or          $a3, $v0, $v1
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30c6b4: 0x856025  or          $t4, $a0, $a1
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x30c6b8: 0x8443a  dsrl        $t0, $t0, 16
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 16);
    // 0x30c6bc: 0x24020008  addiu       $v0, $zero, 0x8
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30c6c0: 0x2529ffff  addiu       $t1, $t1, -0x1
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x30c6c4: 0xc33025  or          $a2, $a2, $v1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x30c6c8: 0x1024025  or          $t0, $t0, $v0
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x30c6cc: 0x94c3c  dsll32      $t1, $t1, 16
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x30c6d0: 0x240d0041  addiu       $t5, $zero, 0x41
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x30c6d4: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30c6d8: 0x24040004  addiu       $a0, $zero, 0x4
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c6dc: 0x0  nop
    // NOP
label_30c6e0:
    // 0x30c6e0: 0x2542001f  addiu       $v0, $t2, 0x1F
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 31));
    // 0x30c6e4: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30c6e8: 0x1421025  or          $v0, $t2, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x30c6ec: 0x491025  or          $v0, $v0, $t1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x30c6f0: 0x254a0020  addiu       $t2, $t2, 0x20
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x30c6f4: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30c6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30c6f8: 0x14b182a  slt         $v1, $t2, $t3
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x30c6fc: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c700: 0xffcd0000  sd          $t5, 0x0($fp)
    ctx->pc = 0x30c700u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 13));
    // 0x30c704: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c708: 0xffc80000  sd          $t0, 0x0($fp)
    ctx->pc = 0x30c708u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 8));
    // 0x30c70c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c710: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30c710u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30c714: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c718: 0xffc60000  sd          $a2, 0x0($fp)
    ctx->pc = 0x30c718u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 6));
    // 0x30c71c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c720: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30c720u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30c724: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c728: 0xffcc0000  sd          $t4, 0x0($fp)
    ctx->pc = 0x30c728u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 12));
    // 0x30c72c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c730: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30c730u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30c734: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c738: 0xffc70000  sd          $a3, 0x0($fp)
    ctx->pc = 0x30c738u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 7));
    // 0x30c73c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c740: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30c740u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30c744: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x30C744u;
    {
        const bool branch_taken_0x30c744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C744u;
        // 0x30c748: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c744) {
            ctx->pc = 0x30C6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c6e0;
        }
    }
label_30c74c:
    // 0x30c74c: 0x8de43ccc  lw          $a0, 0x3CCC($t7)
    ctx->pc = 0x30c74cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 15564)));
    // 0x30c750: 0x24020080  addiu       $v0, $zero, 0x80
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30c754: 0x24030356  addiu       $v1, $zero, 0x356
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 854));
    // 0x30c758: 0x34068000  ori         $a2, $zero, 0x8000
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30c75c: 0x63438  dsll        $a2, $a2, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x30c760: 0x441023  subu        $v0, $v0, $a0
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x30c764: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30c764u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
    // 0x30c768: 0x21042  srl         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x30c76c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c770: 0x2103c  dsll32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30c774: 0xffc00000  sd          $zero, 0x0($fp)
    ctx->pc = 0x30c774u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 0));
    // 0x30c778: 0x2103e  dsrl32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x30c77c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c780: 0x22438  dsll        $a0, $v0, 16
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 16);
    // 0x30c784: 0x21a38  dsll        $v1, $v0, 8
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
    // 0x30c788: 0x431025  or          $v0, $v0, $v1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30c78c: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30c790: 0x441025  or          $v0, $v0, $a0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x30c794: 0x502d  daddu       $t2, $zero, $zero
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c798: 0x461025  or          $v0, $v0, $a2
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x30c79c: 0x3c04003c  lui         $a0, 0x3C
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x30c7a0: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30c7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30c7a4: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c7a8: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30c7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30c7ac: 0x8c851180  lw          $a1, 0x1180($a0)
    ctx->pc = 0x30c7acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C1180u));
    // 0x30c7b0: 0x18a00054  blez        $a1, . + 4 + (0x54 << 2)
    ctx->pc = 0x30C7B0u;
    {
        const bool branch_taken_0x30c7b0 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x30C7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C7B0u;
        // 0x30c7b4: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c7b0) {
            ctx->pc = 0x30C904u;
            goto label_30c904;
        }
    }
    // 0x30c7b8: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30c7bc: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30c7c0: 0x8c49118c  lw          $t1, 0x118C($v0)
    ctx->pc = 0x30c7c0u;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x30c7c4: 0xa0582d  daddu       $t3, $a1, $zero
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c7c8: 0x90683cd8  lbu         $t0, 0x3CD8($v1)
    ctx->pc = 0x30c7c8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x3C3CD8u));
    // 0x30c7cc: 0x24060870  addiu       $a2, $zero, 0x870
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2160));
    // 0x30c7d0: 0x917c2  srl         $v0, $t1, 31
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x30c7d4: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30c7d8: 0x1221021  addu        $v0, $t1, $v0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x30c7dc: 0x8c653cd0  lw          $a1, 0x3CD0($v1)
    ctx->pc = 0x30c7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C3CD0u));
    // 0x30c7e0: 0x21043  sra         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30c7e4: 0xb1fc2  srl         $v1, $t3, 31
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x30c7e8: 0xc23023  subu        $a2, $a2, $v0
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x30c7ec: 0x1144018  mult        $t0, $t0, $s4
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x30c7f0: 0x24420870  addiu       $v0, $v0, 0x870
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    // 0x30c7f4: 0x1631821  addu        $v1, $t3, $v1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x30c7f8: 0x31843  sra         $v1, $v1, 1
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x30c7fc: 0x21100  sll         $v0, $v0, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30c800: 0x24070800  addiu       $a3, $zero, 0x800
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30c804: 0x25240001  addiu       $a0, $t1, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x30c808: 0x451023  subu        $v0, $v0, $a1
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30c80c: 0xe33823  subu        $a3, $a3, $v1
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x30c810: 0x63100  sll         $a2, $a2, 4
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x30c814: 0x420c0  sll         $a0, $a0, 3
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30c818: 0xc53023  subu        $a2, $a2, $a1
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x30c81c: 0x24630800  addiu       $v1, $v1, 0x800
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x30c820: 0x2103c  dsll32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30c824: 0x882021  addu        $a0, $a0, $t0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x30c828: 0x31900  sll         $v1, $v1, 4
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30c82c: 0x6303c  dsll32      $a2, $a2, 0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30c830: 0x2143a  dsrl        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x30c834: 0x73900  sll         $a3, $a3, 4
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x30c838: 0x621025  or          $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30c83c: 0x24840008  addiu       $a0, $a0, 0x8
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x30c840: 0x6343a  dsrl        $a2, $a2, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x30c844: 0x34038000  ori         $v1, $zero, 0x8000
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30c848: 0x31e78  dsll        $v1, $v1, 25
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 25);
    // 0x30c84c: 0xe63025  or          $a2, $a3, $a2
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x30c850: 0x25080010  addiu       $t0, $t0, 0x10
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x30c854: 0x4203c  dsll32      $a0, $a0, 0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30c858: 0xb2900  sll         $a1, $t3, 4
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
    // 0x30c85c: 0x34a50008  ori         $a1, $a1, 0x8
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x30c860: 0x4243a  dsrl        $a0, $a0, 16
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x30c864: 0x8403c  dsll32      $t0, $t0, 0
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x30c868: 0x433825  or          $a3, $v0, $v1
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30c86c: 0xa46025  or          $t4, $a1, $a0
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x30c870: 0x8443a  dsrl        $t0, $t0, 16
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 16);
    // 0x30c874: 0x24020008  addiu       $v0, $zero, 0x8
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30c878: 0x2529ffff  addiu       $t1, $t1, -0x1
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x30c87c: 0xc33025  or          $a2, $a2, $v1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x30c880: 0x1024025  or          $t0, $t0, $v0
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x30c884: 0x94c3c  dsll32      $t1, $t1, 16
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x30c888: 0x240d0041  addiu       $t5, $zero, 0x41
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x30c88c: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30c890: 0x24040004  addiu       $a0, $zero, 0x4
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x30c894: 0x0  nop
    // NOP
label_30c898:
    // 0x30c898: 0x2542001f  addiu       $v0, $t2, 0x1F
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 31));
    // 0x30c89c: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30c8a0: 0x1421025  or          $v0, $t2, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x30c8a4: 0x491025  or          $v0, $v0, $t1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x30c8a8: 0x254a0020  addiu       $t2, $t2, 0x20
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x30c8ac: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30c8acu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30c8b0: 0x14b182a  slt         $v1, $t2, $t3
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x30c8b4: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c8b8: 0xffcd0000  sd          $t5, 0x0($fp)
    ctx->pc = 0x30c8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 13));
    // 0x30c8bc: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c8c0: 0xffc80000  sd          $t0, 0x0($fp)
    ctx->pc = 0x30c8c0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 8));
    // 0x30c8c4: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c8c8: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30c8c8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30c8cc: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c8d0: 0xffc60000  sd          $a2, 0x0($fp)
    ctx->pc = 0x30c8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 6));
    // 0x30c8d4: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c8d8: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30c8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30c8dc: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c8e0: 0xffcc0000  sd          $t4, 0x0($fp)
    ctx->pc = 0x30c8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 12));
    // 0x30c8e4: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c8e8: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30c8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30c8ec: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c8f0: 0xffc70000  sd          $a3, 0x0($fp)
    ctx->pc = 0x30c8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 7));
    // 0x30c8f4: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30c8f8: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30c8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30c8fc: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x30C8FCu;
    {
        const bool branch_taken_0x30c8fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8FCu;
        // 0x30c900: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8fc) {
            ctx->pc = 0x30C898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c898;
        }
    }
label_30c904:
    // 0x30c904: 0x3c06003c  lui         $a2, 0x3C
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x30c908: 0x8cc41180  lw          $a0, 0x1180($a2)
    ctx->pc = 0x30c908u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C1180u));
    // 0x30c90c: 0x18800053  blez        $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x30C90Cu;
    {
        const bool branch_taken_0x30c90c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x30C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C90Cu;
        // 0x30c910: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c90c) {
            ctx->pc = 0x30CA5Cu;
            goto label_30ca5c;
        }
    }
    // 0x30c914: 0x3c02003c  lui         $v0, 0x3C
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30c918: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30c91c: 0x8c49118c  lw          $t1, 0x118C($v0)
    ctx->pc = 0x30c91cu;
    SET_GPR_S32(ctx, 9, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x30c920: 0x80682d  daddu       $t5, $a0, $zero
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c924: 0x90683cd8  lbu         $t0, 0x3CD8($v1)
    ctx->pc = 0x30c924u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)FAST_READ8(0x3C3CD8u));
    // 0x30c928: 0x24060870  addiu       $a2, $zero, 0x870
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2160));
    // 0x30c92c: 0x917c2  srl         $v0, $t1, 31
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
    // 0x30c930: 0x3c03003c  lui         $v1, 0x3C
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x30c934: 0x1221021  addu        $v0, $t1, $v0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x30c938: 0x8c653cd0  lw          $a1, 0x3CD0($v1)
    ctx->pc = 0x30c938u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C3CD0u));
    // 0x30c93c: 0x21043  sra         $v0, $v0, 1
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x30c940: 0xd1fc2  srl         $v1, $t5, 31
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 13), 31));
    // 0x30c944: 0xc23023  subu        $a2, $a2, $v0
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x30c948: 0x1144018  mult        $t0, $t0, $s4
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x30c94c: 0x24420870  addiu       $v0, $v0, 0x870
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    // 0x30c950: 0x1a31821  addu        $v1, $t5, $v1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x30c954: 0x31843  sra         $v1, $v1, 1
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x30c958: 0x21100  sll         $v0, $v0, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30c95c: 0x24070800  addiu       $a3, $zero, 0x800
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x30c960: 0x25240001  addiu       $a0, $t1, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x30c964: 0x451021  addu        $v0, $v0, $a1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x30c968: 0xe33823  subu        $a3, $a3, $v1
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x30c96c: 0x63100  sll         $a2, $a2, 4
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x30c970: 0x420c0  sll         $a0, $a0, 3
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x30c974: 0xc53021  addu        $a2, $a2, $a1
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x30c978: 0x24630800  addiu       $v1, $v1, 0x800
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x30c97c: 0x2103c  dsll32      $v0, $v0, 0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x30c980: 0x882021  addu        $a0, $a0, $t0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x30c984: 0x31900  sll         $v1, $v1, 4
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x30c988: 0x6303c  dsll32      $a2, $a2, 0
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x30c98c: 0x2143a  dsrl        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x30c990: 0x73900  sll         $a3, $a3, 4
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x30c994: 0x621025  or          $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x30c998: 0x24840008  addiu       $a0, $a0, 0x8
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x30c99c: 0x6343a  dsrl        $a2, $a2, 16
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 16);
    // 0x30c9a0: 0x34038000  ori         $v1, $zero, 0x8000
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x30c9a4: 0x31e78  dsll        $v1, $v1, 25
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 25);
    // 0x30c9a8: 0xe63025  or          $a2, $a3, $a2
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x30c9ac: 0x25080010  addiu       $t0, $t0, 0x10
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x30c9b0: 0x4203c  dsll32      $a0, $a0, 0
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x30c9b4: 0xd2900  sll         $a1, $t5, 4
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
    // 0x30c9b8: 0x34a50008  ori         $a1, $a1, 0x8
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x30c9bc: 0x4243a  dsrl        $a0, $a0, 16
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x30c9c0: 0x8403c  dsll32      $t0, $t0, 0
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x30c9c4: 0x433825  or          $a3, $v0, $v1
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30c9c8: 0xa45825  or          $t3, $a1, $a0
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x30c9cc: 0x8443a  dsrl        $t0, $t0, 16
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 16);
    // 0x30c9d0: 0x24020008  addiu       $v0, $zero, 0x8
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x30c9d4: 0x2529ffff  addiu       $t1, $t1, -0x1
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x30c9d8: 0xc33025  or          $a2, $a2, $v1
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x30c9dc: 0x1024025  or          $t0, $t0, $v0
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
    // 0x30c9e0: 0x94c3c  dsll32      $t1, $t1, 16
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 16));
    // 0x30c9e4: 0x240c0041  addiu       $t4, $zero, 0x41
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x30c9e8: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30c9ec: 0x24040004  addiu       $a0, $zero, 0x4
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30c9f0:
    // 0x30c9f0: 0x2542001f  addiu       $v0, $t2, 0x1F
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 31));
    // 0x30c9f4: 0x21438  dsll        $v0, $v0, 16
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x30c9f8: 0x1421025  or          $v0, $t2, $v0
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x30c9fc: 0x491025  or          $v0, $v0, $t1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x30ca00: 0x254a0020  addiu       $t2, $t2, 0x20
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x30ca04: 0xffc20000  sd          $v0, 0x0($fp)
    ctx->pc = 0x30ca04u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
    // 0x30ca08: 0x14d182a  slt         $v1, $t2, $t5
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 13)) ? 1 : 0);
    // 0x30ca0c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30ca10: 0xffcc0000  sd          $t4, 0x0($fp)
    ctx->pc = 0x30ca10u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 12));
    // 0x30ca14: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30ca18: 0xffc80000  sd          $t0, 0x0($fp)
    ctx->pc = 0x30ca18u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 8));
    // 0x30ca1c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30ca20: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30ca20u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30ca24: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30ca28: 0xffc60000  sd          $a2, 0x0($fp)
    ctx->pc = 0x30ca28u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 6));
    // 0x30ca2c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30ca30: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30ca30u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30ca34: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30ca38: 0xffcb0000  sd          $t3, 0x0($fp)
    ctx->pc = 0x30ca38u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 11));
    // 0x30ca3c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30ca40: 0xffc50000  sd          $a1, 0x0($fp)
    ctx->pc = 0x30ca40u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 5));
    // 0x30ca44: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30ca48: 0xffc70000  sd          $a3, 0x0($fp)
    ctx->pc = 0x30ca48u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 7));
    // 0x30ca4c: 0x27de0008  addiu       $fp, $fp, 0x8
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
    // 0x30ca50: 0xffc40000  sd          $a0, 0x0($fp)
    ctx->pc = 0x30ca50u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 4));
    // 0x30ca54: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x30CA54u;
    {
        const bool branch_taken_0x30ca54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA54u;
        // 0x30ca58: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30ca54) {
            ctx->pc = 0x30C9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30c9f0;
        }
    }
label_30ca5c:
    // 0x30ca5c: 0x3c030005  lui         $v1, 0x5
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x30ca60: 0x24020048  addiu       $v0, $zero, 0x48
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x30ca64: 0xffc20008  sd          $v0, 0x8($fp)
    ctx->pc = 0x30ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 2));
    // 0x30ca68: 0xffc30000  sd          $v1, 0x0($fp)
    ctx->pc = 0x30ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 3));
label_30ca6c:
    // 0x30ca6c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x30ca6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x30ca70: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x30ca70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x30ca74: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x30ca74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x30ca78: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x30ca78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x30ca7c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x30ca7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x30ca80: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x30ca80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x30ca84: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x30ca84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x30ca88: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x30ca88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30ca8c: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x30ca8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30ca90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x30ca90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30ca94: 0x3e00008  jr          $ra
    ctx->pc = 0x30CA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30CA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30CA94u;
        // 0x30ca98: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30CA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x30ca9c: 0x0  nop
    // NOP
    ctx->pc = 0x30caa0u;
}