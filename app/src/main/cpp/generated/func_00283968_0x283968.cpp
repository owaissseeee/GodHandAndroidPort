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

// Function: func_00283968
// Address: 0x283968 - 0x283aa8
void func_00283968_0x283968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00283968_0x283968");
#endif

    switch (ctx->pc) {
        case 0x283a98u: goto label_283a98;
        default: break;
    }

    ctx->pc = 0x283968u;

    // 0x283968: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x283968u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28396c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28396cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x283970: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x283970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x283974: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x283974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x283978: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x283978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x28397c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x28397cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x283980: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x283980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x283984: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x283984u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x283988: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x283988u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x28398c: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x28398cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x283990: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x283990u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x283994: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x283994u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x283998: 0x3c0b0058  lui         $t3, 0x58
    ctx->pc = 0x283998u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)88 << 16));
    // 0x28399c: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x28399cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x2839a0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x2839a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x2839a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2839a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2839a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2839a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2839ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2839acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2839b0: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x2839b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
    // 0x2839b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2839b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2839b8: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x2839b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x2839bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2839bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2839c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2839c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2839c4: 0x24c6ffe8  addiu       $a2, $a2, -0x18
    ctx->pc = 0x2839c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967272));
    // 0x2839c8: 0x24e70000  addiu       $a3, $a3, 0x0
    ctx->pc = 0x2839c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 0));
    // 0x2839cc: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x2839ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
    // 0x2839d0: 0x25290088  addiu       $t1, $t1, 0x88
    ctx->pc = 0x2839d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 136));
    // 0x2839d4: 0x254a00e0  addiu       $t2, $t2, 0xE0
    ctx->pc = 0x2839d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 224));
    // 0x2839d8: 0x256b5660  addiu       $t3, $t3, 0x5660
    ctx->pc = 0x2839d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 22112));
    // 0x2839dc: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2839dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2839e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2839e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2839e4: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x2839e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2839e8: 0xada22130  sw          $v0, 0x2130($t5)
    ctx->pc = 0x2839e8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8496), GPR_U32(ctx, 2));
    // 0x2839ec: 0x25ae2190  addiu       $t6, $t5, 0x2190
    ctx->pc = 0x2839ecu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 8592));
    // 0x2839f0: 0xada32134  sw          $v1, 0x2134($t5)
    ctx->pc = 0x2839f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8500), GPR_U32(ctx, 3));
    // 0x2839f4: 0xada52138  sw          $a1, 0x2138($t5)
    ctx->pc = 0x2839f4u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8504), GPR_U32(ctx, 5));
    // 0x2839f8: 0xada62148  sw          $a2, 0x2148($t5)
    ctx->pc = 0x2839f8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8520), GPR_U32(ctx, 6));
    // 0x2839fc: 0xada7214c  sw          $a3, 0x214C($t5)
    ctx->pc = 0x2839fcu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8524), GPR_U32(ctx, 7));
    // 0x283a00: 0xada82158  sw          $t0, 0x2158($t5)
    ctx->pc = 0x283a00u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8536), GPR_U32(ctx, 8));
    // 0x283a04: 0xada9215c  sw          $t1, 0x215C($t5)
    ctx->pc = 0x283a04u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8540), GPR_U32(ctx, 9));
    // 0x283a08: 0xadaa2160  sw          $t2, 0x2160($t5)
    ctx->pc = 0x283a08u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8544), GPR_U32(ctx, 10));
    // 0x283a0c: 0xadab2164  sw          $t3, 0x2164($t5)
    ctx->pc = 0x283a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8548), GPR_U32(ctx, 11));
    // 0x283a10: 0xe5a0216c  swc1        $f0, 0x216C($t5)
    ctx->pc = 0x283a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8556), bits); }
    // 0x283a14: 0xada42174  sw          $a0, 0x2174($t5)
    ctx->pc = 0x283a14u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8564), GPR_U32(ctx, 4));
    // 0x283a18: 0xe5a3217c  swc1        $f3, 0x217C($t5)
    ctx->pc = 0x283a18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8572), bits); }
    // 0x283a1c: 0xe5a12180  swc1        $f1, 0x2180($t5)
    ctx->pc = 0x283a1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8576), bits); }
    // 0x283a20: 0xadac218c  sw          $t4, 0x218C($t5)
    ctx->pc = 0x283a20u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8588), GPR_U32(ctx, 12));
    // 0x283a24: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x283a24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x283a28: 0xada0213c  sw          $zero, 0x213C($t5)
    ctx->pc = 0x283a28u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8508), GPR_U32(ctx, 0));
    // 0x283a2c: 0xada02140  sw          $zero, 0x2140($t5)
    ctx->pc = 0x283a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8512), GPR_U32(ctx, 0));
    // 0x283a30: 0xada02144  sw          $zero, 0x2144($t5)
    ctx->pc = 0x283a30u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8516), GPR_U32(ctx, 0));
    // 0x283a34: 0xada02150  sw          $zero, 0x2150($t5)
    ctx->pc = 0x283a34u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8528), GPR_U32(ctx, 0));
    // 0x283a38: 0xada02154  sw          $zero, 0x2154($t5)
    ctx->pc = 0x283a38u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8532), GPR_U32(ctx, 0));
    // 0x283a3c: 0xada02168  sw          $zero, 0x2168($t5)
    ctx->pc = 0x283a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8552), GPR_U32(ctx, 0));
    // 0x283a40: 0xada02188  sw          $zero, 0x2188($t5)
    ctx->pc = 0x283a40u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8584), GPR_U32(ctx, 0));
    // 0x283a44: 0xe5a32170  swc1        $f3, 0x2170($t5)
    ctx->pc = 0x283a44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8560), bits); }
    // 0x283a48: 0xada02178  sw          $zero, 0x2178($t5)
    ctx->pc = 0x283a48u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8568), GPR_U32(ctx, 0));
    // 0x283a4c: 0xada02184  sw          $zero, 0x2184($t5)
    ctx->pc = 0x283a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8580), GPR_U32(ctx, 0));
    // 0x283a50: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x283a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x283a54: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x283a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x283a58: 0x11dd0006  beq         $t6, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x283A58u;
    {
        const bool branch_taken_0x283a58 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 29));
        ctx->pc = 0x283A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A58u;
        // 0x283a5c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283a58) {
            ctx->pc = 0x283A74u;
            goto label_283a74;
        }
    }
    ctx->pc = 0x283A60u;
    // 0x283a60: 0xc5a12178  lwc1        $f1, 0x2178($t5)
    ctx->pc = 0x283a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x283a64: 0xe5a12190  swc1        $f1, 0x2190($t5)
    ctx->pc = 0x283a64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8592), bits); }
    // 0x283a68: 0xe5c10004  swc1        $f1, 0x4($t6)
    ctx->pc = 0x283a68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4), bits); }
    // 0x283a6c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x283a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x283a70: 0xe5c00008  swc1        $f0, 0x8($t6)
    ctx->pc = 0x283a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 8), bits); }
label_283a74:
    // 0x283a74: 0xada021a0  sw          $zero, 0x21A0($t5)
    ctx->pc = 0x283a74u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 8608), GPR_U32(ctx, 0));
    // 0x283a78: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x283a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283a7c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x283a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x283a80: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x283a80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x283a84: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x283a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x283a88: 0x24852130  addiu       $a1, $a0, 0x2130
    ctx->pc = 0x283a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8496));
    // 0x283a8c: 0xc48d21a0  lwc1        $f13, 0x21A0($a0)
    ctx->pc = 0x283a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x283a90: 0xc040e38  jal         func_1038E0
    ctx->pc = 0x283A90u;
    SET_GPR_U32(ctx, 31, 0x283A98u);
    ctx->pc = 0x283A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x283A90u;
    // 0x283a94: 0x248605b0  addiu       $a2, $a0, 0x5B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1038E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038E0u, 0x283A90u, 0x283A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283A98u;
label_283a98:
    // 0x283a98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x283a98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x283A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x283AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283A9Cu;
        // 0x283aa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283AA4u;
    // 0x283aa4: 0x0  nop
    ctx->pc = 0x283aa4u;
    // NOP
    ctx->pc = 0x283aa8u;
}
