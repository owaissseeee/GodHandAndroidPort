#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r105_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r105
{
// Function: MoveFlag__45_GLOBAL_$N$D__GodHand_Prog_st1_r105.cpp7Jbaaav
// Address: 0x79a178 - 0x79a4f0
void MoveFlag__45_GLOBAL__N_D__GodHand_Prog_st1_r105_cpp7Jbaaav_0x79a178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveFlag__45_GLOBAL__N_D__GodHand_Prog_st1_r105_cpp7Jbaaav_0x79a178");
#endif

    switch (ctx->pc) {
        case 0x79a1f0u: goto label_79a1f0;
        case 0x79a218u: goto label_79a218;
        case 0x79a250u: goto label_79a250;
        case 0x79a27cu: goto label_79a27c;
        case 0x79a28cu: goto label_79a28c;
        case 0x79a2e0u: goto label_79a2e0;
        case 0x79a30cu: goto label_79a30c;
        case 0x79a35cu: goto label_79a35c;
        case 0x79a37cu: goto label_79a37c;
        case 0x79a404u: goto label_79a404;
        case 0x79a46cu: goto label_79a46c;
        case 0x79a490u: goto label_79a490;
        default: break;
    }

    ctx->pc = 0x79a178u;

    // 0x79a178: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x79a178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x79a17c: 0xe7b90118  swc1        $f25, 0x118($sp)
    ctx->pc = 0x79a17cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x79a180: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x79a180u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x79a184: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x79a184u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x79a188: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x79a188u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x79a18c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x79a18cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x79a190: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x79a190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x79a194: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x79a194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a198: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x79a198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x79a19c: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x79a19cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x79a1a0: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x79a1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x79a1a4: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x79a1a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79a1a8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x79a1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x79a1ac: 0x3c1e007a  lui         $fp, 0x7A
    ctx->pc = 0x79a1acu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)122 << 16));
    // 0x79a1b0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x79a1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x79a1b4: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x79a1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x79a1b8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x79a1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x79a1bc: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x79a1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x79a1c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79a1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79a1c4: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x79a1c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x79a1c8: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x79a1c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x79a1cc: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x79a1ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x79a1d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79a1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79a1d4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x79a1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x79a1d8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x79a1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x79a1dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a1dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a1e0: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x79a1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x79a1e4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x79a1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x79a1e8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x79a1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x79a1ec: 0x27c2a780  addiu       $v0, $fp, -0x5880
    ctx->pc = 0x79a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294944640));
label_79a1f0:
    // 0x79a1f0: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x79a1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x79a1f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79a1f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a1f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a1fc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x79a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a200: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a204: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x79a204u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79a208: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A208u;
    {
        const bool branch_taken_0x79a208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A208u;
        // 0x79a20c: 0x26950001  addiu       $s5, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a208) {
            ctx->pc = 0x79A240u;
            goto label_79a240;
        }
    }
    ctx->pc = 0x79A210u;
    // 0x79a210: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x79a210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a214: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a214u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_79a218:
    // 0x79a218: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x79a218u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x79a21c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79a21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x79a220: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x79a220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x79a224: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x79a224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x79a228: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x79a228u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a22c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79A22Cu;
    {
        const bool branch_taken_0x79a22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A22Cu;
        // 0x79a230: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a22c) {
            ctx->pc = 0x79A240u;
            goto label_79a240;
        }
    }
    ctx->pc = 0x79A234u;
    // 0x79a234: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x79a234u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x79a238: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79A238u;
    {
        const bool branch_taken_0x79a238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a238) {
            ctx->pc = 0x79A23Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A238u;
            // 0x79a23c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a218;
        }
    }
    ctx->pc = 0x79A240u;
label_79a240:
    // 0x79a240: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x79a240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x79a244: 0x24844c58  addiu       $a0, $a0, 0x4C58
    ctx->pc = 0x79a244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19544));
    // 0x79a248: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x79A248u;
    SET_GPR_U32(ctx, 31, 0x79A250u);
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x79A248u, 0x79A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A250u;
label_79a250:
    // 0x79a250: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79a250u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a254: 0x52400091  beql        $s2, $zero, . + 4 + (0x91 << 2)
    ctx->pc = 0x79A254u;
    {
        const bool branch_taken_0x79a254 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a254) {
            ctx->pc = 0x79A258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A254u;
            // 0x79a258: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A49Cu;
            goto label_79a49c;
        }
    }
    ctx->pc = 0x79A25Cu;
    // 0x79a25c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x79a25cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a260: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79a260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a264: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79a264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x79a268: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x79a268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x79a26c: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x79a26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x79a270: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a274: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79A274u;
    SET_GPR_U32(ctx, 31, 0x79A27Cu);
    ctx->pc = 0x79A278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A274u;
    // 0x79a278: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79A274u, 0x79A27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A27Cu;
label_79a27c:
    // 0x79a27c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x79a27cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x79a280: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x79a280u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x79a284: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79A284u;
    SET_GPR_U32(ctx, 31, 0x79A28Cu);
    ctx->pc = 0x79A288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A284u;
    // 0x79a288: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79A284u, 0x79A28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A28Cu;
label_79a28c:
    // 0x79a28c: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x79a28cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79a290: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x79a290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79a294: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x79a294u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x79a298: 0xe6390008  swc1        $f25, 0x8($s1)
    ctx->pc = 0x79a298u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x79a29c: 0xe636000c  swc1        $f22, 0xC($s1)
    ctx->pc = 0x79a29cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x79a2a0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79a2a0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a2a4: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79a2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a2a8: 0xdba40040  lqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79a2a8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a2ac: 0x4408b000  mfc1        $t0, $f22
    ctx->pc = 0x79a2acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[22], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x79a2b0: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x79a2b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x79a2b4: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x79a2b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79a2b8: 0xfba40040  sqc2        $vf4, 0x40($sp)
    ctx->pc = 0x79a2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a2bc: 0xdae40000  lqc2        $vf4, 0x0($s7)
    ctx->pc = 0x79a2bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x79a2c0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79a2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a2c4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79a2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a2c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a2c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79a2d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a2d4: 0x26460100  addiu       $a2, $s2, 0x100
    ctx->pc = 0x79a2d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x79a2d8: 0xc05420c  jal         func_150830
    ctx->pc = 0x79A2D8u;
    SET_GPR_U32(ctx, 31, 0x79A2E0u);
    ctx->pc = 0x79A2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A2D8u;
    // 0x79a2dc: 0x26530d80  addiu       $s3, $s2, 0xD80 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 3456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150830u, 0x79A2D8u, 0x79A2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A2E0u;
label_79a2e0:
    // 0x79a2e0: 0xe7b70020  swc1        $f23, 0x20($sp)
    ctx->pc = 0x79a2e0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x79a2e4: 0xe7b70024  swc1        $f23, 0x24($sp)
    ctx->pc = 0x79a2e4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x79a2e8: 0xe6180008  swc1        $f24, 0x8($s0)
    ctx->pc = 0x79a2e8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x79a2ec: 0xe616000c  swc1        $f22, 0xC($s0)
    ctx->pc = 0x79a2ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x79a2f0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x79a2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a2f4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x79a2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a2f8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x79a2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79a2fc: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x79a2fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x79a300: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x79a300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x79a304: 0xc0c73be  jal         func_31CEF8
    ctx->pc = 0x79A304u;
    SET_GPR_U32(ctx, 31, 0x79A30Cu);
    ctx->pc = 0x79A308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A304u;
    // 0x79a308: 0xe7a20018  swc1        $f2, 0x18($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CEF8u, 0x79A304u, 0x79A30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A30Cu;
label_79a30c:
    // 0x79a30c: 0x2c420008  sltiu       $v0, $v0, 0x8
    ctx->pc = 0x79a30cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x79a310: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x79A310u;
    {
        const bool branch_taken_0x79a310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a310) {
            ctx->pc = 0x79A37Cu;
            goto label_79a37c;
        }
    }
    ctx->pc = 0x79A318u;
    // 0x79a318: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x79a318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x79a31c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x79a31cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x79a320: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79a320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a324: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79a324u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a328: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x79a328u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a32c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x79a32cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x79a330: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x79a330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a334: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x79a334u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79a338: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x79a338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79a33c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x79a33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x79a340: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a340u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a344: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a344u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a348: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x79a348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x79a34c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x79a34cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x79a350: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79a350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79a354: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79A354u;
    SET_GPR_U32(ctx, 31, 0x79A35Cu);
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79A354u, 0x79A35Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A35Cu;
label_79a35c:
    // 0x79a35c: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x79a35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x79a360: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x79a360u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x79a364: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a364u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a368: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79a368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a36c: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x79a36cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x79a370: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a374: 0xc0ab886  jal         func_2AE218
    ctx->pc = 0x79A374u;
    SET_GPR_U32(ctx, 31, 0x79A37Cu);
    ctx->pc = 0x79A378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A374u;
    // 0x79a378: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE218u, 0x79A374u, 0x79A37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A37Cu;
label_79a37c:
    // 0x79a37c: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x79a37cu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79a380: 0x0  nop
    ctx->pc = 0x79a380u;
    // NOP
    // 0x79a384: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x79a384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x79a388: 0x8ec2a900  lw          $v0, -0x5700($s6)
    ctx->pc = 0x79a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945024)));
    // 0x79a38c: 0xc4410160  lwc1        $f1, 0x160($v0)
    ctx->pc = 0x79a38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a390: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x79a390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x79a394: 0xc4420164  lwc1        $f2, 0x164($v0)
    ctx->pc = 0x79a394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79a398: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x79a398u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x79a39c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x79a39cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a3a0: 0x0  nop
    ctx->pc = 0x79a3a0u;
    // NOP
    // 0x79a3a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x79A3A4u;
    {
        const bool branch_taken_0x79a3a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3A4u;
        // 0x79a3a8: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3a4) {
            ctx->pc = 0x79A3B4u;
            goto label_79a3b4;
        }
    }
    ctx->pc = 0x79A3ACu;
    // 0x79a3ac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x79A3ACu;
    {
        const bool branch_taken_0x79a3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3ACu;
        // 0x79a3b0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3ac) {
            ctx->pc = 0x79A3BCu;
            goto label_79a3bc;
        }
    }
    ctx->pc = 0x79A3B4u;
label_79a3b4:
    // 0x79a3b4: 0x46021000  add.s       $f0, $f2, $f2
    ctx->pc = 0x79a3b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x79a3b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x79a3b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_79a3bc:
    // 0x79a3bc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x79a3bcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x79a3c0: 0x46170834  c.lt.s      $f1, $f23
    ctx->pc = 0x79a3c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a3c4: 0x0  nop
    ctx->pc = 0x79a3c4u;
    // NOP
    // 0x79a3c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x79A3C8u;
    {
        const bool branch_taken_0x79a3c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A3C8u;
        // 0x79a3cc: 0x8e02a900  lw          $v0, -0x5700($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a3c8) {
            ctx->pc = 0x79A3D4u;
            goto label_79a3d4;
        }
    }
    ctx->pc = 0x79A3D0u;
    // 0x79a3d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x79a3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_79a3d4:
    // 0x79a3d4: 0xc4400164  lwc1        $f0, 0x164($v0)
    ctx->pc = 0x79a3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a3d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x79a3d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a3dc: 0x0  nop
    ctx->pc = 0x79a3dcu;
    // NOP
    // 0x79a3e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x79A3E0u;
    {
        const bool branch_taken_0x79a3e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x79a3e0) {
            ctx->pc = 0x79A3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A3E0u;
            // 0x79a3e4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A3E8u;
            goto label_79a3e8;
        }
    }
    ctx->pc = 0x79A3E8u;
label_79a3e8:
    // 0x79a3e8: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x79a3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x79a3ec: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x79a3ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x79a3f0: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x79a3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x79a3f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a3f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x79a3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a3fc: 0xc0ab886  jal         func_2AE218
    ctx->pc = 0x79A3FCu;
    SET_GPR_U32(ctx, 31, 0x79A404u);
    ctx->pc = 0x79A400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A3FCu;
    // 0x79a400: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AE218u, 0x79A3FCu, 0x79A404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A404u;
label_79a404:
    // 0x79a404: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79a404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79a408: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x79a408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x79a40c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79a40cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79a410: 0x2442a870  addiu       $v0, $v0, -0x5790
    ctx->pc = 0x79a410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944880));
    // 0x79a414: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x79a414u;
    { uint32_t bits = FAST_READ32(0x79A870u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79a418: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x79a418u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x79a41c: 0x8ec2a900  lw          $v0, -0x5700($s6)
    ctx->pc = 0x79a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945024)));
    // 0x79a420: 0xc4410160  lwc1        $f1, 0x160($v0)
    ctx->pc = 0x79a420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a424: 0x460d1082  mul.s       $f2, $f2, $f13
    ctx->pc = 0x79a424u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x79a428: 0xc4400168  lwc1        $f0, 0x168($v0)
    ctx->pc = 0x79a428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a42c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x79a42cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x79a430: 0xe4410160  swc1        $f1, 0x160($v0)
    ctx->pc = 0x79a430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 352), bits); }
    // 0x79a434: 0x8ec2a900  lw          $v0, -0x5700($s6)
    ctx->pc = 0x79a434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945024)));
    // 0x79a438: 0xc4400164  lwc1        $f0, 0x164($v0)
    ctx->pc = 0x79a438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79a43c: 0xc4410160  lwc1        $f1, 0x160($v0)
    ctx->pc = 0x79a43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79a440: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x79a440u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x79a444: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x79a444u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x79a448: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x79a448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x79a44c: 0x0  nop
    ctx->pc = 0x79a44cu;
    // NOP
    // 0x79a450: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x79A450u;
    {
        const bool branch_taken_0x79a450 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x79A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A450u;
        // 0x79a454: 0x2a0a02d  daddu       $s4, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a450) {
            ctx->pc = 0x79A49Cu;
            goto label_79a49c;
        }
    }
    ctx->pc = 0x79A458u;
    // 0x79a458: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x79a458u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x79a45c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a45cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a460: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a464: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79A464u;
    SET_GPR_U32(ctx, 31, 0x79A46Cu);
    ctx->pc = 0x79A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A464u;
    // 0x79a468: 0xac400160  sw          $zero, 0x160($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79A464u, 0x79A46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A46Cu;
label_79a46c:
    // 0x79a46c: 0x8e02a900  lw          $v0, -0x5700($s0)
    ctx->pc = 0x79a46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945024)));
    // 0x79a470: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x79a470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x79a474: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x79a474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x79a478: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79a478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79a47c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x79a47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x79a480: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x79a480u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x79a484: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79a484u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79a488: 0xc0c7414  jal         func_31D050
    ctx->pc = 0x79A488u;
    SET_GPR_U32(ctx, 31, 0x79A490u);
    ctx->pc = 0x79A48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A488u;
    // 0x79a48c: 0xe4400164  swc1        $f0, 0x164($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D050u, 0x79A488u, 0x79A490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A490u;
label_79a490:
    // 0x79a490: 0x8e02a900  lw          $v0, -0x5700($s0)
    ctx->pc = 0x79a490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945024)));
    // 0x79a494: 0xe4400168  swc1        $f0, 0x168($v0)
    ctx->pc = 0x79a494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 360), bits); }
    // 0x79a498: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x79a498u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_79a49c:
    // 0x79a49c: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x79a49cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x79a4a0: 0x5440ff53  bnel        $v0, $zero, . + 4 + (-0xAD << 2)
    ctx->pc = 0x79A4A0u;
    {
        const bool branch_taken_0x79a4a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a4a0) {
            ctx->pc = 0x79A4A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A4A0u;
            // 0x79a4a4: 0x27c2a780  addiu       $v0, $fp, -0x5880 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294944640));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A1F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a1f0;
        }
    }
    ctx->pc = 0x79A4A8u;
    // 0x79a4a8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x79a4a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x79a4ac: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x79a4acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79a4b0: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x79a4b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x79a4b4: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x79a4b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x79a4b8: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x79a4b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79a4bc: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x79a4bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79a4c0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x79a4c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79a4c4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x79a4c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79a4c8: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x79a4c8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79a4cc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79a4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a4d0: 0xc7b90118  lwc1        $f25, 0x118($sp)
    ctx->pc = 0x79a4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x79a4d4: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x79a4d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x79a4d8: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x79a4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x79a4dc: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x79a4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x79a4e0: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x79a4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79a4e4: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x79a4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79a4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x79A4E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A4E8u;
        // 0x79a4ec: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A4E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A4F0u;
}
} // namespace gh_r105
