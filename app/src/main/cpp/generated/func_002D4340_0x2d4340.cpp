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

// Function: func_002D4340
// Address: 0x2d4340 - 0x2d45b0
void func_002D4340_0x2d4340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D4340_0x2d4340");
#endif

    switch (ctx->pc) {
        case 0x2d4428u: goto label_2d4428;
        case 0x2d44e8u: goto label_2d44e8;
        case 0x2d44f4u: goto label_2d44f4;
        case 0x2d457cu: goto label_2d457c;
        default: break;
    }

    ctx->pc = 0x2d4340u;

    // 0x2d4340: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x2d4340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x2d4344: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2d4344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4348: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2d4348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2d434c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x2d434cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x2d4350: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x2d4350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x2d4354: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2d4354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2d4358: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x2d4358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x2d435c: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2d435cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2d4360: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2d4360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2d4364: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x2d4364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x2d4368: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x2d4368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x2d436c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d436cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d4370: 0x8d0c0018  lw          $t4, 0x18($t0)
    ctx->pc = 0x2d4370u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2d4374: 0x11800081  beqz        $t4, . + 4 + (0x81 << 2)
    ctx->pc = 0x2D4374u;
    {
        const bool branch_taken_0x2d4374 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4374u;
        // 0x2d4378: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4374) {
            ctx->pc = 0x2D457Cu;
            goto label_2d457c;
        }
    }
    ctx->pc = 0x2D437Cu;
    // 0x2d437c: 0x8506001c  lh          $a2, 0x1C($t0)
    ctx->pc = 0x2d437cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x2d4380: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2d4380u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4384: 0x2505000c  addiu       $a1, $t0, 0xC
    ctx->pc = 0x2d4384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x2d4388: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x2d4388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x2d438c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2d438cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d4390: 0x8c430210  lw          $v1, 0x210($v0)
    ctx->pc = 0x2d4390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x2d4394: 0x86202a  slt         $a0, $a0, $a2
    ctx->pc = 0x2d4394u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d4398: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2d4398u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d439c: 0x24c2000f  addiu       $v0, $a2, 0xF
    ctx->pc = 0x2d439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
    // 0x2d43a0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2d43a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2d43a4: 0xc4100b  movn        $v0, $a2, $a0
    ctx->pc = 0x2d43a4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x2d43a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d43a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2d43ac: 0x25903  sra         $t3, $v0, 4
    ctx->pc = 0x2d43acu;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2d43b0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2d43b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2d43b4: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x2d43b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d43b8: 0x8d030028  lw          $v1, 0x28($t0)
    ctx->pc = 0x2d43b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x2d43bc: 0x8cb10000  lw          $s1, 0x0($a1)
    ctx->pc = 0x2d43bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2d43c0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D43C0u;
    {
        const bool branch_taken_0x2d43c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43C0u;
        // 0x2d43c4: 0x9504001e  lhu         $a0, 0x1E($t0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d43c0) {
            ctx->pc = 0x2D43DCu;
            goto label_2d43dc;
        }
    }
    ctx->pc = 0x2D43C8u;
    // 0x2d43c8: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2d43c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d43cc: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2d43ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d43d0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d43d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2d43d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d43d8: 0x22042  srl         $a0, $v0, 1
    ctx->pc = 0x2d43d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_2d43dc:
    // 0x2d43dc: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2d43dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x2d43e0: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x2d43e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x2d43e4: 0x24a83  sra         $t1, $v0, 10
    ctx->pc = 0x2d43e4u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 10));
    // 0x2d43e8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2d43e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d43ec: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x2d43ecu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x2d43f0: 0x19600018  blez        $t3, . + 4 + (0x18 << 2)
    ctx->pc = 0x2D43F0u;
    {
        const bool branch_taken_0x2d43f0 = (GPR_S64(ctx, 11) <= 0);
        ctx->pc = 0x2D43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D43F0u;
        // 0x2d43f4: 0x3c150058  lui         $s5, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d43f0) {
            ctx->pc = 0x2D4454u;
            goto label_2d4454;
        }
    }
    ctx->pc = 0x2D43F8u;
    // 0x2d43f8: 0x91102  srl         $v0, $t1, 4
    ctx->pc = 0x2d43f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 4));
    // 0x2d43fc: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x2d43fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x2d4400: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x2d4400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    // 0x2d4404: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2d4404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d4408: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x2d4408u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    // 0x2d440c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2d440cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2d4410: 0x445025  or          $t2, $v0, $a0
    ctx->pc = 0x2d4410u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2d4414: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2d4414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2d4418: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x2d4418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d441c: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x2d441cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4420: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2d4420u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2d4424: 0x0  nop
    ctx->pc = 0x2d4424u;
    // NOP
label_2d4428:
    // 0x2d4428: 0xa71024  and         $v0, $a1, $a3
    ctx->pc = 0x2d4428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x2d442c: 0x26310050  addiu       $s1, $s1, 0x50
    ctx->pc = 0x2d442cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2d4430: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2d4430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2d4434: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2d4434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x2d4438: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2d4438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2d443c: 0xae2a000c  sw          $t2, 0xC($s1)
    ctx->pc = 0x2d443cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 10));
    // 0x2d4440: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x2d4440u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x2d4444: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x2d4444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2d4448: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2d4448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2d444c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2D444Cu;
    {
        const bool branch_taken_0x2d444c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D444Cu;
        // 0x2d4450: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d444c) {
            ctx->pc = 0x2D4428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d4428;
        }
    }
    ctx->pc = 0x2D4454u;
label_2d4454:
    // 0x2d4454: 0x85050020  lh          $a1, 0x20($t0)
    ctx->pc = 0x2d4454u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2d4458: 0x24d00010  addiu       $s0, $a2, 0x10
    ctx->pc = 0x2d4458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2d445c: 0x85040022  lh          $a0, 0x22($t0)
    ctx->pc = 0x2d445cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 34)));
    // 0x2d4460: 0x26310120  addiu       $s1, $s1, 0x120
    ctx->pc = 0x2d4460u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x2d4464: 0x85030026  lh          $v1, 0x26($t0)
    ctx->pc = 0x2d4464u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 38)));
    // 0x2d4468: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x2d4468u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2d446c: 0x0  nop
    ctx->pc = 0x2d446cu;
    // NOP
    // 0x2d4470: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2d4470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2d4474: 0x85020024  lh          $v0, 0x24($t0)
    ctx->pc = 0x2d4474u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x2d4478: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x2d4478u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2d447c: 0x0  nop
    ctx->pc = 0x2d447cu;
    // NOP
    // 0x2d4480: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2d4480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2d4484: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2d4484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2d4488: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2d4488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2d448c: 0x3421dc00  ori         $at, $at, 0xDC00
    ctx->pc = 0x2d448cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)56320);
    // 0x2d4490: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d4490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d4494: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2d4494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2d4498: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x2d4498u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2d449c: 0x0  nop
    ctx->pc = 0x2d449cu;
    // NOP
    // 0x2d44a0: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2d44a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2d44a4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d44a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d44a8: 0x0  nop
    ctx->pc = 0x2d44a8u;
    // NOP
    // 0x2d44ac: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2d44acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d44b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2d44b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2d44b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2d44b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d44b8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x2d44b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d44bc: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x2d44bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d44c0: 0xe7a40004  swc1        $f4, 0x4($sp)
    ctx->pc = 0x2d44c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d44c4: 0x24140800  addiu       $s4, $zero, 0x800
    ctx->pc = 0x2d44c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2d44c8: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2d44c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d44cc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x2d44ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d44d0: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x2d44d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d44d4: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2d44d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d44d8: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2d44d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2d44dc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2d44dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d44e0: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2d44e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2d44e4: 0x0  nop
    ctx->pc = 0x2d44e4u;
    // NOP
label_2d44e8:
    // 0x2d44e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d44e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d44ec: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2D44ECu;
    SET_GPR_U32(ctx, 31, 0x2D44F4u);
    ctx->pc = 0x2D44F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D44ECu;
    // 0x2d44f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2D44ECu, 0x2D44F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D44F4u;
label_2d44f4:
    // 0x2d44f4: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x2d44f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x2d44f8: 0x8ec21180  lw          $v0, 0x1180($s6)
    ctx->pc = 0x2d44f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4480)));
    // 0x2d44fc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2d44fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x2d4500: 0x8ea56b80  lw          $a1, 0x6B80($s5)
    ctx->pc = 0x2d4500u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 27520)));
    // 0x2d4504: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x2d4504u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x2d4508: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d4508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d450c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d450cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d4510: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2d4510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d4514: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2d4514u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2d4518: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2d4518u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2d451c: 0x2821023  subu        $v0, $s4, $v0
    ctx->pc = 0x2d451cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2d4520: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2d4520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2d4524: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2d4524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d4528: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x2d4528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x2d452c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2d452cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d4530: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x2d4530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x2d4534: 0x1660ffec  bnez        $s3, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2D4534u;
    {
        const bool branch_taken_0x2d4534 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D4538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D4534u;
        // 0x2d4538: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d4534) {
            ctx->pc = 0x2D44E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d44e8;
        }
    }
    ctx->pc = 0x2D453Cu;
    // 0x2d453c: 0x27c474a0  addiu       $a0, $fp, 0x74A0
    ctx->pc = 0x2d453cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 29856));
    // 0x2d4540: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4544: 0x8c820210  lw          $v0, 0x210($a0)
    ctx->pc = 0x2d4544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x2d4548: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x2d4548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2d454c: 0x31a03  sra         $v1, $v1, 8
    ctx->pc = 0x2d454cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 8));
    // 0x2d4550: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x2d4550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x2d4554: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d4554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d4558: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x2d4558u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2d455c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2d455cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d4560: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x2d4560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x2d4564: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x2d4564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x2d4568: 0x30c60fff  andi        $a2, $a2, 0xFFF
    ctx->pc = 0x2d4568u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4095);
    // 0x2d456c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2d456cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d4570: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2d4570u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d4574: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x2D4574u;
    SET_GPR_U32(ctx, 31, 0x2D457Cu);
    ctx->pc = 0x2D4578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D4574u;
    // 0x2d4578: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x2D4574u, 0x2D457Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D457Cu;
label_2d457c:
    // 0x2d457c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x2d457cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2d4580: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x2d4580u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2d4584: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x2d4584u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2d4588: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x2d4588u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2d458c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x2d458cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2d4590: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2d4590u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2d4594: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2d4594u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d4598: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x2d4598u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d459c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x2d459cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d45a0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d45a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d45a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D45A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D45A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D45A4u;
        // 0x2d45a8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D45A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D45ACu;
    // 0x2d45ac: 0x0  nop
    ctx->pc = 0x2d45acu;
    // NOP
    ctx->pc = 0x2d45b0u;
}
