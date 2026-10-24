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

// Function: func_0026F478
// Address: 0x26f478 - 0x270160
void func_0026F478_0x26f478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0026F478_0x26f478");
#endif

    switch (ctx->pc) {
        case 0x26f5d4u: goto label_26f5d4;
        case 0x26f5e0u: goto label_26f5e0;
        case 0x26f618u: goto label_26f618;
        case 0x26f644u: goto label_26f644;
        case 0x26f7ccu: goto label_26f7cc;
        case 0x26f7e0u: goto label_26f7e0;
        case 0x26f7f4u: goto label_26f7f4;
        case 0x26f8fcu: goto label_26f8fc;
        case 0x26f908u: goto label_26f908;
        case 0x26f940u: goto label_26f940;
        case 0x26f96cu: goto label_26f96c;
        case 0x26faf4u: goto label_26faf4;
        case 0x26fb08u: goto label_26fb08;
        case 0x26fb1cu: goto label_26fb1c;
        case 0x26fc24u: goto label_26fc24;
        case 0x26fc30u: goto label_26fc30;
        case 0x26fc68u: goto label_26fc68;
        case 0x26fc94u: goto label_26fc94;
        case 0x26fe1cu: goto label_26fe1c;
        case 0x26ff24u: goto label_26ff24;
        case 0x26ff30u: goto label_26ff30;
        case 0x26ff68u: goto label_26ff68;
        case 0x26ff94u: goto label_26ff94;
        case 0x27011cu: goto label_27011c;
        default: break;
    }

    ctx->pc = 0x26f478u;

    // 0x26f478: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x26f478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x26f47c: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x26f47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x26f480: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x26f480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x26f484: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26f484u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f488: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x26f488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x26f48c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x26f48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x26f490: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x26f490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x26f494: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x26f494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x26f498: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x26f498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x26f49c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x26f49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x26f4a0: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x26f4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x26f4a4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x26f4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x26f4a8: 0xe7b60120  swc1        $f22, 0x120($sp)
    ctx->pc = 0x26f4a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x26f4ac: 0xe7b50118  swc1        $f21, 0x118($sp)
    ctx->pc = 0x26f4acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x26f4b0: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x26f4b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x26f4b4: 0x8e830564  lw          $v1, 0x564($s4)
    ctx->pc = 0x26f4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1380)));
    // 0x26f4b8: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x26f4b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x26f4bc: 0x10400318  beqz        $v0, . + 4 + (0x318 << 2)
    ctx->pc = 0x26F4BCu;
    {
        const bool branch_taken_0x26f4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4BCu;
        // 0x26f4c0: 0x28620250  slti        $v0, $v1, 0x250 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)592) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4bc) {
            ctx->pc = 0x270120u;
            goto label_270120;
        }
    }
    ctx->pc = 0x26F4C4u;
    // 0x26f4c4: 0x14400317  bnez        $v0, . + 4 + (0x317 << 2)
    ctx->pc = 0x26F4C4u;
    {
        const bool branch_taken_0x26f4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4C4u;
        // 0x26f4c8: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4c4) {
            ctx->pc = 0x270124u;
            goto label_270124;
        }
    }
    ctx->pc = 0x26F4CCu;
    // 0x26f4cc: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x26f4ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x26f4d0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x26f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26f4d4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26f4d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26f4d8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f4d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f4dc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x26f4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x26f4e0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F4E0u;
    {
        const bool branch_taken_0x26f4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4E0u;
        // 0x26f4e4: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4e0) {
            ctx->pc = 0x26F4F4u;
            goto label_26f4f4;
        }
    }
    ctx->pc = 0x26F4E8u;
    // 0x26f4e8: 0x8e820278  lw          $v0, 0x278($s4)
    ctx->pc = 0x26f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x26f4ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26F4ECu;
    {
        const bool branch_taken_0x26f4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4ECu;
        // 0x26f4f0: 0x8c550020  lw          $s5, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4ec) {
            ctx->pc = 0x26F4F8u;
            goto label_26f4f8;
        }
    }
    ctx->pc = 0x26F4F4u;
label_26f4f4:
    // 0x26f4f4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26f4f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f4f8:
    // 0x26f4f8: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x26f4f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x26f4fc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x26f4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x26f500: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f504: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F504u;
    {
        const bool branch_taken_0x26f504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F504u;
        // 0x26f508: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f504) {
            ctx->pc = 0x26F518u;
            goto label_26f518;
        }
    }
    ctx->pc = 0x26F50Cu;
    // 0x26f50c: 0x8e820278  lw          $v0, 0x278($s4)
    ctx->pc = 0x26f50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x26f510: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26F510u;
    {
        const bool branch_taken_0x26f510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F510u;
        // 0x26f514: 0x8c530028  lw          $s3, 0x28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f510) {
            ctx->pc = 0x26F51Cu;
            goto label_26f51c;
        }
    }
    ctx->pc = 0x26F518u;
label_26f518:
    // 0x26f518: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26f518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f51c:
    // 0x26f51c: 0x12a000a7  beqz        $s5, . + 4 + (0xA7 << 2)
    ctx->pc = 0x26F51Cu;
    {
        const bool branch_taken_0x26f51c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F51Cu;
        // 0x26f520: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f51c) {
            ctx->pc = 0x26F7BCu;
            goto label_26f7bc;
        }
    }
    ctx->pc = 0x26F524u;
    // 0x26f524: 0x126000a6  beqz        $s3, . + 4 + (0xA6 << 2)
    ctx->pc = 0x26F524u;
    {
        const bool branch_taken_0x26f524 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F524u;
        // 0x26f528: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f524) {
            ctx->pc = 0x26F7C0u;
            goto label_26f7c0;
        }
    }
    ctx->pc = 0x26F52Cu;
    // 0x26f52c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x26f52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26f530: 0xc66200b0  lwc1        $f2, 0xB0($s3)
    ctx->pc = 0x26f530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f534: 0x27be0040  addiu       $fp, $sp, 0x40
    ctx->pc = 0x26f534u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26f538: 0xc66100b4  lwc1        $f1, 0xB4($s3)
    ctx->pc = 0x26f538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f53c: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x26f53cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26f540: 0xc66000b8  lwc1        $f0, 0xB8($s3)
    ctx->pc = 0x26f540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f544: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x26f544u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26f548: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26f548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26f54c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26f54cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x26f550: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x26f550u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26f554: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x26f554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26f558: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26f558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26f55c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26f55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26f560: 0xe7d5000c  swc1        $f21, 0xC($fp)
    ctx->pc = 0x26f560u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x26f564: 0xc6a000b0  lwc1        $f0, 0xB0($s5)
    ctx->pc = 0x26f564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f568: 0xc6a100b4  lwc1        $f1, 0xB4($s5)
    ctx->pc = 0x26f568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f56c: 0xc6a200b8  lwc1        $f2, 0xB8($s5)
    ctx->pc = 0x26f56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f570: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x26f570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26f574: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x26f574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26f578: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x26f578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26f57c: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x26f57cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x26f580: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x26f580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26f584: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x26f584u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x26f588: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x26f588u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26f58c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26f58cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26f590: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x26f590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26f594: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x26f594u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26f598: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x26f598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26f59c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x26f59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f5a0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x26f5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f5a4: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x26f5a4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26f5a8: 0xc7ac0034  lwc1        $f12, 0x34($sp)
    ctx->pc = 0x26f5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26f5ac: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x26f5acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26f5b0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26f5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26f5b4: 0xe7ac0024  swc1        $f12, 0x24($sp)
    ctx->pc = 0x26f5b4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26f5b8: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x26f5b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26f5bc: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x26f5bcu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x26f5c0: 0x0  nop
    ctx->pc = 0x26f5c0u;
    // NOP
    // 0x26f5c4: 0x0  nop
    ctx->pc = 0x26f5c4u;
    // NOP
    // 0x26f5c8: 0x460d0344  c1          0xD0344
    ctx->pc = 0x26f5c8u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x26f5cc: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x26F5CCu;
    SET_GPR_U32(ctx, 31, 0x26F5D4u);
    ctx->pc = 0x26F5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F5CCu;
    // 0x26f5d0: 0x269618a0  addiu       $s6, $s4, 0x18A0 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 6304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x26F5CCu, 0x26F5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5D4u;
label_26f5d4:
    // 0x26f5d4: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x26f5d4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x26f5d8: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x26F5D8u;
    SET_GPR_U32(ctx, 31, 0x26F5E0u);
    ctx->pc = 0x26F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F5D8u;
    // 0x26f5dc: 0x269718b0  addiu       $s7, $s4, 0x18B0 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 6320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x26F5D8u, 0x26F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F5E0u;
label_26f5e0:
    // 0x26f5e0: 0xc66400b0  lwc1        $f4, 0xB0($s3)
    ctx->pc = 0x26f5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26f5e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f5e8: 0xc66200b4  lwc1        $f2, 0xB4($s3)
    ctx->pc = 0x26f5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f5ec: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26f5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f5f0: 0xc66300b8  lwc1        $f3, 0xB8($s3)
    ctx->pc = 0x26f5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26f5f4: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x26f5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x26f5f8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x26f5f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x26f5fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26f5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f600: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x26f600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26f604: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x26f604u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26f608: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x26f608u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26f60c: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x26f60cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26f610: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x26F610u;
    SET_GPR_U32(ctx, 31, 0x26F618u);
    ctx->pc = 0x26F614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F610u;
    // 0x26f614: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x26F610u, 0x26F618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F618u;
label_26f618:
    // 0x26f618: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26f618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26f61c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f620: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26f620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f624: 0xc6a000b0  lwc1        $f0, 0xB0($s5)
    ctx->pc = 0x26f624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f628: 0xc6a100b4  lwc1        $f1, 0xB4($s5)
    ctx->pc = 0x26f628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f62c: 0xc6a200b8  lwc1        $f2, 0xB8($s5)
    ctx->pc = 0x26f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f630: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x26f630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26f634: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x26f634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26f638: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x26f638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26f63c: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x26F63Cu;
    SET_GPR_U32(ctx, 31, 0x26F644u);
    ctx->pc = 0x26F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F63Cu;
    // 0x26f640: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x26F63Cu, 0x26F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F644u;
label_26f644:
    // 0x26f644: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26f644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26f648: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x26f648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26f64c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x26f64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26f650: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x26f650u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x26f654: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x26f654u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x26f658: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26f658u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26f65c: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26f65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26f660: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x26f660u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26f664: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26f664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26f668: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x26f668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f66c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x26f66cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f670: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x26f670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f674: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26f674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26f678: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x26f678u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26f67c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x26f67cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26f680: 0xc66000b0  lwc1        $f0, 0xB0($s3)
    ctx->pc = 0x26f680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f684: 0xc66100b4  lwc1        $f1, 0xB4($s3)
    ctx->pc = 0x26f684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f688: 0xc66200b8  lwc1        $f2, 0xB8($s3)
    ctx->pc = 0x26f688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f68c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x26f68cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x26f690: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x26f690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x26f694: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x26f694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x26f698: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x26f698u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x26f69c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x26f69cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26f6a0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x26f6a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26f6a4: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x26f6a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x26f6a8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26f6a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26f6ac: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x26f6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26f6b0: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x26f6b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26f6b4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26f6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26f6b8: 0xc7a40040  lwc1        $f4, 0x40($sp)
    ctx->pc = 0x26f6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26f6bc: 0xc7a60044  lwc1        $f6, 0x44($sp)
    ctx->pc = 0x26f6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26f6c0: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x26f6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f6c4: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x26f6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f6c8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x26f6c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x26f6cc: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x26f6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26f6d0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x26f6d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x26f6d4: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x26f6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f6d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26f6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26f6dc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26f6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26f6e0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x26f6e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x26f6e4: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x26f6e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26f6e8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x26f6e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x26f6ec: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x26f6ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26f6f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26f6f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26f6f4: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x26f6f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x26f6f8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x26f6f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x26f6fc: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x26f6fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f700: 0x0  nop
    ctx->pc = 0x26f700u;
    // NOP
    // 0x26f704: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26F704u;
    {
        const bool branch_taken_0x26f704 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F704u;
        // 0x26f708: 0xe7a30038  swc1        $f3, 0x38($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f704) {
            ctx->pc = 0x26F710u;
            goto label_26f710;
        }
    }
    ctx->pc = 0x26F70Cu;
    // 0x26f70c: 0x4600a846  mov.s       $f1, $f21
    ctx->pc = 0x26f70cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[21]);
label_26f710:
    // 0x26f710: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x26f710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x26f714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f718: 0x0  nop
    ctx->pc = 0x26f718u;
    // NOP
    // 0x26f71c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26f71cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26f720: 0x0  nop
    ctx->pc = 0x26f720u;
    // NOP
    // 0x26f724: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26F724u;
    {
        const bool branch_taken_0x26f724 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f724) {
            ctx->pc = 0x26F728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F724u;
            // 0x26f728: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F72Cu;
            goto label_26f72c;
        }
    }
    ctx->pc = 0x26F72Cu;
label_26f72c:
    // 0x26f72c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x26f72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f730: 0x46000907  neg.s       $f4, $f1
    ctx->pc = 0x26f730u;
    ctx->f[4] = FPU_NEG_S(ctx->f[1]);
    // 0x26f734: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26f734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x26f738: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26f738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26f73c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26f73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26f740: 0xc66300b8  lwc1        $f3, 0xB8($s3)
    ctx->pc = 0x26f740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26f744: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26f744u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26f748: 0xc66100b0  lwc1        $f1, 0xB0($s3)
    ctx->pc = 0x26f748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f74c: 0xc66000b4  lwc1        $f0, 0xB4($s3)
    ctx->pc = 0x26f74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f750: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x26f750u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26f754: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x26f754u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26f758: 0x46022502  mul.s       $f20, $f4, $f2
    ctx->pc = 0x26f758u;
    ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x26f75c: 0xe7a30048  swc1        $f3, 0x48($sp)
    ctx->pc = 0x26f75cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26f760: 0x12de0007  beq         $s6, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F760u;
    {
        const bool branch_taken_0x26f760 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 30));
        ctx->pc = 0x26F764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F760u;
        // 0x26f764: 0xe7d5000c  swc1        $f21, 0xC($fp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f760) {
            ctx->pc = 0x26F780u;
            goto label_26f780;
        }
    }
    ctx->pc = 0x26F768u;
    // 0x26f768: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x26f768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f76c: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x26f76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f770: 0xe68018a0  swc1        $f0, 0x18A0($s4)
    ctx->pc = 0x26f770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6304), bits); }
    // 0x26f774: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x26f774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x26f778: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x26f778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f77c: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x26f77cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_26f780:
    // 0x26f780: 0xc6a000b8  lwc1        $f0, 0xB8($s5)
    ctx->pc = 0x26f780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f784: 0xc6a100b0  lwc1        $f1, 0xB0($s5)
    ctx->pc = 0x26f784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f788: 0xc6a200b4  lwc1        $f2, 0xB4($s5)
    ctx->pc = 0x26f788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f78c: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x26f78cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26f790: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x26f790u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26f794: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x26f794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26f798: 0x12fe0007  beq         $s7, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x26F798u;
    {
        const bool branch_taken_0x26f798 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 30));
        ctx->pc = 0x26F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F798u;
        // 0x26f79c: 0xe7d5000c  swc1        $f21, 0xC($fp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f798) {
            ctx->pc = 0x26F7B8u;
            goto label_26f7b8;
        }
    }
    ctx->pc = 0x26F7A0u;
    // 0x26f7a0: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x26f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f7a4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x26f7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f7a8: 0xe68018b0  swc1        $f0, 0x18B0($s4)
    ctx->pc = 0x26f7a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6320), bits); }
    // 0x26f7ac: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x26f7acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x26f7b0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x26f7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f7b4: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x26f7b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_26f7b8:
    // 0x26f7b8: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x26f7b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_26f7bc:
    // 0x26f7bc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x26f7bcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_26f7c0:
    // 0x26f7c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26f7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7c4: 0xc09c058  jal         func_270160
    ctx->pc = 0x26F7C4u;
    SET_GPR_U32(ctx, 31, 0x26F7CCu);
    ctx->pc = 0x26F7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F7C4u;
    // 0x26f7c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270160u, 0x26F7C4u, 0x26F7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7CCu;
label_26f7cc:
    // 0x26f7cc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x26f7ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x26f7d0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x26f7d0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x26f7d4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26f7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7d8: 0xc09c058  jal         func_270160
    ctx->pc = 0x26F7D8u;
    SET_GPR_U32(ctx, 31, 0x26F7E0u);
    ctx->pc = 0x26F7DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F7D8u;
    // 0x26f7dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270160u, 0x26F7D8u, 0x26F7E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7E0u;
label_26f7e0:
    // 0x26f7e0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x26f7e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x26f7e4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x26f7e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x26f7e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26f7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f7ec: 0xc09c058  jal         func_270160
    ctx->pc = 0x26F7ECu;
    SET_GPR_U32(ctx, 31, 0x26F7F4u);
    ctx->pc = 0x26F7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F7ECu;
    // 0x26f7f0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270160u, 0x26F7ECu, 0x26F7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F7F4u;
label_26f7f4:
    // 0x26f7f4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26f7f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26f7f8: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x26f7f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x26f7fc: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x26f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26f800: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x26f800u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x26f804: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f808: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F808u;
    {
        const bool branch_taken_0x26f808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F808u;
        // 0x26f80c: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f808) {
            ctx->pc = 0x26F81Cu;
            goto label_26f81c;
        }
    }
    ctx->pc = 0x26F810u;
    // 0x26f810: 0x8e820278  lw          $v0, 0x278($s4)
    ctx->pc = 0x26f810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x26f814: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26F814u;
    {
        const bool branch_taken_0x26f814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F814u;
        // 0x26f818: 0x8c550038  lw          $s5, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f814) {
            ctx->pc = 0x26F820u;
            goto label_26f820;
        }
    }
    ctx->pc = 0x26F81Cu;
label_26f81c:
    // 0x26f81c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26f81cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f820:
    // 0x26f820: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x26f820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x26f824: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x26f824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26f828: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26f828u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26f82c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26F82Cu;
    {
        const bool branch_taken_0x26f82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F82Cu;
        // 0x26f830: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f82c) {
            ctx->pc = 0x26F840u;
            goto label_26f840;
        }
    }
    ctx->pc = 0x26F834u;
    // 0x26f834: 0x8e820278  lw          $v0, 0x278($s4)
    ctx->pc = 0x26f834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x26f838: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26F838u;
    {
        const bool branch_taken_0x26f838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F838u;
        // 0x26f83c: 0x8c530040  lw          $s3, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f838) {
            ctx->pc = 0x26F844u;
            goto label_26f844;
        }
    }
    ctx->pc = 0x26F840u;
label_26f840:
    // 0x26f840: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26f840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f844:
    // 0x26f844: 0x12a000a7  beqz        $s5, . + 4 + (0xA7 << 2)
    ctx->pc = 0x26F844u;
    {
        const bool branch_taken_0x26f844 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F844u;
        // 0x26f848: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f844) {
            ctx->pc = 0x26FAE4u;
            goto label_26fae4;
        }
    }
    ctx->pc = 0x26F84Cu;
    // 0x26f84c: 0x126000a6  beqz        $s3, . + 4 + (0xA6 << 2)
    ctx->pc = 0x26F84Cu;
    {
        const bool branch_taken_0x26f84c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F84Cu;
        // 0x26f850: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f84c) {
            ctx->pc = 0x26FAE8u;
            goto label_26fae8;
        }
    }
    ctx->pc = 0x26F854u;
    // 0x26f854: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x26f854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26f858: 0xc66200b0  lwc1        $f2, 0xB0($s3)
    ctx->pc = 0x26f858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f85c: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x26f85cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26f860: 0xc66100b4  lwc1        $f1, 0xB4($s3)
    ctx->pc = 0x26f860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f864: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x26f864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26f868: 0xc66000b8  lwc1        $f0, 0xB8($s3)
    ctx->pc = 0x26f868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f86c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x26f86cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26f870: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26f870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26f874: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26f874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x26f878: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x26f878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26f87c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x26f87cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26f880: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x26f880u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26f884: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x26f884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26f888: 0xe7d5000c  swc1        $f21, 0xC($fp)
    ctx->pc = 0x26f888u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x26f88c: 0xc6a000b0  lwc1        $f0, 0xB0($s5)
    ctx->pc = 0x26f88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f890: 0xc6a100b4  lwc1        $f1, 0xB4($s5)
    ctx->pc = 0x26f890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f894: 0xc6a200b8  lwc1        $f2, 0xB8($s5)
    ctx->pc = 0x26f894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f898: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26f898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26f89c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26f89cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26f8a0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x26f8a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26f8a4: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x26f8a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x26f8a8: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x26f8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26f8ac: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x26f8acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x26f8b0: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x26f8b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26f8b4: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26f8b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26f8b8: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26f8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26f8bc: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x26f8bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26f8c0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x26f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26f8c4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x26f8c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f8c8: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x26f8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f8cc: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x26f8ccu;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26f8d0: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x26f8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26f8d4: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x26f8d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26f8d8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26f8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26f8dc: 0xe7ac0014  swc1        $f12, 0x14($sp)
    ctx->pc = 0x26f8dcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26f8e0: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x26f8e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26f8e4: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x26f8e4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x26f8e8: 0x0  nop
    ctx->pc = 0x26f8e8u;
    // NOP
    // 0x26f8ec: 0x0  nop
    ctx->pc = 0x26f8ecu;
    // NOP
    // 0x26f8f0: 0x460d0344  c1          0xD0344
    ctx->pc = 0x26f8f0u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x26f8f4: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x26F8F4u;
    SET_GPR_U32(ctx, 31, 0x26F8FCu);
    ctx->pc = 0x26F8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F8F4u;
    // 0x26f8f8: 0x269618c0  addiu       $s6, $s4, 0x18C0 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 6336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x26F8F4u, 0x26F8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F8FCu;
label_26f8fc:
    // 0x26f8fc: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x26f8fcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x26f900: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x26F900u;
    SET_GPR_U32(ctx, 31, 0x26F908u);
    ctx->pc = 0x26F904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F900u;
    // 0x26f904: 0x269718d0  addiu       $s7, $s4, 0x18D0 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 6352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x26F900u, 0x26F908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F908u;
label_26f908:
    // 0x26f908: 0xc66400b0  lwc1        $f4, 0xB0($s3)
    ctx->pc = 0x26f908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26f90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f910: 0xc66200b4  lwc1        $f2, 0xB4($s3)
    ctx->pc = 0x26f910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f914: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26f914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f918: 0xc66300b8  lwc1        $f3, 0xB8($s3)
    ctx->pc = 0x26f918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26f91c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x26f91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x26f920: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x26f920u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x26f924: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26f924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26f928: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x26f928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26f92c: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x26f92cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26f930: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x26f930u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26f934: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x26f934u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26f938: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x26F938u;
    SET_GPR_U32(ctx, 31, 0x26F940u);
    ctx->pc = 0x26F93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F938u;
    // 0x26f93c: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x26F938u, 0x26F940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F940u;
label_26f940:
    // 0x26f940: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26f940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26f944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f948: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26f948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f94c: 0xc6a000b0  lwc1        $f0, 0xB0($s5)
    ctx->pc = 0x26f94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f950: 0xc6a100b4  lwc1        $f1, 0xB4($s5)
    ctx->pc = 0x26f950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f954: 0xc6a200b8  lwc1        $f2, 0xB8($s5)
    ctx->pc = 0x26f954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f958: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26f958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26f95c: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x26f95cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26f960: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x26f960u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26f964: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x26F964u;
    SET_GPR_U32(ctx, 31, 0x26F96Cu);
    ctx->pc = 0x26F968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F964u;
    // 0x26f968: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x26F964u, 0x26F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F96Cu;
label_26f96c:
    // 0x26f96c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26f96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26f970: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x26f970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26f974: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x26f974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26f978: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x26f978u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x26f97c: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x26f97cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x26f980: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26f980u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26f984: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26f984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26f988: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x26f988u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26f98c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x26f98cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26f990: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x26f990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f994: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f998: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x26f998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f99c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26f99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26f9a0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x26f9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26f9a4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x26f9a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26f9a8: 0xc66000b0  lwc1        $f0, 0xB0($s3)
    ctx->pc = 0x26f9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26f9ac: 0xc66100b4  lwc1        $f1, 0xB4($s3)
    ctx->pc = 0x26f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f9b0: 0xc66200b8  lwc1        $f2, 0xB8($s3)
    ctx->pc = 0x26f9b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f9b4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26f9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26f9b8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26f9b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26f9bc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x26f9bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26f9c0: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x26f9c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x26f9c4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x26f9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26f9c8: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x26f9c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26f9cc: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x26f9ccu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x26f9d0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26f9d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26f9d4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26f9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26f9d8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x26f9d8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26f9dc: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x26f9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26f9e0: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x26f9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26f9e4: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x26f9e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26f9e8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x26f9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26f9ec: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x26f9ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26f9f0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x26f9f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x26f9f4: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x26f9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26f9f8: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x26f9f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x26f9fc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26f9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fa00: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26fa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26fa04: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26fa04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26fa08: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x26fa08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x26fa0c: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x26fa0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26fa10: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x26fa10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x26fa14: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x26fa14u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26fa18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26fa18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26fa1c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x26fa1cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x26fa20: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x26fa20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x26fa24: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x26fa24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fa28: 0x0  nop
    ctx->pc = 0x26fa28u;
    // NOP
    // 0x26fa2c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26FA2Cu;
    {
        const bool branch_taken_0x26fa2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26FA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA2Cu;
        // 0x26fa30: 0xe7a30028  swc1        $f3, 0x28($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa2c) {
            ctx->pc = 0x26FA38u;
            goto label_26fa38;
        }
    }
    ctx->pc = 0x26FA34u;
    // 0x26fa34: 0x4600a846  mov.s       $f1, $f21
    ctx->pc = 0x26fa34u;
    ctx->f[1] = FPU_MOV_S(ctx->f[21]);
label_26fa38:
    // 0x26fa38: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x26fa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x26fa3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26fa3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fa40: 0x0  nop
    ctx->pc = 0x26fa40u;
    // NOP
    // 0x26fa44: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26fa44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fa48: 0x0  nop
    ctx->pc = 0x26fa48u;
    // NOP
    // 0x26fa4c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26FA4Cu;
    {
        const bool branch_taken_0x26fa4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fa4c) {
            ctx->pc = 0x26FA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FA4Cu;
            // 0x26fa50: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FA54u;
            goto label_26fa54;
        }
    }
    ctx->pc = 0x26FA54u;
label_26fa54:
    // 0x26fa54: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x26fa54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fa58: 0x46000907  neg.s       $f4, $f1
    ctx->pc = 0x26fa58u;
    ctx->f[4] = FPU_NEG_S(ctx->f[1]);
    // 0x26fa5c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26fa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x26fa60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26fa60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26fa64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26fa64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fa68: 0xc66300b8  lwc1        $f3, 0xB8($s3)
    ctx->pc = 0x26fa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26fa6c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26fa6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26fa70: 0xc66100b0  lwc1        $f1, 0xB0($s3)
    ctx->pc = 0x26fa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fa74: 0xc66000b4  lwc1        $f0, 0xB4($s3)
    ctx->pc = 0x26fa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fa78: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x26fa78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26fa7c: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26fa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26fa80: 0x46022502  mul.s       $f20, $f4, $f2
    ctx->pc = 0x26fa80u;
    ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x26fa84: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x26fa84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26fa88: 0x12de0007  beq         $s6, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x26FA88u;
    {
        const bool branch_taken_0x26fa88 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 30));
        ctx->pc = 0x26FA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FA88u;
        // 0x26fa8c: 0xe7d5000c  swc1        $f21, 0xC($fp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fa88) {
            ctx->pc = 0x26FAA8u;
            goto label_26faa8;
        }
    }
    ctx->pc = 0x26FA90u;
    // 0x26fa90: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x26fa90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fa94: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26fa94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fa98: 0xe68018c0  swc1        $f0, 0x18C0($s4)
    ctx->pc = 0x26fa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6336), bits); }
    // 0x26fa9c: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x26fa9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x26faa0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x26faa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26faa4: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x26faa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_26faa8:
    // 0x26faa8: 0xc6a000b8  lwc1        $f0, 0xB8($s5)
    ctx->pc = 0x26faa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26faac: 0xc6a100b0  lwc1        $f1, 0xB0($s5)
    ctx->pc = 0x26faacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fab0: 0xc6a200b4  lwc1        $f2, 0xB4($s5)
    ctx->pc = 0x26fab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fab4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x26fab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26fab8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x26fab8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26fabc: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x26fabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26fac0: 0x12fe0007  beq         $s7, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x26FAC0u;
    {
        const bool branch_taken_0x26fac0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 30));
        ctx->pc = 0x26FAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FAC0u;
        // 0x26fac4: 0xe7d5000c  swc1        $f21, 0xC($fp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fac0) {
            ctx->pc = 0x26FAE0u;
            goto label_26fae0;
        }
    }
    ctx->pc = 0x26FAC8u;
    // 0x26fac8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x26fac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26facc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26faccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fad0: 0xe68018d0  swc1        $f0, 0x18D0($s4)
    ctx->pc = 0x26fad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6352), bits); }
    // 0x26fad4: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x26fad4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x26fad8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x26fad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fadc: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x26fadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_26fae0:
    // 0x26fae0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x26fae0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_26fae4:
    // 0x26fae4: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x26fae4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_26fae8:
    // 0x26fae8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26fae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26faec: 0xc09c058  jal         func_270160
    ctx->pc = 0x26FAECu;
    SET_GPR_U32(ctx, 31, 0x26FAF4u);
    ctx->pc = 0x26FAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FAECu;
    // 0x26faf0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270160u, 0x26FAECu, 0x26FAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FAF4u;
label_26faf4:
    // 0x26faf4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x26faf4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x26faf8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x26faf8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x26fafc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26fafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb00: 0xc09c058  jal         func_270160
    ctx->pc = 0x26FB00u;
    SET_GPR_U32(ctx, 31, 0x26FB08u);
    ctx->pc = 0x26FB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB00u;
    // 0x26fb04: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270160u, 0x26FB00u, 0x26FB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB08u;
label_26fb08:
    // 0x26fb08: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x26fb08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x26fb0c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x26fb0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x26fb10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26fb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fb14: 0xc09c058  jal         func_270160
    ctx->pc = 0x26FB14u;
    SET_GPR_U32(ctx, 31, 0x26FB1Cu);
    ctx->pc = 0x26FB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FB14u;
    // 0x26fb18: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270160u, 0x26FB14u, 0x26FB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FB1Cu;
label_26fb1c:
    // 0x26fb1c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26fb1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26fb20: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x26fb20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x26fb24: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x26fb24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x26fb28: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x26fb28u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x26fb2c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26fb2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26fb30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FB30u;
    {
        const bool branch_taken_0x26fb30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB30u;
        // 0x26fb34: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb30) {
            ctx->pc = 0x26FB44u;
            goto label_26fb44;
        }
    }
    ctx->pc = 0x26FB38u;
    // 0x26fb38: 0x8e820278  lw          $v0, 0x278($s4)
    ctx->pc = 0x26fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x26fb3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26FB3Cu;
    {
        const bool branch_taken_0x26fb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB3Cu;
        // 0x26fb40: 0x8c55001c  lw          $s5, 0x1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb3c) {
            ctx->pc = 0x26FB48u;
            goto label_26fb48;
        }
    }
    ctx->pc = 0x26FB44u;
label_26fb44:
    // 0x26fb44: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26fb44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fb48:
    // 0x26fb48: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x26fb48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x26fb4c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x26fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x26fb50: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26fb50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26fb54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FB54u;
    {
        const bool branch_taken_0x26fb54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB54u;
        // 0x26fb58: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb54) {
            ctx->pc = 0x26FB68u;
            goto label_26fb68;
        }
    }
    ctx->pc = 0x26FB5Cu;
    // 0x26fb5c: 0x8e820278  lw          $v0, 0x278($s4)
    ctx->pc = 0x26fb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x26fb60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26FB60u;
    {
        const bool branch_taken_0x26fb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB60u;
        // 0x26fb64: 0x8c530020  lw          $s3, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb60) {
            ctx->pc = 0x26FB6Cu;
            goto label_26fb6c;
        }
    }
    ctx->pc = 0x26FB68u;
label_26fb68:
    // 0x26fb68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26fb68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fb6c:
    // 0x26fb6c: 0x12a000a7  beqz        $s5, . + 4 + (0xA7 << 2)
    ctx->pc = 0x26FB6Cu;
    {
        const bool branch_taken_0x26fb6c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB6Cu;
        // 0x26fb70: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb6c) {
            ctx->pc = 0x26FE0Cu;
            goto label_26fe0c;
        }
    }
    ctx->pc = 0x26FB74u;
    // 0x26fb74: 0x126000a6  beqz        $s3, . + 4 + (0xA6 << 2)
    ctx->pc = 0x26FB74u;
    {
        const bool branch_taken_0x26fb74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FB74u;
        // 0x26fb78: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fb74) {
            ctx->pc = 0x26FE10u;
            goto label_26fe10;
        }
    }
    ctx->pc = 0x26FB7Cu;
    // 0x26fb7c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x26fb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26fb80: 0xc66200b0  lwc1        $f2, 0xB0($s3)
    ctx->pc = 0x26fb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fb84: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x26fb84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26fb88: 0xc66100b4  lwc1        $f1, 0xB4($s3)
    ctx->pc = 0x26fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fb8c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x26fb8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26fb90: 0xc66000b8  lwc1        $f0, 0xB8($s3)
    ctx->pc = 0x26fb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fb94: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x26fb94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26fb98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26fb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26fb9c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26fb9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x26fba0: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x26fba0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26fba4: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x26fba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26fba8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x26fba8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26fbac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x26fbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26fbb0: 0xe7d5000c  swc1        $f21, 0xC($fp)
    ctx->pc = 0x26fbb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x26fbb4: 0xc6a000b0  lwc1        $f0, 0xB0($s5)
    ctx->pc = 0x26fbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fbb8: 0xc6a100b4  lwc1        $f1, 0xB4($s5)
    ctx->pc = 0x26fbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fbbc: 0xc6a200b8  lwc1        $f2, 0xB8($s5)
    ctx->pc = 0x26fbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fbc0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26fbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26fbc4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26fbc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26fbc8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x26fbc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26fbcc: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x26fbccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x26fbd0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x26fbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26fbd4: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x26fbd4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x26fbd8: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x26fbd8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26fbdc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26fbdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26fbe0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26fbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26fbe4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x26fbe4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26fbe8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x26fbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26fbec: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x26fbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fbf0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x26fbf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fbf4: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x26fbf4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26fbf8: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x26fbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26fbfc: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x26fbfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26fc00: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26fc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26fc04: 0xe7ac0014  swc1        $f12, 0x14($sp)
    ctx->pc = 0x26fc04u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26fc08: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x26fc08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26fc0c: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x26fc0cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x26fc10: 0x0  nop
    ctx->pc = 0x26fc10u;
    // NOP
    // 0x26fc14: 0x0  nop
    ctx->pc = 0x26fc14u;
    // NOP
    // 0x26fc18: 0x460d0344  c1          0xD0344
    ctx->pc = 0x26fc18u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x26fc1c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x26FC1Cu;
    SET_GPR_U32(ctx, 31, 0x26FC24u);
    ctx->pc = 0x26FC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FC1Cu;
    // 0x26fc20: 0x269618e0  addiu       $s6, $s4, 0x18E0 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 6368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x26FC1Cu, 0x26FC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC24u;
label_26fc24:
    // 0x26fc24: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x26fc24u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x26fc28: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x26FC28u;
    SET_GPR_U32(ctx, 31, 0x26FC30u);
    ctx->pc = 0x26FC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FC28u;
    // 0x26fc2c: 0x269718f0  addiu       $s7, $s4, 0x18F0 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 6384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x26FC28u, 0x26FC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC30u;
label_26fc30:
    // 0x26fc30: 0xc66400b0  lwc1        $f4, 0xB0($s3)
    ctx->pc = 0x26fc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26fc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc38: 0xc66200b4  lwc1        $f2, 0xB4($s3)
    ctx->pc = 0x26fc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fc3c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26fc3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc40: 0xc66300b8  lwc1        $f3, 0xB8($s3)
    ctx->pc = 0x26fc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26fc44: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x26fc44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x26fc48: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x26fc48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x26fc4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26fc4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26fc50: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x26fc50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26fc54: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x26fc54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26fc58: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x26fc58u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26fc5c: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x26fc5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26fc60: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x26FC60u;
    SET_GPR_U32(ctx, 31, 0x26FC68u);
    ctx->pc = 0x26FC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FC60u;
    // 0x26fc64: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x26FC60u, 0x26FC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC68u;
label_26fc68:
    // 0x26fc68: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26fc68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26fc6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26fc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc70: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26fc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fc74: 0xc6a000b0  lwc1        $f0, 0xB0($s5)
    ctx->pc = 0x26fc74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fc78: 0xc6a100b4  lwc1        $f1, 0xB4($s5)
    ctx->pc = 0x26fc78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fc7c: 0xc6a200b8  lwc1        $f2, 0xB8($s5)
    ctx->pc = 0x26fc7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fc80: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26fc80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26fc84: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x26fc84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26fc88: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x26fc88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26fc8c: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x26FC8Cu;
    SET_GPR_U32(ctx, 31, 0x26FC94u);
    ctx->pc = 0x26FC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FC8Cu;
    // 0x26fc90: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x26FC8Cu, 0x26FC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FC94u;
label_26fc94:
    // 0x26fc94: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26fc94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26fc98: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x26fc98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26fc9c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x26fc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26fca0: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x26fca0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x26fca4: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x26fca4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x26fca8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26fca8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26fcac: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26fcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26fcb0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x26fcb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26fcb4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x26fcb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26fcb8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x26fcb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fcbc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26fcbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fcc0: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x26fcc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fcc4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26fcc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26fcc8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x26fcc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26fccc: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x26fcccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26fcd0: 0xc66000b0  lwc1        $f0, 0xB0($s3)
    ctx->pc = 0x26fcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fcd4: 0xc66100b4  lwc1        $f1, 0xB4($s3)
    ctx->pc = 0x26fcd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fcd8: 0xc66200b8  lwc1        $f2, 0xB8($s3)
    ctx->pc = 0x26fcd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fcdc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26fcdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26fce0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26fce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26fce4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x26fce4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26fce8: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x26fce8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x26fcec: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x26fcecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26fcf0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x26fcf0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26fcf4: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x26fcf4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x26fcf8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26fcf8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26fcfc: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26fcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26fd00: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x26fd00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26fd04: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x26fd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26fd08: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x26fd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26fd0c: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x26fd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x26fd10: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x26fd10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fd14: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x26fd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fd18: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x26fd18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x26fd1c: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x26fd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26fd20: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x26fd20u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x26fd24: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26fd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fd28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26fd28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x26fd2c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26fd2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x26fd30: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x26fd30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x26fd34: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x26fd34u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26fd38: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x26fd38u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x26fd3c: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x26fd3cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26fd40: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x26fd40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x26fd44: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x26fd44u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x26fd48: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x26fd48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x26fd4c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x26fd4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fd50: 0x0  nop
    ctx->pc = 0x26fd50u;
    // NOP
    // 0x26fd54: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x26FD54u;
    {
        const bool branch_taken_0x26fd54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FD54u;
        // 0x26fd58: 0xe7a30028  swc1        $f3, 0x28($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fd54) {
            ctx->pc = 0x26FD60u;
            goto label_26fd60;
        }
    }
    ctx->pc = 0x26FD5Cu;
    // 0x26fd5c: 0x4600a846  mov.s       $f1, $f21
    ctx->pc = 0x26fd5cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[21]);
label_26fd60:
    // 0x26fd60: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x26fd60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x26fd64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26fd64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fd68: 0x0  nop
    ctx->pc = 0x26fd68u;
    // NOP
    // 0x26fd6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26fd6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26fd70: 0x0  nop
    ctx->pc = 0x26fd70u;
    // NOP
    // 0x26fd74: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x26FD74u;
    {
        const bool branch_taken_0x26fd74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26fd74) {
            ctx->pc = 0x26FD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26FD74u;
            // 0x26fd78: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26FD7Cu;
            goto label_26fd7c;
        }
    }
    ctx->pc = 0x26FD7Cu;
label_26fd7c:
    // 0x26fd7c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x26fd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fd80: 0x46000907  neg.s       $f4, $f1
    ctx->pc = 0x26fd80u;
    ctx->f[4] = FPU_NEG_S(ctx->f[1]);
    // 0x26fd84: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26fd84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x26fd88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26fd88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x26fd8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26fd8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26fd90: 0xc66300b8  lwc1        $f3, 0xB8($s3)
    ctx->pc = 0x26fd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26fd94: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26fd94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x26fd98: 0xc66100b0  lwc1        $f1, 0xB0($s3)
    ctx->pc = 0x26fd98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fd9c: 0xc66000b4  lwc1        $f0, 0xB4($s3)
    ctx->pc = 0x26fd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fda0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x26fda0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26fda4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26fda4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26fda8: 0x46022502  mul.s       $f20, $f4, $f2
    ctx->pc = 0x26fda8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x26fdac: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x26fdacu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26fdb0: 0x12de0007  beq         $s6, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x26FDB0u;
    {
        const bool branch_taken_0x26fdb0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 30));
        ctx->pc = 0x26FDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDB0u;
        // 0x26fdb4: 0xe7d5000c  swc1        $f21, 0xC($fp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fdb0) {
            ctx->pc = 0x26FDD0u;
            goto label_26fdd0;
        }
    }
    ctx->pc = 0x26FDB8u;
    // 0x26fdb8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x26fdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fdbc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26fdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fdc0: 0xe68018e0  swc1        $f0, 0x18E0($s4)
    ctx->pc = 0x26fdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6368), bits); }
    // 0x26fdc4: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x26fdc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x26fdc8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x26fdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fdcc: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x26fdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_26fdd0:
    // 0x26fdd0: 0xc6a000b8  lwc1        $f0, 0xB8($s5)
    ctx->pc = 0x26fdd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fdd4: 0xc6a100b0  lwc1        $f1, 0xB0($s5)
    ctx->pc = 0x26fdd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fdd8: 0xc6a200b4  lwc1        $f2, 0xB4($s5)
    ctx->pc = 0x26fdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fddc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x26fddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26fde0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x26fde0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26fde4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x26fde4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26fde8: 0x12fe0007  beq         $s7, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x26FDE8u;
    {
        const bool branch_taken_0x26fde8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 30));
        ctx->pc = 0x26FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FDE8u;
        // 0x26fdec: 0xe7d5000c  swc1        $f21, 0xC($fp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fde8) {
            ctx->pc = 0x26FE08u;
            goto label_26fe08;
        }
    }
    ctx->pc = 0x26FDF0u;
    // 0x26fdf0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x26fdf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fdf4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26fdf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fdf8: 0xe68018f0  swc1        $f0, 0x18F0($s4)
    ctx->pc = 0x26fdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6384), bits); }
    // 0x26fdfc: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x26fdfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x26fe00: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x26fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fe04: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x26fe04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_26fe08:
    // 0x26fe08: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x26fe08u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_26fe0c:
    // 0x26fe0c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x26fe0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_26fe10:
    // 0x26fe10: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26fe10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26fe14: 0xc09c058  jal         func_270160
    ctx->pc = 0x26FE14u;
    SET_GPR_U32(ctx, 31, 0x26FE1Cu);
    ctx->pc = 0x26FE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FE14u;
    // 0x26fe18: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270160u, 0x26FE14u, 0x26FE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FE1Cu;
label_26fe1c:
    // 0x26fe1c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26fe1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x26fe20: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x26fe20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x26fe24: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x26fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x26fe28: 0x4600a586  mov.s       $f22, $f20
    ctx->pc = 0x26fe28u;
    ctx->f[22] = FPU_MOV_S(ctx->f[20]);
    // 0x26fe2c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26fe2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26fe30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FE30u;
    {
        const bool branch_taken_0x26fe30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE30u;
        // 0x26fe34: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe30) {
            ctx->pc = 0x26FE44u;
            goto label_26fe44;
        }
    }
    ctx->pc = 0x26FE38u;
    // 0x26fe38: 0x8e820278  lw          $v0, 0x278($s4)
    ctx->pc = 0x26fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x26fe3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26FE3Cu;
    {
        const bool branch_taken_0x26fe3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE3Cu;
        // 0x26fe40: 0x8c550034  lw          $s5, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe3c) {
            ctx->pc = 0x26FE48u;
            goto label_26fe48;
        }
    }
    ctx->pc = 0x26FE44u;
label_26fe44:
    // 0x26fe44: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x26fe44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fe48:
    // 0x26fe48: 0x928302b4  lbu         $v1, 0x2B4($s4)
    ctx->pc = 0x26fe48u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 692)));
    // 0x26fe4c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x26fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26fe50: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x26fe50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26fe54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26FE54u;
    {
        const bool branch_taken_0x26fe54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE54u;
        // 0x26fe58: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe54) {
            ctx->pc = 0x26FE68u;
            goto label_26fe68;
        }
    }
    ctx->pc = 0x26FE5Cu;
    // 0x26fe5c: 0x8e820278  lw          $v0, 0x278($s4)
    ctx->pc = 0x26fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 632)));
    // 0x26fe60: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26FE60u;
    {
        const bool branch_taken_0x26fe60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE60u;
        // 0x26fe64: 0x8c530038  lw          $s3, 0x38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe60) {
            ctx->pc = 0x26FE6Cu;
            goto label_26fe6c;
        }
    }
    ctx->pc = 0x26FE68u;
label_26fe68:
    // 0x26fe68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26fe68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26fe6c:
    // 0x26fe6c: 0x12a000a7  beqz        $s5, . + 4 + (0xA7 << 2)
    ctx->pc = 0x26FE6Cu;
    {
        const bool branch_taken_0x26fe6c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE6Cu;
        // 0x26fe70: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe6c) {
            ctx->pc = 0x27010Cu;
            goto label_27010c;
        }
    }
    ctx->pc = 0x26FE74u;
    // 0x26fe74: 0x126000a6  beqz        $s3, . + 4 + (0xA6 << 2)
    ctx->pc = 0x26FE74u;
    {
        const bool branch_taken_0x26fe74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26FE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26FE74u;
        // 0x26fe78: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26fe74) {
            ctx->pc = 0x270110u;
            goto label_270110;
        }
    }
    ctx->pc = 0x26FE7Cu;
    // 0x26fe7c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x26fe7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26fe80: 0xc66200b0  lwc1        $f2, 0xB0($s3)
    ctx->pc = 0x26fe80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fe84: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x26fe84u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x26fe88: 0xc66100b4  lwc1        $f1, 0xB4($s3)
    ctx->pc = 0x26fe88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fe8c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x26fe8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x26fe90: 0xc66000b8  lwc1        $f0, 0xB8($s3)
    ctx->pc = 0x26fe90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fe94: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x26fe94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x26fe98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26fe98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26fe9c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x26fe9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x26fea0: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x26fea0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x26fea4: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x26fea4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x26fea8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x26fea8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x26feac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x26feacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x26feb0: 0xe7d5000c  swc1        $f21, 0xC($fp)
    ctx->pc = 0x26feb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
    // 0x26feb4: 0xc6a000b0  lwc1        $f0, 0xB0($s5)
    ctx->pc = 0x26feb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26feb8: 0xc6a100b4  lwc1        $f1, 0xB4($s5)
    ctx->pc = 0x26feb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26febc: 0xc6a200b8  lwc1        $f2, 0xB8($s5)
    ctx->pc = 0x26febcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26fec0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26fec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26fec4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26fec4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26fec8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x26fec8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26fecc: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x26feccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x26fed0: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x26fed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26fed4: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x26fed4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x26fed8: 0xda250000  lqc2        $vf5, 0x0($s1)
    ctx->pc = 0x26fed8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26fedc: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26fedcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26fee0: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26fee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26fee4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x26fee4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26fee8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x26fee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26feec: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x26feecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26fef0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x26fef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26fef4: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x26fef4u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x26fef8: 0xc7ac0024  lwc1        $f12, 0x24($sp)
    ctx->pc = 0x26fef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26fefc: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x26fefcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x26ff00: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26ff00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26ff04: 0xe7ac0014  swc1        $f12, 0x14($sp)
    ctx->pc = 0x26ff04u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26ff08: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x26ff08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26ff0c: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x26ff0cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x26ff10: 0x0  nop
    ctx->pc = 0x26ff10u;
    // NOP
    // 0x26ff14: 0x0  nop
    ctx->pc = 0x26ff14u;
    // NOP
    // 0x26ff18: 0x460d0344  c1          0xD0344
    ctx->pc = 0x26ff18u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x26ff1c: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x26FF1Cu;
    SET_GPR_U32(ctx, 31, 0x26FF24u);
    ctx->pc = 0x26FF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF1Cu;
    // 0x26ff20: 0x26961900  addiu       $s6, $s4, 0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 6400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x26FF1Cu, 0x26FF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF24u;
label_26ff24:
    // 0x26ff24: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x26ff24u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x26ff28: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x26FF28u;
    SET_GPR_U32(ctx, 31, 0x26FF30u);
    ctx->pc = 0x26FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF28u;
    // 0x26ff2c: 0x26971910  addiu       $s7, $s4, 0x1910 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 6416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x26FF28u, 0x26FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF30u;
label_26ff30:
    // 0x26ff30: 0xc66400b0  lwc1        $f4, 0xB0($s3)
    ctx->pc = 0x26ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x26ff34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ff34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff38: 0xc66200b4  lwc1        $f2, 0xB4($s3)
    ctx->pc = 0x26ff38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ff3c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26ff3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff40: 0xc66300b8  lwc1        $f3, 0xB8($s3)
    ctx->pc = 0x26ff40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x26ff44: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x26ff44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x26ff48: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x26ff48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x26ff4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26ff4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26ff50: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x26ff50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26ff54: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x26ff54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26ff58: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x26ff58u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x26ff5c: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x26ff5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26ff60: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x26FF60u;
    SET_GPR_U32(ctx, 31, 0x26FF68u);
    ctx->pc = 0x26FF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF60u;
    // 0x26ff64: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x26FF60u, 0x26FF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF68u;
label_26ff68:
    // 0x26ff68: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x26ff68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x26ff6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26ff6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff70: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26ff70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ff74: 0xc6a000b0  lwc1        $f0, 0xB0($s5)
    ctx->pc = 0x26ff74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ff78: 0xc6a100b4  lwc1        $f1, 0xB4($s5)
    ctx->pc = 0x26ff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ff7c: 0xc6a200b8  lwc1        $f2, 0xB8($s5)
    ctx->pc = 0x26ff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ff80: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x26ff80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x26ff84: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x26ff84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x26ff88: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x26ff88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x26ff8c: 0xc07dfa0  jal         func_1F7E80
    ctx->pc = 0x26FF8Cu;
    SET_GPR_U32(ctx, 31, 0x26FF94u);
    ctx->pc = 0x26FF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26FF8Cu;
    // 0x26ff90: 0xe615000c  swc1        $f21, 0xC($s0) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E80u, 0x26FF8Cu, 0x26FF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26FF94u;
label_26ff94:
    // 0x26ff94: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26ff94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x26ff98: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x26ff98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26ff9c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x26ff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26ffa0: 0xdac40000  lqc2        $vf4, 0x0($s6)
    ctx->pc = 0x26ffa0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x26ffa4: 0xdae50000  lqc2        $vf5, 0x0($s7)
    ctx->pc = 0x26ffa4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x26ffa8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26ffa8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26ffac: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x26ffacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26ffb0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x26ffb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26ffb4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x26ffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x26ffb8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x26ffb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ffbc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x26ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ffc0: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x26ffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ffc4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26ffc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x26ffc8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x26ffc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x26ffcc: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x26ffccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x26ffd0: 0xc66000b0  lwc1        $f0, 0xB0($s3)
    ctx->pc = 0x26ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26ffd4: 0xc66100b4  lwc1        $f1, 0xB4($s3)
    ctx->pc = 0x26ffd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26ffd8: 0xc66200b8  lwc1        $f2, 0xB8($s3)
    ctx->pc = 0x26ffd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x26ffdc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x26ffdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x26ffe0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x26ffe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x26ffe4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x26ffe4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x26ffe8: 0xe635000c  swc1        $f21, 0xC($s1)
    ctx->pc = 0x26ffe8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x26ffec: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x26ffecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x26fff0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x26fff0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x26fff4: 0xdac50000  lqc2        $vf5, 0x0($s6)
    ctx->pc = 0x26fff4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x26fff8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x26fff8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x26fffc: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x26fffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x270000: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x270000u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x270004: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x270004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x270008: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x270008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x27000c: 0xc7a60034  lwc1        $f6, 0x34($sp)
    ctx->pc = 0x27000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x270010: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x270010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270014: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x270014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270018: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x270018u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x27001c: 0xc7a30038  lwc1        $f3, 0x38($sp)
    ctx->pc = 0x27001cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270020: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x270020u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x270024: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x270024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270028: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x270028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27002c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x27002cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x270030: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x270030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x270034: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x270034u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x270038: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x270038u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x27003c: 0xe7a60024  swc1        $f6, 0x24($sp)
    ctx->pc = 0x27003cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x270040: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x270040u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x270044: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x270044u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x270048: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x270048u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x27004c: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x27004cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270050: 0x0  nop
    ctx->pc = 0x270050u;
    // NOP
    // 0x270054: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x270054u;
    {
        const bool branch_taken_0x270054 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x270058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270054u;
        // 0x270058: 0xe7a30028  swc1        $f3, 0x28($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x270054) {
            ctx->pc = 0x270060u;
            goto label_270060;
        }
    }
    ctx->pc = 0x27005Cu;
    // 0x27005c: 0x4600a846  mov.s       $f1, $f21
    ctx->pc = 0x27005cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[21]);
label_270060:
    // 0x270060: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x270060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x270064: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x270064u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270068: 0x0  nop
    ctx->pc = 0x270068u;
    // NOP
    // 0x27006c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x27006cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x270070: 0x0  nop
    ctx->pc = 0x270070u;
    // NOP
    // 0x270074: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x270074u;
    {
        const bool branch_taken_0x270074 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x270074) {
            ctx->pc = 0x270078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270074u;
            // 0x270078: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27007Cu;
            goto label_27007c;
        }
    }
    ctx->pc = 0x27007Cu;
label_27007c:
    // 0x27007c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x27007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x270080: 0x46000907  neg.s       $f4, $f1
    ctx->pc = 0x270080u;
    ctx->f[4] = FPU_NEG_S(ctx->f[1]);
    // 0x270084: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x270084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x270088: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x270088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27008c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27008cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270090: 0xc66300b8  lwc1        $f3, 0xB8($s3)
    ctx->pc = 0x270090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x270094: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x270094u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x270098: 0xc66100b0  lwc1        $f1, 0xB0($s3)
    ctx->pc = 0x270098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27009c: 0xc66000b4  lwc1        $f0, 0xB4($s3)
    ctx->pc = 0x27009cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2700a0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2700a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2700a4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2700a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2700a8: 0x46022502  mul.s       $f20, $f4, $f2
    ctx->pc = 0x2700a8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2700ac: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2700acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2700b0: 0x12de0007  beq         $s6, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2700B0u;
    {
        const bool branch_taken_0x2700b0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 30));
        ctx->pc = 0x2700B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700B0u;
        // 0x2700b4: 0xe7d5000c  swc1        $f21, 0xC($fp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700b0) {
            ctx->pc = 0x2700D0u;
            goto label_2700d0;
        }
    }
    ctx->pc = 0x2700B8u;
    // 0x2700b8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2700b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2700bc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2700bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2700c0: 0xe6801900  swc1        $f0, 0x1900($s4)
    ctx->pc = 0x2700c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6400), bits); }
    // 0x2700c4: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x2700c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x2700c8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2700c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2700cc: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x2700ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_2700d0:
    // 0x2700d0: 0xc6a000b8  lwc1        $f0, 0xB8($s5)
    ctx->pc = 0x2700d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2700d4: 0xc6a100b0  lwc1        $f1, 0xB0($s5)
    ctx->pc = 0x2700d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2700d8: 0xc6a200b4  lwc1        $f2, 0xB4($s5)
    ctx->pc = 0x2700d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2700dc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2700dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2700e0: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2700e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2700e4: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x2700e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2700e8: 0x12fe0007  beq         $s7, $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x2700E8u;
    {
        const bool branch_taken_0x2700e8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 30));
        ctx->pc = 0x2700ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2700E8u;
        // 0x2700ec: 0xe7d5000c  swc1        $f21, 0xC($fp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2700e8) {
            ctx->pc = 0x270108u;
            goto label_270108;
        }
    }
    ctx->pc = 0x2700F0u;
    // 0x2700f0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2700f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2700f4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x2700f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2700f8: 0xe6801910  swc1        $f0, 0x1910($s4)
    ctx->pc = 0x2700f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 6416), bits); }
    // 0x2700fc: 0xe6e10004  swc1        $f1, 0x4($s7)
    ctx->pc = 0x2700fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x270100: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x270100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270104: 0xe6e00008  swc1        $f0, 0x8($s7)
    ctx->pc = 0x270104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
label_270108:
    // 0x270108: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x270108u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_27010c:
    // 0x27010c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x27010cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_270110:
    // 0x270110: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x270110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270114: 0xc09c058  jal         func_270160
    ctx->pc = 0x270114u;
    SET_GPR_U32(ctx, 31, 0x27011Cu);
    ctx->pc = 0x270118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270114u;
    // 0x270118: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270160u, 0x270114u, 0x27011Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27011Cu;
label_27011c:
    // 0x27011c: 0xae801940  sw          $zero, 0x1940($s4)
    ctx->pc = 0x27011cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 6464), GPR_U32(ctx, 0));
label_270120:
    // 0x270120: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x270120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_270124:
    // 0x270124: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x270124u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x270128: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x270128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x27012c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x27012cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x270130: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x270130u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x270134: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x270134u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x270138: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x270138u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27013c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x27013cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x270140: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x270140u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x270144: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x270144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x270148: 0xc7b60120  lwc1        $f22, 0x120($sp)
    ctx->pc = 0x270148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x27014c: 0xc7b50118  lwc1        $f21, 0x118($sp)
    ctx->pc = 0x27014cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x270150: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x270150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x270154: 0x3e00008  jr          $ra
    ctx->pc = 0x270154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270154u;
        // 0x270158: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27015Cu;
    // 0x27015c: 0x0  nop
    ctx->pc = 0x27015cu;
    // NOP
    ctx->pc = 0x270160u;
}
