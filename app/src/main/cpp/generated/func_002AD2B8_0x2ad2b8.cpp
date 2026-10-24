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

// Function: func_002AD2B8
// Address: 0x2ad2b8 - 0x2ad590
void func_002AD2B8_0x2ad2b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AD2B8_0x2ad2b8");
#endif

    switch (ctx->pc) {
        case 0x2ad340u: goto label_2ad340;
        case 0x2ad3b8u: goto label_2ad3b8;
        case 0x2ad3d8u: goto label_2ad3d8;
        case 0x2ad478u: goto label_2ad478;
        case 0x2ad548u: goto label_2ad548;
        default: break;
    }

    ctx->pc = 0x2ad2b8u;

    // 0x2ad2b8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2ad2b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2ad2bc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2ad2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2ad2c0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2ad2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2ad2c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad2c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad2c8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2ad2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2ad2cc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2ad2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2ad2d0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2ad2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2ad2d4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2ad2d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2ad2d8: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2ad2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2ad2dc: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2ad2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2ad2e0: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2AD2E0u;
    {
        const bool branch_taken_0x2ad2e0 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2AD2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD2E0u;
        // 0x2ad2e4: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad2e0) {
            ctx->pc = 0x2AD2FCu;
            goto label_2ad2fc;
        }
    }
    ctx->pc = 0x2AD2E8u;
    // 0x2ad2e8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2ad2e8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad2ec: 0x0  nop
    ctx->pc = 0x2ad2ecu;
    // NOP
    // 0x2ad2f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ad2f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ad2f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2AD2F4u;
    {
        const bool branch_taken_0x2ad2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad2f4) {
            ctx->pc = 0x2AD318u;
            goto label_2ad318;
        }
    }
    ctx->pc = 0x2AD2FCu;
label_2ad2fc:
    // 0x2ad2fc: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x2ad2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x2ad300: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2ad300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2ad304: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ad304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ad308: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ad308u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad30c: 0x0  nop
    ctx->pc = 0x2ad30cu;
    // NOP
    // 0x2ad310: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2ad310u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2ad314: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2ad314u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2ad318:
    // 0x2ad318: 0x0  nop
    ctx->pc = 0x2ad318u;
    // NOP
    // 0x2ad31c: 0x0  nop
    ctx->pc = 0x2ad31cu;
    // NOP
    // 0x2ad320: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2ad320u;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[0]);
    // 0x2ad324: 0x58e00021  blezl       $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AD324u;
    {
        const bool branch_taken_0x2ad324 = (GPR_S64(ctx, 7) <= 0);
        if (branch_taken_0x2ad324) {
            ctx->pc = 0x2AD328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD324u;
            // 0x2ad328: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD3ACu;
            goto label_2ad3ac;
        }
    }
    ctx->pc = 0x2AD32Cu;
    // 0x2ad32c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ad32cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad330: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ad330u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ad334: 0x240b0050  addiu       $t3, $zero, 0x50
    ctx->pc = 0x2ad334u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2ad338: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2ad338u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad33c: 0x0  nop
    ctx->pc = 0x2ad33cu;
    // NOP
label_2ad340:
    // 0x2ad340: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x2ad340u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x2ad344: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ad344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ad348: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x2ad348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x2ad34c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ad34cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad350: 0x0  nop
    ctx->pc = 0x2ad350u;
    // NOP
    // 0x2ad354: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ad354u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ad358: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ad358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ad35c: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x2ad35cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2ad360: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2ad360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ad364: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2ad364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ad368: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x2ad368u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x2ad36c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2ad36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2ad370: 0x0  nop
    ctx->pc = 0x2ad370u;
    // NOP
    // 0x2ad374: 0x0  nop
    ctx->pc = 0x2ad374u;
    // NOP
    // 0x2ad378: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x2ad378u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
    // 0x2ad37c: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x2ad37cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ad380: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2ad380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ad384: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x2ad384u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x2ad388: 0xe4a10040  swc1        $f1, 0x40($a1)
    ctx->pc = 0x2ad388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x2ad38c: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x2ad38cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
    // 0x2ad390: 0x544a0002  bnel        $v0, $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AD390u;
    {
        const bool branch_taken_0x2ad390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 10));
        if (branch_taken_0x2ad390) {
            ctx->pc = 0x2AD394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD390u;
            // 0x2ad394: 0xa0a00048  sb          $zero, 0x48($a1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD39Cu;
            goto label_2ad39c;
        }
    }
    ctx->pc = 0x2AD398u;
    // 0x2ad398: 0xa0a20048  sb          $v0, 0x48($a1)
    ctx->pc = 0x2ad398u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 2));
label_2ad39c:
    // 0x2ad39c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2ad39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2ad3a0: 0x14e0ffe7  bnez        $a3, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2AD3A0u;
    {
        const bool branch_taken_0x2ad3a0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3A0u;
        // 0x2ad3a4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad3a0) {
            ctx->pc = 0x2AD340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad340;
        }
    }
    ctx->pc = 0x2AD3A8u;
    // 0x2ad3a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ad3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ad3ac:
    // 0x2ad3ac: 0x440002a  bltz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x2AD3ACu;
    {
        const bool branch_taken_0x2ad3ac = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x2AD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3ACu;
        // 0x2ad3b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad3ac) {
            ctx->pc = 0x2AD458u;
            goto label_2ad458;
        }
    }
    ctx->pc = 0x2AD3B4u;
    // 0x2ad3b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ad3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ad3b8:
    // 0x2ad3b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2ad3b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad3bc: 0x4600021  bltz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2AD3BCu;
    {
        const bool branch_taken_0x2ad3bc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2AD3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD3BCu;
        // 0x2ad3c0: 0x24ea0001  addiu       $t2, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad3bc) {
            ctx->pc = 0x2AD444u;
            goto label_2ad444;
        }
    }
    ctx->pc = 0x2AD3C4u;
    // 0x2ad3c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ad3c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ad3c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ad3c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ad3cc: 0x240b0050  addiu       $t3, $zero, 0x50
    ctx->pc = 0x2ad3ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2ad3d0: 0x672018  mult        $a0, $v1, $a3
    ctx->pc = 0x2ad3d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2ad3d4: 0x0  nop
    ctx->pc = 0x2ad3d4u;
    // NOP
label_2ad3d8:
    // 0x2ad3d8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2ad3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ad3dc: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x2ad3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x2ad3e0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ad3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ad3e4: 0x4b1018  mult        $v0, $v0, $t3
    ctx->pc = 0x2ad3e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ad3e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ad3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2ad3ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ad3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ad3f0: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x2ad3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad3f4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2ad3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2ad3f8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x2ad3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x2ad3fc: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x2ad3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x2ad400: 0x0  nop
    ctx->pc = 0x2ad400u;
    // NOP
    // 0x2ad404: 0x0  nop
    ctx->pc = 0x2ad404u;
    // NOP
    // 0x2ad408: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x2ad408u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x2ad40c: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x2ad40cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x2ad410: 0xe4600044  swc1        $f0, 0x44($v1)
    ctx->pc = 0x2ad410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 68), bits); }
    // 0x2ad414: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2ad414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2ad418: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2ad418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2ad41c: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x2ad41cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x2ad420: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2ad420u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2ad424: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2ad424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2ad428: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x2ad428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x2ad42c: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x2ad42cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x2ad430: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x2ad430u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x2ad434: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ad434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ad438: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x2ad438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2ad43c: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2AD43Cu;
    {
        const bool branch_taken_0x2ad43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD43Cu;
        // 0x2ad440: 0x672018  mult        $a0, $v1, $a3 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad43c) {
            ctx->pc = 0x2AD3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad3d8;
        }
    }
    ctx->pc = 0x2AD444u;
label_2ad444:
    // 0x2ad444: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ad444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ad448: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x2ad448u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad44c: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x2ad44cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2ad450: 0x5040ffd9  beql        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2AD450u;
    {
        const bool branch_taken_0x2ad450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ad450) {
            ctx->pc = 0x2AD454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AD450u;
            // 0x2ad454: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AD3B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad3b8;
        }
    }
    ctx->pc = 0x2AD458u;
label_2ad458:
    // 0x2ad458: 0x19200041  blez        $t1, . + 4 + (0x41 << 2)
    ctx->pc = 0x2AD458u;
    {
        const bool branch_taken_0x2ad458 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x2AD45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD458u;
        // 0x2ad45c: 0x100882d  daddu       $s1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad458) {
            ctx->pc = 0x2AD560u;
            goto label_2ad560;
        }
    }
    ctx->pc = 0x2AD460u;
    // 0x2ad460: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2ad460u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad464: 0x24140050  addiu       $s4, $zero, 0x50
    ctx->pc = 0x2ad464u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2ad468: 0x3c17003c  lui         $s7, 0x3C
    ctx->pc = 0x2ad468u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
    // 0x2ad46c: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x2ad46cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x2ad470: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2ad470u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2ad474: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ad474u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ad478:
    // 0x2ad478: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ad478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ad47c: 0x92220001  lbu         $v0, 0x1($s1)
    ctx->pc = 0x2ad47cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x2ad480: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ad480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ad484: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x2ad484u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ad488: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2ad488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ad48c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x2ad48cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ad490: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2ad490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ad494: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x2ad494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x2ad498: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2ad498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2ad49c: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x2ad49cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ad4a0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2ad4a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2ad4a4: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x2ad4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x2ad4a8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ad4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ad4ac: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x2ad4acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x2ad4b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2ad4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2ad4b4: 0x92250002  lbu         $a1, 0x2($s1)
    ctx->pc = 0x2ad4b4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x2ad4b8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2ad4b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ad4bc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2ad4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2ad4c0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2ad4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ad4c4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2ad4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2ad4c8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ad4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ad4cc: 0x541018  mult        $v0, $v0, $s4
    ctx->pc = 0x2ad4ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2ad4d0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2ad4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ad4d4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2ad4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x2ad4d8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2ad4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ad4dc: 0xc6e02390  lwc1        $f0, 0x2390($s7)
    ctx->pc = 0x2ad4dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 9104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad4e0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2ad4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ad4e4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ad4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2ad4e8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2ad4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ad4ec: 0xc6c02394  lwc1        $f0, 0x2394($s6)
    ctx->pc = 0x2ad4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 9108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ad4f0: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2ad4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2ad4f4: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2ad4f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2ad4f8: 0x92240004  lbu         $a0, 0x4($s1)
    ctx->pc = 0x2ad4f8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ad4fc: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2ad4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ad500: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x2ad500u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x2ad504: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x2ad504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2ad508: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x2ad508u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2ad50c: 0xa0640014  sb          $a0, 0x14($v1)
    ctx->pc = 0x2ad50cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 4));
    // 0x2ad510: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2ad510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ad514: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2ad514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ad518: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2ad518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2ad51c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2ad51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ad520: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2ad520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2ad524: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x2ad524u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ad528: 0xd8850000  lqc2        $vf5, 0x0($a0)
    ctx->pc = 0x2ad528u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2ad52c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2ad52cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2ad530: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2ad530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad534: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x2ad534u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2ad538: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2ad538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2ad53c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad540: 0xc07df7e  jal         func_1F7DF8
    ctx->pc = 0x2AD540u;
    SET_GPR_U32(ctx, 31, 0x2AD548u);
    ctx->pc = 0x2AD544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD540u;
    // 0x2ad544: 0x26310005  addiu       $s1, $s1, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DF8u, 0x2AD540u, 0x2AD548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD548u;
label_2ad548:
    // 0x2ad548: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2ad548u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2ad54c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2ad54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2ad550: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2ad550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x2ad554: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ad554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ad558: 0x1660ffc7  bnez        $s3, . + 4 + (-0x39 << 2)
    ctx->pc = 0x2AD558u;
    {
        const bool branch_taken_0x2ad558 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AD55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD558u;
        // 0x2ad55c: 0x26520018  addiu       $s2, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad558) {
            ctx->pc = 0x2AD478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ad478;
        }
    }
    ctx->pc = 0x2AD560u;
label_2ad560:
    // 0x2ad560: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2ad560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ad564: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2ad564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ad568: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2ad568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ad56c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2ad56cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ad570: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2ad570u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ad574: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2ad574u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ad578: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2ad578u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad57c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2ad57cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad580: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ad580u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad584: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD584u;
        // 0x2ad588: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD58Cu;
    // 0x2ad58c: 0x0  nop
    ctx->pc = 0x2ad58cu;
    // NOP
    ctx->pc = 0x2ad590u;
}
