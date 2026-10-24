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

// Function: func_00271518
// Address: 0x271518 - 0x2717d0
void func_00271518_0x271518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00271518_0x271518");
#endif

    switch (ctx->pc) {
        case 0x271540u: goto label_271540;
        case 0x271630u: goto label_271630;
        case 0x271648u: goto label_271648;
        case 0x271650u: goto label_271650;
        case 0x27165cu: goto label_27165c;
        case 0x271668u: goto label_271668;
        case 0x271690u: goto label_271690;
        case 0x2716ccu: goto label_2716cc;
        case 0x2716e0u: goto label_2716e0;
        case 0x2716f4u: goto label_2716f4;
        default: break;
    }

    ctx->pc = 0x271518u;

    // 0x271518: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x271518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x27151c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x27151cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x271520: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x271520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x271524: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x271524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271528: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x271528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x27152c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27152cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271530: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x271530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x271534: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x271534u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x271538: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x271538u;
    SET_GPR_U32(ctx, 31, 0x271540u);
    ctx->pc = 0x27153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271538u;
    // 0x27153c: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x271538u, 0x271540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271540u;
label_271540:
    // 0x271540: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x271540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271544: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x271544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x271548: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x271548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
    // 0x27154c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27154Cu;
    {
        const bool branch_taken_0x27154c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x271550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27154Cu;
        // 0x271550: 0x28620265  slti        $v0, $v1, 0x265 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)613) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27154c) {
            ctx->pc = 0x271574u;
            goto label_271574;
        }
    }
    ctx->pc = 0x271554u;
    // 0x271554: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x271554u;
    {
        const bool branch_taken_0x271554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271554u;
        // 0x271558: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271554) {
            ctx->pc = 0x271560u;
            goto label_271560;
        }
    }
    ctx->pc = 0x27155Cu;
    // 0x27155c: 0x24020265  addiu       $v0, $zero, 0x265
    ctx->pc = 0x27155cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
label_271560:
    // 0x271560: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x271560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x271564: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x271564u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x271568: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x271568u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x27156c: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x27156Cu;
    {
        const bool branch_taken_0x27156c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x27156c) {
            ctx->pc = 0x271570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27156Cu;
            // 0x271570: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271584u;
            goto label_271584;
        }
    }
    ctx->pc = 0x271574u;
label_271574:
    // 0x271574: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x271574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x271578: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x271578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27157c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27157cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x271580: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x271580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_271584:
    // 0x271584: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x271584u;
    {
        const bool branch_taken_0x271584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271584) {
            ctx->pc = 0x271588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271584u;
            // 0x271588: 0x922302b4  lbu         $v1, 0x2B4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271708u;
            goto label_271708;
        }
    }
    ctx->pc = 0x27158Cu;
    // 0x27158c: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x27158cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x271590: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x271590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x271594: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x271594u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271598: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x271598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27159c: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x27159cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2715a0: 0x12030006  beq         $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2715A0u;
    {
        const bool branch_taken_0x2715a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x2715A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715A0u;
        // 0x2715a4: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715a0) {
            ctx->pc = 0x2715BCu;
            goto label_2715bc;
        }
    }
    ctx->pc = 0x2715A8u;
    // 0x2715a8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2715a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2715ac: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x2715acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2715b0: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2715b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2715b4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2715b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2715b8: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x2715b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2715bc:
    // 0x2715bc: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2715bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x2715c0: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x2715c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x2715c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2715C4u;
    {
        const bool branch_taken_0x2715c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2715C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715C4u;
        // 0x2715c8: 0x28620264  slti        $v0, $v1, 0x264 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715c4) {
            ctx->pc = 0x2715DCu;
            goto label_2715dc;
        }
    }
    ctx->pc = 0x2715CCu;
    // 0x2715cc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x2715CCu;
    {
        const bool branch_taken_0x2715cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2715D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715CCu;
        // 0x2715d0: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715cc) {
            ctx->pc = 0x2716B8u;
            goto label_2716b8;
        }
    }
    ctx->pc = 0x2715D4u;
    // 0x2715d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2715D4u;
    {
        const bool branch_taken_0x2715d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2715d4) {
            ctx->pc = 0x2715E0u;
            goto label_2715e0;
        }
    }
    ctx->pc = 0x2715DCu;
label_2715dc:
    // 0x2715dc: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x2715dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_2715e0:
    // 0x2715e0: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2715E0u;
    {
        const bool branch_taken_0x2715e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2715e0) {
            ctx->pc = 0x2716B8u;
            goto label_2716b8;
        }
    }
    ctx->pc = 0x2715E8u;
    // 0x2715e8: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x2715e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2715ec: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x2715ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2715f0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2715f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2715f4: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x2715f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2715f8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2715f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2715fc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2715fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x271600: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x271600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x271604: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x271604u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271608: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x271608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x27160c: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x27160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271610: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x271610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271614: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x271614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x271618: 0x46000b46  mov.s       $f13, $f1
    ctx->pc = 0x271618u;
    ctx->f[13] = FPU_MOV_S(ctx->f[1]);
    // 0x27161c: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x27161cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x271620: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x271620u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x271624: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x271624u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x271628: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x271628u;
    SET_GPR_U32(ctx, 31, 0x271630u);
    ctx->pc = 0x27162Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271628u;
    // 0x27162c: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x271628u, 0x271630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271630u;
label_271630:
    // 0x271630: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x271630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x271634: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x271634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x271638: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x271638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x27163c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27163cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271640: 0xc051e62  jal         func_147988
    ctx->pc = 0x271640u;
    SET_GPR_U32(ctx, 31, 0x271648u);
    ctx->pc = 0x271644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271640u;
    // 0x271644: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x271640u, 0x271648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271648u;
label_271648:
    // 0x271648: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x271648u;
    SET_GPR_U32(ctx, 31, 0x271650u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x271648u, 0x271650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271650u;
label_271650:
    // 0x271650: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x271650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x271654: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x271654u;
    SET_GPR_U32(ctx, 31, 0x27165Cu);
    ctx->pc = 0x271658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271654u;
    // 0x271658: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x271654u, 0x27165Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27165Cu;
label_27165c:
    // 0x27165c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x27165cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x271660: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x271660u;
    SET_GPR_U32(ctx, 31, 0x271668u);
    ctx->pc = 0x271664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271660u;
    // 0x271664: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x271660u, 0x271668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271668u;
label_271668:
    // 0x271668: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x271668u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x27166c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27166cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x271670: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x271670u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271674: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x271674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x271678: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x271678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27167c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27167cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271680: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x271680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x271684: 0x4600a800  add.s       $f0, $f21, $f0
    ctx->pc = 0x271684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x271688: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x271688u;
    SET_GPR_U32(ctx, 31, 0x271690u);
    ctx->pc = 0x27168Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271688u;
    // 0x27168c: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x271688u, 0x271690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271690u;
label_271690:
    // 0x271690: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x271690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x271694: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x271694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271698: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x271698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27169c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x27169cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2716a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2716a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2716a4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2716a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2716a8: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2716a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x2716ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2716acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2716b0: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2716B0u;
    {
        const bool branch_taken_0x2716b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2716B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716B0u;
        // 0x2716b4: 0x46020000  add.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716b0) {
            ctx->pc = 0x271748u;
            goto label_271748;
        }
    }
    ctx->pc = 0x2716B8u;
label_2716b8:
    // 0x2716b8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2716b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2716bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2716bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2716c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2716c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2716c4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x2716C4u;
    SET_GPR_U32(ctx, 31, 0x2716CCu);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x2716C4u, 0x2716CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716CCu;
label_2716cc:
    // 0x2716cc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2716ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2716d0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2716d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2716d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2716d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2716d8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x2716D8u;
    SET_GPR_U32(ctx, 31, 0x2716E0u);
    ctx->pc = 0x2716DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2716D8u;
    // 0x2716dc: 0xe6010000  swc1        $f1, 0x0($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x2716D8u, 0x2716E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716E0u;
label_2716e0:
    // 0x2716e0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2716e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2716e4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2716e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2716e8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2716e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2716ec: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x2716ECu;
    SET_GPR_U32(ctx, 31, 0x2716F4u);
    ctx->pc = 0x2716F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2716ECu;
    // 0x2716f0: 0xe6010004  swc1        $f1, 0x4($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x2716ECu, 0x2716F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2716F4u;
label_2716f4:
    // 0x2716f4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2716f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2716f8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2716f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2716fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2716fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x271700: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x271700u;
    {
        const bool branch_taken_0x271700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271700u;
        // 0x271704: 0xe6010008  swc1        $f1, 0x8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x271700) {
            ctx->pc = 0x27174Cu;
            goto label_27174c;
        }
    }
    ctx->pc = 0x271708u;
label_271708:
    // 0x271708: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x271708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27170c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27170cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271710: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271710u;
    {
        const bool branch_taken_0x271710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271710u;
        // 0x271714: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271710) {
            ctx->pc = 0x271724u;
            goto label_271724;
        }
    }
    ctx->pc = 0x271718u;
    // 0x271718: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x271718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x27171c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27171Cu;
    {
        const bool branch_taken_0x27171c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27171Cu;
        // 0x271720: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27171c) {
            ctx->pc = 0x271728u;
            goto label_271728;
        }
    }
    ctx->pc = 0x271724u;
label_271724:
    // 0x271724: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x271724u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_271728:
    // 0x271728: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x271728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x27172c: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27172Cu;
    {
        const bool branch_taken_0x27172c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x27172c) {
            ctx->pc = 0x271730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27172Cu;
            // 0x271730: 0x8e220698  lw          $v0, 0x698($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271750u;
            goto label_271750;
        }
    }
    ctx->pc = 0x271734u;
    // 0x271734: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x271734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x271738: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x271738u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x27173c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x27173cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271740: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x271740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x271744: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x271744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271748:
    // 0x271748: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x271748u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_27174c:
    // 0x27174c: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x27174cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
label_271750:
    // 0x271750: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x271750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x271754: 0x84440046  lh          $a0, 0x46($v0)
    ctx->pc = 0x271754u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
    // 0x271758: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x271758u;
    {
        const bool branch_taken_0x271758 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x27175Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271758u;
        // 0x27175c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271758) {
            ctx->pc = 0x271768u;
            goto label_271768;
        }
    }
    ctx->pc = 0x271760u;
    // 0x271760: 0x54820014  bnel        $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x271760u;
    {
        const bool branch_taken_0x271760 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x271760) {
            ctx->pc = 0x271764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271760u;
            // 0x271764: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2717B4u;
            goto label_2717b4;
        }
    }
    ctx->pc = 0x271768u;
label_271768:
    // 0x271768: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x271768u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x27176c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x27176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x271770: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x271770u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x271774: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x271774u;
    {
        const bool branch_taken_0x271774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271774u;
        // 0x271778: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271774) {
            ctx->pc = 0x271788u;
            goto label_271788;
        }
    }
    ctx->pc = 0x27177Cu;
    // 0x27177c: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x27177cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x271780: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x271780u;
    {
        const bool branch_taken_0x271780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271780u;
        // 0x271784: 0x8c420050  lw          $v0, 0x50($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271780) {
            ctx->pc = 0x27178Cu;
            goto label_27178c;
        }
    }
    ctx->pc = 0x271788u;
label_271788:
    // 0x271788: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x271788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27178c:
    // 0x27178c: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x27178cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x271790: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x271790u;
    {
        const bool branch_taken_0x271790 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x271790) {
            ctx->pc = 0x271794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271790u;
            // 0x271794: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2717B4u;
            goto label_2717b4;
        }
    }
    ctx->pc = 0x271798u;
    // 0x271798: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x271798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27179c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x27179cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2717a0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2717a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2717a4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2717a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2717a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2717a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2717ac: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2717acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x2717b0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2717b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2717b4:
    // 0x2717b4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2717b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2717b8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2717b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2717bc: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2717bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2717c0: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x2717c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2717c4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2717c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2717c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2717C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2717CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717C8u;
        // 0x2717cc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2717C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2717D0u;
}
