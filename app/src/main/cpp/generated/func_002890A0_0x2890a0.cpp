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

// Function: func_002890A0
// Address: 0x2890a0 - 0x289328
void func_002890A0_0x2890a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002890A0_0x2890a0");
#endif

    switch (ctx->pc) {
        case 0x289178u: goto label_289178;
        case 0x289190u: goto label_289190;
        case 0x2891d0u: goto label_2891d0;
        case 0x2892e0u: goto label_2892e0;
        default: break;
    }

    ctx->pc = 0x2890a0u;

    // 0x2890a0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2890a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x2890a4: 0x240202a7  addiu       $v0, $zero, 0x2A7
    ctx->pc = 0x2890a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 679));
    // 0x2890a8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2890a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2890ac: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2890acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2890b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2890b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2890b4: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2890b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2890b8: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2890b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2890bc: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2890bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2890c0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2890c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x2890c4: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2890c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2890c8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2890c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2890cc: 0x8e430564  lw          $v1, 0x564($s2)
    ctx->pc = 0x2890ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x2890d0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2890D0u;
    {
        const bool branch_taken_0x2890d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2890D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2890D0u;
        // 0x2890d4: 0x240202ab  addiu       $v0, $zero, 0x2AB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 683));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890d0) {
            ctx->pc = 0x2890E0u;
            goto label_2890e0;
        }
    }
    ctx->pc = 0x2890D8u;
    // 0x2890d8: 0x14620089  bne         $v1, $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2890D8u;
    {
        const bool branch_taken_0x2890d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2890DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2890D8u;
        // 0x2890dc: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890d8) {
            ctx->pc = 0x289300u;
            goto label_289300;
        }
    }
    ctx->pc = 0x2890E0u;
label_2890e0:
    // 0x2890e0: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x2890e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x2890e4: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2890e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x2890e8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2890e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2890ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2890ECu;
    {
        const bool branch_taken_0x2890ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2890F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2890ECu;
        // 0x2890f0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890ec) {
            ctx->pc = 0x289100u;
            goto label_289100;
        }
    }
    ctx->pc = 0x2890F4u;
    // 0x2890f4: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x2890f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x2890f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2890F8u;
    {
        const bool branch_taken_0x2890f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2890FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2890F8u;
        // 0x2890fc: 0x8c530074  lw          $s3, 0x74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2890f8) {
            ctx->pc = 0x289104u;
            goto label_289104;
        }
    }
    ctx->pc = 0x289100u;
label_289100:
    // 0x289100: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x289100u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_289104:
    // 0x289104: 0x1260007e  beqz        $s3, . + 4 + (0x7E << 2)
    ctx->pc = 0x289104u;
    {
        const bool branch_taken_0x289104 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x289108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289104u;
        // 0x289108: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289104) {
            ctx->pc = 0x289300u;
            goto label_289300;
        }
    }
    ctx->pc = 0x28910Cu;
    // 0x28910c: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x28910cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x289110: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x289110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x289114: 0x26420490  addiu       $v0, $s2, 0x490
    ctx->pc = 0x289114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1168));
    // 0x289118: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x289118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x28911c: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x28911cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x289120: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x289120u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x289124: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x289124u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x289128: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x289128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x28912c: 0x27b10070  addiu       $s1, $sp, 0x70
    ctx->pc = 0x28912cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x289130: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x289130u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x289134: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x289134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x289138: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x289138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28913c: 0x265515f0  addiu       $s5, $s2, 0x15F0
    ctx->pc = 0x28913cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 5616));
    // 0x289140: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x289140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289144: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x289144u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x289148: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x289148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x28914c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x28914cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x289150: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x289150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x289154: 0xda4415f0  lqc2        $vf4, 0x15F0($s2)
    ctx->pc = 0x289154u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 5616)));
    // 0x289158: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x289158u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28915c: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x28915cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x289160: 0xfa4415f0  sqc2        $vf4, 0x15F0($s2)
    ctx->pc = 0x289160u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 5616), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x289164: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x289164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x289168: 0x26760080  addiu       $s6, $s3, 0x80
    ctx->pc = 0x289168u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x28916c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28916cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289170: 0xc051d5a  jal         func_147568
    ctx->pc = 0x289170u;
    SET_GPR_U32(ctx, 31, 0x289178u);
    ctx->pc = 0x289174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289170u;
    // 0x289174: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147568u, 0x289170u, 0x289178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289178u;
label_289178:
    // 0x289178: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x289178u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28917c: 0xfba40070  sqc2        $vf4, 0x70($sp)
    ctx->pc = 0x28917cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x289180: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x289180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x289184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289188: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x289188u;
    SET_GPR_U32(ctx, 31, 0x289190u);
    ctx->pc = 0x28918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289188u;
    // 0x28918c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x289188u, 0x289190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x289190u;
label_289190:
    // 0x289190: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x289190u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x289194: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x289194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x289198: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x289198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28919c: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x28919cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2891a0: 0x46000342  mul.s       $f13, $f0, $f0
    ctx->pc = 0x2891a0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2891a4: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x2891a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2891a8: 0x46010882  mul.s       $f2, $f1, $f1
    ctx->pc = 0x2891a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2891ac: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x2891acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2891b0: 0xe7ac0054  swc1        $f12, 0x54($sp)
    ctx->pc = 0x2891b0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x2891b4: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x2891b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2891b8: 0x46026b40  add.s       $f13, $f13, $f2
    ctx->pc = 0x2891b8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[2]);
    // 0x2891bc: 0x0  nop
    ctx->pc = 0x2891bcu;
    // NOP
    // 0x2891c0: 0x0  nop
    ctx->pc = 0x2891c0u;
    // NOP
    // 0x2891c4: 0x460d0344  c1          0xD0344
    ctx->pc = 0x2891c4u;
    ctx->f[13] = ps2FpuSqrt(ctx->fcr31, ctx->f[13]);
    // 0x2891c8: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2891C8u;
    SET_GPR_U32(ctx, 31, 0x2891D0u);
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2891C8u, 0x2891D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2891D0u;
label_2891d0:
    // 0x2891d0: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2891d0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x2891d4: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2891d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x2891d8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2891d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2891dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2891dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2891e0: 0x0  nop
    ctx->pc = 0x2891e0u;
    // NOP
    // 0x2891e4: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2891e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2891e8: 0x0  nop
    ctx->pc = 0x2891e8u;
    // NOP
    // 0x2891ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2891ECu;
    {
        const bool branch_taken_0x2891ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2891ec) {
            ctx->pc = 0x2891F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2891ECu;
            // 0x2891f0: 0x46001886  mov.s       $f2, $f3 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2891F4u;
            goto label_2891f4;
        }
    }
    ctx->pc = 0x2891F4u;
label_2891f4:
    // 0x2891f4: 0x3c01bf06  lui         $at, 0xBF06
    ctx->pc = 0x2891f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48902 << 16));
    // 0x2891f8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2891f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2891fc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2891fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x289200: 0x0  nop
    ctx->pc = 0x289200u;
    // NOP
    // 0x289204: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x289204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289208: 0x0  nop
    ctx->pc = 0x289208u;
    // NOP
    // 0x28920c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x28920Cu;
    {
        const bool branch_taken_0x28920c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28920c) {
            ctx->pc = 0x289210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28920Cu;
            // 0x289210: 0x46002086  mov.s       $f2, $f4 (Delay Slot)
            ctx->f[2] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x289214u;
            goto label_289214;
        }
    }
    ctx->pc = 0x289214u;
label_289214:
    // 0x289214: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x289214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x289218: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x289218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x28921c: 0xc64105a8  lwc1        $f1, 0x5A8($s2)
    ctx->pc = 0x28921cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289220: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x289220u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x289224: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x289224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289228: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x289228u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x28922c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x28922cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x289230: 0xe6600100  swc1        $f0, 0x100($s3)
    ctx->pc = 0x289230u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
    // 0x289234: 0xc6411600  lwc1        $f1, 0x1600($s2)
    ctx->pc = 0x289234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289238: 0xc64205a8  lwc1        $f2, 0x5A8($s2)
    ctx->pc = 0x289238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28923c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x28923cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x289240: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x289240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x289244: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x289244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289248: 0x0  nop
    ctx->pc = 0x289248u;
    // NOP
    // 0x28924c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28924Cu;
    {
        const bool branch_taken_0x28924c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x289250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28924Cu;
        // 0x289250: 0xe6600100  swc1        $f0, 0x100($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28924c) {
            ctx->pc = 0x28925Cu;
            goto label_28925c;
        }
    }
    ctx->pc = 0x289254u;
    // 0x289254: 0xe6630100  swc1        $f3, 0x100($s3)
    ctx->pc = 0x289254u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
    // 0x289258: 0xae401600  sw          $zero, 0x1600($s2)
    ctx->pc = 0x289258u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5632), GPR_U32(ctx, 0));
label_28925c:
    // 0x28925c: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x28925cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289260: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x289260u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x289264: 0x0  nop
    ctx->pc = 0x289264u;
    // NOP
    // 0x289268: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x289268u;
    {
        const bool branch_taken_0x289268 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x289268) {
            ctx->pc = 0x28926Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289268u;
            // 0x28926c: 0xc64305a8  lwc1        $f3, 0x5A8($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x28927Cu;
            goto label_28927c;
        }
    }
    ctx->pc = 0x289270u;
    // 0x289270: 0xe6640100  swc1        $f4, 0x100($s3)
    ctx->pc = 0x289270u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
    // 0x289274: 0xae401600  sw          $zero, 0x1600($s2)
    ctx->pc = 0x289274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5632), GPR_U32(ctx, 0));
    // 0x289278: 0xc64305a8  lwc1        $f3, 0x5A8($s2)
    ctx->pc = 0x289278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28927c:
    // 0x28927c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x28927cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x289280: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x289280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x289284: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x289284u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x289288: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x289288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x28928c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x28928cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289290: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x289290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x289294: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x289294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x289298: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x289298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28929c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x28929cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2892a0: 0xc6411600  lwc1        $f1, 0x1600($s2)
    ctx->pc = 0x2892a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2892a4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2892a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2892a8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2892a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2892ac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2892acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2892b0: 0xe6411600  swc1        $f1, 0x1600($s2)
    ctx->pc = 0x2892b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5632), bits); }
    // 0x2892b4: 0xc6600100  lwc1        $f0, 0x100($s3)
    ctx->pc = 0x2892b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2892b8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2892b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x2892bc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2892bcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2892c0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2892c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x2892c4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2892c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2892c8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2892c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2892cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2892ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2892d0: 0xe6411600  swc1        $f1, 0x1600($s2)
    ctx->pc = 0x2892d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5632), bits); }
    // 0x2892d4: 0xc4400460  lwc1        $f0, 0x460($v0)
    ctx->pc = 0x2892d4u;
    { uint32_t bits = FAST_READ32(0x3C0460u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2892d8: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2892D8u;
    SET_GPR_U32(ctx, 31, 0x2892E0u);
    ctx->pc = 0x2892DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2892D8u;
    // 0x2892dc: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2892D8u, 0x2892E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2892E0u;
label_2892e0:
    // 0x2892e0: 0x12b40006  beq         $s5, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2892E0u;
    {
        const bool branch_taken_0x2892e0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 20));
        ctx->pc = 0x2892E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2892E0u;
        // 0x2892e4: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2892e0) {
            ctx->pc = 0x2892FCu;
            goto label_2892fc;
        }
    }
    ctx->pc = 0x2892E8u;
    // 0x2892e8: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x2892e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2892ec: 0xe64015f0  swc1        $f0, 0x15F0($s2)
    ctx->pc = 0x2892ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 5616), bits); }
    // 0x2892f0: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x2892f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x2892f4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x2892f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2892f8: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x2892f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_2892fc:
    // 0x2892fc: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2892fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_289300:
    // 0x289300: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x289300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x289304: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x289304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x289308: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x289308u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28930c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x28930cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x289310: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x289310u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x289314: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x289314u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x289318: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x289318u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28931c: 0x3e00008  jr          $ra
    ctx->pc = 0x28931Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28931Cu;
        // 0x289320: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28931Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x289324u;
    // 0x289324: 0x0  nop
    ctx->pc = 0x289324u;
    // NOP
    ctx->pc = 0x289328u;
}
