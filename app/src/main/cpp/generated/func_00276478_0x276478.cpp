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

// Function: func_00276478
// Address: 0x276478 - 0x276618
void func_00276478_0x276478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00276478_0x276478");
#endif

    switch (ctx->pc) {
        case 0x276548u: goto label_276548;
        case 0x2765acu: goto label_2765ac;
        default: break;
    }

    ctx->pc = 0x276478u;

    // 0x276478: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x276478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27647c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x27647cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x276480: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x276480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x276484: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x276484u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276488: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x276488u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x27648c: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x27648cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x276490: 0x3842026a  xori        $v0, $v0, 0x26A
    ctx->pc = 0x276490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)618);
    // 0x276494: 0x5440005b  bnel        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x276494u;
    {
        const bool branch_taken_0x276494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x276494) {
            ctx->pc = 0x276498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276494u;
            // 0x276498: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276604u;
            goto label_276604;
        }
    }
    ctx->pc = 0x27649Cu;
    // 0x27649c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x27649cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2764a0: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2764a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2764a4: 0x8c637a84  lw          $v1, 0x7A84($v1)
    ctx->pc = 0x2764a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A84u));
    // 0x2764a8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2764a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2764ac: 0x5440004d  bnel        $v0, $zero, . + 4 + (0x4D << 2)
    ctx->pc = 0x2764ACu;
    {
        const bool branch_taken_0x2764ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2764ac) {
            ctx->pc = 0x2764B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2764ACu;
            // 0x2764b0: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2765E4u;
            goto label_2765e4;
        }
    }
    ctx->pc = 0x2764B4u;
    // 0x2764b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2764b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2764b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2764b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2764bc: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x2764BCu;
    {
        const bool branch_taken_0x2764bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2764bc) {
            ctx->pc = 0x2764C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2764BCu;
            // 0x2764c0: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2765E4u;
            goto label_2765e4;
        }
    }
    ctx->pc = 0x2764C4u;
    // 0x2764c4: 0x311ba  dsrl        $v0, $v1, 6
    ctx->pc = 0x2764c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 6);
    // 0x2764c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2764c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2764cc: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x2764CCu;
    {
        const bool branch_taken_0x2764cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2764cc) {
            ctx->pc = 0x2764D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2764CCu;
            // 0x2764d0: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2765E4u;
            goto label_2765e4;
        }
    }
    ctx->pc = 0x2764D4u;
    // 0x2764d4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2764d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2764d8: 0x8c42aff0  lw          $v0, -0x5010($v0)
    ctx->pc = 0x2764d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2764dc: 0x50400049  beql        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x2764DCu;
    {
        const bool branch_taken_0x2764dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2764dc) {
            ctx->pc = 0x2764E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2764DCu;
            // 0x2764e0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276604u;
            goto label_276604;
        }
    }
    ctx->pc = 0x2764E4u;
    // 0x2764e4: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2764e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2764e8: 0x24430210  addiu       $v1, $v0, 0x210
    ctx->pc = 0x2764e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 528));
    // 0x2764ec: 0x53a30008  beql        $sp, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2764ECu;
    {
        const bool branch_taken_0x2764ec = (GPR_U64(ctx, 29) == GPR_U64(ctx, 3));
        if (branch_taken_0x2764ec) {
            ctx->pc = 0x2764F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2764ECu;
            // 0x2764f0: 0x920302b4  lbu         $v1, 0x2B4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276510u;
            goto label_276510;
        }
    }
    ctx->pc = 0x2764F4u;
    // 0x2764f4: 0xc4400210  lwc1        $f0, 0x210($v0)
    ctx->pc = 0x2764f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2764f8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2764f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2764fc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x2764fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x276500: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x276500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x276504: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x276504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x276508: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x276508u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x27650c: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x27650cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
label_276510:
    // 0x276510: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x276510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x276514: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x276514u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276518: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x276518u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27651c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27651Cu;
    {
        const bool branch_taken_0x27651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27651Cu;
        // 0x276520: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27651c) {
            ctx->pc = 0x276530u;
            goto label_276530;
        }
    }
    ctx->pc = 0x276524u;
    // 0x276524: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x276524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x276528: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x276528u;
    {
        const bool branch_taken_0x276528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276528u;
        // 0x27652c: 0x8c420040  lw          $v0, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276528) {
            ctx->pc = 0x276534u;
            goto label_276534;
        }
    }
    ctx->pc = 0x276530u;
label_276530:
    // 0x276530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276534:
    // 0x276534: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x276534u;
    {
        const bool branch_taken_0x276534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276534) {
            ctx->pc = 0x276538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x276534u;
            // 0x276538: 0x8e0216d0  lw          $v0, 0x16D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276568u;
            goto label_276568;
        }
    }
    ctx->pc = 0x27653Cu;
    // 0x27653c: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x27653cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x276540: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x276540u;
    SET_GPR_U32(ctx, 31, 0x276548u);
    ctx->pc = 0x276544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x276540u;
    // 0x276544: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x276540u, 0x276548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276548u;
label_276548:
    // 0x276548: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x276548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x27654c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27654cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x276550: 0x0  nop
    ctx->pc = 0x276550u;
    // NOP
    // 0x276554: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x276554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x276558: 0x0  nop
    ctx->pc = 0x276558u;
    // NOP
    // 0x27655c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x27655Cu;
    {
        const bool branch_taken_0x27655c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27655c) {
            ctx->pc = 0x276560u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27655Cu;
            // 0x276560: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276564u;
            goto label_276564;
        }
    }
    ctx->pc = 0x276564u;
label_276564:
    // 0x276564: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x276564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
label_276568:
    // 0x276568: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x276568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x27656c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x27656cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x276570: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x276570u;
    {
        const bool branch_taken_0x276570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276570u;
        // 0x276574: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276570) {
            ctx->pc = 0x2765C8u;
            goto label_2765c8;
        }
    }
    ctx->pc = 0x276578u;
    // 0x276578: 0x920302b4  lbu         $v1, 0x2B4($s0)
    ctx->pc = 0x276578u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x27657c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x27657cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x276580: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x276580u;
    {
        const bool branch_taken_0x276580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x276584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276580u;
        // 0x276584: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276580) {
            ctx->pc = 0x276594u;
            goto label_276594;
        }
    }
    ctx->pc = 0x276588u;
    // 0x276588: 0x8e020278  lw          $v0, 0x278($s0)
    ctx->pc = 0x276588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
    // 0x27658c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27658Cu;
    {
        const bool branch_taken_0x27658c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27658Cu;
        // 0x276590: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27658c) {
            ctx->pc = 0x276598u;
            goto label_276598;
        }
    }
    ctx->pc = 0x276594u;
label_276594:
    // 0x276594: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x276594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_276598:
    // 0x276598: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x276598u;
    {
        const bool branch_taken_0x276598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276598) {
            ctx->pc = 0x2765C8u;
            goto label_2765c8;
        }
    }
    ctx->pc = 0x2765A0u;
    // 0x2765a0: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x2765a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x2765a4: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x2765A4u;
    SET_GPR_U32(ctx, 31, 0x2765ACu);
    ctx->pc = 0x2765A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2765A4u;
    // 0x2765a8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x2765A4u, 0x2765ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2765ACu;
label_2765ac:
    // 0x2765ac: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2765acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x2765b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2765b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2765b4: 0x0  nop
    ctx->pc = 0x2765b4u;
    // NOP
    // 0x2765b8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2765b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2765bc: 0x0  nop
    ctx->pc = 0x2765bcu;
    // NOP
    // 0x2765c0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2765C0u;
    {
        const bool branch_taken_0x2765c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2765c0) {
            ctx->pc = 0x2765C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2765C0u;
            // 0x2765c4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2765C8u;
            goto label_2765c8;
        }
    }
    ctx->pc = 0x2765C8u;
label_2765c8:
    // 0x2765c8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2765C8u;
    {
        const bool branch_taken_0x2765c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2765CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765C8u;
        // 0x2765cc: 0x8e020250  lw          $v0, 0x250($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765c8) {
            ctx->pc = 0x2765E4u;
            goto label_2765e4;
        }
    }
    ctx->pc = 0x2765D0u;
    // 0x2765d0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2765d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2765d4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2765d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2765d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2765d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2765dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2765DCu;
    {
        const bool branch_taken_0x2765dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2765E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2765DCu;
        // 0x2765e0: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2765dc) {
            ctx->pc = 0x2765F8u;
            goto label_2765f8;
        }
    }
    ctx->pc = 0x2765E4u;
label_2765e4:
    // 0x2765e4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2765e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2765e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2765e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2765ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2765ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2765f0: 0x3463ffef  ori         $v1, $v1, 0xFFEF
    ctx->pc = 0x2765f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65519);
    // 0x2765f4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2765f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2765f8:
    // 0x2765f8: 0xae020250  sw          $v0, 0x250($s0)
    ctx->pc = 0x2765f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 2));
    // 0x2765fc: 0xe600024c  swc1        $f0, 0x24C($s0)
    ctx->pc = 0x2765fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
    // 0x276600: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x276600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_276604:
    // 0x276604: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x276604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276608: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x276608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27660c: 0x3e00008  jr          $ra
    ctx->pc = 0x27660Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27660Cu;
        // 0x276610: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27660Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276614u;
    // 0x276614: 0x0  nop
    ctx->pc = 0x276614u;
    // NOP
    ctx->pc = 0x276618u;
}
