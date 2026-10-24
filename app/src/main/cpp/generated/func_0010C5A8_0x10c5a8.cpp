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

// Function: func_0010C5A8
// Address: 0x10c5a8 - 0x10c930
void func_0010C5A8_0x10c5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010C5A8_0x10c5a8");
#endif

    switch (ctx->pc) {
        case 0x10c67cu: goto label_10c67c;
        case 0x10c6f0u: goto label_10c6f0;
        case 0x10c720u: goto label_10c720;
        case 0x10c764u: goto label_10c764;
        case 0x10c78cu: goto label_10c78c;
        case 0x10c828u: goto label_10c828;
        case 0x10c83cu: goto label_10c83c;
        case 0x10c848u: goto label_10c848;
        case 0x10c854u: goto label_10c854;
        case 0x10c874u: goto label_10c874;
        case 0x10c888u: goto label_10c888;
        case 0x10c894u: goto label_10c894;
        case 0x10c89cu: goto label_10c89c;
        case 0x10c8a8u: goto label_10c8a8;
        case 0x10c90cu: goto label_10c90c;
        case 0x10c91cu: goto label_10c91c;
        default: break;
    }

    ctx->pc = 0x10c5a8u;

    // 0x10c5a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10c5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10c5ac: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10c5acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10c5b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10c5b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c5b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10c5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10c5b8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x10c5b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x10c5bc: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x10c5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10c5c0: 0x8602054a  lh          $v0, 0x54A($s0)
    ctx->pc = 0x10c5c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1354)));
    // 0x10c5c4: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C5C4u;
    {
        const bool branch_taken_0x10c5c4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x10c5c4) {
            ctx->pc = 0x10C5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C5C4u;
            // 0x10c5c8: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C5D8u;
            goto label_10c5d8;
        }
    }
    ctx->pc = 0x10C5CCu;
    // 0x10c5cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c5d0: 0xa602054a  sh          $v0, 0x54A($s0)
    ctx->pc = 0x10c5d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x10c5d4: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x10c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_10c5d8:
    // 0x10c5d8: 0x26030630  addiu       $v1, $s0, 0x630
    ctx->pc = 0x10c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1584));
    // 0x10c5dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x10c5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x10c5e0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x10c5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x10c5e4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x10c5e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10c5e8: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x10c5e8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10c5ec: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x10c5ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x10c5f0: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x10c5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10c5f4: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x10c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10c5f8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10c5f8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c5fc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x10c5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10c600: 0x13a50006  beq         $sp, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C600u;
    {
        const bool branch_taken_0x10c600 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x10C604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C600u;
        // 0x10c604: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c600) {
            ctx->pc = 0x10C61Cu;
            goto label_10c61c;
        }
    }
    ctx->pc = 0x10C608u;
    // 0x10c608: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x10c608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c60c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x10c60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10c610: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x10c610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x10c614: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x10c614u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x10c618: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x10c618u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_10c61c:
    // 0x10c61c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x10c61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c620: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x10c620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c624: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x10c624u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x10c628: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x10c628u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x10c62c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10c62cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10c630: 0x0  nop
    ctx->pc = 0x10c630u;
    // NOP
    // 0x10c634: 0x0  nop
    ctx->pc = 0x10c634u;
    // NOP
    // 0x10c638: 0x46000004  c1          0x4
    ctx->pc = 0x10c638u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x10c63c: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x10c63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x10c640: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x10c640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x10c644: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10c644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10c648: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x10c648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10c64c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x10c64cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x10c650: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10C650u;
    {
        const bool branch_taken_0x10c650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C650u;
        // 0x10c654: 0xe6000674  swc1        $f0, 0x674($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1652), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c650) {
            ctx->pc = 0x10C66Cu;
            goto label_10c66c;
        }
    }
    ctx->pc = 0x10C658u;
    // 0x10c658: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c65c: 0x10620034  beq         $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x10C65Cu;
    {
        const bool branch_taken_0x10c65c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10C660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C65Cu;
        // 0x10c660: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c65c) {
            ctx->pc = 0x10C730u;
            goto label_10c730;
        }
    }
    ctx->pc = 0x10C664u;
    // 0x10c664: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x10C664u;
    {
        const bool branch_taken_0x10c664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C664u;
        // 0x10c668: 0x9202061f  lbu         $v0, 0x61F($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1567)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c664) {
            ctx->pc = 0x10C8ACu;
            goto label_10c8ac;
        }
    }
    ctx->pc = 0x10C66Cu;
label_10c66c:
    // 0x10c66c: 0xa60005e0  sh          $zero, 0x5E0($s0)
    ctx->pc = 0x10c66cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x10c670: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c674: 0xc049396  jal         func_124E58
    ctx->pc = 0x10C674u;
    SET_GPR_U32(ctx, 31, 0x10C67Cu);
    ctx->pc = 0x10C678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C674u;
    // 0x10c678: 0xa60005e2  sh          $zero, 0x5E2($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 1506), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x10C674u, 0x10C67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C67Cu;
label_10c67c:
    // 0x10c67c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x10c67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x10c680: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x10c680u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x10c684: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C684u;
    {
        const bool branch_taken_0x10c684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c684) {
            ctx->pc = 0x10C688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C684u;
            // 0x10c688: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C698u;
            goto label_10c698;
        }
    }
    ctx->pc = 0x10C68Cu;
    // 0x10c68c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x10c68cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x10c690: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C690u;
    {
        const bool branch_taken_0x10c690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C690u;
        // 0x10c694: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c690) {
            ctx->pc = 0x10C6B0u;
            goto label_10c6b0;
        }
    }
    ctx->pc = 0x10C698u;
label_10c698:
    // 0x10c698: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10c698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c69c: 0x8c4306b4  lw          $v1, 0x6B4($v0)
    ctx->pc = 0x10c69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1716)));
    // 0x10c6a0: 0x8c4406b8  lw          $a0, 0x6B8($v0)
    ctx->pc = 0x10c6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1720)));
    // 0x10c6a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10c6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10c6a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C6A8u;
    {
        const bool branch_taken_0x10c6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6A8u;
        // 0x10c6ac: 0xa20502f7  sb          $a1, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6a8) {
            ctx->pc = 0x10C6BCu;
            goto label_10c6bc;
        }
    }
    ctx->pc = 0x10C6B0u;
label_10c6b0:
    // 0x10c6b0: 0x8c430068  lw          $v1, 0x68($v0)
    ctx->pc = 0x10c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x10c6b4: 0x8c44006c  lw          $a0, 0x6C($v0)
    ctx->pc = 0x10c6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x10c6b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10c6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10c6bc:
    // 0x10c6bc: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x10c6bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10c6c0: 0x8e0406a0  lw          $a0, 0x6A0($s0)
    ctx->pc = 0x10c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x10c6c4: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x10C6C4u;
    {
        const bool branch_taken_0x10c6c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C6C4u;
        // 0x10c6c8: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c6c4) {
            ctx->pc = 0x10C704u;
            goto label_10c704;
        }
    }
    ctx->pc = 0x10C6CCu;
    // 0x10c6cc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10c6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10c6d0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10c6d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10c6d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10c6d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6d8: 0x8c4504b4  lw          $a1, 0x4B4($v0)
    ctx->pc = 0x10c6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1204)));
    // 0x10c6dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10c6dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c6e0: 0x8c4604b8  lw          $a2, 0x4B8($v0)
    ctx->pc = 0x10c6e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1208)));
    // 0x10c6e4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10c6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10c6e8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10C6E8u;
    SET_GPR_U32(ctx, 31, 0x10C6F0u);
    ctx->pc = 0x10C6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C6E8u;
    // 0x10c6ec: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10C6E8u, 0x10C6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C6F0u;
label_10c6f0:
    // 0x10c6f0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x10c6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x10c6f4: 0x8c4304ac  lw          $v1, 0x4AC($v0)
    ctx->pc = 0x10c6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1196)));
    // 0x10c6f8: 0x8c4404b0  lw          $a0, 0x4B0($v0)
    ctx->pc = 0x10c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1200)));
    // 0x10c6fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10c6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10c700: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x10c700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_10c704:
    // 0x10c704: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10c704u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10c708: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x10c708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c710: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10c710u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10c714: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10c714u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c718: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10C718u;
    SET_GPR_U32(ctx, 31, 0x10C720u);
    ctx->pc = 0x10C71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C718u;
    // 0x10c71c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10C718u, 0x10C720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C720u;
label_10c720:
    // 0x10c720: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x10c720u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x10c724: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10c724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10c728: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x10c728u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x10c72c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x10c72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_10c730:
    // 0x10c730: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x10c730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x10c734: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C734u;
    {
        const bool branch_taken_0x10c734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c734) {
            ctx->pc = 0x10C748u;
            goto label_10c748;
        }
    }
    ctx->pc = 0x10C73Cu;
    // 0x10c73c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x10c73cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x10c740: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10C740u;
    {
        const bool branch_taken_0x10c740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c740) {
            ctx->pc = 0x10C744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C740u;
            // 0x10c744: 0x8e0206a0  lw          $v0, 0x6A0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C768u;
            goto label_10c768;
        }
    }
    ctx->pc = 0x10C748u;
label_10c748:
    // 0x10c748: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x10c748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x10c74c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10c74cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10c750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c758: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10c758u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10c75c: 0xc0560a2  jal         func_158288
    ctx->pc = 0x10C75Cu;
    SET_GPR_U32(ctx, 31, 0x10C764u);
    ctx->pc = 0x10C760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C75Cu;
    // 0x10c760: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x10C75Cu, 0x10C764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C764u;
label_10c764:
    // 0x10c764: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x10c764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_10c768:
    // 0x10c768: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10C768u;
    {
        const bool branch_taken_0x10c768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C768u;
        // 0x10c76c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c768) {
            ctx->pc = 0x10C78Cu;
            goto label_10c78c;
        }
    }
    ctx->pc = 0x10C770u;
    // 0x10c770: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x10c770u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
    // 0x10c774: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x10c774u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x10c778: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c778u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c77c: 0x0  nop
    ctx->pc = 0x10c77cu;
    // NOP
    // 0x10c780: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10c780u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10c784: 0xc0560a2  jal         func_158288
    ctx->pc = 0x10C784u;
    SET_GPR_U32(ctx, 31, 0x10C78Cu);
    ctx->pc = 0x10C788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C784u;
    // 0x10c788: 0xe60005a8  swc1        $f0, 0x5A8($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x158288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158288u, 0x10C784u, 0x10C78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C78Cu;
label_10c78c:
    // 0x10c78c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x10c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x10c790: 0x8e0405d8  lw          $a0, 0x5D8($s0)
    ctx->pc = 0x10c790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1496)));
    // 0x10c794: 0xc440d484  lwc1        $f0, -0x2B7C($v0)
    ctx->pc = 0x10c794u;
    { uint32_t bits = FAST_READ32(0x3BD484u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c798: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x10c798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x10c79c: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x10C79Cu;
    {
        const bool branch_taken_0x10c79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x10C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C79Cu;
        // 0x10c7a0: 0xe60015f0  swc1        $f0, 0x15F0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c79c) {
            ctx->pc = 0x10C85Cu;
            goto label_10c85c;
        }
    }
    ctx->pc = 0x10C7A4u;
    // 0x10c7a4: 0x9202061f  lbu         $v0, 0x61F($s0)
    ctx->pc = 0x10c7a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1567)));
    // 0x10c7a8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x10C7A8u;
    {
        const bool branch_taken_0x10c7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c7a8) {
            ctx->pc = 0x10C82Cu;
            goto label_10c82c;
        }
    }
    ctx->pc = 0x10C7B0u;
    // 0x10c7b0: 0xc6010608  lwc1        $f1, 0x608($s0)
    ctx->pc = 0x10c7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c7b4: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x10c7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x10c7b8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x10c7b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x10c7bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c7bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c7c0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x10c7c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10c7c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x10c7c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x10c7c8: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x10c7c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c7cc: 0x0  nop
    ctx->pc = 0x10c7ccu;
    // NOP
    // 0x10c7d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10C7D0u;
    {
        const bool branch_taken_0x10c7d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10c7d0) {
            ctx->pc = 0x10C7D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C7D0u;
            // 0x10c7d4: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C7D8u;
            goto label_10c7d8;
        }
    }
    ctx->pc = 0x10C7D8u;
label_10c7d8:
    // 0x10c7d8: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x10c7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x10c7dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10c7dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10c7e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c7e4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x10c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x10c7e8: 0xc442d478  lwc1        $f2, -0x2B88($v0)
    ctx->pc = 0x10c7e8u;
    { uint32_t bits = FAST_READ32(0x3BD478u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10c7ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10c7ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10c7f0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x10c7f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c7f4: 0x0  nop
    ctx->pc = 0x10c7f4u;
    // NOP
    // 0x10c7f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10C7F8u;
    {
        const bool branch_taken_0x10c7f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10c7f8) {
            ctx->pc = 0x10C7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C7F8u;
            // 0x10c7fc: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C800u;
            goto label_10c800;
        }
    }
    ctx->pc = 0x10C800u;
label_10c800:
    // 0x10c800: 0xc6000604  lwc1        $f0, 0x604($s0)
    ctx->pc = 0x10c800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c804: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x10c804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c808: 0x0  nop
    ctx->pc = 0x10c808u;
    // NOP
    // 0x10c80c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10C80Cu;
    {
        const bool branch_taken_0x10c80c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10c80c) {
            ctx->pc = 0x10C810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C80Cu;
            // 0x10c810: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C814u;
            goto label_10c814;
        }
    }
    ctx->pc = 0x10C814u;
label_10c814:
    // 0x10c814: 0xc6000104  lwc1        $f0, 0x104($s0)
    ctx->pc = 0x10c814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c818: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10c818u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10c81c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10c81cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10c820: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x10C820u;
    SET_GPR_U32(ctx, 31, 0x10C828u);
    ctx->pc = 0x10C824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C820u;
    // 0x10c824: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x10C820u, 0x10C828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C828u;
label_10c828:
    // 0x10c828: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x10c828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_10c82c:
    // 0x10c82c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c830: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10c830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10c834: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10C834u;
    SET_GPR_U32(ctx, 31, 0x10C83Cu);
    ctx->pc = 0x10C838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C834u;
    // 0x10c838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10C834u, 0x10C83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C83Cu;
label_10c83c:
    // 0x10c83c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c83cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c840: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x10C840u;
    SET_GPR_U32(ctx, 31, 0x10C848u);
    ctx->pc = 0x10C844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C840u;
    // 0x10c844: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10C840u, 0x10C848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C848u;
label_10c848:
    // 0x10c848: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10c848u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10c84c: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x10C84Cu;
    SET_GPR_U32(ctx, 31, 0x10C854u);
    ctx->pc = 0x10C850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C84Cu;
    // 0x10c850: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10C84Cu, 0x10C854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C854u;
label_10c854:
    // 0x10c854: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x10C854u;
    {
        const bool branch_taken_0x10c854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C854u;
        // 0x10c858: 0x9202061f  lbu         $v0, 0x61F($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1567)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c854) {
            ctx->pc = 0x10C8ACu;
            goto label_10c8ac;
        }
    }
    ctx->pc = 0x10C85Cu;
label_10c85c:
    // 0x10c85c: 0xc60d15fc  lwc1        $f13, 0x15FC($s0)
    ctx->pc = 0x10c85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x10c860: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x10c860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x10c864: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10c864u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x10c868: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x10c868u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x10c86c: 0xc0b687e  jal         func_2DA1F8
    ctx->pc = 0x10C86Cu;
    SET_GPR_U32(ctx, 31, 0x10C874u);
    ctx->pc = 0x10C870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C86Cu;
    // 0x10c870: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x10C86Cu, 0x10C874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C874u;
label_10c874:
    // 0x10c874: 0xc6010104  lwc1        $f1, 0x104($s0)
    ctx->pc = 0x10c874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c878: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x10c878u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x10c87c: 0x46000b06  mov.s       $f12, $f1
    ctx->pc = 0x10c87cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[1]);
    // 0x10c880: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x10C880u;
    SET_GPR_U32(ctx, 31, 0x10C888u);
    ctx->pc = 0x10C884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C880u;
    // 0x10c884: 0xe6010104  swc1        $f1, 0x104($s0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x10C880u, 0x10C888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C888u;
label_10c888:
    // 0x10c888: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x10c888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x10c88c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10C88Cu;
    SET_GPR_U32(ctx, 31, 0x10C894u);
    ctx->pc = 0x10C890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C88Cu;
    // 0x10c890: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10C88Cu, 0x10C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C894u;
label_10c894:
    // 0x10c894: 0xc0528ac  jal         func_14A2B0
    ctx->pc = 0x10C894u;
    SET_GPR_U32(ctx, 31, 0x10C89Cu);
    ctx->pc = 0x10C898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C894u;
    // 0x10c898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A2B0u, 0x10C894u, 0x10C89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C89Cu;
label_10c89c:
    // 0x10c89c: 0xc60c15fc  lwc1        $f12, 0x15FC($s0)
    ctx->pc = 0x10c89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10c8a0: 0xc0b6a78  jal         func_2DA9E0
    ctx->pc = 0x10C8A0u;
    SET_GPR_U32(ctx, 31, 0x10C8A8u);
    ctx->pc = 0x10C8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C8A0u;
    // 0x10c8a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9E0u, 0x10C8A0u, 0x10C8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C8A8u;
label_10c8a8:
    // 0x10c8a8: 0x9202061f  lbu         $v0, 0x61F($s0)
    ctx->pc = 0x10c8a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1567)));
label_10c8ac:
    // 0x10c8ac: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x10C8ACu;
    {
        const bool branch_taken_0x10c8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c8ac) {
            ctx->pc = 0x10C8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C8ACu;
            // 0x10c8b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C904u;
            goto label_10c904;
        }
    }
    ctx->pc = 0x10C8B4u;
    // 0x10c8b4: 0xc601060c  lwc1        $f1, 0x60C($s0)
    ctx->pc = 0x10c8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c8b8: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x10c8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x10c8bc: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x10c8bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x10c8c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c8c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c8c4: 0x0  nop
    ctx->pc = 0x10c8c4u;
    // NOP
    // 0x10c8c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x10c8c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c8cc: 0x0  nop
    ctx->pc = 0x10c8ccu;
    // NOP
    // 0x10c8d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x10C8D0u;
    {
        const bool branch_taken_0x10c8d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10C8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8D0u;
        // 0x10c8d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8d0) {
            ctx->pc = 0x10C8DCu;
            goto label_10c8dc;
        }
    }
    ctx->pc = 0x10C8D8u;
    // 0x10c8d8: 0xa2021602  sb          $v0, 0x1602($s0)
    ctx->pc = 0x10c8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5634), (uint8_t)GPR_U32(ctx, 2));
label_10c8dc:
    // 0x10c8dc: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x10c8dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x10c8e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C8E0u;
    {
        const bool branch_taken_0x10c8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8E0u;
        // 0x10c8e4: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8e0) {
            ctx->pc = 0x10C900u;
            goto label_10c900;
        }
    }
    ctx->pc = 0x10C8E8u;
    // 0x10c8e8: 0x9043b010  lbu         $v1, -0x4FF0($v0)
    ctx->pc = 0x10c8e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294946832)));
    // 0x10c8ec: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C8ECu;
    {
        const bool branch_taken_0x10c8ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C8ECu;
        // 0x10c8f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c8ec) {
            ctx->pc = 0x10C904u;
            goto label_10c904;
        }
    }
    ctx->pc = 0x10C8F4u;
    // 0x10c8f4: 0x8e0215f4  lw          $v0, 0x15F4($s0)
    ctx->pc = 0x10c8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5620)));
    // 0x10c8f8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x10c8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x10c8fc: 0xae0215f4  sw          $v0, 0x15F4($s0)
    ctx->pc = 0x10c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5620), GPR_U32(ctx, 2));
label_10c900:
    // 0x10c900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10c900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10c904:
    // 0x10c904: 0xc048e4e  jal         func_123938
    ctx->pc = 0x10C904u;
    SET_GPR_U32(ctx, 31, 0x10C90Cu);
    ctx->pc = 0x10C908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C904u;
    // 0x10c908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10C904u, 0x10C90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C90Cu;
label_10c90c:
    // 0x10c90c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C90Cu;
    {
        const bool branch_taken_0x10c90c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c90c) {
            ctx->pc = 0x10C910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C90Cu;
            // 0x10c910: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C920u;
            goto label_10c920;
        }
    }
    ctx->pc = 0x10C914u;
    // 0x10c914: 0xc04afee  jal         func_12BFB8
    ctx->pc = 0x10C914u;
    SET_GPR_U32(ctx, 31, 0x10C91Cu);
    ctx->pc = 0x10C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C914u;
    // 0x10c918: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BFB8u, 0x10C914u, 0x10C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C91Cu;
label_10c91c:
    // 0x10c91c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10c91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_10c920:
    // 0x10c920: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10c920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c924: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x10c924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10c928: 0x3e00008  jr          $ra
    ctx->pc = 0x10C928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C928u;
        // 0x10c92c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C930u;
}
