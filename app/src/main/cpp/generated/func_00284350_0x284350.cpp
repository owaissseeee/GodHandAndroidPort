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

// Function: func_00284350
// Address: 0x284350 - 0x2844a0
void func_00284350_0x284350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00284350_0x284350");
#endif

    switch (ctx->pc) {
        case 0x284494u: goto label_284494;
        default: break;
    }

    ctx->pc = 0x284350u;

    // 0x284350: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x284350u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284354: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x284354u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x284358: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x284358u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x28435c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x28435cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x284360: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x284360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x284364: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x284364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x284368: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x284368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x28436c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x28436cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x284370: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x284370u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x284374: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x284374u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x284378: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x284378u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x28437c: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x28437cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x284380: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x284380u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x284384: 0x3c0c0058  lui         $t4, 0x58
    ctx->pc = 0x284384u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)88 << 16));
    // 0x284388: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x284388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x28438c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x28438cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x284390: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x284390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284394: 0x24630138  addiu       $v1, $v1, 0x138
    ctx->pc = 0x284394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 312));
    // 0x284398: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x284398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x28439c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x28439cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2843a0: 0x24a501b0  addiu       $a1, $a1, 0x1B0
    ctx->pc = 0x2843a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 432));
    // 0x2843a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2843a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2843a8: 0x24c601d8  addiu       $a2, $a2, 0x1D8
    ctx->pc = 0x2843a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 472));
    // 0x2843ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2843acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2843b0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2843b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2843b4: 0x24e70160  addiu       $a3, $a3, 0x160
    ctx->pc = 0x2843b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 352));
    // 0x2843b8: 0x25080188  addiu       $t0, $t0, 0x188
    ctx->pc = 0x2843b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 392));
    // 0x2843bc: 0x25290200  addiu       $t1, $t1, 0x200
    ctx->pc = 0x2843bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
    // 0x2843c0: 0x254a02a0  addiu       $t2, $t2, 0x2A0
    ctx->pc = 0x2843c0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 672));
    // 0x2843c4: 0x256b0340  addiu       $t3, $t3, 0x340
    ctx->pc = 0x2843c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 832));
    // 0x2843c8: 0x258c5720  addiu       $t4, $t4, 0x5720
    ctx->pc = 0x2843c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 22304));
    // 0x2843cc: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2843ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2843d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2843d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2843d4: 0x240d0100  addiu       $t5, $zero, 0x100
    ctx->pc = 0x2843d4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2843d8: 0xadc22130  sw          $v0, 0x2130($t6)
    ctx->pc = 0x2843d8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8496), GPR_U32(ctx, 2));
    // 0x2843dc: 0x25cf2190  addiu       $t7, $t6, 0x2190
    ctx->pc = 0x2843dcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 14), 8592));
    // 0x2843e0: 0xadc32134  sw          $v1, 0x2134($t6)
    ctx->pc = 0x2843e0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8500), GPR_U32(ctx, 3));
    // 0x2843e4: 0xadc52138  sw          $a1, 0x2138($t6)
    ctx->pc = 0x2843e4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8504), GPR_U32(ctx, 5));
    // 0x2843e8: 0xadc6213c  sw          $a2, 0x213C($t6)
    ctx->pc = 0x2843e8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8508), GPR_U32(ctx, 6));
    // 0x2843ec: 0xadc72148  sw          $a3, 0x2148($t6)
    ctx->pc = 0x2843ecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8520), GPR_U32(ctx, 7));
    // 0x2843f0: 0xadc8214c  sw          $t0, 0x214C($t6)
    ctx->pc = 0x2843f0u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8524), GPR_U32(ctx, 8));
    // 0x2843f4: 0xadc92158  sw          $t1, 0x2158($t6)
    ctx->pc = 0x2843f4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8536), GPR_U32(ctx, 9));
    // 0x2843f8: 0xadca215c  sw          $t2, 0x215C($t6)
    ctx->pc = 0x2843f8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8540), GPR_U32(ctx, 10));
    // 0x2843fc: 0xadcb2160  sw          $t3, 0x2160($t6)
    ctx->pc = 0x2843fcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8544), GPR_U32(ctx, 11));
    // 0x284400: 0xadcc2164  sw          $t4, 0x2164($t6)
    ctx->pc = 0x284400u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8548), GPR_U32(ctx, 12));
    // 0x284404: 0xe5c0216c  swc1        $f0, 0x216C($t6)
    ctx->pc = 0x284404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8556), bits); }
    // 0x284408: 0xadc42174  sw          $a0, 0x2174($t6)
    ctx->pc = 0x284408u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8564), GPR_U32(ctx, 4));
    // 0x28440c: 0xe5c3217c  swc1        $f3, 0x217C($t6)
    ctx->pc = 0x28440cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8572), bits); }
    // 0x284410: 0xe5c12180  swc1        $f1, 0x2180($t6)
    ctx->pc = 0x284410u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8576), bits); }
    // 0x284414: 0xadcd218c  sw          $t5, 0x218C($t6)
    ctx->pc = 0x284414u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8588), GPR_U32(ctx, 13));
    // 0x284418: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x284418u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x28441c: 0xadc02140  sw          $zero, 0x2140($t6)
    ctx->pc = 0x28441cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8512), GPR_U32(ctx, 0));
    // 0x284420: 0xadc02144  sw          $zero, 0x2144($t6)
    ctx->pc = 0x284420u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8516), GPR_U32(ctx, 0));
    // 0x284424: 0xadc02150  sw          $zero, 0x2150($t6)
    ctx->pc = 0x284424u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8528), GPR_U32(ctx, 0));
    // 0x284428: 0xadc02154  sw          $zero, 0x2154($t6)
    ctx->pc = 0x284428u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8532), GPR_U32(ctx, 0));
    // 0x28442c: 0xadc02168  sw          $zero, 0x2168($t6)
    ctx->pc = 0x28442cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8552), GPR_U32(ctx, 0));
    // 0x284430: 0xadc02188  sw          $zero, 0x2188($t6)
    ctx->pc = 0x284430u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8584), GPR_U32(ctx, 0));
    // 0x284434: 0xe5c32170  swc1        $f3, 0x2170($t6)
    ctx->pc = 0x284434u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8560), bits); }
    // 0x284438: 0xadc02178  sw          $zero, 0x2178($t6)
    ctx->pc = 0x284438u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8568), GPR_U32(ctx, 0));
    // 0x28443c: 0xadc02184  sw          $zero, 0x2184($t6)
    ctx->pc = 0x28443cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8580), GPR_U32(ctx, 0));
    // 0x284440: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x284440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x284444: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x284444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x284448: 0x11fd0006  beq         $t7, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x284448u;
    {
        const bool branch_taken_0x284448 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 29));
        ctx->pc = 0x28444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284448u;
        // 0x28444c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284448) {
            ctx->pc = 0x284464u;
            goto label_284464;
        }
    }
    ctx->pc = 0x284450u;
    // 0x284450: 0xc5c12178  lwc1        $f1, 0x2178($t6)
    ctx->pc = 0x284450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 8568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x284454: 0xe5c12190  swc1        $f1, 0x2190($t6)
    ctx->pc = 0x284454u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8592), bits); }
    // 0x284458: 0xe5e10004  swc1        $f1, 0x4($t7)
    ctx->pc = 0x284458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x28445c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x28445cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x284460: 0xe5e00008  swc1        $f0, 0x8($t7)
    ctx->pc = 0x284460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 8), bits); }
label_284464:
    // 0x284464: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x284464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x284468: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x284468u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x28446c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28446cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x284470: 0x1c0202d  daddu       $a0, $t6, $zero
    ctx->pc = 0x284470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284474: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x284474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x284478: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x284478u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x28447c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x28447cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x284480: 0x24852130  addiu       $a1, $a0, 0x2130
    ctx->pc = 0x284480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8496));
    // 0x284484: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x284484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x284488: 0x248605b0  addiu       $a2, $a0, 0x5B0
    ctx->pc = 0x284488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1456));
    // 0x28448c: 0xc040e38  jal         func_1038E0
    ctx->pc = 0x28448Cu;
    SET_GPR_U32(ctx, 31, 0x284494u);
    ctx->pc = 0x284490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28448Cu;
    // 0x284490: 0xe5c021a0  swc1        $f0, 0x21A0($t6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1038E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038E0u, 0x28448Cu, 0x284494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284494u;
label_284494:
    // 0x284494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x284494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284498: 0x3e00008  jr          $ra
    ctx->pc = 0x284498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284498u;
        // 0x28449c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2844A0u;
}
