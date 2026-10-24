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

// Function: cWorldLight_Init_SatanLight
// Address: 0x2d98c0 - 0x2d9b70
void cWorldLight_Init_SatanLight_0x2d98c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cWorldLight_Init_SatanLight_0x2d98c0");
#endif

    switch (ctx->pc) {
        case 0x2d99c4u: goto label_2d99c4;
        case 0x2d9a88u: goto label_2d9a88;
        case 0x2d9b0cu: goto label_2d9b0c;
        default: break;
    }

    ctx->pc = 0x2d98c0u;

    // 0x2d98c0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2d98c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2d98c4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2d98c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2d98c8: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2d98c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2d98cc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2d98ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d98d0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2d98d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x2d98d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2d98d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d98d8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2d98d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d98dc: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2d98dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2d98e0: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2d98e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2d98e4: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2d98e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2d98e8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2d98e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2d98ec: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2d98ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2d98f0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2d98f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2d98f4: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2d98f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2d98f8: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2d98f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2d98fc: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2d98fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d9900: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2d9900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d9904: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x2d9904u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d9908: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2d9908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2d990c: 0x3c01c018  lui         $at, 0xC018
    ctx->pc = 0x2d990cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49176 << 16));
    // 0x2d9910: 0x3421f53c  ori         $at, $at, 0xF53C
    ctx->pc = 0x2d9910u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62780);
    // 0x2d9914: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9914u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9918: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2d9918u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d991c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d991cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d9920: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2d9920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2d9924: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2d9924u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9928: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x2d9928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x2d992c: 0x34219a6b  ori         $at, $at, 0x9A6B
    ctx->pc = 0x2d992cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39531);
    // 0x2d9930: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d9930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d9934: 0x3c020504  lui         $v0, 0x504
    ctx->pc = 0x2d9934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1284 << 16));
    // 0x2d9938: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d9938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2d993c: 0x3421c250  ori         $at, $at, 0xC250
    ctx->pc = 0x2d993cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49744);
    // 0x2d9940: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9944: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d9944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9948: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d9948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d994c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d994cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9950: 0xafb50054  sw          $s5, 0x54($sp)
    ctx->pc = 0x2d9950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 21));
    // 0x2d9954: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x2d9954u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d9958: 0xa7b20000  sh          $s2, 0x0($sp)
    ctx->pc = 0x2d9958u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 18));
    // 0x2d995c: 0x3c170404  lui         $s7, 0x404
    ctx->pc = 0x2d995cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)1028 << 16));
    // 0x2d9960: 0xa7b20002  sh          $s2, 0x2($sp)
    ctx->pc = 0x2d9960u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 18));
    // 0x2d9964: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2d9964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2d9968: 0x3c013da3  lui         $at, 0x3DA3
    ctx->pc = 0x2d9968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15779 << 16));
    // 0x2d996c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2d996cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2d9970: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d9970u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d9974: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x2d9974u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d9978: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2d9978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d997c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x2d997cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2d9980: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x2d9980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x2d9984: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x2d9984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x2d9988: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d998c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2d998cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d9990: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2d9990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2d9994: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d9994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d9998: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d999c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2d999cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d99a0: 0xe6220008  swc1        $f2, 0x8($s1)
    ctx->pc = 0x2d99a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d99a4: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x2d99a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2d99a8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2d99a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2d99ac: 0xafb30050  sw          $s3, 0x50($sp)
    ctx->pc = 0x2d99acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 19));
    // 0x2d99b0: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2d99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2d99b4: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2d99b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2d99b8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2d99b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2d99bc: 0xc0b642c  jal         func_2D90B0
    ctx->pc = 0x2D99BCu;
    SET_GPR_U32(ctx, 31, 0x2D99C4u);
    ctx->pc = 0x2D99C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D99BCu;
    // 0x2d99c0: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D90B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D90B0u, 0x2D99BCu, 0x2D99C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D99C4u;
label_2d99c4:
    // 0x2d99c4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2d99c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2d99c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2d99c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2d99cc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2d99ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2d99d0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d99d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d99d4: 0x342104fb  ori         $at, $at, 0x4FB
    ctx->pc = 0x2d99d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1275);
    // 0x2d99d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d99d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d99dc: 0x2408001e  addiu       $t0, $zero, 0x1E
    ctx->pc = 0x2d99dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2d99e0: 0x3c01c144  lui         $at, 0xC144
    ctx->pc = 0x2d99e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49476 << 16));
    // 0x2d99e4: 0x3421cc23  ori         $at, $at, 0xCC23
    ctx->pc = 0x2d99e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52259);
    // 0x2d99e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2d99e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d99ec: 0x24075100  addiu       $a3, $zero, 0x5100
    ctx->pc = 0x2d99ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20736));
    // 0x2d99f0: 0x3c01c14e  lui         $at, 0xC14E
    ctx->pc = 0x2d99f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49486 << 16));
    // 0x2d99f4: 0x342165a9  ori         $at, $at, 0x65A9
    ctx->pc = 0x2d99f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26025);
    // 0x2d99f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d99f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d99fc: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x2d99fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2d9a00: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d9a00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d9a04: 0x24033667  addiu       $v1, $zero, 0x3667
    ctx->pc = 0x2d9a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13927));
    // 0x2d9a08: 0xafb50054  sw          $s5, 0x54($sp)
    ctx->pc = 0x2d9a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 21));
    // 0x2d9a0c: 0x3c020414  lui         $v0, 0x414
    ctx->pc = 0x2d9a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1044 << 16));
    // 0x2d9a10: 0xa7b30000  sh          $s3, 0x0($sp)
    ctx->pc = 0x2d9a10u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x2d9a14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d9a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a18: 0xa7b60002  sh          $s6, 0x2($sp)
    ctx->pc = 0x2d9a18u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 22));
    // 0x2d9a1c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d9a1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a20: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2d9a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2d9a24: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x2d9a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x2d9a28: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2d9a28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2d9a2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9a2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9a30: 0xe6030004  swc1        $f3, 0x4($s0)
    ctx->pc = 0x2d9a30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d9a34: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2d9a34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d9a38: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x2d9a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2d9a3c: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2d9a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x2d9a40: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2d9a40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2d9a44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9a44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9a48: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2d9a48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d9a4c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2d9a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d9a50: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2d9a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d9a54: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x2d9a54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2d9a58: 0xa3b20060  sb          $s2, 0x60($sp)
    ctx->pc = 0x2d9a58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 18));
    // 0x2d9a5c: 0xe7b50044  swc1        $f21, 0x44($sp)
    ctx->pc = 0x2d9a5cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2d9a60: 0xafb30050  sw          $s3, 0x50($sp)
    ctx->pc = 0x2d9a60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 19));
    // 0x2d9a64: 0xa7a8005e  sh          $t0, 0x5E($sp)
    ctx->pc = 0x2d9a64u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 94), (uint16_t)GPR_U32(ctx, 8));
    // 0x2d9a68: 0xa7a7005c  sh          $a3, 0x5C($sp)
    ctx->pc = 0x2d9a68u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 92), (uint16_t)GPR_U32(ctx, 7));
    // 0x2d9a6c: 0xa3a60061  sb          $a2, 0x61($sp)
    ctx->pc = 0x2d9a6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 97), (uint8_t)GPR_U32(ctx, 6));
    // 0x2d9a70: 0xa7a30062  sh          $v1, 0x62($sp)
    ctx->pc = 0x2d9a70u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 98), (uint16_t)GPR_U32(ctx, 3));
    // 0x2d9a74: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x2d9a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x2d9a78: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2d9a78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2d9a7c: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2d9a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2d9a80: 0xc0b642c  jal         func_2D90B0
    ctx->pc = 0x2D9A80u;
    SET_GPR_U32(ctx, 31, 0x2D9A88u);
    ctx->pc = 0x2D9A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9A80u;
    // 0x2d9a84: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D90B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D90B0u, 0x2D9A80u, 0x2D9A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9A88u;
label_2d9a88:
    // 0x2d9a88: 0x3c01c1a9  lui         $at, 0xC1A9
    ctx->pc = 0x2d9a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49577 << 16));
    // 0x2d9a8c: 0x3421990d  ori         $at, $at, 0x990D
    ctx->pc = 0x2d9a8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39181);
    // 0x2d9a90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9a94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d9a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9a98: 0x3c01c0b9  lui         $at, 0xC0B9
    ctx->pc = 0x2d9a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49337 << 16));
    // 0x2d9a9c: 0x3421eb2b  ori         $at, $at, 0xEB2B
    ctx->pc = 0x2d9a9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60203);
    // 0x2d9aa0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2d9aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d9aa4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2d9aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9aa8: 0x3c01c0dc  lui         $at, 0xC0DC
    ctx->pc = 0x2d9aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49372 << 16));
    // 0x2d9aac: 0x3421cb47  ori         $at, $at, 0xCB47
    ctx->pc = 0x2d9aacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52039);
    // 0x2d9ab0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d9ab0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d9ab4: 0xafb50054  sw          $s5, 0x54($sp)
    ctx->pc = 0x2d9ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 21));
    // 0x2d9ab8: 0xa7b60002  sh          $s6, 0x2($sp)
    ctx->pc = 0x2d9ab8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 22));
    // 0x2d9abc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2d9abcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d9ac0: 0xa7b30000  sh          $s3, 0x0($sp)
    ctx->pc = 0x2d9ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 19));
    // 0x2d9ac4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2d9ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2d9ac8: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x2d9ac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2d9acc: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x2d9accu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2d9ad0: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x2d9ad0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x2d9ad4: 0x3c013f07  lui         $at, 0x3F07
    ctx->pc = 0x2d9ad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16135 << 16));
    // 0x2d9ad8: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x2d9ad8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x2d9adc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d9adcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9ae0: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2d9ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2d9ae4: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2d9ae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d9ae8: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2d9ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x2d9aec: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x2d9aecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2d9af0: 0xe7b50044  swc1        $f21, 0x44($sp)
    ctx->pc = 0x2d9af0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2d9af4: 0xafb30050  sw          $s3, 0x50($sp)
    ctx->pc = 0x2d9af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 19));
    // 0x2d9af8: 0xafb70058  sw          $s7, 0x58($sp)
    ctx->pc = 0x2d9af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 23));
    // 0x2d9afc: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x2d9afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x2d9b00: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2d9b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2d9b04: 0xc0b642c  jal         func_2D90B0
    ctx->pc = 0x2D9B04u;
    SET_GPR_U32(ctx, 31, 0x2D9B0Cu);
    ctx->pc = 0x2D9B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9B04u;
    // 0x2d9b08: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D90B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D90B0u, 0x2D9B04u, 0x2D9B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9B0Cu;
label_2d9b0c:
    // 0x2d9b0c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2d9b0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2d9b10: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2d9b10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2d9b14: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2d9b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d9b18: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2d9b18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d9b1c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2d9b1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d9b20: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2d9b20u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d9b24: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2d9b24u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d9b28: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2d9b28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d9b2c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2d9b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d9b30: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2d9b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d9b34: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2d9b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d9b38: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9B38u;
        // 0x2d9b3c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9B40u;
    // 0x2d9b40: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x2d9b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2d9b44: 0x0  nop
    ctx->pc = 0x2d9b44u;
    // NOP
    // 0x2d9b48: 0x0  nop
    ctx->pc = 0x2d9b48u;
    // NOP
    // 0x2d9b4c: 0x0  nop
    ctx->pc = 0x2d9b4cu;
    // NOP
    // 0x2d9b50: 0x0  nop
    ctx->pc = 0x2d9b50u;
    // NOP
    // 0x2d9b54: 0x0  nop
    ctx->pc = 0x2d9b54u;
    // NOP
    // 0x2d9b58: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d9b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d9b5c: 0x0  nop
    ctx->pc = 0x2d9b5cu;
    // NOP
    // 0x2d9b60: 0x27bd0140  addiu       $sp, $sp, 0x140
    ctx->pc = 0x2d9b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2d9b64: 0x0  nop
    ctx->pc = 0x2d9b64u;
    // NOP
    // 0x2d9b68: 0x27bd01b0  addiu       $sp, $sp, 0x1B0
    ctx->pc = 0x2d9b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2d9b6c: 0x0  nop
    ctx->pc = 0x2d9b6cu;
    // NOP
    ctx->pc = 0x2d9b70u;
}
