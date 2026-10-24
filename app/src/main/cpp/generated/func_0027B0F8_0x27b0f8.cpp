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

// Function: func_0027B0F8
// Address: 0x27b0f8 - 0x27b240
void func_0027B0F8_0x27b0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027B0F8_0x27b0f8");
#endif

    switch (ctx->pc) {
        case 0x27b234u: goto label_27b234;
        default: break;
    }

    ctx->pc = 0x27b0f8u;

    // 0x27b0f8: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x27b0f8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b0fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27b0fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27b100: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x27b100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x27b104: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27b104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27b108: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27b108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27b10c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x27b10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x27b110: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x27b110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x27b114: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x27b114u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x27b118: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x27b118u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x27b11c: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x27b11cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x27b120: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x27b120u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x27b124: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x27b124u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x27b128: 0x3c0b0058  lui         $t3, 0x58
    ctx->pc = 0x27b128u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)88 << 16));
    // 0x27b12c: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x27b12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x27b130: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x27b130u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x27b134: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b138: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27b138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27b13c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27b13cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x27b140: 0x2463fc98  addiu       $v1, $v1, -0x368
    ctx->pc = 0x27b140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966424));
    // 0x27b144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27b144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x27b148: 0x24a5fce0  addiu       $a1, $a1, -0x320
    ctx->pc = 0x27b148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966496));
    // 0x27b14c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27b14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27b150: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27b150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27b154: 0x24c6fcb0  addiu       $a2, $a2, -0x350
    ctx->pc = 0x27b154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966448));
    // 0x27b158: 0x24e7fcc8  addiu       $a3, $a3, -0x338
    ctx->pc = 0x27b158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966472));
    // 0x27b15c: 0x2508fcf8  addiu       $t0, $t0, -0x308
    ctx->pc = 0x27b15cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294966520));
    // 0x27b160: 0x2529fd50  addiu       $t1, $t1, -0x2B0
    ctx->pc = 0x27b160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966608));
    // 0x27b164: 0x254afda8  addiu       $t2, $t2, -0x258
    ctx->pc = 0x27b164u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966696));
    // 0x27b168: 0x256b5450  addiu       $t3, $t3, 0x5450
    ctx->pc = 0x27b168u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 21584));
    // 0x27b16c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x27b16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x27b170: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27b170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b174: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x27b174u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x27b178: 0xada22130  sw          $v0, 0x2130($t5)
    ctx->pc = 0x27b178u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8496), GPR_U32(ctx, 2));
    // 0x27b17c: 0x25ae2190  addiu       $t6, $t5, 0x2190
    ctx->pc = 0x27b17cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 8592));
    // 0x27b180: 0xada32134  sw          $v1, 0x2134($t5)
    ctx->pc = 0x27b180u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8500), GPR_U32(ctx, 3));
    // 0x27b184: 0xada52138  sw          $a1, 0x2138($t5)
    ctx->pc = 0x27b184u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8504), GPR_U32(ctx, 5));
    // 0x27b188: 0xada62148  sw          $a2, 0x2148($t5)
    ctx->pc = 0x27b188u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8520), GPR_U32(ctx, 6));
    // 0x27b18c: 0xada7214c  sw          $a3, 0x214C($t5)
    ctx->pc = 0x27b18cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8524), GPR_U32(ctx, 7));
    // 0x27b190: 0xada82158  sw          $t0, 0x2158($t5)
    ctx->pc = 0x27b190u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8536), GPR_U32(ctx, 8));
    // 0x27b194: 0xada9215c  sw          $t1, 0x215C($t5)
    ctx->pc = 0x27b194u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8540), GPR_U32(ctx, 9));
    // 0x27b198: 0xadaa2160  sw          $t2, 0x2160($t5)
    ctx->pc = 0x27b198u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8544), GPR_U32(ctx, 10));
    // 0x27b19c: 0xadab2164  sw          $t3, 0x2164($t5)
    ctx->pc = 0x27b19cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8548), GPR_U32(ctx, 11));
    // 0x27b1a0: 0xe5a0216c  swc1        $f0, 0x216C($t5)
    ctx->pc = 0x27b1a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8556), bits); }
    // 0x27b1a4: 0xada42174  sw          $a0, 0x2174($t5)
    ctx->pc = 0x27b1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8564), GPR_U32(ctx, 4));
    // 0x27b1a8: 0xe5a3217c  swc1        $f3, 0x217C($t5)
    ctx->pc = 0x27b1a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8572), bits); }
    // 0x27b1ac: 0xe5a12180  swc1        $f1, 0x2180($t5)
    ctx->pc = 0x27b1acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8576), bits); }
    // 0x27b1b0: 0xadac218c  sw          $t4, 0x218C($t5)
    ctx->pc = 0x27b1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8588), GPR_U32(ctx, 12));
    // 0x27b1b4: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x27b1b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x27b1b8: 0xada0213c  sw          $zero, 0x213C($t5)
    ctx->pc = 0x27b1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8508), GPR_U32(ctx, 0));
    // 0x27b1bc: 0xada02140  sw          $zero, 0x2140($t5)
    ctx->pc = 0x27b1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8512), GPR_U32(ctx, 0));
    // 0x27b1c0: 0xada02144  sw          $zero, 0x2144($t5)
    ctx->pc = 0x27b1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8516), GPR_U32(ctx, 0));
    // 0x27b1c4: 0xada02150  sw          $zero, 0x2150($t5)
    ctx->pc = 0x27b1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8528), GPR_U32(ctx, 0));
    // 0x27b1c8: 0xada02154  sw          $zero, 0x2154($t5)
    ctx->pc = 0x27b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8532), GPR_U32(ctx, 0));
    // 0x27b1cc: 0xada02168  sw          $zero, 0x2168($t5)
    ctx->pc = 0x27b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8552), GPR_U32(ctx, 0));
    // 0x27b1d0: 0xada02188  sw          $zero, 0x2188($t5)
    ctx->pc = 0x27b1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8584), GPR_U32(ctx, 0));
    // 0x27b1d4: 0xe5a32170  swc1        $f3, 0x2170($t5)
    ctx->pc = 0x27b1d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8560), bits); }
    // 0x27b1d8: 0xada02178  sw          $zero, 0x2178($t5)
    ctx->pc = 0x27b1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8568), GPR_U32(ctx, 0));
    // 0x27b1dc: 0xada02184  sw          $zero, 0x2184($t5)
    ctx->pc = 0x27b1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8580), GPR_U32(ctx, 0));
    // 0x27b1e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x27b1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x27b1e4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x27b1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x27b1e8: 0x11dd0006  beq         $t6, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x27B1E8u;
    {
        const bool branch_taken_0x27b1e8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 29));
        ctx->pc = 0x27B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B1E8u;
        // 0x27b1ec: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b1e8) {
            ctx->pc = 0x27B204u;
            goto label_27b204;
        }
    }
    ctx->pc = 0x27B1F0u;
    // 0x27b1f0: 0xc5a12178  lwc1        $f1, 0x2178($t5)
    ctx->pc = 0x27b1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27b1f4: 0xe5a12190  swc1        $f1, 0x2190($t5)
    ctx->pc = 0x27b1f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8592), bits); }
    // 0x27b1f8: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x27b1f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x27b1fc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x27b1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27b200: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x27b200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
label_27b204:
    // 0x27b204: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x27b204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x27b208: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x27b208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x27b20c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27b20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27b210: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x27b210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b214: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x27b214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x27b218: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27b218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27b21c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27b21cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27b220: 0x24852130  addiu       $a1, $a0, 0x2130
    ctx->pc = 0x27b220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8496));
    // 0x27b224: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x27b224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x27b228: 0x248605b0  addiu       $a2, $a0, 0x5B0
    ctx->pc = 0x27b228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1456));
    // 0x27b22c: 0xc040e38  jal         func_1038E0
    ctx->pc = 0x27B22Cu;
    SET_GPR_U32(ctx, 31, 0x27B234u);
    ctx->pc = 0x27B230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B22Cu;
    // 0x27b230: 0xe5a021a0  swc1        $f0, 0x21A0($t5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8608), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1038E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038E0u, 0x27B22Cu, 0x27B234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B234u;
label_27b234:
    // 0x27b234: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27b234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b238: 0x3e00008  jr          $ra
    ctx->pc = 0x27B238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B238u;
        // 0x27b23c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B240u;
}
