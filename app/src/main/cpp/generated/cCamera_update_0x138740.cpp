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

// Function: cCamera_update
// Address: 0x138740 - 0x138b78
void cCamera_update_0x138740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCamera_update_0x138740");
#endif

    switch (ctx->pc) {
        case 0x1387dcu: goto label_1387dc;
        case 0x13886cu: goto label_13886c;
        case 0x13888cu: goto label_13888c;
        case 0x1388a0u: goto label_1388a0;
        case 0x1388c8u: goto label_1388c8;
        case 0x1388f0u: goto label_1388f0;
        case 0x138908u: goto label_138908;
        case 0x13895cu: goto label_13895c;
        case 0x138994u: goto label_138994;
        case 0x1389e4u: goto label_1389e4;
        case 0x1389f0u: goto label_1389f0;
        case 0x138a04u: goto label_138a04;
        case 0x138a3cu: goto label_138a3c;
        case 0x138a8cu: goto label_138a8c;
        case 0x138a98u: goto label_138a98;
        case 0x138aacu: goto label_138aac;
        case 0x138ae4u: goto label_138ae4;
        case 0x138b1cu: goto label_138b1c;
        default: break;
    }

    ctx->pc = 0x138740u;

    // 0x138740: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x138740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x138744: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x138744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x138748: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x138748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x13874c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x13874cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x138750: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x138750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138754: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x138754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x138758: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x138758u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x13875c: 0xe7be0120  swc1        $f30, 0x120($sp)
    ctx->pc = 0x13875cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x138760: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x138760u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x138764: 0xe7bd0118  swc1        $f29, 0x118($sp)
    ctx->pc = 0x138764u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x138768: 0xe7bc0110  swc1        $f28, 0x110($sp)
    ctx->pc = 0x138768u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x13876c: 0xe7bb0108  swc1        $f27, 0x108($sp)
    ctx->pc = 0x13876cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x138770: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x138770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x138774: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x138774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x138778: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x138778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x13877c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x13877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x138780: 0xe7ba0100  swc1        $f26, 0x100($sp)
    ctx->pc = 0x138780u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x138784: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x138784u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x138788: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x138788u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x13878c: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x13878cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x138790: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x138790u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x138794: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x138794u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x138798: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x138798u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x13879c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x13879cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1387a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1387a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1387a4: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x1387a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x1387a8: 0xc68c0250  lwc1        $f12, 0x250($s4)
    ctx->pc = 0x1387a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1387ac: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1387acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1387b0: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1387b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x1387b4: 0x461c6302  mul.s       $f12, $f12, $f28
    ctx->pc = 0x1387b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[28]);
    // 0x1387b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1387b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1387bc: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x1387bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x1387c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1387c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1387c4: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x1387c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
    // 0x1387c8: 0x0  nop
    ctx->pc = 0x1387c8u;
    // NOP
    // 0x1387cc: 0x0  nop
    ctx->pc = 0x1387ccu;
    // NOP
    // 0x1387d0: 0x461b6303  div.s       $f12, $f12, $f27
    ctx->pc = 0x1387d0u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[27]);
    // 0x1387d4: 0xc0e86ba  jal         func_3A1AE8
    ctx->pc = 0x1387D4u;
    SET_GPR_U32(ctx, 31, 0x1387DCu);
    ctx->pc = 0x1387D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1387D4u;
    // 0x1387d8: 0x26900100  addiu       $s0, $s4, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1AE8u, 0x1387D4u, 0x1387DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1387DCu;
label_1387dc:
    // 0x1387dc: 0xc6c26b88  lwc1        $f2, 0x6B88($s6)
    ctx->pc = 0x1387dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 27528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1387e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1387e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1387e4: 0xc6ac1190  lwc1        $f12, 0x1190($s5)
    ctx->pc = 0x1387e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1387e8: 0xc4431180  lwc1        $f3, 0x1180($v0)
    ctx->pc = 0x1387e8u;
    { uint32_t bits = FAST_READ32(0x3C1180u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1387ec: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x1387ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x1387f0: 0xc6810250  lwc1        $f1, 0x250($s4)
    ctx->pc = 0x1387f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1387f4: 0x46001386  mov.s       $f14, $f2
    ctx->pc = 0x1387f4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[2]);
    // 0x1387f8: 0x0  nop
    ctx->pc = 0x1387f8u;
    // NOP
    // 0x1387fc: 0x0  nop
    ctx->pc = 0x1387fcu;
    // NOP
    // 0x138800: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x138800u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[2]);
    // 0x138804: 0x3c0149f7  lui         $at, 0x49F7
    ctx->pc = 0x138804u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18935 << 16));
    // 0x138808: 0x3421ff08  ori         $at, $at, 0xFF08
    ctx->pc = 0x138808u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65288);
    // 0x13880c: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x13880cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
    // 0x138810: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x138810u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x138814: 0x3c014420  lui         $at, 0x4420
    ctx->pc = 0x138814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17440 << 16));
    // 0x138818: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x138818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x13881c: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x13881cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x138820: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x138820u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x138824: 0x4600f446  mov.s       $f17, $f30
    ctx->pc = 0x138824u;
    ctx->f[17] = FPU_MOV_S(ctx->f[30]);
    // 0x138828: 0x460d1b43  div.s       $f13, $f3, $f13
    ctx->pc = 0x138828u;
    ctx->f[13] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[13]);
    // 0x13882c: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x13882cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x138830: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x138830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x138834: 0x0  nop
    ctx->pc = 0x138834u;
    // NOP
    // 0x138838: 0x0  nop
    ctx->pc = 0x138838u;
    // NOP
    // 0x13883c: 0x46019483  div.s       $f18, $f18, $f1
    ctx->pc = 0x13883cu;
    ctx->f[18] = ps2FpuDivide(ctx->fcr31, ctx->f[18], ctx->f[1]);
    // 0x138840: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x138840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x138844: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x138844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x138848: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x138848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x13884c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13884cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138850: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x138850u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
    // 0x138854: 0x461d6302  mul.s       $f12, $f12, $f29
    ctx->pc = 0x138854u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[29]);
    // 0x138858: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x138858u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13885c: 0x0  nop
    ctx->pc = 0x13885cu;
    // NOP
    // 0x138860: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x138860u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[0]);
    // 0x138864: 0xc0c2a90  jal         func_30AA40
    ctx->pc = 0x138864u;
    SET_GPR_U32(ctx, 31, 0x13886Cu);
    ctx->pc = 0x138868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138864u;
    // 0x138868: 0x46129480  add.s       $f18, $f18, $f18 (Delay Slot)
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[18]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30AA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30AA40u, 0x138864u, 0x13886Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13886Cu;
label_13886c:
    // 0x13886c: 0xc6810100  lwc1        $f1, 0x100($s4)
    ctx->pc = 0x13886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138870: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x138870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138874: 0xc6800114  lwc1        $f0, 0x114($s4)
    ctx->pc = 0x138874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x138878: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x138878u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x13887c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x13887cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x138880: 0xe6810100  swc1        $f1, 0x100($s4)
    ctx->pc = 0x138880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 256), bits); }
    // 0x138884: 0xc04e192  jal         func_138648
    ctx->pc = 0x138884u;
    SET_GPR_U32(ctx, 31, 0x13888Cu);
    ctx->pc = 0x138888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138884u;
    // 0x138888: 0xe6800114  swc1        $f0, 0x114($s4) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 276), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x138648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138648u, 0x138884u, 0x13888Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13888Cu;
label_13888c:
    // 0x13888c: 0x92820278  lbu         $v0, 0x278($s4)
    ctx->pc = 0x13888cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x138890: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x138890u;
    {
        const bool branch_taken_0x138890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138890) {
            ctx->pc = 0x138894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x138890u;
            // 0x138894: 0x92820264  lbu         $v0, 0x264($s4) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1388B8u;
            goto label_1388b8;
        }
    }
    ctx->pc = 0x138898u;
    // 0x138898: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x138898u;
    SET_GPR_U32(ctx, 31, 0x1388A0u);
    ctx->pc = 0x13889Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138898u;
    // 0x13889c: 0xc68c0274  lwc1        $f12, 0x274($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x138898u, 0x1388A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1388A0u;
label_1388a0:
    // 0x1388a0: 0xc6810268  lwc1        $f1, 0x268($s4)
    ctx->pc = 0x1388a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1388a4: 0xc6820174  lwc1        $f2, 0x174($s4)
    ctx->pc = 0x1388a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1388a8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1388a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1388ac: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1388acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1388b0: 0xe6820174  swc1        $f2, 0x174($s4)
    ctx->pc = 0x1388b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 372), bits); }
    // 0x1388b4: 0x92820264  lbu         $v0, 0x264($s4)
    ctx->pc = 0x1388b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 612)));
label_1388b8:
    // 0x1388b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1388B8u;
    {
        const bool branch_taken_0x1388b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1388BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1388B8u;
        // 0x1388bc: 0x26910140  addiu       $s1, $s4, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1388b8) {
            ctx->pc = 0x1388E0u;
            goto label_1388e0;
        }
    }
    ctx->pc = 0x1388C0u;
    // 0x1388c0: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x1388C0u;
    SET_GPR_U32(ctx, 31, 0x1388C8u);
    ctx->pc = 0x1388C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1388C0u;
    // 0x1388c4: 0xc68c0260  lwc1        $f12, 0x260($s4) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x1388C0u, 0x1388C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1388C8u;
label_1388c8:
    // 0x1388c8: 0xc6810254  lwc1        $f1, 0x254($s4)
    ctx->pc = 0x1388c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1388cc: 0xc6820170  lwc1        $f2, 0x170($s4)
    ctx->pc = 0x1388ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1388d0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1388d0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1388d4: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x1388d4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x1388d8: 0xe6820170  swc1        $f2, 0x170($s4)
    ctx->pc = 0x1388d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 368), bits); }
    // 0x1388dc: 0x26910140  addiu       $s1, $s4, 0x140
    ctx->pc = 0x1388dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
label_1388e0:
    // 0x1388e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1388e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1388e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1388e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1388e8: 0xc051d52  jal         func_147548
    ctx->pc = 0x1388E8u;
    SET_GPR_U32(ctx, 31, 0x1388F0u);
    ctx->pc = 0x1388ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1388E8u;
    // 0x1388ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x1388E8u, 0x1388F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1388F0u;
label_1388f0:
    // 0x1388f0: 0x3c014233  lui         $at, 0x4233
    ctx->pc = 0x1388f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16947 << 16));
    // 0x1388f4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1388f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1388f8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1388f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1388fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1388fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x138900: 0xc051d4a  jal         func_147528
    ctx->pc = 0x138900u;
    SET_GPR_U32(ctx, 31, 0x138908u);
    ctx->pc = 0x138904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138900u;
    // 0x138904: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x138900u, 0x138908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138908u;
label_138908:
    // 0x138908: 0x3c01424c  lui         $at, 0x424C
    ctx->pc = 0x138908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16972 << 16));
    // 0x13890c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x13890cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x138910: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x138910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x138914: 0xc68c0250  lwc1        $f12, 0x250($s4)
    ctx->pc = 0x138914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x138918: 0x26900040  addiu       $s0, $s4, 0x40
    ctx->pc = 0x138918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x13891c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x13891cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x138920: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x138920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x138924: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x138924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x138928: 0x26920080  addiu       $s2, $s4, 0x80
    ctx->pc = 0x138928u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 128));
    // 0x13892c: 0x461c6302  mul.s       $f12, $f12, $f28
    ctx->pc = 0x13892cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[28]);
    // 0x138930: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x138930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x138934: 0x34210aec  ori         $at, $at, 0xAEC
    ctx->pc = 0x138934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2796);
    // 0x138938: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x138938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x13893c: 0x3c01be4c  lui         $at, 0xBE4C
    ctx->pc = 0x13893cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48716 << 16));
    // 0x138940: 0x3421d58a  ori         $at, $at, 0xD58A
    ctx->pc = 0x138940u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54666);
    // 0x138944: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x138944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x138948: 0x0  nop
    ctx->pc = 0x138948u;
    // NOP
    // 0x13894c: 0x0  nop
    ctx->pc = 0x13894cu;
    // NOP
    // 0x138950: 0x461b6303  div.s       $f12, $f12, $f27
    ctx->pc = 0x138950u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[27]);
    // 0x138954: 0xc0e86ba  jal         func_3A1AE8
    ctx->pc = 0x138954u;
    SET_GPR_U32(ctx, 31, 0x13895Cu);
    ctx->pc = 0x138958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138954u;
    // 0x138958: 0x269300c0  addiu       $s3, $s4, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1AE8u, 0x138954u, 0x13895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13895Cu;
label_13895c:
    // 0x13895c: 0xc6c16b88  lwc1        $f1, 0x6B88($s6)
    ctx->pc = 0x13895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 27528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138960: 0xc6b41190  lwc1        $f20, 0x1190($s5)
    ctx->pc = 0x138960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x138964: 0x0  nop
    ctx->pc = 0x138964u;
    // NOP
    // 0x138968: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x138968u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[1]);
    // 0x13896c: 0x461da502  mul.s       $f20, $f20, $f29
    ctx->pc = 0x13896cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[29]);
    // 0x138970: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x138970u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x138974: 0x0  nop
    ctx->pc = 0x138974u;
    // NOP
    // 0x138978: 0x0  nop
    ctx->pc = 0x138978u;
    // NOP
    // 0x13897c: 0x4614b543  div.s       $f21, $f22, $f20
    ctx->pc = 0x13897cu;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[20]);
    // 0x138980: 0x0  nop
    ctx->pc = 0x138980u;
    // NOP
    // 0x138984: 0x0  nop
    ctx->pc = 0x138984u;
    // NOP
    // 0x138988: 0x4614bd03  div.s       $f20, $f23, $f20
    ctx->pc = 0x138988u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[23], ctx->f[20]);
    // 0x13898c: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x13898Cu;
    SET_GPR_U32(ctx, 31, 0x138994u);
    ctx->pc = 0x138990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13898Cu;
    // 0x138990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x13898Cu, 0x138994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138994u;
label_138994:
    // 0x138994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138998: 0xe6990068  swc1        $f25, 0x68($s4)
    ctx->pc = 0x138998u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 104), bits); }
    // 0x13899c: 0xe69a0078  swc1        $f26, 0x78($s4)
    ctx->pc = 0x13899cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 120), bits); }
    // 0x1389a0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1389a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1389a4: 0xe69e006c  swc1        $f30, 0x6C($s4)
    ctx->pc = 0x1389a4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 108), bits); }
    // 0x1389a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1389a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1389ac: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x1389acu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
    // 0x1389b0: 0xae80007c  sw          $zero, 0x7C($s4)
    ctx->pc = 0x1389b0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 124), GPR_U32(ctx, 0));
    // 0x1389b4: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x1389b4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x1389b8: 0x0  nop
    ctx->pc = 0x1389b8u;
    // NOP
    // 0x1389bc: 0x0  nop
    ctx->pc = 0x1389bcu;
    // NOP
    // 0x1389c0: 0x4615c543  div.s       $f21, $f24, $f21
    ctx->pc = 0x1389c0u;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[24], ctx->f[21]);
    // 0x1389c4: 0x0  nop
    ctx->pc = 0x1389c4u;
    // NOP
    // 0x1389c8: 0x0  nop
    ctx->pc = 0x1389c8u;
    // NOP
    // 0x1389cc: 0x4614c503  div.s       $f20, $f24, $f20
    ctx->pc = 0x1389ccu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[24], ctx->f[20]);
    // 0x1389d0: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x1389d0u;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
    // 0x1389d4: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x1389d4u;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
    // 0x1389d8: 0xe6950054  swc1        $f21, 0x54($s4)
    ctx->pc = 0x1389d8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 84), bits); }
    // 0x1389dc: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x1389DCu;
    SET_GPR_U32(ctx, 31, 0x1389E4u);
    ctx->pc = 0x1389E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389DCu;
    // 0x1389e0: 0xe6940040  swc1        $f20, 0x40($s4) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x1389DCu, 0x1389E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389E4u;
label_1389e4:
    // 0x1389e4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1389e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1389e8: 0xc051d4a  jal         func_147528
    ctx->pc = 0x1389E8u;
    SET_GPR_U32(ctx, 31, 0x1389F0u);
    ctx->pc = 0x1389ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1389E8u;
    // 0x1389ec: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1389E8u, 0x1389F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1389F0u;
label_1389f0:
    // 0x1389f0: 0xc68c0250  lwc1        $f12, 0x250($s4)
    ctx->pc = 0x1389f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1389f4: 0x461c6302  mul.s       $f12, $f12, $f28
    ctx->pc = 0x1389f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[28]);
    // 0x1389f8: 0x461b6303  div.s       $f12, $f12, $f27
    ctx->pc = 0x1389f8u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[27]);
    // 0x1389fc: 0xc0e86ba  jal         func_3A1AE8
    ctx->pc = 0x1389FCu;
    SET_GPR_U32(ctx, 31, 0x138A04u);
    ctx->pc = 0x3A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1AE8u, 0x1389FCu, 0x138A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138A04u;
label_138a04:
    // 0x138a04: 0xc6c26b88  lwc1        $f2, 0x6B88($s6)
    ctx->pc = 0x138a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 27528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138a08: 0xc6a11190  lwc1        $f1, 0x1190($s5)
    ctx->pc = 0x138a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138a0c: 0x0  nop
    ctx->pc = 0x138a0cu;
    // NOP
    // 0x138a10: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x138a10u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x138a14: 0x461d0842  mul.s       $f1, $f1, $f29
    ctx->pc = 0x138a14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x138a18: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x138a18u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x138a1c: 0x0  nop
    ctx->pc = 0x138a1cu;
    // NOP
    // 0x138a20: 0x0  nop
    ctx->pc = 0x138a20u;
    // NOP
    // 0x138a24: 0x4601b583  div.s       $f22, $f22, $f1
    ctx->pc = 0x138a24u;
    ctx->f[22] = ps2FpuDivide(ctx->fcr31, ctx->f[22], ctx->f[1]);
    // 0x138a28: 0x0  nop
    ctx->pc = 0x138a28u;
    // NOP
    // 0x138a2c: 0x0  nop
    ctx->pc = 0x138a2cu;
    // NOP
    // 0x138a30: 0x4601bdc3  div.s       $f23, $f23, $f1
    ctx->pc = 0x138a30u;
    ctx->f[23] = ps2FpuDivide(ctx->fcr31, ctx->f[23], ctx->f[1]);
    // 0x138a34: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x138A34u;
    SET_GPR_U32(ctx, 31, 0x138A3Cu);
    ctx->pc = 0x138A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138A34u;
    // 0x138a38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x138A34u, 0x138A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138A3Cu;
label_138a3c:
    // 0x138a3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x138a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a40: 0xe69900a8  swc1        $f25, 0xA8($s4)
    ctx->pc = 0x138a40u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 168), bits); }
    // 0x138a44: 0xe69a00b8  swc1        $f26, 0xB8($s4)
    ctx->pc = 0x138a44u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 184), bits); }
    // 0x138a48: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x138a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x138a4c: 0xe69e00ac  swc1        $f30, 0xAC($s4)
    ctx->pc = 0x138a4cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 172), bits); }
    // 0x138a50: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x138a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a54: 0x4616b580  add.s       $f22, $f22, $f22
    ctx->pc = 0x138a54u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
    // 0x138a58: 0xae8000bc  sw          $zero, 0xBC($s4)
    ctx->pc = 0x138a58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 188), GPR_U32(ctx, 0));
    // 0x138a5c: 0x4617bdc0  add.s       $f23, $f23, $f23
    ctx->pc = 0x138a5cu;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
    // 0x138a60: 0x0  nop
    ctx->pc = 0x138a60u;
    // NOP
    // 0x138a64: 0x0  nop
    ctx->pc = 0x138a64u;
    // NOP
    // 0x138a68: 0x4616c583  div.s       $f22, $f24, $f22
    ctx->pc = 0x138a68u;
    ctx->f[22] = ps2FpuDivide(ctx->fcr31, ctx->f[24], ctx->f[22]);
    // 0x138a6c: 0x0  nop
    ctx->pc = 0x138a6cu;
    // NOP
    // 0x138a70: 0x0  nop
    ctx->pc = 0x138a70u;
    // NOP
    // 0x138a74: 0x4617c5c3  div.s       $f23, $f24, $f23
    ctx->pc = 0x138a74u;
    ctx->f[23] = ps2FpuDivide(ctx->fcr31, ctx->f[24], ctx->f[23]);
    // 0x138a78: 0x4600b587  neg.s       $f22, $f22
    ctx->pc = 0x138a78u;
    ctx->f[22] = FPU_NEG_S(ctx->f[22]);
    // 0x138a7c: 0x4600bdc7  neg.s       $f23, $f23
    ctx->pc = 0x138a7cu;
    ctx->f[23] = FPU_NEG_S(ctx->f[23]);
    // 0x138a80: 0xe6960094  swc1        $f22, 0x94($s4)
    ctx->pc = 0x138a80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 148), bits); }
    // 0x138a84: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x138A84u;
    SET_GPR_U32(ctx, 31, 0x138A8Cu);
    ctx->pc = 0x138A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138A84u;
    // 0x138a88: 0xe6970080  swc1        $f23, 0x80($s4) (Delay Slot)
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 128), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x138A84u, 0x138A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138A8Cu;
label_138a8c:
    // 0x138a8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x138a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138a90: 0xc051d4a  jal         func_147528
    ctx->pc = 0x138A90u;
    SET_GPR_U32(ctx, 31, 0x138A98u);
    ctx->pc = 0x138A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138A90u;
    // 0x138a94: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x138A90u, 0x138A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138A98u;
label_138a98:
    // 0x138a98: 0xc68c0250  lwc1        $f12, 0x250($s4)
    ctx->pc = 0x138a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x138a9c: 0x461c6302  mul.s       $f12, $f12, $f28
    ctx->pc = 0x138a9cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[28]);
    // 0x138aa0: 0x461b6303  div.s       $f12, $f12, $f27
    ctx->pc = 0x138aa0u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[27]);
    // 0x138aa4: 0xc0e86ba  jal         func_3A1AE8
    ctx->pc = 0x138AA4u;
    SET_GPR_U32(ctx, 31, 0x138AACu);
    ctx->pc = 0x3A1AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1AE8u, 0x138AA4u, 0x138AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138AACu;
label_138aac:
    // 0x138aac: 0xc6c26b88  lwc1        $f2, 0x6B88($s6)
    ctx->pc = 0x138aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 27528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138ab0: 0xc6a11190  lwc1        $f1, 0x1190($s5)
    ctx->pc = 0x138ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x138ab4: 0x3c014320  lui         $at, 0x4320
    ctx->pc = 0x138ab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17184 << 16));
    // 0x138ab8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x138ab8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x138abc: 0x0  nop
    ctx->pc = 0x138abcu;
    // NOP
    // 0x138ac0: 0x0  nop
    ctx->pc = 0x138ac0u;
    // NOP
    // 0x138ac4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x138ac4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x138ac8: 0x461d0842  mul.s       $f1, $f1, $f29
    ctx->pc = 0x138ac8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[29]);
    // 0x138acc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x138accu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x138ad0: 0x0  nop
    ctx->pc = 0x138ad0u;
    // NOP
    // 0x138ad4: 0x0  nop
    ctx->pc = 0x138ad4u;
    // NOP
    // 0x138ad8: 0x4601a503  div.s       $f20, $f20, $f1
    ctx->pc = 0x138ad8u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[1]);
    // 0x138adc: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x138ADCu;
    SET_GPR_U32(ctx, 31, 0x138AE4u);
    ctx->pc = 0x138AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138ADCu;
    // 0x138ae0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x138ADCu, 0x138AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138AE4u;
label_138ae4:
    // 0x138ae4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x138ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ae8: 0xe69900e8  swc1        $f25, 0xE8($s4)
    ctx->pc = 0x138ae8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 232), bits); }
    // 0x138aec: 0xe69a00f8  swc1        $f26, 0xF8($s4)
    ctx->pc = 0x138aecu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 248), bits); }
    // 0x138af0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x138af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138af4: 0xe69e00ec  swc1        $f30, 0xEC($s4)
    ctx->pc = 0x138af4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 236), bits); }
    // 0x138af8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x138af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x138afc: 0xae8000fc  sw          $zero, 0xFC($s4)
    ctx->pc = 0x138afcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 252), GPR_U32(ctx, 0));
    // 0x138b00: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x138b00u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x138b04: 0x0  nop
    ctx->pc = 0x138b04u;
    // NOP
    // 0x138b08: 0x4614c603  div.s       $f24, $f24, $f20
    ctx->pc = 0x138b08u;
    ctx->f[24] = ps2FpuDivide(ctx->fcr31, ctx->f[24], ctx->f[20]);
    // 0x138b0c: 0x4600c607  neg.s       $f24, $f24
    ctx->pc = 0x138b0cu;
    ctx->f[24] = FPU_NEG_S(ctx->f[24]);
    // 0x138b10: 0xe69800d4  swc1        $f24, 0xD4($s4)
    ctx->pc = 0x138b10u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 212), bits); }
    // 0x138b14: 0xc0c28b8  jal         func_30A2E0
    ctx->pc = 0x138B14u;
    SET_GPR_U32(ctx, 31, 0x138B1Cu);
    ctx->pc = 0x138B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138B14u;
    // 0x138b18: 0xe69800c0  swc1        $f24, 0xC0($s4) (Delay Slot)
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2E0u, 0x138B14u, 0x138B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138B1Cu;
label_138b1c:
    // 0x138b1c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x138b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x138b20: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x138b20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x138b24: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x138b24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x138b28: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x138b28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x138b2c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x138b2cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x138b30: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x138b30u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x138b34: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x138b34u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x138b38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x138b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x138b3c: 0xc7be0120  lwc1        $f30, 0x120($sp)
    ctx->pc = 0x138b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x138b40: 0xc7bd0118  lwc1        $f29, 0x118($sp)
    ctx->pc = 0x138b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x138b44: 0xc7bc0110  lwc1        $f28, 0x110($sp)
    ctx->pc = 0x138b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x138b48: 0xc7bb0108  lwc1        $f27, 0x108($sp)
    ctx->pc = 0x138b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x138b4c: 0xc7ba0100  lwc1        $f26, 0x100($sp)
    ctx->pc = 0x138b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x138b50: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x138b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x138b54: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x138b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x138b58: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x138b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x138b5c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x138b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x138b60: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x138b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x138b64: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x138b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x138b68: 0x3e00008  jr          $ra
    ctx->pc = 0x138B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138B68u;
        // 0x138b6c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138B70u;
    // 0x138b70: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x138b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x138b74: 0x0  nop
    ctx->pc = 0x138b74u;
    // NOP
    ctx->pc = 0x138b78u;
}
