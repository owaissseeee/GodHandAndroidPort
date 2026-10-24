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

// Function: func_002F5588
// Address: 0x2f5588 - 0x2f56c0
void func_002F5588_0x2f5588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F5588_0x2f5588");
#endif

    ctx->pc = 0x2f5588u;

    // 0x2f5588: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2f5588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2f558c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f558cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f5590: 0x24427b00  addiu       $v0, $v0, 0x7B00
    ctx->pc = 0x2f5590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31488));
    // 0x2f5594: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2f5594u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(FAST_READ128(0x747B00u));
    // 0x2f5598: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f5598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f559c: 0x8ca70114  lw          $a3, 0x114($a1)
    ctx->pc = 0x2f559cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
    // 0x2f55a0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f55a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f55a4: 0x8ca20110  lw          $v0, 0x110($a1)
    ctx->pc = 0x2f55a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x2f55a8: 0x90e302b4  lbu         $v1, 0x2B4($a3)
    ctx->pc = 0x2f55a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 692)));
    // 0x2f55ac: 0x804600be  lb          $a2, 0xBE($v0)
    ctx->pc = 0x2f55acu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 190)));
    // 0x2f55b0: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F55B0u;
    {
        const bool branch_taken_0x2f55b0 = (GPR_S64(ctx, 6) < 0);
        ctx->pc = 0x2F55B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55B0u;
        // 0x2f55b4: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55b0) {
            ctx->pc = 0x2F55C0u;
            goto label_2f55c0;
        }
    }
    ctx->pc = 0x2F55B8u;
    // 0x2f55b8: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x2f55b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f55bc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2f55bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f55c0:
    // 0x2f55c0: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x2f55c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x2f55c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F55C4u;
    {
        const bool branch_taken_0x2f55c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55C4u;
        // 0x2f55c8: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55c4) {
            ctx->pc = 0x2F55DCu;
            goto label_2f55dc;
        }
    }
    ctx->pc = 0x2F55CCu;
    // 0x2f55cc: 0x8ce30278  lw          $v1, 0x278($a3)
    ctx->pc = 0x2f55ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 632)));
    // 0x2f55d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f55d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f55d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F55D4u;
    {
        const bool branch_taken_0x2f55d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F55D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F55D4u;
        // 0x2f55d8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f55d4) {
            ctx->pc = 0x2F55E0u;
            goto label_2f55e0;
        }
    }
    ctx->pc = 0x2F55DCu;
label_2f55dc:
    // 0x2f55dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f55dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f55e0:
    // 0x2f55e0: 0xc44300b8  lwc1        $f3, 0xB8($v0)
    ctx->pc = 0x2f55e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f55e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f55e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f55e8: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2f55e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f55ec: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x2f55ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f55f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f55f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f55f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f55f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f55f8: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2f55f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2f55fc: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2f55fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2f5600: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2f5600u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2f5604: 0xe7a2001c  swc1        $f2, 0x1C($sp)
    ctx->pc = 0x2f5604u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2f5608: 0x8ca60114  lw          $a2, 0x114($a1)
    ctx->pc = 0x2f5608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 276)));
    // 0x2f560c: 0x8ca502b0  lw          $a1, 0x2B0($a1)
    ctx->pc = 0x2f560cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 688)));
    // 0x2f5610: 0x90c302b4  lbu         $v1, 0x2B4($a2)
    ctx->pc = 0x2f5610u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 692)));
    // 0x2f5614: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F5614u;
    {
        const bool branch_taken_0x2f5614 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2F5618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5614u;
        // 0x2f5618: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5614) {
            ctx->pc = 0x2F5624u;
            goto label_2f5624;
        }
    }
    ctx->pc = 0x2F561Cu;
    // 0x2f561c: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2f561cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2f5620: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2f5620u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f5624:
    // 0x2f5624: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2f5624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2f5628: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F5628u;
    {
        const bool branch_taken_0x2f5628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F562Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5628u;
        // 0x2f562c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5628) {
            ctx->pc = 0x2F5640u;
            goto label_2f5640;
        }
    }
    ctx->pc = 0x2F5630u;
    // 0x2f5630: 0x8cc30278  lw          $v1, 0x278($a2)
    ctx->pc = 0x2f5630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 632)));
    // 0x2f5634: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5638: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F5638u;
    {
        const bool branch_taken_0x2f5638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F563Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F5638u;
        // 0x2f563c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f5638) {
            ctx->pc = 0x2F5644u;
            goto label_2f5644;
        }
    }
    ctx->pc = 0x2F5640u;
label_2f5640:
    // 0x2f5640: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f5640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f5644:
    // 0x2f5644: 0xc44000b0  lwc1        $f0, 0xB0($v0)
    ctx->pc = 0x2f5644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5648: 0xc44100b4  lwc1        $f1, 0xB4($v0)
    ctx->pc = 0x2f5648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f564c: 0xc44200b8  lwc1        $f2, 0xB8($v0)
    ctx->pc = 0x2f564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f5650: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2f5650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2f5654: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2f5654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2f5658: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2f5658u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2f565c: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x2f565cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x2f5660: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x2f5660u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
    // 0x2f5664: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2f5664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f5668: 0xc7a50014  lwc1        $f5, 0x14($sp)
    ctx->pc = 0x2f5668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2f566c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x2f566cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f5670: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2f5670u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2f5674: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x2f5674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2f5678: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2f5678u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2f567c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f567cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f5680: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f5680u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f5684: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x2f5684u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x2f5688: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f5688u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f568c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2f568cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2f5690: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2f5690u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2f5694: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2f5694u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2f5698: 0xe7a5003c  swc1        $f5, 0x3C($sp)
    ctx->pc = 0x2f5698u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x2f569c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f569cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f56a0: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2f56a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f56a4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2f56a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f56a8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2f56a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2f56ac: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2f56acu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f56b0: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2f56b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2f56b4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2f56b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f56b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F56B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F56BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F56B8u;
        // 0x2f56bc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F56B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F56C0u;
}
