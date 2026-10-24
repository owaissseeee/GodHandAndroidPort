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

// Function: EmClothInit
// Address: 0x2de980 - 0x2df860
void EmClothInit_0x2de980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EmClothInit_0x2de980");
#endif

    switch (ctx->pc) {
        case 0x2df1d4u: goto label_2df1d4;
        case 0x2df41cu: goto label_2df41c;
        case 0x2df728u: goto label_2df728;
        case 0x2df850u: goto label_2df850;
        default: break;
    }

    ctx->pc = 0x2de980u;

    // 0x2de980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2de980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2de984: 0xa0702d  daddu       $t6, $a1, $zero
    ctx->pc = 0x2de984u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de988: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2de988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2de98c: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x2de98cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de990: 0x11c003af  beqz        $t6, . + 4 + (0x3AF << 2)
    ctx->pc = 0x2DE990u;
    {
        const bool branch_taken_0x2de990 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE990u;
        // 0x2de994: 0xe0682d  daddu       $t5, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de990) {
            ctx->pc = 0x2DF850u;
            goto label_2df850;
        }
    }
    ctx->pc = 0x2DE998u;
    // 0x2de998: 0x11e003ae  beqz        $t7, . + 4 + (0x3AE << 2)
    ctx->pc = 0x2DE998u;
    {
        const bool branch_taken_0x2de998 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE998u;
        // 0x2de99c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de998) {
            ctx->pc = 0x2DF854u;
            goto label_2df854;
        }
    }
    ctx->pc = 0x2DE9A0u;
    // 0x2de9a0: 0x11a003ac  beqz        $t5, . + 4 + (0x3AC << 2)
    ctx->pc = 0x2DE9A0u;
    {
        const bool branch_taken_0x2de9a0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9A0u;
        // 0x2de9a4: 0x2483fdec  addiu       $v1, $a0, -0x214 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966764));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de9a0) {
            ctx->pc = 0x2DF854u;
            goto label_2df854;
        }
    }
    ctx->pc = 0x2DE9A8u;
    // 0x2de9a8: 0x2c62008d  sltiu       $v0, $v1, 0x8D
    ctx->pc = 0x2de9a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)141) ? 1 : 0);
    // 0x2de9ac: 0x104003a9  beqz        $v0, . + 4 + (0x3A9 << 2)
    ctx->pc = 0x2DE9ACu;
    {
        const bool branch_taken_0x2de9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE9ACu;
        // 0x2de9b0: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de9ac) {
            ctx->pc = 0x2DF854u;
            goto label_2df854;
        }
    }
    ctx->pc = 0x2DE9B4u;
    // 0x2de9b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2de9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2de9b8: 0x2442dde0  addiu       $v0, $v0, -0x2220
    ctx->pc = 0x2de9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958560));
    // 0x2de9bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2de9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2de9c0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2de9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de9c4: 0x800008  jr          $a0
    ctx->pc = 0x2DE9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2DE9CCu: goto label_2de9cc;
            case 0x2DEAECu: goto label_2deaec;
            case 0x2DEC0Cu: goto label_2dec0c;
            case 0x2DED2Cu: goto label_2ded2c;
            case 0x2DEE64u: goto label_2dee64;
            case 0x2DF0C8u: goto label_2df0c8;
            case 0x2DF1DCu: goto label_2df1dc;
            case 0x2DF2F0u: goto label_2df2f0;
            case 0x2DF424u: goto label_2df424;
            case 0x2DF614u: goto label_2df614;
            case 0x2DF730u: goto label_2df730;
            case 0x2DF850u: goto label_2df850;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE9C4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2DE9CCu;
label_2de9cc:
    // 0x2de9cc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2de9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2de9d0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2de9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2de9d4: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2de9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2de9d8: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2de9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2de9dc: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2de9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2de9e0: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2de9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2de9e4: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x2de9e4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x2de9e8: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x2de9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x2de9ec: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2de9ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2de9f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2de9f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2de9f4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2de9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2de9f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2de9f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2de9fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2de9fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2dea00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2dea00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2dea04: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2dea04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2dea08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dea08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dea0c: 0x246335a0  addiu       $v1, $v1, 0x35A0
    ctx->pc = 0x2dea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13728));
    // 0x2dea10: 0x248435a8  addiu       $a0, $a0, 0x35A8
    ctx->pc = 0x2dea10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13736));
    // 0x2dea14: 0x24a535b0  addiu       $a1, $a1, 0x35B0
    ctx->pc = 0x2dea14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13744));
    // 0x2dea18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dea18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dea1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dea1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dea20: 0x24c635b8  addiu       $a2, $a2, 0x35B8
    ctx->pc = 0x2dea20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13752));
    // 0x2dea24: 0x24e735c8  addiu       $a3, $a3, 0x35C8
    ctx->pc = 0x2dea24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13768));
    // 0x2dea28: 0x250835d8  addiu       $t0, $t0, 0x35D8
    ctx->pc = 0x2dea28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13784));
    // 0x2dea2c: 0x2529a9a0  addiu       $t1, $t1, -0x5660
    ctx->pc = 0x2dea2cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294945184));
    // 0x2dea30: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2dea30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2dea34: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2dea34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dea38: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x2dea38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dea3c: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2dea3cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2dea40: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2dea40u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2dea44: 0x25a20060  addiu       $v0, $t5, 0x60
    ctx->pc = 0x2dea44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x2dea48: 0xada40018  sw          $a0, 0x18($t5)
    ctx->pc = 0x2dea48u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 4));
    // 0x2dea4c: 0xada5001c  sw          $a1, 0x1C($t5)
    ctx->pc = 0x2dea4cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 5));
    // 0x2dea50: 0xada60028  sw          $a2, 0x28($t5)
    ctx->pc = 0x2dea50u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 6));
    // 0x2dea54: 0xada7002c  sw          $a3, 0x2C($t5)
    ctx->pc = 0x2dea54u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 7));
    // 0x2dea58: 0xada80030  sw          $t0, 0x30($t5)
    ctx->pc = 0x2dea58u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 8));
    // 0x2dea5c: 0xada90034  sw          $t1, 0x34($t5)
    ctx->pc = 0x2dea5cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 9));
    // 0x2dea60: 0xadaa0038  sw          $t2, 0x38($t5)
    ctx->pc = 0x2dea60u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 10));
    // 0x2dea64: 0xe5a2003c  swc1        $f2, 0x3C($t5)
    ctx->pc = 0x2dea64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 60), bits); }
    // 0x2dea68: 0xe5a30040  swc1        $f3, 0x40($t5)
    ctx->pc = 0x2dea68u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x2dea6c: 0xadab0044  sw          $t3, 0x44($t5)
    ctx->pc = 0x2dea6cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 11));
    // 0x2dea70: 0xe5a00050  swc1        $f0, 0x50($t5)
    ctx->pc = 0x2dea70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 80), bits); }
    // 0x2dea74: 0xadac005c  sw          $t4, 0x5C($t5)
    ctx->pc = 0x2dea74u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 12));
    // 0x2dea78: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2dea78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2dea7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dea7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2dea80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dea80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dea84: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2dea84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2dea88: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x2dea88u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x2dea8c: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x2dea8cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
    // 0x2dea90: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x2dea90u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x2dea94: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x2dea94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x2dea98: 0xada00020  sw          $zero, 0x20($t5)
    ctx->pc = 0x2dea98u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 0));
    // 0x2dea9c: 0xada00024  sw          $zero, 0x24($t5)
    ctx->pc = 0x2dea9cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 0));
    // 0x2deaa0: 0xadae0058  sw          $t6, 0x58($t5)
    ctx->pc = 0x2deaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 14));
    // 0x2deaa4: 0xada00048  sw          $zero, 0x48($t5)
    ctx->pc = 0x2deaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
    // 0x2deaa8: 0xe5ac004c  swc1        $f12, 0x4C($t5)
    ctx->pc = 0x2deaa8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 76), bits); }
    // 0x2deaac: 0xada00054  sw          $zero, 0x54($t5)
    ctx->pc = 0x2deaacu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 0));
    // 0x2deab0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2deab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2deab4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2deab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2deab8: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DEAB8u;
    {
        const bool branch_taken_0x2deab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2DEABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAB8u;
        // 0x2deabc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deab8) {
            ctx->pc = 0x2DEAD4u;
            goto label_2dead4;
        }
    }
    ctx->pc = 0x2DEAC0u;
    // 0x2deac0: 0xc5a10048  lwc1        $f1, 0x48($t5)
    ctx->pc = 0x2deac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2deac4: 0xe5a10060  swc1        $f1, 0x60($t5)
    ctx->pc = 0x2deac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x2deac8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2deac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2deacc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2deaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dead0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2dead0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2dead4:
    // 0x2dead4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2dead4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2dead8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2dead8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2deadc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2deadcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2deae0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2deae0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2deae4: 0x1000030c  b           . + 4 + (0x30C << 2)
    ctx->pc = 0x2DEAE4u;
    {
        const bool branch_taken_0x2deae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEAE4u;
        // 0x2deae8: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2deae4) {
            ctx->pc = 0x2DF718u;
            goto label_2df718;
        }
    }
    ctx->pc = 0x2DEAECu;
label_2deaec:
    // 0x2deaec: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2deaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2deaf0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2deaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2deaf4: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2deaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2deaf8: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2deaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2deafc: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2deafcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2deb00: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2deb00u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2deb04: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x2deb04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x2deb08: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x2deb08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x2deb0c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2deb0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2deb10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2deb10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2deb14: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2deb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2deb18: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2deb18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2deb1c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2deb1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2deb20: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2deb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2deb24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2deb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2deb28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2deb28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2deb2c: 0x246335e8  addiu       $v1, $v1, 0x35E8
    ctx->pc = 0x2deb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13800));
    // 0x2deb30: 0x248435f0  addiu       $a0, $a0, 0x35F0
    ctx->pc = 0x2deb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13808));
    // 0x2deb34: 0x24a535f8  addiu       $a1, $a1, 0x35F8
    ctx->pc = 0x2deb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13816));
    // 0x2deb38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2deb38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2deb3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2deb3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2deb40: 0x24c63600  addiu       $a2, $a2, 0x3600
    ctx->pc = 0x2deb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13824));
    // 0x2deb44: 0x24e73618  addiu       $a3, $a3, 0x3618
    ctx->pc = 0x2deb44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13848));
    // 0x2deb48: 0x25083630  addiu       $t0, $t0, 0x3630
    ctx->pc = 0x2deb48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 13872));
    // 0x2deb4c: 0x2529aa00  addiu       $t1, $t1, -0x5600
    ctx->pc = 0x2deb4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294945280));
    // 0x2deb50: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2deb50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2deb54: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2deb54u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2deb58: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x2deb58u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2deb5c: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2deb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2deb60: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2deb60u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2deb64: 0x25a20060  addiu       $v0, $t5, 0x60
    ctx->pc = 0x2deb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x2deb68: 0xada40018  sw          $a0, 0x18($t5)
    ctx->pc = 0x2deb68u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 4));
    // 0x2deb6c: 0xada5001c  sw          $a1, 0x1C($t5)
    ctx->pc = 0x2deb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 5));
    // 0x2deb70: 0xada60028  sw          $a2, 0x28($t5)
    ctx->pc = 0x2deb70u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 6));
    // 0x2deb74: 0xada7002c  sw          $a3, 0x2C($t5)
    ctx->pc = 0x2deb74u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 7));
    // 0x2deb78: 0xada80030  sw          $t0, 0x30($t5)
    ctx->pc = 0x2deb78u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 8));
    // 0x2deb7c: 0xada90034  sw          $t1, 0x34($t5)
    ctx->pc = 0x2deb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 9));
    // 0x2deb80: 0xadaa0038  sw          $t2, 0x38($t5)
    ctx->pc = 0x2deb80u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 10));
    // 0x2deb84: 0xe5a2003c  swc1        $f2, 0x3C($t5)
    ctx->pc = 0x2deb84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 60), bits); }
    // 0x2deb88: 0xe5a30040  swc1        $f3, 0x40($t5)
    ctx->pc = 0x2deb88u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x2deb8c: 0xadab0044  sw          $t3, 0x44($t5)
    ctx->pc = 0x2deb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 11));
    // 0x2deb90: 0xe5a00050  swc1        $f0, 0x50($t5)
    ctx->pc = 0x2deb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 80), bits); }
    // 0x2deb94: 0xadac005c  sw          $t4, 0x5C($t5)
    ctx->pc = 0x2deb94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 12));
    // 0x2deb98: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2deb98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2deb9c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2deb9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2deba0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2deba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2deba4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2deba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2deba8: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x2deba8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x2debac: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x2debacu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
    // 0x2debb0: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x2debb0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x2debb4: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x2debb4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x2debb8: 0xada00020  sw          $zero, 0x20($t5)
    ctx->pc = 0x2debb8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 0));
    // 0x2debbc: 0xada00024  sw          $zero, 0x24($t5)
    ctx->pc = 0x2debbcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 0));
    // 0x2debc0: 0xadae0058  sw          $t6, 0x58($t5)
    ctx->pc = 0x2debc0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 14));
    // 0x2debc4: 0xada00048  sw          $zero, 0x48($t5)
    ctx->pc = 0x2debc4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
    // 0x2debc8: 0xe5ac004c  swc1        $f12, 0x4C($t5)
    ctx->pc = 0x2debc8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 76), bits); }
    // 0x2debcc: 0xada00054  sw          $zero, 0x54($t5)
    ctx->pc = 0x2debccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 0));
    // 0x2debd0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2debd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2debd4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2debd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2debd8: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DEBD8u;
    {
        const bool branch_taken_0x2debd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2DEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBD8u;
        // 0x2debdc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2debd8) {
            ctx->pc = 0x2DEBF4u;
            goto label_2debf4;
        }
    }
    ctx->pc = 0x2DEBE0u;
    // 0x2debe0: 0xc5a10048  lwc1        $f1, 0x48($t5)
    ctx->pc = 0x2debe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2debe4: 0xe5a10060  swc1        $f1, 0x60($t5)
    ctx->pc = 0x2debe4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x2debe8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2debe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2debec: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2debecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2debf0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2debf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2debf4:
    // 0x2debf4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2debf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2debf8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2debf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2debfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2debfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dec00: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2dec00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dec04: 0x100002c4  b           . + 4 + (0x2C4 << 2)
    ctx->pc = 0x2DEC04u;
    {
        const bool branch_taken_0x2dec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEC04u;
        // 0x2dec08: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dec04) {
            ctx->pc = 0x2DF718u;
            goto label_2df718;
        }
    }
    ctx->pc = 0x2DEC0Cu;
label_2dec0c:
    // 0x2dec0c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2dec0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2dec10: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2dec10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2dec14: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2dec14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2dec18: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2dec18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2dec1c: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2dec1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2dec20: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2dec20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2dec24: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x2dec24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x2dec28: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x2dec28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x2dec2c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2dec2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2dec30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2dec30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2dec34: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2dec34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2dec38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dec38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2dec3c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2dec3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2dec40: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2dec40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2dec44: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2dec44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2dec48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dec48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dec4c: 0x24633648  addiu       $v1, $v1, 0x3648
    ctx->pc = 0x2dec4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13896));
    // 0x2dec50: 0x24843658  addiu       $a0, $a0, 0x3658
    ctx->pc = 0x2dec50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13912));
    // 0x2dec54: 0x24a53668  addiu       $a1, $a1, 0x3668
    ctx->pc = 0x2dec54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13928));
    // 0x2dec58: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dec58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dec5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dec5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2dec60: 0x24c63678  addiu       $a2, $a2, 0x3678
    ctx->pc = 0x2dec60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13944));
    // 0x2dec64: 0x24e736a0  addiu       $a3, $a3, 0x36A0
    ctx->pc = 0x2dec64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 13984));
    // 0x2dec68: 0x250836c8  addiu       $t0, $t0, 0x36C8
    ctx->pc = 0x2dec68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14024));
    // 0x2dec6c: 0x2529aac0  addiu       $t1, $t1, -0x5540
    ctx->pc = 0x2dec6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294945472));
    // 0x2dec70: 0x240a0005  addiu       $t2, $zero, 0x5
    ctx->pc = 0x2dec70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2dec74: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2dec74u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dec78: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x2dec78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2dec7c: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2dec7cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2dec80: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2dec80u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2dec84: 0x25a20060  addiu       $v0, $t5, 0x60
    ctx->pc = 0x2dec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x2dec88: 0xada40018  sw          $a0, 0x18($t5)
    ctx->pc = 0x2dec88u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 4));
    // 0x2dec8c: 0xada5001c  sw          $a1, 0x1C($t5)
    ctx->pc = 0x2dec8cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 5));
    // 0x2dec90: 0xada60028  sw          $a2, 0x28($t5)
    ctx->pc = 0x2dec90u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 6));
    // 0x2dec94: 0xada7002c  sw          $a3, 0x2C($t5)
    ctx->pc = 0x2dec94u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 7));
    // 0x2dec98: 0xada80030  sw          $t0, 0x30($t5)
    ctx->pc = 0x2dec98u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 8));
    // 0x2dec9c: 0xada90034  sw          $t1, 0x34($t5)
    ctx->pc = 0x2dec9cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 9));
    // 0x2deca0: 0xadaa0038  sw          $t2, 0x38($t5)
    ctx->pc = 0x2deca0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 10));
    // 0x2deca4: 0xe5a2003c  swc1        $f2, 0x3C($t5)
    ctx->pc = 0x2deca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 60), bits); }
    // 0x2deca8: 0xe5a30040  swc1        $f3, 0x40($t5)
    ctx->pc = 0x2deca8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x2decac: 0xadab0044  sw          $t3, 0x44($t5)
    ctx->pc = 0x2decacu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 11));
    // 0x2decb0: 0xe5a00050  swc1        $f0, 0x50($t5)
    ctx->pc = 0x2decb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 80), bits); }
    // 0x2decb4: 0xadac005c  sw          $t4, 0x5C($t5)
    ctx->pc = 0x2decb4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 12));
    // 0x2decb8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2decb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2decbc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2decbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2decc0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2decc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2decc4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2decc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2decc8: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x2decc8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x2deccc: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x2decccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
    // 0x2decd0: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x2decd0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x2decd4: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x2decd4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x2decd8: 0xada00020  sw          $zero, 0x20($t5)
    ctx->pc = 0x2decd8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 0));
    // 0x2decdc: 0xada00024  sw          $zero, 0x24($t5)
    ctx->pc = 0x2decdcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 0));
    // 0x2dece0: 0xadae0058  sw          $t6, 0x58($t5)
    ctx->pc = 0x2dece0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 14));
    // 0x2dece4: 0xada00048  sw          $zero, 0x48($t5)
    ctx->pc = 0x2dece4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
    // 0x2dece8: 0xe5ac004c  swc1        $f12, 0x4C($t5)
    ctx->pc = 0x2dece8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 76), bits); }
    // 0x2decec: 0xada00054  sw          $zero, 0x54($t5)
    ctx->pc = 0x2dececu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 0));
    // 0x2decf0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2decf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2decf4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2decf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2decf8: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DECF8u;
    {
        const bool branch_taken_0x2decf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2DECFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DECF8u;
        // 0x2decfc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2decf8) {
            ctx->pc = 0x2DED14u;
            goto label_2ded14;
        }
    }
    ctx->pc = 0x2DED00u;
    // 0x2ded00: 0xc5a10048  lwc1        $f1, 0x48($t5)
    ctx->pc = 0x2ded00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ded04: 0xe5a10060  swc1        $f1, 0x60($t5)
    ctx->pc = 0x2ded04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x2ded08: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2ded08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2ded0c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2ded0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ded10: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2ded10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2ded14:
    // 0x2ded14: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2ded14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2ded18: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2ded18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2ded1c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ded1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ded20: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2ded20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2ded24: 0x1000027c  b           . + 4 + (0x27C << 2)
    ctx->pc = 0x2DED24u;
    {
        const bool branch_taken_0x2ded24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DED28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DED24u;
        // 0x2ded28: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ded24) {
            ctx->pc = 0x2DF718u;
            goto label_2df718;
        }
    }
    ctx->pc = 0x2DED2Cu;
label_2ded2c:
    // 0x2ded2c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2ded2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2ded30: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2ded30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2ded34: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2ded34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2ded38: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2ded38u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2ded3c: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2ded3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2ded40: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2ded40u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2ded44: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x2ded44u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x2ded48: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x2ded48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x2ded4c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2ded4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2ded50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2ded50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2ded54: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2ded54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2ded58: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2ded58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2ded5c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2ded5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2ded60: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2ded60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2ded64: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2ded64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2ded68: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2ded68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ded6c: 0x246336f0  addiu       $v1, $v1, 0x36F0
    ctx->pc = 0x2ded6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14064));
    // 0x2ded70: 0x248436f8  addiu       $a0, $a0, 0x36F8
    ctx->pc = 0x2ded70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14072));
    // 0x2ded74: 0x24a53700  addiu       $a1, $a1, 0x3700
    ctx->pc = 0x2ded74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14080));
    // 0x2ded78: 0x24c63708  addiu       $a2, $a2, 0x3708
    ctx->pc = 0x2ded78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14088));
    // 0x2ded7c: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x2ded7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x2ded80: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2ded80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2ded84: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2ded84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ded88: 0x24e73720  addiu       $a3, $a3, 0x3720
    ctx->pc = 0x2ded88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14112));
    // 0x2ded8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ded8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ded90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ded90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ded94: 0x25083738  addiu       $t0, $t0, 0x3738
    ctx->pc = 0x2ded94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14136));
    // 0x2ded98: 0x2529abb0  addiu       $t1, $t1, -0x5450
    ctx->pc = 0x2ded98u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294945712));
    // 0x2ded9c: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2ded9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2deda0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2deda0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2deda4: 0x240c0500  addiu       $t4, $zero, 0x500
    ctx->pc = 0x2deda4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x2deda8: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2deda8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2dedac: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2dedacu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2dedb0: 0x25a20060  addiu       $v0, $t5, 0x60
    ctx->pc = 0x2dedb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x2dedb4: 0xada40018  sw          $a0, 0x18($t5)
    ctx->pc = 0x2dedb4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 4));
    // 0x2dedb8: 0xada5001c  sw          $a1, 0x1C($t5)
    ctx->pc = 0x2dedb8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 5));
    // 0x2dedbc: 0xada60028  sw          $a2, 0x28($t5)
    ctx->pc = 0x2dedbcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 6));
    // 0x2dedc0: 0xada7002c  sw          $a3, 0x2C($t5)
    ctx->pc = 0x2dedc0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 7));
    // 0x2dedc4: 0xada80030  sw          $t0, 0x30($t5)
    ctx->pc = 0x2dedc4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 8));
    // 0x2dedc8: 0xada90034  sw          $t1, 0x34($t5)
    ctx->pc = 0x2dedc8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 9));
    // 0x2dedcc: 0xadaa0038  sw          $t2, 0x38($t5)
    ctx->pc = 0x2dedccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 10));
    // 0x2dedd0: 0xe5a3003c  swc1        $f3, 0x3C($t5)
    ctx->pc = 0x2dedd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 60), bits); }
    // 0x2dedd4: 0xe5a40040  swc1        $f4, 0x40($t5)
    ctx->pc = 0x2dedd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x2dedd8: 0xadab0044  sw          $t3, 0x44($t5)
    ctx->pc = 0x2dedd8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 11));
    // 0x2deddc: 0xe5a20050  swc1        $f2, 0x50($t5)
    ctx->pc = 0x2deddcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 80), bits); }
    // 0x2dede0: 0xadac005c  sw          $t4, 0x5C($t5)
    ctx->pc = 0x2dede0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 12));
    // 0x2dede4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2dede4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2dede8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dede8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2dedec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2dedecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2dedf0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x2dedf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2dedf4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2dedf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2dedf8: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x2dedf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x2dedfc: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2dedfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2dee00: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2dee00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2dee04: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x2dee04u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x2dee08: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x2dee08u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
    // 0x2dee0c: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x2dee0cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x2dee10: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x2dee10u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x2dee14: 0xada00020  sw          $zero, 0x20($t5)
    ctx->pc = 0x2dee14u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 0));
    // 0x2dee18: 0xada00024  sw          $zero, 0x24($t5)
    ctx->pc = 0x2dee18u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 0));
    // 0x2dee1c: 0xadae0058  sw          $t6, 0x58($t5)
    ctx->pc = 0x2dee1cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 14));
    // 0x2dee20: 0xada00048  sw          $zero, 0x48($t5)
    ctx->pc = 0x2dee20u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
    // 0x2dee24: 0xe5ac004c  swc1        $f12, 0x4C($t5)
    ctx->pc = 0x2dee24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 76), bits); }
    // 0x2dee28: 0xada00054  sw          $zero, 0x54($t5)
    ctx->pc = 0x2dee28u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 0));
    // 0x2dee2c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2dee2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2dee30: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DEE30u;
    {
        const bool branch_taken_0x2dee30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2DEE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE30u;
        // 0x2dee34: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee30) {
            ctx->pc = 0x2DEE4Cu;
            goto label_2dee4c;
        }
    }
    ctx->pc = 0x2DEE38u;
    // 0x2dee38: 0xc5a00048  lwc1        $f0, 0x48($t5)
    ctx->pc = 0x2dee38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dee3c: 0xe5a00060  swc1        $f0, 0x60($t5)
    ctx->pc = 0x2dee3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x2dee40: 0xe4450004  swc1        $f5, 0x4($v0)
    ctx->pc = 0x2dee40u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2dee44: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2dee44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dee48: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2dee48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2dee4c:
    // 0x2dee4c: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2dee4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2dee50: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2dee50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2dee54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dee54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dee58: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2dee58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2dee5c: 0x1000022e  b           . + 4 + (0x22E << 2)
    ctx->pc = 0x2DEE5Cu;
    {
        const bool branch_taken_0x2dee5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE5Cu;
        // 0x2dee60: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee5c) {
            ctx->pc = 0x2DF718u;
            goto label_2df718;
        }
    }
    ctx->pc = 0x2DEE64u;
label_2dee64:
    // 0x2dee64: 0x95c302fe  lhu         $v1, 0x2FE($t6)
    ctx->pc = 0x2dee64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 766)));
    // 0x2dee68: 0x24020256  addiu       $v0, $zero, 0x256
    ctx->pc = 0x2dee68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
    // 0x2dee6c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DEE6Cu;
    {
        const bool branch_taken_0x2dee6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE6Cu;
        // 0x2dee70: 0x24020258  addiu       $v0, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee6c) {
            ctx->pc = 0x2DEE84u;
            goto label_2dee84;
        }
    }
    ctx->pc = 0x2DEE74u;
    // 0x2dee74: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DEE74u;
    {
        const bool branch_taken_0x2dee74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DEE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE74u;
        // 0x2dee78: 0x240202a6  addiu       $v0, $zero, 0x2A6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 678));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee74) {
            ctx->pc = 0x2DEE84u;
            goto label_2dee84;
        }
    }
    ctx->pc = 0x2DEE7Cu;
    // 0x2dee7c: 0x14620049  bne         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2DEE7Cu;
    {
        const bool branch_taken_0x2dee7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DEE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEE7Cu;
        // 0x2dee80: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dee7c) {
            ctx->pc = 0x2DEFA4u;
            goto label_2defa4;
        }
    }
    ctx->pc = 0x2DEE84u;
label_2dee84:
    // 0x2dee84: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2dee84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2dee88: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2dee88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2dee8c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2dee8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2dee90: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2dee90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2dee94: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2dee94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2dee98: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2dee98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2dee9c: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x2dee9cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x2deea0: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x2deea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x2deea4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2deea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2deea8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2deea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2deeac: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2deeacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2deeb0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2deeb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2deeb4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2deeb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2deeb8: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2deeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2deebc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2deebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2deec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2deec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2deec4: 0x24633750  addiu       $v1, $v1, 0x3750
    ctx->pc = 0x2deec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14160));
    // 0x2deec8: 0x24843758  addiu       $a0, $a0, 0x3758
    ctx->pc = 0x2deec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14168));
    // 0x2deecc: 0x24a53760  addiu       $a1, $a1, 0x3760
    ctx->pc = 0x2deeccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14176));
    // 0x2deed0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2deed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2deed4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2deed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2deed8: 0x24c63768  addiu       $a2, $a2, 0x3768
    ctx->pc = 0x2deed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14184));
    // 0x2deedc: 0x24e73788  addiu       $a3, $a3, 0x3788
    ctx->pc = 0x2deedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14216));
    // 0x2deee0: 0x250837a8  addiu       $t0, $t0, 0x37A8
    ctx->pc = 0x2deee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14248));
    // 0x2deee4: 0x2529ac10  addiu       $t1, $t1, -0x53F0
    ctx->pc = 0x2deee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294945808));
    // 0x2deee8: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2deee8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2deeec: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2deeecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2deef0: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x2deef0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2deef4: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2deef4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2deef8: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2deef8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2deefc: 0x25a20060  addiu       $v0, $t5, 0x60
    ctx->pc = 0x2deefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x2def00: 0xada40018  sw          $a0, 0x18($t5)
    ctx->pc = 0x2def00u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 4));
    // 0x2def04: 0xada5001c  sw          $a1, 0x1C($t5)
    ctx->pc = 0x2def04u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 5));
    // 0x2def08: 0xada60028  sw          $a2, 0x28($t5)
    ctx->pc = 0x2def08u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 6));
    // 0x2def0c: 0xada7002c  sw          $a3, 0x2C($t5)
    ctx->pc = 0x2def0cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 7));
    // 0x2def10: 0xada80030  sw          $t0, 0x30($t5)
    ctx->pc = 0x2def10u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 8));
    // 0x2def14: 0xada90034  sw          $t1, 0x34($t5)
    ctx->pc = 0x2def14u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 9));
    // 0x2def18: 0xadaa0038  sw          $t2, 0x38($t5)
    ctx->pc = 0x2def18u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 10));
    // 0x2def1c: 0xe5a2003c  swc1        $f2, 0x3C($t5)
    ctx->pc = 0x2def1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 60), bits); }
    // 0x2def20: 0xe5a30040  swc1        $f3, 0x40($t5)
    ctx->pc = 0x2def20u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x2def24: 0xadab0044  sw          $t3, 0x44($t5)
    ctx->pc = 0x2def24u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 11));
    // 0x2def28: 0xe5a00050  swc1        $f0, 0x50($t5)
    ctx->pc = 0x2def28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 80), bits); }
    // 0x2def2c: 0xadac005c  sw          $t4, 0x5C($t5)
    ctx->pc = 0x2def2cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 12));
    // 0x2def30: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2def30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2def34: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2def34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2def38: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2def38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2def3c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2def3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2def40: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x2def40u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x2def44: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x2def44u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
    // 0x2def48: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x2def48u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x2def4c: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x2def4cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x2def50: 0xada00020  sw          $zero, 0x20($t5)
    ctx->pc = 0x2def50u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 0));
    // 0x2def54: 0xada00024  sw          $zero, 0x24($t5)
    ctx->pc = 0x2def54u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 0));
    // 0x2def58: 0xadae0058  sw          $t6, 0x58($t5)
    ctx->pc = 0x2def58u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 14));
    // 0x2def5c: 0xada00048  sw          $zero, 0x48($t5)
    ctx->pc = 0x2def5cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
    // 0x2def60: 0xe5ac004c  swc1        $f12, 0x4C($t5)
    ctx->pc = 0x2def60u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 76), bits); }
    // 0x2def64: 0xada00054  sw          $zero, 0x54($t5)
    ctx->pc = 0x2def64u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 0));
    // 0x2def68: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2def68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2def6c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2def6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2def70: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DEF70u;
    {
        const bool branch_taken_0x2def70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2DEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF70u;
        // 0x2def74: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def70) {
            ctx->pc = 0x2DEF8Cu;
            goto label_2def8c;
        }
    }
    ctx->pc = 0x2DEF78u;
    // 0x2def78: 0xc5a10048  lwc1        $f1, 0x48($t5)
    ctx->pc = 0x2def78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2def7c: 0xe5a10060  swc1        $f1, 0x60($t5)
    ctx->pc = 0x2def7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x2def80: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2def80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2def84: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2def84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2def88: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2def88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2def8c:
    // 0x2def8c: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2def8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2def90: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2def90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2def94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2def94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2def98: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2def98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2def9c: 0x100001de  b           . + 4 + (0x1DE << 2)
    ctx->pc = 0x2DEF9Cu;
    {
        const bool branch_taken_0x2def9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DEFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEF9Cu;
        // 0x2defa0: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2def9c) {
            ctx->pc = 0x2DF718u;
            goto label_2df718;
        }
    }
    ctx->pc = 0x2DEFA4u;
label_2defa4:
    // 0x2defa4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2defa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2defa8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2defa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2defac: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2defacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2defb0: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2defb0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2defb4: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2defb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2defb8: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x2defb8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x2defbc: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x2defbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x2defc0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2defc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2defc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2defc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2defc8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2defc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2defcc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2defccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2defd0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2defd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2defd4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2defd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2defd8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2defd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2defdc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2defdcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2defe0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2defe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2defe4: 0x246337c8  addiu       $v1, $v1, 0x37C8
    ctx->pc = 0x2defe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14280));
    // 0x2defe8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2defe8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2defec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2defecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2deff0: 0x248437d0  addiu       $a0, $a0, 0x37D0
    ctx->pc = 0x2deff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14288));
    // 0x2deff4: 0x24a537d8  addiu       $a1, $a1, 0x37D8
    ctx->pc = 0x2deff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14296));
    // 0x2deff8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2deff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2deffc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2deffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df000: 0x24c637e0  addiu       $a2, $a2, 0x37E0
    ctx->pc = 0x2df000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14304));
    // 0x2df004: 0x24e73800  addiu       $a3, $a3, 0x3800
    ctx->pc = 0x2df004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14336));
    // 0x2df008: 0x25083820  addiu       $t0, $t0, 0x3820
    ctx->pc = 0x2df008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14368));
    // 0x2df00c: 0x2529acd0  addiu       $t1, $t1, -0x5330
    ctx->pc = 0x2df00cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946000));
    // 0x2df010: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2df010u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2df014: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2df014u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df018: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x2df018u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df01c: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2df01cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2df020: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2df020u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2df024: 0x25a20060  addiu       $v0, $t5, 0x60
    ctx->pc = 0x2df024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x2df028: 0xada40018  sw          $a0, 0x18($t5)
    ctx->pc = 0x2df028u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 4));
    // 0x2df02c: 0xada5001c  sw          $a1, 0x1C($t5)
    ctx->pc = 0x2df02cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 5));
    // 0x2df030: 0xada60028  sw          $a2, 0x28($t5)
    ctx->pc = 0x2df030u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 6));
    // 0x2df034: 0xada7002c  sw          $a3, 0x2C($t5)
    ctx->pc = 0x2df034u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 7));
    // 0x2df038: 0xada80030  sw          $t0, 0x30($t5)
    ctx->pc = 0x2df038u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 8));
    // 0x2df03c: 0xada90034  sw          $t1, 0x34($t5)
    ctx->pc = 0x2df03cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 9));
    // 0x2df040: 0xadaa0038  sw          $t2, 0x38($t5)
    ctx->pc = 0x2df040u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 10));
    // 0x2df044: 0xe5a2003c  swc1        $f2, 0x3C($t5)
    ctx->pc = 0x2df044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 60), bits); }
    // 0x2df048: 0xe5a30040  swc1        $f3, 0x40($t5)
    ctx->pc = 0x2df048u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x2df04c: 0xadab0044  sw          $t3, 0x44($t5)
    ctx->pc = 0x2df04cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 11));
    // 0x2df050: 0xe5a4004c  swc1        $f4, 0x4C($t5)
    ctx->pc = 0x2df050u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 76), bits); }
    // 0x2df054: 0xe5a00050  swc1        $f0, 0x50($t5)
    ctx->pc = 0x2df054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 80), bits); }
    // 0x2df058: 0xadac005c  sw          $t4, 0x5C($t5)
    ctx->pc = 0x2df058u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 12));
    // 0x2df05c: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2df05cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2df060: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x2df060u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x2df064: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x2df064u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
    // 0x2df068: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x2df068u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x2df06c: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x2df06cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x2df070: 0xada00020  sw          $zero, 0x20($t5)
    ctx->pc = 0x2df070u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 0));
    // 0x2df074: 0xada00024  sw          $zero, 0x24($t5)
    ctx->pc = 0x2df074u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 0));
    // 0x2df078: 0xadae0058  sw          $t6, 0x58($t5)
    ctx->pc = 0x2df078u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 14));
    // 0x2df07c: 0xada00048  sw          $zero, 0x48($t5)
    ctx->pc = 0x2df07cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
    // 0x2df080: 0xada00054  sw          $zero, 0x54($t5)
    ctx->pc = 0x2df080u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 0));
    // 0x2df084: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2df084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2df088: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2df088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2df08c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF08Cu;
    {
        const bool branch_taken_0x2df08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2DF090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF08Cu;
        // 0x2df090: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df08c) {
            ctx->pc = 0x2DF0A8u;
            goto label_2df0a8;
        }
    }
    ctx->pc = 0x2DF094u;
    // 0x2df094: 0xc5a10048  lwc1        $f1, 0x48($t5)
    ctx->pc = 0x2df094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df098: 0xe5a10060  swc1        $f1, 0x60($t5)
    ctx->pc = 0x2df098u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x2df09c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2df09cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2df0a0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2df0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df0a4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2df0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2df0a8:
    // 0x2df0a8: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2df0a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2df0ac: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2df0acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2df0b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df0b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df0b4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2df0b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x2df0b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2df0b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2df0bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2df0bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2df0c0: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x2DF0C0u;
    {
        const bool branch_taken_0x2df0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF0C0u;
        // 0x2df0c4: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df0c0) {
            ctx->pc = 0x2DF408u;
            goto label_2df408;
        }
    }
    ctx->pc = 0x2DF0C8u;
label_2df0c8:
    // 0x2df0c8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2df0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2df0cc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2df0ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2df0d0: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2df0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2df0d4: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2df0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2df0d8: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x2df0d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x2df0dc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2df0dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2df0e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2df0e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2df0e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2df0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2df0e8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2df0e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2df0ec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2df0ecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2df0f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df0f4: 0x24633840  addiu       $v1, $v1, 0x3840
    ctx->pc = 0x2df0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x2df0f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2df0f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2df0fc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df0fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df100: 0x24843848  addiu       $a0, $a0, 0x3848
    ctx->pc = 0x2df100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14408));
    // 0x2df104: 0x24a53850  addiu       $a1, $a1, 0x3850
    ctx->pc = 0x2df104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14416));
    // 0x2df108: 0x24c63858  addiu       $a2, $a2, 0x3858
    ctx->pc = 0x2df108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14424));
    // 0x2df10c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2df10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2df110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df114: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2df114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df118: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2df118u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2df11c: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2df11cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2df120: 0x25a20060  addiu       $v0, $t5, 0x60
    ctx->pc = 0x2df120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x2df124: 0xada40018  sw          $a0, 0x18($t5)
    ctx->pc = 0x2df124u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 4));
    // 0x2df128: 0xada5001c  sw          $a1, 0x1C($t5)
    ctx->pc = 0x2df128u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 5));
    // 0x2df12c: 0xada60028  sw          $a2, 0x28($t5)
    ctx->pc = 0x2df12cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 6));
    // 0x2df130: 0xe5a3003c  swc1        $f3, 0x3C($t5)
    ctx->pc = 0x2df130u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 60), bits); }
    // 0x2df134: 0xe5a20040  swc1        $f2, 0x40($t5)
    ctx->pc = 0x2df134u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x2df138: 0xada70044  sw          $a3, 0x44($t5)
    ctx->pc = 0x2df138u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 7));
    // 0x2df13c: 0xe5a10050  swc1        $f1, 0x50($t5)
    ctx->pc = 0x2df13cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 80), bits); }
    // 0x2df140: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2df140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2df144: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2df144u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2df148: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2df148u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2df14c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2df14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2df150: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x2df150u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x2df154: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x2df154u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
    // 0x2df158: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x2df158u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x2df15c: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x2df15cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x2df160: 0xada0002c  sw          $zero, 0x2C($t5)
    ctx->pc = 0x2df160u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 0));
    // 0x2df164: 0xada00030  sw          $zero, 0x30($t5)
    ctx->pc = 0x2df164u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 0));
    // 0x2df168: 0xada00034  sw          $zero, 0x34($t5)
    ctx->pc = 0x2df168u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 0));
    // 0x2df16c: 0xada00020  sw          $zero, 0x20($t5)
    ctx->pc = 0x2df16cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 0));
    // 0x2df170: 0xada00024  sw          $zero, 0x24($t5)
    ctx->pc = 0x2df170u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 0));
    // 0x2df174: 0xada00058  sw          $zero, 0x58($t5)
    ctx->pc = 0x2df174u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 0));
    // 0x2df178: 0xada00038  sw          $zero, 0x38($t5)
    ctx->pc = 0x2df178u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 0));
    // 0x2df17c: 0xada00048  sw          $zero, 0x48($t5)
    ctx->pc = 0x2df17cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
    // 0x2df180: 0xe5ac004c  swc1        $f12, 0x4C($t5)
    ctx->pc = 0x2df180u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 76), bits); }
    // 0x2df184: 0xada0005c  sw          $zero, 0x5C($t5)
    ctx->pc = 0x2df184u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 0));
    // 0x2df188: 0xada00054  sw          $zero, 0x54($t5)
    ctx->pc = 0x2df188u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 0));
    // 0x2df18c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2df18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2df190: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2df190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2df194: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF194u;
    {
        const bool branch_taken_0x2df194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2DF198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF194u;
        // 0x2df198: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df194) {
            ctx->pc = 0x2DF1B0u;
            goto label_2df1b0;
        }
    }
    ctx->pc = 0x2DF19Cu;
    // 0x2df19c: 0xc5a10048  lwc1        $f1, 0x48($t5)
    ctx->pc = 0x2df19cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df1a0: 0xe5a10060  swc1        $f1, 0x60($t5)
    ctx->pc = 0x2df1a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x2df1a4: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2df1a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2df1a8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2df1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df1ac: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2df1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2df1b0:
    // 0x2df1b0: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2df1b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2df1b4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2df1b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2df1b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df1bc: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x2df1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df1c0: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x2df1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df1c4: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x2df1c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df1c8: 0xe5a00070  swc1        $f0, 0x70($t5)
    ctx->pc = 0x2df1c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 112), bits); }
    // 0x2df1cc: 0xc040e38  jal         func_1038E0
    ctx->pc = 0x2DF1CCu;
    SET_GPR_U32(ctx, 31, 0x2DF1D4u);
    ctx->pc = 0x2DF1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF1CCu;
    // 0x2df1d0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1038E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038E0u, 0x2DF1CCu, 0x2DF1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF1D4u;
label_2df1d4:
    // 0x2df1d4: 0x1000019f  b           . + 4 + (0x19F << 2)
    ctx->pc = 0x2DF1D4u;
    {
        const bool branch_taken_0x2df1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1D4u;
        // 0x2df1d8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df1d4) {
            ctx->pc = 0x2DF854u;
            goto label_2df854;
        }
    }
    ctx->pc = 0x2DF1DCu;
label_2df1dc:
    // 0x2df1dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2df1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2df1e0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df1e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df1e4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2df1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2df1e8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2df1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2df1ec: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2df1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2df1f0: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2df1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2df1f4: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2df1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2df1f8: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2df1f8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2df1fc: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x2df1fcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x2df200: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x2df200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x2df204: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2df204u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2df208: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df208u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df20c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2df20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2df210: 0x24633890  addiu       $v1, $v1, 0x3890
    ctx->pc = 0x2df210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14480));
    // 0x2df214: 0x248438a0  addiu       $a0, $a0, 0x38A0
    ctx->pc = 0x2df214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14496));
    // 0x2df218: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2df218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2df21c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df220: 0x24a538b0  addiu       $a1, $a1, 0x38B0
    ctx->pc = 0x2df220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14512));
    // 0x2df224: 0x24c638c0  addiu       $a2, $a2, 0x38C0
    ctx->pc = 0x2df224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14528));
    // 0x2df228: 0x24e738e8  addiu       $a3, $a3, 0x38E8
    ctx->pc = 0x2df228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14568));
    // 0x2df22c: 0x25083910  addiu       $t0, $t0, 0x3910
    ctx->pc = 0x2df22cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14608));
    // 0x2df230: 0x2529ad90  addiu       $t1, $t1, -0x5270
    ctx->pc = 0x2df230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946192));
    // 0x2df234: 0x240a0008  addiu       $t2, $zero, 0x8
    ctx->pc = 0x2df234u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2df238: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2df238u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df23c: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x2df23cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df240: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2df240u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2df244: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2df244u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2df248: 0x25a20060  addiu       $v0, $t5, 0x60
    ctx->pc = 0x2df248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x2df24c: 0xada40018  sw          $a0, 0x18($t5)
    ctx->pc = 0x2df24cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 4));
    // 0x2df250: 0xada5001c  sw          $a1, 0x1C($t5)
    ctx->pc = 0x2df250u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 5));
    // 0x2df254: 0xada60028  sw          $a2, 0x28($t5)
    ctx->pc = 0x2df254u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 6));
    // 0x2df258: 0xada7002c  sw          $a3, 0x2C($t5)
    ctx->pc = 0x2df258u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 7));
    // 0x2df25c: 0xada80030  sw          $t0, 0x30($t5)
    ctx->pc = 0x2df25cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 8));
    // 0x2df260: 0xada90034  sw          $t1, 0x34($t5)
    ctx->pc = 0x2df260u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 9));
    // 0x2df264: 0xadaa0038  sw          $t2, 0x38($t5)
    ctx->pc = 0x2df264u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 10));
    // 0x2df268: 0xe5a0003c  swc1        $f0, 0x3C($t5)
    ctx->pc = 0x2df268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 60), bits); }
    // 0x2df26c: 0xadab0044  sw          $t3, 0x44($t5)
    ctx->pc = 0x2df26cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 11));
    // 0x2df270: 0xe5a20050  swc1        $f2, 0x50($t5)
    ctx->pc = 0x2df270u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 80), bits); }
    // 0x2df274: 0xadac005c  sw          $t4, 0x5C($t5)
    ctx->pc = 0x2df274u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 12));
    // 0x2df278: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2df278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2df27c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2df27cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2df280: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2df280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2df284: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2df284u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2df288: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x2df288u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x2df28c: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x2df28cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
    // 0x2df290: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x2df290u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x2df294: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x2df294u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x2df298: 0xada00020  sw          $zero, 0x20($t5)
    ctx->pc = 0x2df298u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 0));
    // 0x2df29c: 0xada00024  sw          $zero, 0x24($t5)
    ctx->pc = 0x2df29cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 0));
    // 0x2df2a0: 0xadae0058  sw          $t6, 0x58($t5)
    ctx->pc = 0x2df2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 14));
    // 0x2df2a4: 0xe5a20040  swc1        $f2, 0x40($t5)
    ctx->pc = 0x2df2a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x2df2a8: 0xada00048  sw          $zero, 0x48($t5)
    ctx->pc = 0x2df2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
    // 0x2df2ac: 0xe5ac004c  swc1        $f12, 0x4C($t5)
    ctx->pc = 0x2df2acu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 76), bits); }
    // 0x2df2b0: 0xada00054  sw          $zero, 0x54($t5)
    ctx->pc = 0x2df2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 0));
    // 0x2df2b4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2df2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2df2b8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2df2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2df2bc: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF2BCu;
    {
        const bool branch_taken_0x2df2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2DF2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2BCu;
        // 0x2df2c0: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df2bc) {
            ctx->pc = 0x2DF2D8u;
            goto label_2df2d8;
        }
    }
    ctx->pc = 0x2DF2C4u;
    // 0x2df2c4: 0xc5a10048  lwc1        $f1, 0x48($t5)
    ctx->pc = 0x2df2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df2c8: 0xe5a10060  swc1        $f1, 0x60($t5)
    ctx->pc = 0x2df2c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x2df2cc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2df2ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2df2d0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2df2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df2d4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2df2d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2df2d8:
    // 0x2df2d8: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2df2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2df2dc: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2df2dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2df2e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df2e4: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2df2e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2df2e8: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x2DF2E8u;
    {
        const bool branch_taken_0x2df2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF2E8u;
        // 0x2df2ec: 0x1c0202d  daddu       $a0, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df2e8) {
            ctx->pc = 0x2DF718u;
            goto label_2df718;
        }
    }
    ctx->pc = 0x2DF2F0u;
label_2df2f0:
    // 0x2df2f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2df2f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2df2f4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2df2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2df2f8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2df2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2df2fc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2df2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2df300: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2df300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2df304: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2df304u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2df308: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2df308u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2df30c: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2df30cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2df310: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x2df310u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x2df314: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x2df314u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x2df318: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2df318u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2df31c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df31cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df320: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2df320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2df324: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2df324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2df328: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2df328u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2df32c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df32cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df330: 0x24633938  addiu       $v1, $v1, 0x3938
    ctx->pc = 0x2df330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14648));
    // 0x2df334: 0x24843948  addiu       $a0, $a0, 0x3948
    ctx->pc = 0x2df334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14664));
    // 0x2df338: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2df338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2df33c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df340: 0x24a53958  addiu       $a1, $a1, 0x3958
    ctx->pc = 0x2df340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14680));
    // 0x2df344: 0x24c63968  addiu       $a2, $a2, 0x3968
    ctx->pc = 0x2df344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14696));
    // 0x2df348: 0x24e73990  addiu       $a3, $a3, 0x3990
    ctx->pc = 0x2df348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14736));
    // 0x2df34c: 0x250839b8  addiu       $t0, $t0, 0x39B8
    ctx->pc = 0x2df34cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14776));
    // 0x2df350: 0x2529af10  addiu       $t1, $t1, -0x50F0
    ctx->pc = 0x2df350u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946576));
    // 0x2df354: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x2df354u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2df358: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2df358u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df35c: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x2df35cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df360: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2df360u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2df364: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2df364u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2df368: 0x25a20060  addiu       $v0, $t5, 0x60
    ctx->pc = 0x2df368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x2df36c: 0xada40018  sw          $a0, 0x18($t5)
    ctx->pc = 0x2df36cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 4));
    // 0x2df370: 0xada5001c  sw          $a1, 0x1C($t5)
    ctx->pc = 0x2df370u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 5));
    // 0x2df374: 0xada60028  sw          $a2, 0x28($t5)
    ctx->pc = 0x2df374u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 6));
    // 0x2df378: 0xada7002c  sw          $a3, 0x2C($t5)
    ctx->pc = 0x2df378u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 7));
    // 0x2df37c: 0xada80030  sw          $t0, 0x30($t5)
    ctx->pc = 0x2df37cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 8));
    // 0x2df380: 0xada90034  sw          $t1, 0x34($t5)
    ctx->pc = 0x2df380u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 9));
    // 0x2df384: 0xadaa0038  sw          $t2, 0x38($t5)
    ctx->pc = 0x2df384u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 10));
    // 0x2df388: 0xe5a0003c  swc1        $f0, 0x3C($t5)
    ctx->pc = 0x2df388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 60), bits); }
    // 0x2df38c: 0xadab0044  sw          $t3, 0x44($t5)
    ctx->pc = 0x2df38cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 11));
    // 0x2df390: 0xe5a1004c  swc1        $f1, 0x4C($t5)
    ctx->pc = 0x2df390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 76), bits); }
    // 0x2df394: 0xe5a30050  swc1        $f3, 0x50($t5)
    ctx->pc = 0x2df394u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 80), bits); }
    // 0x2df398: 0xadac005c  sw          $t4, 0x5C($t5)
    ctx->pc = 0x2df398u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 12));
    // 0x2df39c: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2df39cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2df3a0: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x2df3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x2df3a4: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x2df3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
    // 0x2df3a8: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x2df3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x2df3ac: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x2df3acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x2df3b0: 0xada00020  sw          $zero, 0x20($t5)
    ctx->pc = 0x2df3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 0));
    // 0x2df3b4: 0xada00024  sw          $zero, 0x24($t5)
    ctx->pc = 0x2df3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 0));
    // 0x2df3b8: 0xadae0058  sw          $t6, 0x58($t5)
    ctx->pc = 0x2df3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 14));
    // 0x2df3bc: 0xe5a30040  swc1        $f3, 0x40($t5)
    ctx->pc = 0x2df3bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x2df3c0: 0xada00048  sw          $zero, 0x48($t5)
    ctx->pc = 0x2df3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
    // 0x2df3c4: 0xada00054  sw          $zero, 0x54($t5)
    ctx->pc = 0x2df3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 0));
    // 0x2df3c8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2df3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2df3cc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2df3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2df3d0: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF3D0u;
    {
        const bool branch_taken_0x2df3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2DF3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF3D0u;
        // 0x2df3d4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df3d0) {
            ctx->pc = 0x2DF3ECu;
            goto label_2df3ec;
        }
    }
    ctx->pc = 0x2DF3D8u;
    // 0x2df3d8: 0xc5a10048  lwc1        $f1, 0x48($t5)
    ctx->pc = 0x2df3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df3dc: 0xe5a10060  swc1        $f1, 0x60($t5)
    ctx->pc = 0x2df3dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x2df3e0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2df3e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2df3e4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2df3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df3e8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2df3e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2df3ec:
    // 0x2df3ec: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2df3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2df3f0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2df3f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2df3f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df3f8: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x2df3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df3fc: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x2df3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x2df400: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2df400u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2df404: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2df404u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2df408:
    // 0x2df408: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x2df408u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df40c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2df40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2df410: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x2df410u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df414: 0xc040e38  jal         func_1038E0
    ctx->pc = 0x2DF414u;
    SET_GPR_U32(ctx, 31, 0x2DF41Cu);
    ctx->pc = 0x2DF418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF414u;
    // 0x2df418: 0xe5a00070  swc1        $f0, 0x70($t5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1038E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038E0u, 0x2DF414u, 0x2DF41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF41Cu;
label_2df41c:
    // 0x2df41c: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x2DF41Cu;
    {
        const bool branch_taken_0x2df41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF41Cu;
        // 0x2df420: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df41c) {
            ctx->pc = 0x2DF854u;
            goto label_2df854;
        }
    }
    ctx->pc = 0x2DF424u;
label_2df424:
    // 0x2df424: 0x95c302fe  lhu         $v1, 0x2FE($t6)
    ctx->pc = 0x2df424u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 766)));
    // 0x2df428: 0x24020252  addiu       $v0, $zero, 0x252
    ctx->pc = 0x2df428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
    // 0x2df42c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF42Cu;
    {
        const bool branch_taken_0x2df42c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DF430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF42Cu;
        // 0x2df430: 0x240202a6  addiu       $v0, $zero, 0x2A6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 678));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df42c) {
            ctx->pc = 0x2DF43Cu;
            goto label_2df43c;
        }
    }
    ctx->pc = 0x2DF434u;
    // 0x2df434: 0x1462002d  bne         $v1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x2DF434u;
    {
        const bool branch_taken_0x2df434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DF438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF434u;
        // 0x2df438: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df434) {
            ctx->pc = 0x2DF4ECu;
            goto label_2df4ec;
        }
    }
    ctx->pc = 0x2DF43Cu;
label_2df43c:
    // 0x2df43c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2df43cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2df440: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2df440u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2df444: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2df444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2df448: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2df448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2df44c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2df44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2df450: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2df450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2df454: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2df454u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2df458: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2df458u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2df45c: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x2df45cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x2df460: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x2df460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x2df464: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2df464u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2df468: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df46c: 0x244239e0  addiu       $v0, $v0, 0x39E0
    ctx->pc = 0x2df46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14816));
    // 0x2df470: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2df470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2df474: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2df474u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2df478: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df47c: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x2df47cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2df480: 0x246339e8  addiu       $v1, $v1, 0x39E8
    ctx->pc = 0x2df480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14824));
    // 0x2df484: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2df484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2df488: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df48c: 0x248439f0  addiu       $a0, $a0, 0x39F0
    ctx->pc = 0x2df48cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14832));
    // 0x2df490: 0x24a539f8  addiu       $a1, $a1, 0x39F8
    ctx->pc = 0x2df490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14840));
    // 0x2df494: 0x24c63a10  addiu       $a2, $a2, 0x3A10
    ctx->pc = 0x2df494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14864));
    // 0x2df498: 0x24e73a28  addiu       $a3, $a3, 0x3A28
    ctx->pc = 0x2df498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 14888));
    // 0x2df49c: 0x2508b030  addiu       $t0, $t0, -0x4FD0
    ctx->pc = 0x2df49cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946864));
    // 0x2df4a0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x2df4a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df4a4: 0x240b0100  addiu       $t3, $zero, 0x100
    ctx->pc = 0x2df4a4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df4a8: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x2df4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
    // 0x2df4ac: 0xada30018  sw          $v1, 0x18($t5)
    ctx->pc = 0x2df4acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 3));
    // 0x2df4b0: 0x25a20060  addiu       $v0, $t5, 0x60
    ctx->pc = 0x2df4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x2df4b4: 0xada4001c  sw          $a0, 0x1C($t5)
    ctx->pc = 0x2df4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 4));
    // 0x2df4b8: 0xada50028  sw          $a1, 0x28($t5)
    ctx->pc = 0x2df4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 5));
    // 0x2df4bc: 0xada6002c  sw          $a2, 0x2C($t5)
    ctx->pc = 0x2df4bcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 6));
    // 0x2df4c0: 0xada70030  sw          $a3, 0x30($t5)
    ctx->pc = 0x2df4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 7));
    // 0x2df4c4: 0xada80034  sw          $t0, 0x34($t5)
    ctx->pc = 0x2df4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 8));
    // 0x2df4c8: 0xada90038  sw          $t1, 0x38($t5)
    ctx->pc = 0x2df4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 9));
    // 0x2df4cc: 0xe5a0003c  swc1        $f0, 0x3C($t5)
    ctx->pc = 0x2df4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 60), bits); }
    // 0x2df4d0: 0xadaa0044  sw          $t2, 0x44($t5)
    ctx->pc = 0x2df4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 10));
    // 0x2df4d4: 0xe5a1004c  swc1        $f1, 0x4C($t5)
    ctx->pc = 0x2df4d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 76), bits); }
    // 0x2df4d8: 0xe5a30050  swc1        $f3, 0x50($t5)
    ctx->pc = 0x2df4d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 80), bits); }
    // 0x2df4dc: 0xadab005c  sw          $t3, 0x5C($t5)
    ctx->pc = 0x2df4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 11));
    // 0x2df4e0: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2df4e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2df4e4: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2DF4E4u;
    {
        const bool branch_taken_0x2df4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF4E4u;
        // 0x2df4e8: 0xada90000  sw          $t1, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df4e4) {
            ctx->pc = 0x2DF598u;
            goto label_2df598;
        }
    }
    ctx->pc = 0x2DF4ECu;
label_2df4ec:
    // 0x2df4ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2df4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2df4f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2df4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2df4f4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2df4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2df4f8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2df4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2df4fc: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2df4fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2df500: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2df500u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2df504: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2df504u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2df508: 0x3c090062  lui         $t1, 0x62
    ctx->pc = 0x2df508u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)98 << 16));
    // 0x2df50c: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x2df50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x2df510: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2df510u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2df514: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df518: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2df518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2df51c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2df51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2df520: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2df520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2df524: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df528: 0x24633a40  addiu       $v1, $v1, 0x3A40
    ctx->pc = 0x2df528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14912));
    // 0x2df52c: 0x24843a50  addiu       $a0, $a0, 0x3A50
    ctx->pc = 0x2df52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14928));
    // 0x2df530: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2df530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2df534: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df538: 0x24a53a60  addiu       $a1, $a1, 0x3A60
    ctx->pc = 0x2df538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14944));
    // 0x2df53c: 0x24c63a70  addiu       $a2, $a2, 0x3A70
    ctx->pc = 0x2df53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14960));
    // 0x2df540: 0x24e73a98  addiu       $a3, $a3, 0x3A98
    ctx->pc = 0x2df540u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15000));
    // 0x2df544: 0x25083ac0  addiu       $t0, $t0, 0x3AC0
    ctx->pc = 0x2df544u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15040));
    // 0x2df548: 0x2529b150  addiu       $t1, $t1, -0x4EB0
    ctx->pc = 0x2df548u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294947152));
    // 0x2df54c: 0x240a0006  addiu       $t2, $zero, 0x6
    ctx->pc = 0x2df54cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2df550: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2df550u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df554: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x2df554u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df558: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2df558u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2df55c: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2df55cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2df560: 0x25a20060  addiu       $v0, $t5, 0x60
    ctx->pc = 0x2df560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x2df564: 0xada40018  sw          $a0, 0x18($t5)
    ctx->pc = 0x2df564u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 4));
    // 0x2df568: 0xada5001c  sw          $a1, 0x1C($t5)
    ctx->pc = 0x2df568u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 5));
    // 0x2df56c: 0xada60028  sw          $a2, 0x28($t5)
    ctx->pc = 0x2df56cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 6));
    // 0x2df570: 0xada7002c  sw          $a3, 0x2C($t5)
    ctx->pc = 0x2df570u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 7));
    // 0x2df574: 0xada80030  sw          $t0, 0x30($t5)
    ctx->pc = 0x2df574u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 8));
    // 0x2df578: 0xada90034  sw          $t1, 0x34($t5)
    ctx->pc = 0x2df578u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 9));
    // 0x2df57c: 0xadaa0038  sw          $t2, 0x38($t5)
    ctx->pc = 0x2df57cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 10));
    // 0x2df580: 0xe5a0003c  swc1        $f0, 0x3C($t5)
    ctx->pc = 0x2df580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 60), bits); }
    // 0x2df584: 0xadab0044  sw          $t3, 0x44($t5)
    ctx->pc = 0x2df584u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 11));
    // 0x2df588: 0xe5a1004c  swc1        $f1, 0x4C($t5)
    ctx->pc = 0x2df588u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 76), bits); }
    // 0x2df58c: 0xe5a30050  swc1        $f3, 0x50($t5)
    ctx->pc = 0x2df58cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 80), bits); }
    // 0x2df590: 0xadac005c  sw          $t4, 0x5C($t5)
    ctx->pc = 0x2df590u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 12));
    // 0x2df594: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x2df594u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2df598:
    // 0x2df598: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x2df598u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x2df59c: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x2df59cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
    // 0x2df5a0: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x2df5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x2df5a4: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x2df5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x2df5a8: 0xada00020  sw          $zero, 0x20($t5)
    ctx->pc = 0x2df5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 0));
    // 0x2df5ac: 0xada00024  sw          $zero, 0x24($t5)
    ctx->pc = 0x2df5acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 0));
    // 0x2df5b0: 0xadae0058  sw          $t6, 0x58($t5)
    ctx->pc = 0x2df5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 14));
    // 0x2df5b4: 0xe5a30040  swc1        $f3, 0x40($t5)
    ctx->pc = 0x2df5b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x2df5b8: 0xada00048  sw          $zero, 0x48($t5)
    ctx->pc = 0x2df5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
    // 0x2df5bc: 0xada00054  sw          $zero, 0x54($t5)
    ctx->pc = 0x2df5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 0));
    // 0x2df5c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2df5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2df5c4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2df5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2df5c8: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF5C8u;
    {
        const bool branch_taken_0x2df5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2DF5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF5C8u;
        // 0x2df5cc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df5c8) {
            ctx->pc = 0x2DF5E4u;
            goto label_2df5e4;
        }
    }
    ctx->pc = 0x2DF5D0u;
    // 0x2df5d0: 0xc5a10048  lwc1        $f1, 0x48($t5)
    ctx->pc = 0x2df5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df5d4: 0xe5a10060  swc1        $f1, 0x60($t5)
    ctx->pc = 0x2df5d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x2df5d8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2df5d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2df5dc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2df5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df5e0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2df5e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2df5e4:
    // 0x2df5e4: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2df5e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2df5e8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2df5e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2df5ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df5ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df5f0: 0x0  nop
    ctx->pc = 0x2df5f0u;
    // NOP
    // 0x2df5f4: 0xe5a00070  swc1        $f0, 0x70($t5)
    ctx->pc = 0x2df5f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 112), bits); }
    // 0x2df5f8: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x2df5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x2df5fc: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2df5fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2df600: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2df600u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2df604: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x2df604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df608: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2df608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2df60c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x2DF60Cu;
    {
        const bool branch_taken_0x2df60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF60Cu;
        // 0x2df610: 0x1a0282d  daddu       $a1, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df60c) {
            ctx->pc = 0x2DF720u;
            goto label_2df720;
        }
    }
    ctx->pc = 0x2DF614u;
label_2df614:
    // 0x2df614: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2df614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2df618: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2df618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2df61c: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2df61cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2df620: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2df620u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2df624: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x2df624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x2df628: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2df628u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2df62c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2df62cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2df630: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2df630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2df634: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2df634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2df638: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2df638u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2df63c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df63cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df640: 0x24633868  addiu       $v1, $v1, 0x3868
    ctx->pc = 0x2df640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14440));
    // 0x2df644: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2df644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2df648: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df64c: 0x24843870  addiu       $a0, $a0, 0x3870
    ctx->pc = 0x2df64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14448));
    // 0x2df650: 0x24a53878  addiu       $a1, $a1, 0x3878
    ctx->pc = 0x2df650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14456));
    // 0x2df654: 0x24c63880  addiu       $a2, $a2, 0x3880
    ctx->pc = 0x2df654u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 14464));
    // 0x2df658: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2df658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2df65c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df65cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df660: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2df660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df664: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2df664u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2df668: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2df668u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2df66c: 0x25a20060  addiu       $v0, $t5, 0x60
    ctx->pc = 0x2df66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x2df670: 0xada40018  sw          $a0, 0x18($t5)
    ctx->pc = 0x2df670u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 4));
    // 0x2df674: 0xada5001c  sw          $a1, 0x1C($t5)
    ctx->pc = 0x2df674u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 5));
    // 0x2df678: 0xada60028  sw          $a2, 0x28($t5)
    ctx->pc = 0x2df678u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 6));
    // 0x2df67c: 0xe5a3003c  swc1        $f3, 0x3C($t5)
    ctx->pc = 0x2df67cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 60), bits); }
    // 0x2df680: 0xe5a20040  swc1        $f2, 0x40($t5)
    ctx->pc = 0x2df680u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x2df684: 0xada70044  sw          $a3, 0x44($t5)
    ctx->pc = 0x2df684u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 7));
    // 0x2df688: 0xe5a10050  swc1        $f1, 0x50($t5)
    ctx->pc = 0x2df688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 80), bits); }
    // 0x2df68c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2df68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2df690: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2df690u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2df694: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2df694u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2df698: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2df698u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2df69c: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x2df69cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x2df6a0: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x2df6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
    // 0x2df6a4: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x2df6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x2df6a8: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x2df6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x2df6ac: 0xada0002c  sw          $zero, 0x2C($t5)
    ctx->pc = 0x2df6acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 0));
    // 0x2df6b0: 0xada00030  sw          $zero, 0x30($t5)
    ctx->pc = 0x2df6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 0));
    // 0x2df6b4: 0xada00034  sw          $zero, 0x34($t5)
    ctx->pc = 0x2df6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 0));
    // 0x2df6b8: 0xada00020  sw          $zero, 0x20($t5)
    ctx->pc = 0x2df6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 0));
    // 0x2df6bc: 0xada00024  sw          $zero, 0x24($t5)
    ctx->pc = 0x2df6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 0));
    // 0x2df6c0: 0xada00058  sw          $zero, 0x58($t5)
    ctx->pc = 0x2df6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 0));
    // 0x2df6c4: 0xada00038  sw          $zero, 0x38($t5)
    ctx->pc = 0x2df6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 0));
    // 0x2df6c8: 0xada00048  sw          $zero, 0x48($t5)
    ctx->pc = 0x2df6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
    // 0x2df6cc: 0xe5ac004c  swc1        $f12, 0x4C($t5)
    ctx->pc = 0x2df6ccu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 76), bits); }
    // 0x2df6d0: 0xada0005c  sw          $zero, 0x5C($t5)
    ctx->pc = 0x2df6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 0));
    // 0x2df6d4: 0xada00054  sw          $zero, 0x54($t5)
    ctx->pc = 0x2df6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 0));
    // 0x2df6d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2df6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2df6dc: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2df6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2df6e0: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF6E0u;
    {
        const bool branch_taken_0x2df6e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2DF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6E0u;
        // 0x2df6e4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df6e0) {
            ctx->pc = 0x2DF6FCu;
            goto label_2df6fc;
        }
    }
    ctx->pc = 0x2DF6E8u;
    // 0x2df6e8: 0xc5a10048  lwc1        $f1, 0x48($t5)
    ctx->pc = 0x2df6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df6ec: 0xe5a10060  swc1        $f1, 0x60($t5)
    ctx->pc = 0x2df6ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x2df6f0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2df6f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2df6f4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2df6f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df6f8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2df6f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2df6fc:
    // 0x2df6fc: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2df6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2df700: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2df700u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2df704: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df708: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x2df708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df70c: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x2df70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x2df710: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2df710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2df714: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2df714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2df718:
    // 0x2df718: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x2df718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df71c: 0xe5a00070  swc1        $f0, 0x70($t5)
    ctx->pc = 0x2df71cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 112), bits); }
label_2df720:
    // 0x2df720: 0xc040e38  jal         func_1038E0
    ctx->pc = 0x2DF720u;
    SET_GPR_U32(ctx, 31, 0x2DF728u);
    ctx->pc = 0x2DF724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF720u;
    // 0x2df724: 0x1e0302d  daddu       $a2, $t7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1038E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038E0u, 0x2DF720u, 0x2DF728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF728u;
label_2df728:
    // 0x2df728: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2DF728u;
    {
        const bool branch_taken_0x2df728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF728u;
        // 0x2df72c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df728) {
            ctx->pc = 0x2DF854u;
            goto label_2df854;
        }
    }
    ctx->pc = 0x2DF730u;
label_2df730:
    // 0x2df730: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2df730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2df734: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2df734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2df738: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2df738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2df73c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x2df73cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x2df740: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x2df740u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x2df744: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2df744u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2df748: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x2df748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x2df74c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2df74cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2df750: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2df750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2df754: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2df754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2df758: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2df758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x2df75c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2df75cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2df760: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2df760u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2df764: 0x24633ae8  addiu       $v1, $v1, 0x3AE8
    ctx->pc = 0x2df764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15080));
    // 0x2df768: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2df768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2df76c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df76cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df770: 0x24843af0  addiu       $a0, $a0, 0x3AF0
    ctx->pc = 0x2df770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15088));
    // 0x2df774: 0x24a53af8  addiu       $a1, $a1, 0x3AF8
    ctx->pc = 0x2df774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15096));
    // 0x2df778: 0x24c63b00  addiu       $a2, $a2, 0x3B00
    ctx->pc = 0x2df778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15104));
    // 0x2df77c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2df77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2df780: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2df780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2df784: 0x24e73b20  addiu       $a3, $a3, 0x3B20
    ctx->pc = 0x2df784u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 15136));
    // 0x2df788: 0x25083b40  addiu       $t0, $t0, 0x3B40
    ctx->pc = 0x2df788u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15168));
    // 0x2df78c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2df78cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2df790: 0x240a0100  addiu       $t2, $zero, 0x100
    ctx->pc = 0x2df790u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2df794: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x2df794u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
    // 0x2df798: 0xada30004  sw          $v1, 0x4($t5)
    ctx->pc = 0x2df798u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 3));
    // 0x2df79c: 0x25a20060  addiu       $v0, $t5, 0x60
    ctx->pc = 0x2df79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x2df7a0: 0xada40018  sw          $a0, 0x18($t5)
    ctx->pc = 0x2df7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 24), GPR_U32(ctx, 4));
    // 0x2df7a4: 0xada5001c  sw          $a1, 0x1C($t5)
    ctx->pc = 0x2df7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 28), GPR_U32(ctx, 5));
    // 0x2df7a8: 0xada60028  sw          $a2, 0x28($t5)
    ctx->pc = 0x2df7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 40), GPR_U32(ctx, 6));
    // 0x2df7ac: 0xada7002c  sw          $a3, 0x2C($t5)
    ctx->pc = 0x2df7acu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 44), GPR_U32(ctx, 7));
    // 0x2df7b0: 0xada80030  sw          $t0, 0x30($t5)
    ctx->pc = 0x2df7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 48), GPR_U32(ctx, 8));
    // 0x2df7b4: 0xe5a3003c  swc1        $f3, 0x3C($t5)
    ctx->pc = 0x2df7b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 60), bits); }
    // 0x2df7b8: 0xe5a20040  swc1        $f2, 0x40($t5)
    ctx->pc = 0x2df7b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 64), bits); }
    // 0x2df7bc: 0xada90044  sw          $t1, 0x44($t5)
    ctx->pc = 0x2df7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 68), GPR_U32(ctx, 9));
    // 0x2df7c0: 0xe5a00050  swc1        $f0, 0x50($t5)
    ctx->pc = 0x2df7c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 80), bits); }
    // 0x2df7c4: 0xadaa005c  sw          $t2, 0x5C($t5)
    ctx->pc = 0x2df7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 92), GPR_U32(ctx, 10));
    // 0x2df7c8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2df7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2df7cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2df7ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2df7d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2df7d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2df7d4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x2df7d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2df7d8: 0xada00008  sw          $zero, 0x8($t5)
    ctx->pc = 0x2df7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 0));
    // 0x2df7dc: 0xada0000c  sw          $zero, 0xC($t5)
    ctx->pc = 0x2df7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
    // 0x2df7e0: 0xada00010  sw          $zero, 0x10($t5)
    ctx->pc = 0x2df7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 16), GPR_U32(ctx, 0));
    // 0x2df7e4: 0xada00014  sw          $zero, 0x14($t5)
    ctx->pc = 0x2df7e4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 20), GPR_U32(ctx, 0));
    // 0x2df7e8: 0xada00034  sw          $zero, 0x34($t5)
    ctx->pc = 0x2df7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 52), GPR_U32(ctx, 0));
    // 0x2df7ec: 0xada00020  sw          $zero, 0x20($t5)
    ctx->pc = 0x2df7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 32), GPR_U32(ctx, 0));
    // 0x2df7f0: 0xada00024  sw          $zero, 0x24($t5)
    ctx->pc = 0x2df7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 36), GPR_U32(ctx, 0));
    // 0x2df7f4: 0xada00038  sw          $zero, 0x38($t5)
    ctx->pc = 0x2df7f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 56), GPR_U32(ctx, 0));
    // 0x2df7f8: 0xadae0058  sw          $t6, 0x58($t5)
    ctx->pc = 0x2df7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 88), GPR_U32(ctx, 14));
    // 0x2df7fc: 0xada00048  sw          $zero, 0x48($t5)
    ctx->pc = 0x2df7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 72), GPR_U32(ctx, 0));
    // 0x2df800: 0xe5ac004c  swc1        $f12, 0x4C($t5)
    ctx->pc = 0x2df800u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 76), bits); }
    // 0x2df804: 0xada00054  sw          $zero, 0x54($t5)
    ctx->pc = 0x2df804u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 84), GPR_U32(ctx, 0));
    // 0x2df808: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2df808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2df80c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2df80cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2df810: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DF810u;
    {
        const bool branch_taken_0x2df810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2DF814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF810u;
        // 0x2df814: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df810) {
            ctx->pc = 0x2DF82Cu;
            goto label_2df82c;
        }
    }
    ctx->pc = 0x2DF818u;
    // 0x2df818: 0xc5a10048  lwc1        $f1, 0x48($t5)
    ctx->pc = 0x2df818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2df81c: 0xe5a10060  swc1        $f1, 0x60($t5)
    ctx->pc = 0x2df81cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 96), bits); }
    // 0x2df820: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2df820u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2df824: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2df824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2df828: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2df828u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2df82c:
    // 0x2df82c: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2df82cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2df830: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2df830u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2df834: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2df834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2df838: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x2df838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df83c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2df83cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2df840: 0x1a0282d  daddu       $a1, $t5, $zero
    ctx->pc = 0x2df840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df844: 0xe5a00070  swc1        $f0, 0x70($t5)
    ctx->pc = 0x2df844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 112), bits); }
    // 0x2df848: 0xc040e38  jal         func_1038E0
    ctx->pc = 0x2DF848u;
    SET_GPR_U32(ctx, 31, 0x2DF850u);
    ctx->pc = 0x2DF84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF848u;
    // 0x2df84c: 0x1e0302d  daddu       $a2, $t7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1038E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038E0u, 0x2DF848u, 0x2DF850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DF850u;
label_2df850:
    // 0x2df850: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2df850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2df854:
    // 0x2df854: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF854u;
        // 0x2df858: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF85Cu;
    // 0x2df85c: 0x0  nop
    ctx->pc = 0x2df85cu;
    // NOP
    ctx->pc = 0x2df860u;
}
