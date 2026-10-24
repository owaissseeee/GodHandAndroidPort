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

// Function: func_0027A600
// Address: 0x27a600 - 0x27a748
void func_0027A600_0x27a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027A600_0x27a600");
#endif

    switch (ctx->pc) {
        case 0x27a73cu: goto label_27a73c;
        default: break;
    }

    ctx->pc = 0x27a600u;

    // 0x27a600: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x27a600u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a604: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27a604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27a608: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27a608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27a60c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27a60cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27a610: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x27a610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x27a614: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x27a614u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x27a618: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x27a618u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x27a61c: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x27a61cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x27a620: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x27a620u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x27a624: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x27a624u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x27a628: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x27a628u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x27a62c: 0x3c0b0058  lui         $t3, 0x58
    ctx->pc = 0x27a62cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)88 << 16));
    // 0x27a630: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x27a630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x27a634: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x27a634u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x27a638: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a638u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a63c: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x27a63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x27a640: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27a640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27a644: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27a644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27a648: 0x2463fb48  addiu       $v1, $v1, -0x4B8
    ctx->pc = 0x27a648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966088));
    // 0x27a64c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27a64cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27a650: 0x24a5fb90  addiu       $a1, $a1, -0x470
    ctx->pc = 0x27a650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966160));
    // 0x27a654: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27a654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27a658: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27a658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27a65c: 0x24c6fb60  addiu       $a2, $a2, -0x4A0
    ctx->pc = 0x27a65cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966112));
    // 0x27a660: 0x24e7fb78  addiu       $a3, $a3, -0x488
    ctx->pc = 0x27a660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966136));
    // 0x27a664: 0x2508fba8  addiu       $t0, $t0, -0x458
    ctx->pc = 0x27a664u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966184));
    // 0x27a668: 0x2529fbf8  addiu       $t1, $t1, -0x408
    ctx->pc = 0x27a668u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966264));
    // 0x27a66c: 0x254afc48  addiu       $t2, $t2, -0x3B8
    ctx->pc = 0x27a66cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966344));
    // 0x27a670: 0x256b5240  addiu       $t3, $t3, 0x5240
    ctx->pc = 0x27a670u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 21056));
    // 0x27a674: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x27a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27a678: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27a678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27a67c: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x27a67cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x27a680: 0xada22130  sw          $v0, 0x2130($t5)
    ctx->pc = 0x27a680u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8496), GPR_U32(ctx, 2));
    // 0x27a684: 0x25ae2190  addiu       $t6, $t5, 0x2190
    ctx->pc = 0x27a684u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 8592));
    // 0x27a688: 0xada32134  sw          $v1, 0x2134($t5)
    ctx->pc = 0x27a688u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8500), GPR_U32(ctx, 3));
    // 0x27a68c: 0xada52138  sw          $a1, 0x2138($t5)
    ctx->pc = 0x27a68cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8504), GPR_U32(ctx, 5));
    // 0x27a690: 0xada62148  sw          $a2, 0x2148($t5)
    ctx->pc = 0x27a690u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8520), GPR_U32(ctx, 6));
    // 0x27a694: 0xada7214c  sw          $a3, 0x214C($t5)
    ctx->pc = 0x27a694u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8524), GPR_U32(ctx, 7));
    // 0x27a698: 0xada82158  sw          $t0, 0x2158($t5)
    ctx->pc = 0x27a698u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8536), GPR_U32(ctx, 8));
    // 0x27a69c: 0xada9215c  sw          $t1, 0x215C($t5)
    ctx->pc = 0x27a69cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8540), GPR_U32(ctx, 9));
    // 0x27a6a0: 0xadaa2160  sw          $t2, 0x2160($t5)
    ctx->pc = 0x27a6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8544), GPR_U32(ctx, 10));
    // 0x27a6a4: 0xadab2164  sw          $t3, 0x2164($t5)
    ctx->pc = 0x27a6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8548), GPR_U32(ctx, 11));
    // 0x27a6a8: 0xe5a0216c  swc1        $f0, 0x216C($t5)
    ctx->pc = 0x27a6a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8556), bits); }
    // 0x27a6ac: 0xe5a12170  swc1        $f1, 0x2170($t5)
    ctx->pc = 0x27a6acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8560), bits); }
    // 0x27a6b0: 0xada42174  sw          $a0, 0x2174($t5)
    ctx->pc = 0x27a6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8564), GPR_U32(ctx, 4));
    // 0x27a6b4: 0xe5a32180  swc1        $f3, 0x2180($t5)
    ctx->pc = 0x27a6b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8576), bits); }
    // 0x27a6b8: 0xadac218c  sw          $t4, 0x218C($t5)
    ctx->pc = 0x27a6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8588), GPR_U32(ctx, 12));
    // 0x27a6bc: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x27a6bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x27a6c0: 0xada0213c  sw          $zero, 0x213C($t5)
    ctx->pc = 0x27a6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8508), GPR_U32(ctx, 0));
    // 0x27a6c4: 0xada02140  sw          $zero, 0x2140($t5)
    ctx->pc = 0x27a6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8512), GPR_U32(ctx, 0));
    // 0x27a6c8: 0xada02144  sw          $zero, 0x2144($t5)
    ctx->pc = 0x27a6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8516), GPR_U32(ctx, 0));
    // 0x27a6cc: 0xada02150  sw          $zero, 0x2150($t5)
    ctx->pc = 0x27a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8528), GPR_U32(ctx, 0));
    // 0x27a6d0: 0xada02154  sw          $zero, 0x2154($t5)
    ctx->pc = 0x27a6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8532), GPR_U32(ctx, 0));
    // 0x27a6d4: 0xada02168  sw          $zero, 0x2168($t5)
    ctx->pc = 0x27a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8552), GPR_U32(ctx, 0));
    // 0x27a6d8: 0xada02188  sw          $zero, 0x2188($t5)
    ctx->pc = 0x27a6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8584), GPR_U32(ctx, 0));
    // 0x27a6dc: 0xada02178  sw          $zero, 0x2178($t5)
    ctx->pc = 0x27a6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8568), GPR_U32(ctx, 0));
    // 0x27a6e0: 0xe5a3217c  swc1        $f3, 0x217C($t5)
    ctx->pc = 0x27a6e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8572), bits); }
    // 0x27a6e4: 0xada02184  sw          $zero, 0x2184($t5)
    ctx->pc = 0x27a6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8580), GPR_U32(ctx, 0));
    // 0x27a6e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27a6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27a6ec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x27a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x27a6f0: 0x11dd0006  beq         $t6, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x27A6F0u;
    {
        const bool branch_taken_0x27a6f0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 29));
        ctx->pc = 0x27A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6F0u;
        // 0x27a6f4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6f0) {
            ctx->pc = 0x27A70Cu;
            goto label_27a70c;
        }
    }
    ctx->pc = 0x27A6F8u;
    // 0x27a6f8: 0xc5a12178  lwc1        $f1, 0x2178($t5)
    ctx->pc = 0x27a6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27a6fc: 0xe5a12190  swc1        $f1, 0x2190($t5)
    ctx->pc = 0x27a6fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8592), bits); }
    // 0x27a700: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x27a700u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x27a704: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x27a704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27a708: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x27a708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
label_27a70c:
    // 0x27a70c: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x27a70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x27a710: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x27a710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x27a714: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27a718: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x27a718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27a71c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x27a71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x27a720: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27a720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27a724: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27a724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27a728: 0x24852130  addiu       $a1, $a0, 0x2130
    ctx->pc = 0x27a728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8496));
    // 0x27a72c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x27a72cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27a730: 0x248605b0  addiu       $a2, $a0, 0x5B0
    ctx->pc = 0x27a730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1456));
    // 0x27a734: 0xc040e38  jal         func_1038E0
    ctx->pc = 0x27A734u;
    SET_GPR_U32(ctx, 31, 0x27A73Cu);
    ctx->pc = 0x27A738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27A734u;
    // 0x27a738: 0xe5a021a0  swc1        $f0, 0x21A0($t5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1038E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038E0u, 0x27A734u, 0x27A73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27A73Cu;
label_27a73c:
    // 0x27a73c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27a73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27a740: 0x3e00008  jr          $ra
    ctx->pc = 0x27A740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A740u;
        // 0x27a744: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27A740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27A748u;
}
