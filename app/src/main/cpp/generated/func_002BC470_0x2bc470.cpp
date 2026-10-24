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

// Function: func_002BC470
// Address: 0x2bc470 - 0x2bc6c8
void func_002BC470_0x2bc470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BC470_0x2bc470");
#endif

    switch (ctx->pc) {
        case 0x2bc4e0u: goto label_2bc4e0;
        case 0x2bc500u: goto label_2bc500;
        case 0x2bc564u: goto label_2bc564;
        case 0x2bc628u: goto label_2bc628;
        case 0x2bc648u: goto label_2bc648;
        case 0x2bc68cu: goto label_2bc68c;
        default: break;
    }

    ctx->pc = 0x2bc470u;

    // 0x2bc470: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2bc470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2bc474: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2bc474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2bc478: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2bc478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2bc47c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bc47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc480: 0xe7b700f8  swc1        $f23, 0xF8($sp)
    ctx->pc = 0x2bc480u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2bc484: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2bc484u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc488: 0xe7b600f0  swc1        $f22, 0xF0($sp)
    ctx->pc = 0x2bc488u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2bc48c: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x2bc48cu;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x2bc490: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x2bc490u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2bc494: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x2bc494u;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x2bc498: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x2bc498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x2bc49c: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2bc49cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2bc4a0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2bc4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2bc4a4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2bc4a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2bc4a8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2bc4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2bc4ac: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2bc4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2bc4b0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2bc4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2bc4b4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2bc4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2bc4b8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2bc4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc4bc: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2bc4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc4c0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x2bc4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc4c4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2bc4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc4c8: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2bc4c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bc4cc: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x2bc4ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bc4d0: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2bc4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc4d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bc4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc4d8: 0xc051f18  jal         func_147C60
    ctx->pc = 0x2BC4D8u;
    SET_GPR_U32(ctx, 31, 0x2BC4E0u);
    ctx->pc = 0x2BC4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4D8u;
    // 0x2bc4dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x2BC4D8u, 0x2BC4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC4E0u;
label_2bc4e0:
    // 0x2bc4e0: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x2bc4e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2bc4e4: 0xe7b50014  swc1        $f21, 0x14($sp)
    ctx->pc = 0x2bc4e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bc4e8: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2bc4e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bc4ec: 0xfa240020  sqc2        $vf4, 0x20($s1)
    ctx->pc = 0x2bc4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc4f0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2bc4f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc4f4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bc4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc4f8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BC4F8u;
    SET_GPR_U32(ctx, 31, 0x2BC500u);
    ctx->pc = 0x2BC4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC4F8u;
    // 0x2bc4fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BC4F8u, 0x2BC500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC500u;
label_2bc500:
    // 0x2bc500: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bc500u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bc504: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2bc504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc508: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bc508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc50c: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x2bc50cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2bc510: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2bc510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc514: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2bc514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc518: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2bc518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bc51c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2bc51cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bc520: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x2bc520u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2bc524: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2bc524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc528: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x2bc528u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2bc52c: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x2bc52cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc530: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bc530u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bc534: 0xfa240020  sqc2        $vf4, 0x20($s1)
    ctx->pc = 0x2bc534u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc538: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bc538u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bc53c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2bc53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc540: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bc540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc544: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2bc544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc548: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2bc548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc54c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bc54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bc550: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2bc550u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2bc554: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2bc554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bc558: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2bc558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bc55c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x2BC55Cu;
    SET_GPR_U32(ctx, 31, 0x2BC564u);
    ctx->pc = 0x2BC560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC55Cu;
    // 0x2bc560: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x2BC55Cu, 0x2BC564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC564u;
label_2bc564:
    // 0x2bc564: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2bc564u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2bc568: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2bc568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2bc56c: 0x0  nop
    ctx->pc = 0x2bc56cu;
    // NOP
    // 0x2bc570: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2bc570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2bc574: 0x0  nop
    ctx->pc = 0x2bc574u;
    // NOP
    // 0x2bc578: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x2BC578u;
    {
        const bool branch_taken_0x2bc578 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2BC57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC578u;
        // 0x2bc57c: 0xc7a10040  lwc1        $f1, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bc578) {
            ctx->pc = 0x2BC5BCu;
            goto label_2bc5bc;
        }
    }
    ctx->pc = 0x2BC580u;
    // 0x2bc580: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2bc580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2bc584: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2bc584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2bc588: 0x0  nop
    ctx->pc = 0x2bc588u;
    // NOP
    // 0x2bc58c: 0x0  nop
    ctx->pc = 0x2bc58cu;
    // NOP
    // 0x2bc590: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x2bc590u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x2bc594: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bc594u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bc598: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x2bc598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2bc59c: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2bc59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc5a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2bc5a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2bc5a4: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x2bc5a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x2bc5a8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2bc5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc5ac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2bc5acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2bc5b0: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x2bc5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2bc5b4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2bc5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc5b8: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x2bc5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_2bc5bc:
    // 0x2bc5bc: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bc5bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bc5c0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2bc5c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc5c4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x2bc5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc5c8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2bc5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc5cc: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2bc5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc5d0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2bc5d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2bc5d4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x2bc5d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2bc5d8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x2bc5d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2bc5dc: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2bc5dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bc5e0: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x2bc5e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2bc5e4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2bc5e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2bc5e8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2bc5e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bc5ec: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2bc5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc5f0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bc5f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bc5f4: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2bc5f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bc5f8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bc5f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bc5fc: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2bc5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc600: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bc600u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bc604: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x2bc604u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bc608: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2bc608u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2bc60c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2bc60cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc610: 0x4614a000  add.s       $f0, $f20, $f20
    ctx->pc = 0x2bc610u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x2bc614: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2bc614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bc618: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bc618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc61c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bc61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc620: 0xc051f18  jal         func_147C60
    ctx->pc = 0x2BC620u;
    SET_GPR_U32(ctx, 31, 0x2BC628u);
    ctx->pc = 0x2BC624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC620u;
    // 0x2bc624: 0x4600ad41  sub.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x2BC620u, 0x2BC628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC628u;
label_2bc628:
    // 0x2bc628: 0xe7b60034  swc1        $f22, 0x34($sp)
    ctx->pc = 0x2bc628u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bc62c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2bc62cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bc630: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bc630u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bc634: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2bc634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc638: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bc638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc63c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2bc63cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc640: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BC640u;
    SET_GPR_U32(ctx, 31, 0x2BC648u);
    ctx->pc = 0x2BC644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC640u;
    // 0x2bc644: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BC640u, 0x2BC648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC648u;
label_2bc648:
    // 0x2bc648: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x2bc648u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2bc64c: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x2bc64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bc650: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2bc650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bc654: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2bc654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc658: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x2bc658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bc65c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bc65cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bc660: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x2bc660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bc664: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2bc664u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2bc668: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bc668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc66c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2bc66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc670: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2bc670u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x2bc674: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x2bc674u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
    // 0x2bc678: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2bc678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2bc67c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bc67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bc680: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2bc680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2bc684: 0xc0af03e  jal         func_2BC0F8
    ctx->pc = 0x2BC684u;
    SET_GPR_U32(ctx, 31, 0x2BC68Cu);
    ctx->pc = 0x2BC688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BC684u;
    // 0x2bc688: 0xe7a20038  swc1        $f2, 0x38($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC0F8u, 0x2BC684u, 0x2BC68Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BC68Cu;
label_2bc68c:
    // 0x2bc68c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2bc68cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bc690: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2bc690u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bc694: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2bc694u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bc698: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2bc698u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bc69c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2bc69cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2bc6a0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2bc6a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2bc6a4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2bc6a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2bc6a8: 0xc7b700f8  lwc1        $f23, 0xF8($sp)
    ctx->pc = 0x2bc6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2bc6ac: 0xc7b600f0  lwc1        $f22, 0xF0($sp)
    ctx->pc = 0x2bc6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2bc6b0: 0xc7b500e8  lwc1        $f21, 0xE8($sp)
    ctx->pc = 0x2bc6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bc6b4: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x2bc6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bc6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BC6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BC6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BC6B8u;
        // 0x2bc6bc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BC6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BC6C0u;
    // 0x2bc6c0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2bc6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bc6c4: 0x0  nop
    ctx->pc = 0x2bc6c4u;
    // NOP
    ctx->pc = 0x2bc6c8u;
}
