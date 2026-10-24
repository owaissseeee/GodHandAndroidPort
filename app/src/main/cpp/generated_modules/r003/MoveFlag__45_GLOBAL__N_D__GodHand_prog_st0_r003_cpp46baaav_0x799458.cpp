#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r003_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r003
{
// Function: MoveFlag__45_GLOBAL_$N$D__GodHand_prog_st0_r003.cpp46baaav
// Address: 0x799458 - 0x7997d0
void MoveFlag__45_GLOBAL__N_D__GodHand_prog_st0_r003_cpp46baaav_0x799458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveFlag__45_GLOBAL__N_D__GodHand_prog_st0_r003_cpp46baaav_0x799458");
#endif

    switch (ctx->pc) {
        case 0x7994d0u: goto label_7994d0;
        case 0x7994f8u: goto label_7994f8;
        case 0x799530u: goto label_799530;
        case 0x79955cu: goto label_79955c;
        case 0x79956cu: goto label_79956c;
        case 0x7995c0u: goto label_7995c0;
        case 0x7995ecu: goto label_7995ec;
        case 0x79963cu: goto label_79963c;
        case 0x79965cu: goto label_79965c;
        case 0x7996e4u: goto label_7996e4;
        case 0x79974cu: goto label_79974c;
        case 0x799770u: goto label_799770;
        default: break;
    }

    ctx->pc = 0x799458u;

    // 0x799458: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x79945c: 0xe7b90118  swc1        $f25, 0x118($sp)
    ctx->pc = 0x79945cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x799460: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x799460u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x799464: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x799464u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x799468: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x799468u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x79946c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x79946cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x799470: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x799470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x799474: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799478: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x799478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x79947c: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x799480: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x799480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x799484: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x799488: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x799488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x79948c: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x79948cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
    // 0x799490: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x799490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x799494: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x799494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x799498: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x799498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x79949c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x79949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x7994a0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x7994a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x7994a4: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x7994a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x7994a8: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x7994a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x7994ac: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x7994acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x7994b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7994b4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x7994b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x7994b8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x7994bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7994bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x7994c0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x7994c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x7994c4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x7994c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x7994c8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x7994c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x7994cc: 0x27c29a80  addiu       $v0, $fp, -0x6580
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941312));
label_7994d0:
    // 0x7994d0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x7994d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7994d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7994d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7994e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7994e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994e4: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7994e8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7994E8u;
    {
        const bool branch_taken_0x7994e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E8u;
        // 0x7994ec: 0x26950001  addiu       $s5, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994e8) {
            ctx->pc = 0x799520u;
            goto label_799520;
        }
    }
    ctx->pc = 0x7994F0u;
    // 0x7994f0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x7994f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994f4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7994f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_7994f8:
    // 0x7994f8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7994fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7994fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799500: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799504: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799508: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799508u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79950c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79950Cu;
    {
        const bool branch_taken_0x79950c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79950Cu;
        // 0x799510: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79950c) {
            ctx->pc = 0x799520u;
            goto label_799520;
        }
    }
    ctx->pc = 0x799514u;
    // 0x799514: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799518: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799518u;
    {
        const bool branch_taken_0x799518 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799518) {
            ctx->pc = 0x79951Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799518u;
            // 0x79951c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994f8;
        }
    }
    ctx->pc = 0x799520u;
label_799520:
    // 0x799520: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x799520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x799524: 0x24844c58  addiu       $a0, $a0, 0x4C58
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
    // 0x799528: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799528u;
    SET_GPR_U32(ctx, 31, 0x799530u);
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799528u, 0x799530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799530u;
label_799530:
    // 0x799530: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x799530u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799534: 0x52400091  beql        $s2, $zero, . + 4 + (0x91 << 2)
    ctx->pc = 0x799534u;
    {
        const bool branch_taken_0x799534 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x799534) {
            ctx->pc = 0x799538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799534u;
            // 0x799538: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79977Cu;
            goto label_79977c;
        }
    }
    ctx->pc = 0x79953Cu;
    // 0x79953c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799540: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x799540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799544: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x799548: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79954c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x79954cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x799550: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799554: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x799554u;
    SET_GPR_U32(ctx, 31, 0x79955Cu);
    ctx->pc = 0x799558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799554u;
    // 0x799558: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799554u, 0x79955Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79955Cu;
label_79955c:
    // 0x79955c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x79955cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x799560: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x799560u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x799564: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x799564u;
    SET_GPR_U32(ctx, 31, 0x79956Cu);
    ctx->pc = 0x799568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799564u;
    // 0x799568: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799564u, 0x79956Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79956Cu;
label_79956c:
    // 0x79956c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799570: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x799570u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x799574: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x799574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x799578: 0xe6390008  swc1        $f25, 0x8($s1)
    ctx->pc = 0x799578u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x79957c: 0xe636000c  swc1        $f22, 0xC($s1)
    ctx->pc = 0x79957cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x799580: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x799580u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799584: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x799584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799588: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x799588u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79958c: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x79958cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x799590: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x799590u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x799594: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x799594u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x799598: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x799598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79959c: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x79959cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x7995a0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x7995a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x7995a4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x7995a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7995a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7995a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7995acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7995b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995b4: 0x26460100  addiu       $a2, $s2, 0x100
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x7995b8: 0xc05420c  jal         func_150830
    ctx->pc = 0x7995B8u;
    SET_GPR_U32(ctx, 31, 0x7995C0u);
    ctx->pc = 0x7995BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B8u;
    // 0x7995bc: 0x26530d80  addiu       $s3, $s2, 0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 3456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x7995B8u, 0x7995C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995C0u;
label_7995c0:
    // 0x7995c0: 0xe7b70020  swc1        $f23, 0x20($sp)
    ctx->pc = 0x7995c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x7995c4: 0xe7b70024  swc1        $f23, 0x24($sp)
    ctx->pc = 0x7995c4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x7995c8: 0xe6180008  swc1        $f24, 0x8($s0)
    ctx->pc = 0x7995c8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x7995cc: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x7995ccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x7995d0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x7995d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7995d4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x7995d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7995d8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x7995d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7995dc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x7995dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x7995e0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x7995e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x7995e4: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x7995E4u;
    SET_GPR_U32(ctx, 31, 0x7995ECu);
    ctx->pc = 0x7995E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E4u;
    // 0x7995e8: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x7995E4u, 0x7995ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995ECu;
label_7995ec:
    // 0x7995ec: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x7995ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x7995f0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x7995F0u;
    {
        const bool branch_taken_0x7995f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7995f0) {
            ctx->pc = 0x79965Cu;
            goto label_79965c;
        }
    }
    ctx->pc = 0x7995F8u;
    // 0x7995f8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x7995fc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x7995fcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799600: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x799600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799604: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x799604u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799608: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x799608u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79960c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79960cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x799610: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x799610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x799614: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x799614u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x799618: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x799618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79961c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x79961cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x799620: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799620u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799624: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799624u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799628: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x79962c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79962cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x799630: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799634: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x799634u;
    SET_GPR_U32(ctx, 31, 0x79963Cu);
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799634u, 0x79963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79963Cu;
label_79963c:
    // 0x79963c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x799640: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x799640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x799644: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x799648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79964c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x79964cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x799650: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x799650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799654: 0xc0ab886  jal         func_2AE218
    ctx->pc = 0x799654u;
    SET_GPR_U32(ctx, 31, 0x79965Cu);
    ctx->pc = 0x799658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799654u;
    // 0x799658: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE218u, 0x799654u, 0x79965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79965Cu;
label_79965c:
    // 0x79965c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x79965cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799660: 0x0  nop
    ctx->pc = 0x799660u;
    // NOP
    // 0x799664: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x799664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x799668: 0x8ec29c00  lw          $v0, -0x6400($s6)
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941696)));
    // 0x79966c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x79966cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799670: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x799670u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x799674: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x799674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x799678: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x799678u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x79967c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x79967cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799680: 0x0  nop
    ctx->pc = 0x799680u;
    // NOP
    // 0x799684: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x799684u;
    {
        const bool branch_taken_0x799684 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799684u;
        // 0x799688: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799684) {
            ctx->pc = 0x799694u;
            goto label_799694;
        }
    }
    ctx->pc = 0x79968Cu;
    // 0x79968c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79968Cu;
    {
        const bool branch_taken_0x79968c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79968Cu;
        // 0x799690: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79968c) {
            ctx->pc = 0x79969Cu;
            goto label_79969c;
        }
    }
    ctx->pc = 0x799694u;
label_799694:
    // 0x799694: 0x46021000  add.s       $f0, $f2, $f2
    ctx->pc = 0x799694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x799698: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x799698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_79969c:
    // 0x79969c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x79969cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x7996a0: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x7996a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7996a4: 0x0  nop
    ctx->pc = 0x7996a4u;
    // NOP
    // 0x7996a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x7996A8u;
    {
        const bool branch_taken_0x7996a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7996ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A8u;
        // 0x7996ac: 0x8e029c00  lw          $v0, -0x6400($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941696)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a8) {
            ctx->pc = 0x7996B4u;
            goto label_7996b4;
        }
    }
    ctx->pc = 0x7996B0u;
    // 0x7996b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x7996b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_7996b4:
    // 0x7996b4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x7996b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7996b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x7996b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7996bc: 0x0  nop
    ctx->pc = 0x7996bcu;
    // NOP
    // 0x7996c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x7996C0u;
    {
        const bool branch_taken_0x7996c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7996c0) {
            ctx->pc = 0x7996C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7996C0u;
            // 0x7996c4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7996C8u;
            goto label_7996c8;
        }
    }
    ctx->pc = 0x7996C8u;
label_7996c8:
    // 0x7996c8: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x7996c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x7996cc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x7996ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x7996d0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x7996d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x7996d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7996d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x7996d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996dc: 0xc0ab886  jal         func_2AE218
    ctx->pc = 0x7996DCu;
    SET_GPR_U32(ctx, 31, 0x7996E4u);
    ctx->pc = 0x7996E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996DCu;
    // 0x7996e0: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE218u, 0x7996DCu, 0x7996E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E4u;
label_7996e4:
    // 0x7996e4: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x7996e8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x7996ec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x7996ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x7996f0: 0x24429b50  addiu       $v0, $v0, -0x64B0
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941520));
    // 0x7996f4: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x7996f4u;
    { uint32_t bits = FAST_READ32(0x799B50u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x7996f8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x7996f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x7996fc: 0x8ec29c00  lw          $v0, -0x6400($s6)
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941696)));
    // 0x799700: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x799700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799704: 0x460d1082  mul.s       $f2, $f2, $f13
    ctx->pc = 0x799704u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x799708: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x799708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79970c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x79970cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x799710: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x799710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x799714: 0x8ec29c00  lw          $v0, -0x6400($s6)
    ctx->pc = 0x799714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941696)));
    // 0x799718: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x799718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79971c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x79971cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799720: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x799720u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x799724: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x799724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x799728: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x799728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79972c: 0x0  nop
    ctx->pc = 0x79972cu;
    // NOP
    // 0x799730: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x799730u;
    {
        const bool branch_taken_0x799730 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x799734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799730u;
        // 0x799734: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799730) {
            ctx->pc = 0x79977Cu;
            goto label_79977c;
        }
    }
    ctx->pc = 0x799738u;
    // 0x799738: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x799738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x79973c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79973cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799740: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799744: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x799744u;
    SET_GPR_U32(ctx, 31, 0x79974Cu);
    ctx->pc = 0x799748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799744u;
    // 0x799748: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799744u, 0x79974Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79974Cu;
label_79974c:
    // 0x79974c: 0x8e029c00  lw          $v0, -0x6400($s0)
    ctx->pc = 0x79974cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941696)));
    // 0x799750: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x799750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x799754: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x799754u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x799758: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799758u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79975c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x79975cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x799760: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799760u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799764: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x799764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x799768: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x799768u;
    SET_GPR_U32(ctx, 31, 0x799770u);
    ctx->pc = 0x79976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799768u;
    // 0x79976c: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x799768u, 0x799770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799770u;
label_799770:
    // 0x799770: 0x8e029c00  lw          $v0, -0x6400($s0)
    ctx->pc = 0x799770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941696)));
    // 0x799774: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x799778: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x799778u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79977c:
    // 0x79977c: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x79977cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x799780: 0x5440ff53  bnel        $v0, $zero, . + 4 + (-0xAD << 2)
    ctx->pc = 0x799780u;
    {
        const bool branch_taken_0x799780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799780) {
            ctx->pc = 0x799784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799780u;
            // 0x799784: 0x27c29a80  addiu       $v0, $fp, -0x6580 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294941312));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994d0;
        }
    }
    ctx->pc = 0x799788u;
    // 0x799788: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x799788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79978c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x79978cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x799790: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x799790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799794: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x799794u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799798: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x799798u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79979c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x79979cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7997a0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x7997a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7997a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x7997a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7997a8: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x7997a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7997ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x7997acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7997b0: 0xc7b90118  lwc1        $f25, 0x118($sp)
    ctx->pc = 0x7997b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x7997b4: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x7997b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x7997b8: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x7997b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x7997bc: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x7997bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x7997c0: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x7997c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x7997c4: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x7997c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7997c8: 0x3e00008  jr          $ra
    ctx->pc = 0x7997C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7997CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C8u;
        // 0x7997cc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7997C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7997D0u;
}
} // namespace gh_r003
