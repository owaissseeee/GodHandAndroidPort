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

// Function: func_002AC378
// Address: 0x2ac378 - 0x2ac538
void func_002AC378_0x2ac378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AC378_0x2ac378");
#endif

    switch (ctx->pc) {
        case 0x2ac41cu: goto label_2ac41c;
        default: break;
    }

    ctx->pc = 0x2ac378u;

    // 0x2ac378: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ac378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ac37c: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x2ac37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x2ac380: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ac380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ac384: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ac384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ac388: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2ac388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac38c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ac38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ac390: 0x8e11001c  lw          $s1, 0x1C($s0)
    ctx->pc = 0x2ac390u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2ac394: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2ac394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2ac398: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x2ac398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x2ac39c: 0x10400061  beqz        $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x2AC39Cu;
    {
        const bool branch_taken_0x2ac39c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC39Cu;
        // 0x2ac3a0: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac39c) {
            ctx->pc = 0x2AC524u;
            goto label_2ac524;
        }
    }
    ctx->pc = 0x2AC3A4u;
    // 0x2ac3a4: 0x8e07002c  lw          $a3, 0x2C($s0)
    ctx->pc = 0x2ac3a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ac3a8: 0x30e20400  andi        $v0, $a3, 0x400
    ctx->pc = 0x2ac3a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1024);
    // 0x2ac3ac: 0x5440005e  bnel        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x2AC3ACu;
    {
        const bool branch_taken_0x2ac3ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac3ac) {
            ctx->pc = 0x2AC3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC3ACu;
            // 0x2ac3b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC528u;
            goto label_2ac528;
        }
    }
    ctx->pc = 0x2AC3B4u;
    // 0x2ac3b4: 0x82220064  lb          $v0, 0x64($s1)
    ctx->pc = 0x2ac3b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x2ac3b8: 0x5440005b  bnel        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x2AC3B8u;
    {
        const bool branch_taken_0x2ac3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac3b8) {
            ctx->pc = 0x2AC3BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC3B8u;
            // 0x2ac3bc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC528u;
            goto label_2ac528;
        }
    }
    ctx->pc = 0x2AC3C0u;
    // 0x2ac3c0: 0x86260278  lh          $a2, 0x278($s1)
    ctx->pc = 0x2ac3c0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x2ac3c4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2ac3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2ac3c8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2ac3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2ac3cc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2ac3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2ac3d0: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x2ac3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2ac3d4: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x2ac3d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ac3d8: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x2ac3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2ac3dc: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC3DCu;
    {
        const bool branch_taken_0x2ac3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3DCu;
        // 0x2ac3e0: 0x84440284  lh          $a0, 0x284($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 644)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac3dc) {
            ctx->pc = 0x2AC3FCu;
            goto label_2ac3fc;
        }
    }
    ctx->pc = 0x2AC3E4u;
    // 0x2ac3e4: 0x960200a8  lhu         $v0, 0xA8($s0)
    ctx->pc = 0x2ac3e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2ac3e8: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ac3e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ac3ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AC3ECu;
    {
        const bool branch_taken_0x2ac3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3ECu;
        // 0x2ac3f0: 0x34e20400  ori         $v0, $a3, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac3ec) {
            ctx->pc = 0x2AC40Cu;
            goto label_2ac40c;
        }
    }
    ctx->pc = 0x2AC3F4u;
    // 0x2ac3f4: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x2AC3F4u;
    {
        const bool branch_taken_0x2ac3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AC3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC3F4u;
        // 0x2ac3f8: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac3f4) {
            ctx->pc = 0x2AC524u;
            goto label_2ac524;
        }
    }
    ctx->pc = 0x2AC3FCu;
label_2ac3fc:
    // 0x2ac3fc: 0x960200a8  lhu         $v0, 0xA8($s0)
    ctx->pc = 0x2ac3fcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2ac400: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2ac400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2ac404: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2AC404u;
    {
        const bool branch_taken_0x2ac404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ac404) {
            ctx->pc = 0x2AC408u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AC404u;
            // 0x2ac408: 0xa60000a8  sh          $zero, 0xA8($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AC40Cu;
            goto label_2ac40c;
        }
    }
    ctx->pc = 0x2AC40Cu;
label_2ac40c:
    // 0x2ac40c: 0x860500a8  lh          $a1, 0xA8($s0)
    ctx->pc = 0x2ac40cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2ac410: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x2ac410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ac414: 0xc0ab194  jal         func_2AC650
    ctx->pc = 0x2AC414u;
    SET_GPR_U32(ctx, 31, 0x2AC41Cu);
    ctx->pc = 0x2AC418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AC414u;
    // 0x2ac418: 0x8e070010  lw          $a3, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC650u, 0x2AC414u, 0x2AC41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AC41Cu;
label_2ac41c:
    // 0x2ac41c: 0x92230050  lbu         $v1, 0x50($s1)
    ctx->pc = 0x2ac41cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x2ac420: 0x922202dc  lbu         $v0, 0x2DC($s1)
    ctx->pc = 0x2ac420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 732)));
    // 0x2ac424: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ac424u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ac428: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ac428u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ac42c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2ac42cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac430: 0x0  nop
    ctx->pc = 0x2ac430u;
    // NOP
    // 0x2ac434: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ac434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ac438: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ac438u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac43c: 0x0  nop
    ctx->pc = 0x2ac43cu;
    // NOP
    // 0x2ac440: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ac440u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ac444: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x2ac444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2ac448: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2ac448u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x2ac44c: 0x4217a  dsrl        $a0, $a0, 5
    ctx->pc = 0x2ac44cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 5);
    // 0x2ac450: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2ac450u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ac454: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2ac454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2ac458: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2ac458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2ac45c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ac45cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ac460: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac460u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2ac464: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2ac464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ac468: 0xa202004c  sb          $v0, 0x4C($s0)
    ctx->pc = 0x2ac468u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ac46c: 0x92230051  lbu         $v1, 0x51($s1)
    ctx->pc = 0x2ac46cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 81)));
    // 0x2ac470: 0x922202dd  lbu         $v0, 0x2DD($s1)
    ctx->pc = 0x2ac470u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 733)));
    // 0x2ac474: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ac474u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac478: 0x0  nop
    ctx->pc = 0x2ac478u;
    // NOP
    // 0x2ac47c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ac47cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ac480: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ac480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac484: 0x0  nop
    ctx->pc = 0x2ac484u;
    // NOP
    // 0x2ac488: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ac488u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ac48c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2ac48cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2ac490: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ac490u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ac494: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ac494u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ac498: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac498u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac49c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ac49cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ac4a0: 0xa202004d  sb          $v0, 0x4D($s0)
    ctx->pc = 0x2ac4a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ac4a4: 0x92230052  lbu         $v1, 0x52($s1)
    ctx->pc = 0x2ac4a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
    // 0x2ac4a8: 0x922202de  lbu         $v0, 0x2DE($s1)
    ctx->pc = 0x2ac4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 734)));
    // 0x2ac4ac: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ac4acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac4b0: 0x0  nop
    ctx->pc = 0x2ac4b0u;
    // NOP
    // 0x2ac4b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ac4b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ac4b8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ac4b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac4bc: 0x0  nop
    ctx->pc = 0x2ac4bcu;
    // NOP
    // 0x2ac4c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ac4c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ac4c4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2ac4c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2ac4c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ac4c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ac4cc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2ac4ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2ac4d0: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac4d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2ac4d4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2ac4d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ac4d8: 0xa202004e  sb          $v0, 0x4E($s0)
    ctx->pc = 0x2ac4d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ac4dc: 0x922302df  lbu         $v1, 0x2DF($s1)
    ctx->pc = 0x2ac4dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 735)));
    // 0x2ac4e0: 0x92220053  lbu         $v0, 0x53($s1)
    ctx->pc = 0x2ac4e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 83)));
    // 0x2ac4e4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ac4e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ac4e8: 0x0  nop
    ctx->pc = 0x2ac4e8u;
    // NOP
    // 0x2ac4ec: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2ac4ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2ac4f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ac4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ac4f4: 0x0  nop
    ctx->pc = 0x2ac4f4u;
    // NOP
    // 0x2ac4f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ac4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ac4fc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2ac4fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2ac500: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2ac500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2ac504: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2ac504u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2ac508: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2ac508u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2ac50c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2ac50cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2ac510: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2AC510u;
    {
        const bool branch_taken_0x2ac510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AC514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC510u;
        // 0x2ac514: 0xa202004f  sb          $v0, 0x4F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ac510) {
            ctx->pc = 0x2AC524u;
            goto label_2ac524;
        }
    }
    ctx->pc = 0x2AC518u;
    // 0x2ac518: 0x960200a8  lhu         $v0, 0xA8($s0)
    ctx->pc = 0x2ac518u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2ac51c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ac51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2ac520: 0xa60200a8  sh          $v0, 0xA8($s0)
    ctx->pc = 0x2ac520u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 168), (uint16_t)GPR_U32(ctx, 2));
label_2ac524:
    // 0x2ac524: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ac524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ac528:
    // 0x2ac528: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ac528u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ac52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ac52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ac530: 0x3e00008  jr          $ra
    ctx->pc = 0x2AC530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AC534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AC530u;
        // 0x2ac534: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AC530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AC538u;
}
