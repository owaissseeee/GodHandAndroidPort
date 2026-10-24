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

// Function: func_00100870
// Address: 0x100870 - 0x100ce0
void func_00100870_0x100870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00100870_0x100870");
#endif

    switch (ctx->pc) {
        case 0x10088cu: goto label_10088c;
        case 0x100b98u: goto label_100b98;
        case 0x100cd0u: goto label_100cd0;
        default: break;
    }

    ctx->pc = 0x100870u;

    // 0x100870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x100874: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x100874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x100878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10087c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10087cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100880: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x100880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x100884: 0xc07f02a  jal         func_1FC0A8
    ctx->pc = 0x100884u;
    SET_GPR_U32(ctx, 31, 0x10088Cu);
    ctx->pc = 0x100888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100884u;
    // 0x100888: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC0A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC0A8u, 0x100884u, 0x10088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10088Cu;
label_10088c:
    // 0x10088c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10088cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100890: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x100890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x100894: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100894u;
    {
        const bool branch_taken_0x100894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100894u;
        // 0x100898: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100894) {
            ctx->pc = 0x1008B4u;
            goto label_1008b4;
        }
    }
    ctx->pc = 0x10089Cu;
    // 0x10089c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x10089cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1008a0: 0x2442b660  addiu       $v0, $v0, -0x49A0
    ctx->pc = 0x1008a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948448));
    // 0x1008a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1008a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1008a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1008a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1008ac: 0x800008  jr          $a0
    ctx->pc = 0x1008ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1008B4u: goto label_1008b4;
            case 0x100990u: goto label_100990;
            case 0x100A6Cu: goto label_100a6c;
            case 0x100BA0u: goto label_100ba0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1008ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1008B4u;
label_1008b4:
    // 0x1008b4: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x1008b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x1008b8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1008b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1008bc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1008bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1008c0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1008c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1008c4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x1008c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x1008c8: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x1008c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x1008cc: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x1008ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x1008d0: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x1008d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x1008d4: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x1008d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x1008d8: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x1008d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x1008dc: 0x3c0a0046  lui         $t2, 0x46
    ctx->pc = 0x1008dcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)70 << 16));
    // 0x1008e0: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1008e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x1008e4: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1008e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1008e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1008e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1008ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1008ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1008f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1008f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1008f4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x1008f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1008f8: 0x2463bf80  addiu       $v1, $v1, -0x4080
    ctx->pc = 0x1008f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950784));
    // 0x1008fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1008fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x100900: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100904: 0x2484bff8  addiu       $a0, $a0, -0x4008
    ctx->pc = 0x100904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950904));
    // 0x100908: 0x24a5bfa8  addiu       $a1, $a1, -0x4058
    ctx->pc = 0x100908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950824));
    // 0x10090c: 0x24c6bfd0  addiu       $a2, $a2, -0x4030
    ctx->pc = 0x10090cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950864));
    // 0x100910: 0x24e7c020  addiu       $a3, $a3, -0x3FE0
    ctx->pc = 0x100910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950944));
    // 0x100914: 0x2508c0c0  addiu       $t0, $t0, -0x3F40
    ctx->pc = 0x100914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951104));
    // 0x100918: 0x2529c160  addiu       $t1, $t1, -0x3EA0
    ctx->pc = 0x100918u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294951264));
    // 0x10091c: 0x254a0e00  addiu       $t2, $t2, 0xE00
    ctx->pc = 0x10091cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3584));
    // 0x100920: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x100920u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100924: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x100924u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x100928: 0xae022050  sw          $v0, 0x2050($s0)
    ctx->pc = 0x100928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8272), GPR_U32(ctx, 2));
    // 0x10092c: 0xae032054  sw          $v1, 0x2054($s0)
    ctx->pc = 0x10092cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8276), GPR_U32(ctx, 3));
    // 0x100930: 0x260220b0  addiu       $v0, $s0, 0x20B0
    ctx->pc = 0x100930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8368));
    // 0x100934: 0xae042058  sw          $a0, 0x2058($s0)
    ctx->pc = 0x100934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8280), GPR_U32(ctx, 4));
    // 0x100938: 0xae052068  sw          $a1, 0x2068($s0)
    ctx->pc = 0x100938u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8296), GPR_U32(ctx, 5));
    // 0x10093c: 0xae06206c  sw          $a2, 0x206C($s0)
    ctx->pc = 0x10093cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8300), GPR_U32(ctx, 6));
    // 0x100940: 0xae072078  sw          $a3, 0x2078($s0)
    ctx->pc = 0x100940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8312), GPR_U32(ctx, 7));
    // 0x100944: 0xae08207c  sw          $t0, 0x207C($s0)
    ctx->pc = 0x100944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8316), GPR_U32(ctx, 8));
    // 0x100948: 0xae092080  sw          $t1, 0x2080($s0)
    ctx->pc = 0x100948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8320), GPR_U32(ctx, 9));
    // 0x10094c: 0xae0a2084  sw          $t2, 0x2084($s0)
    ctx->pc = 0x10094cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8324), GPR_U32(ctx, 10));
    // 0x100950: 0xe600208c  swc1        $f0, 0x208C($s0)
    ctx->pc = 0x100950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8332), bits); }
    // 0x100954: 0xae0b2094  sw          $t3, 0x2094($s0)
    ctx->pc = 0x100954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8340), GPR_U32(ctx, 11));
    // 0x100958: 0xe603209c  swc1        $f3, 0x209C($s0)
    ctx->pc = 0x100958u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8348), bits); }
    // 0x10095c: 0xe60120a0  swc1        $f1, 0x20A0($s0)
    ctx->pc = 0x10095cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8352), bits); }
    // 0x100960: 0xae0c20ac  sw          $t4, 0x20AC($s0)
    ctx->pc = 0x100960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8364), GPR_U32(ctx, 12));
    // 0x100964: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x100964u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x100968: 0xae00205c  sw          $zero, 0x205C($s0)
    ctx->pc = 0x100968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8284), GPR_U32(ctx, 0));
    // 0x10096c: 0xae002060  sw          $zero, 0x2060($s0)
    ctx->pc = 0x10096cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8288), GPR_U32(ctx, 0));
    // 0x100970: 0xae002064  sw          $zero, 0x2064($s0)
    ctx->pc = 0x100970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8292), GPR_U32(ctx, 0));
    // 0x100974: 0xae002070  sw          $zero, 0x2070($s0)
    ctx->pc = 0x100974u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8304), GPR_U32(ctx, 0));
    // 0x100978: 0xae002074  sw          $zero, 0x2074($s0)
    ctx->pc = 0x100978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8308), GPR_U32(ctx, 0));
    // 0x10097c: 0xae002088  sw          $zero, 0x2088($s0)
    ctx->pc = 0x10097cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8328), GPR_U32(ctx, 0));
    // 0x100980: 0xae0020a8  sw          $zero, 0x20A8($s0)
    ctx->pc = 0x100980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8360), GPR_U32(ctx, 0));
    // 0x100984: 0xe6032090  swc1        $f3, 0x2090($s0)
    ctx->pc = 0x100984u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8336), bits); }
    // 0x100988: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x100988u;
    {
        const bool branch_taken_0x100988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10098Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100988u;
        // 0x10098c: 0xae002098  sw          $zero, 0x2098($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100988) {
            ctx->pc = 0x100B40u;
            goto label_100b40;
        }
    }
    ctx->pc = 0x100990u;
label_100990:
    // 0x100990: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x100990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x100994: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x100994u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x100998: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100998u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10099c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x10099cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1009a0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x1009a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x1009a4: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x1009a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x1009a8: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x1009a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x1009ac: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x1009acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x1009b0: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x1009b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x1009b4: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x1009b4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x1009b8: 0x3c0a0046  lui         $t2, 0x46
    ctx->pc = 0x1009b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)70 << 16));
    // 0x1009bc: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x1009bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x1009c0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1009c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1009c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1009c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1009c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1009c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1009cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1009ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1009d0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x1009d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x1009d4: 0x2463c200  addiu       $v1, $v1, -0x3E00
    ctx->pc = 0x1009d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951424));
    // 0x1009d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1009d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1009dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1009dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1009e0: 0x2484c248  addiu       $a0, $a0, -0x3DB8
    ctx->pc = 0x1009e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951496));
    // 0x1009e4: 0x24a5c218  addiu       $a1, $a1, -0x3DE8
    ctx->pc = 0x1009e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951448));
    // 0x1009e8: 0x24c6c230  addiu       $a2, $a2, -0x3DD0
    ctx->pc = 0x1009e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951472));
    // 0x1009ec: 0x24e7c260  addiu       $a3, $a3, -0x3DA0
    ctx->pc = 0x1009ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951520));
    // 0x1009f0: 0x2508c2c0  addiu       $t0, $t0, -0x3D40
    ctx->pc = 0x1009f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294951616));
    // 0x1009f4: 0x2529c320  addiu       $t1, $t1, -0x3CE0
    ctx->pc = 0x1009f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294951712));
    // 0x1009f8: 0x254a1040  addiu       $t2, $t2, 0x1040
    ctx->pc = 0x1009f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4160));
    // 0x1009fc: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x1009fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100a00: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x100a00u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x100a04: 0xae022050  sw          $v0, 0x2050($s0)
    ctx->pc = 0x100a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8272), GPR_U32(ctx, 2));
    // 0x100a08: 0xae032054  sw          $v1, 0x2054($s0)
    ctx->pc = 0x100a08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8276), GPR_U32(ctx, 3));
    // 0x100a0c: 0x260220b0  addiu       $v0, $s0, 0x20B0
    ctx->pc = 0x100a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8368));
    // 0x100a10: 0xae042058  sw          $a0, 0x2058($s0)
    ctx->pc = 0x100a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8280), GPR_U32(ctx, 4));
    // 0x100a14: 0xae052068  sw          $a1, 0x2068($s0)
    ctx->pc = 0x100a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8296), GPR_U32(ctx, 5));
    // 0x100a18: 0xae06206c  sw          $a2, 0x206C($s0)
    ctx->pc = 0x100a18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8300), GPR_U32(ctx, 6));
    // 0x100a1c: 0xae072078  sw          $a3, 0x2078($s0)
    ctx->pc = 0x100a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8312), GPR_U32(ctx, 7));
    // 0x100a20: 0xae08207c  sw          $t0, 0x207C($s0)
    ctx->pc = 0x100a20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8316), GPR_U32(ctx, 8));
    // 0x100a24: 0xae092080  sw          $t1, 0x2080($s0)
    ctx->pc = 0x100a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8320), GPR_U32(ctx, 9));
    // 0x100a28: 0xae0a2084  sw          $t2, 0x2084($s0)
    ctx->pc = 0x100a28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8324), GPR_U32(ctx, 10));
    // 0x100a2c: 0xe600208c  swc1        $f0, 0x208C($s0)
    ctx->pc = 0x100a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8332), bits); }
    // 0x100a30: 0xae0b2094  sw          $t3, 0x2094($s0)
    ctx->pc = 0x100a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8340), GPR_U32(ctx, 11));
    // 0x100a34: 0xe603209c  swc1        $f3, 0x209C($s0)
    ctx->pc = 0x100a34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8348), bits); }
    // 0x100a38: 0xe60120a0  swc1        $f1, 0x20A0($s0)
    ctx->pc = 0x100a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8352), bits); }
    // 0x100a3c: 0xae0c20ac  sw          $t4, 0x20AC($s0)
    ctx->pc = 0x100a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8364), GPR_U32(ctx, 12));
    // 0x100a40: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x100a40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x100a44: 0xae00205c  sw          $zero, 0x205C($s0)
    ctx->pc = 0x100a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8284), GPR_U32(ctx, 0));
    // 0x100a48: 0xae002060  sw          $zero, 0x2060($s0)
    ctx->pc = 0x100a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8288), GPR_U32(ctx, 0));
    // 0x100a4c: 0xae002064  sw          $zero, 0x2064($s0)
    ctx->pc = 0x100a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8292), GPR_U32(ctx, 0));
    // 0x100a50: 0xae002070  sw          $zero, 0x2070($s0)
    ctx->pc = 0x100a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8304), GPR_U32(ctx, 0));
    // 0x100a54: 0xae002074  sw          $zero, 0x2074($s0)
    ctx->pc = 0x100a54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8308), GPR_U32(ctx, 0));
    // 0x100a58: 0xae002088  sw          $zero, 0x2088($s0)
    ctx->pc = 0x100a58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8328), GPR_U32(ctx, 0));
    // 0x100a5c: 0xae0020a8  sw          $zero, 0x20A8($s0)
    ctx->pc = 0x100a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8360), GPR_U32(ctx, 0));
    // 0x100a60: 0xe6032090  swc1        $f3, 0x2090($s0)
    ctx->pc = 0x100a60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8336), bits); }
    // 0x100a64: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x100A64u;
    {
        const bool branch_taken_0x100a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100A64u;
        // 0x100a68: 0xae002098  sw          $zero, 0x2098($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100a64) {
            ctx->pc = 0x100B40u;
            goto label_100b40;
        }
    }
    ctx->pc = 0x100A6Cu;
label_100a6c:
    // 0x100a6c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x100a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x100a70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100a74: 0x3c0b003c  lui         $t3, 0x3C
    ctx->pc = 0x100a74u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)60 << 16));
    // 0x100a78: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x100a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x100a7c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x100a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x100a80: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x100a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x100a84: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x100a84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x100a88: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x100a88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x100a8c: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x100a8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x100a90: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x100a90u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x100a94: 0x3c0a0046  lui         $t2, 0x46
    ctx->pc = 0x100a94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)70 << 16));
    // 0x100a98: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x100a98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x100a9c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x100a9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x100aa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100aa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100aa4: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x100aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x100aa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x100aa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x100aac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100aacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100ab0: 0x256bc380  addiu       $t3, $t3, -0x3C80
    ctx->pc = 0x100ab0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294951808));
    // 0x100ab4: 0x2463c3f8  addiu       $v1, $v1, -0x3C08
    ctx->pc = 0x100ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951928));
    // 0x100ab8: 0x2484c420  addiu       $a0, $a0, -0x3BE0
    ctx->pc = 0x100ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951968));
    // 0x100abc: 0x24a5c3a8  addiu       $a1, $a1, -0x3C58
    ctx->pc = 0x100abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951848));
    // 0x100ac0: 0x24c6c3d0  addiu       $a2, $a2, -0x3C30
    ctx->pc = 0x100ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294951888));
    // 0x100ac4: 0x24e7c448  addiu       $a3, $a3, -0x3BB8
    ctx->pc = 0x100ac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952008));
    // 0x100ac8: 0x2508c4d0  addiu       $t0, $t0, -0x3B30
    ctx->pc = 0x100ac8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952144));
    // 0x100acc: 0x2529c558  addiu       $t1, $t1, -0x3AA8
    ctx->pc = 0x100accu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952280));
    // 0x100ad0: 0x254a1250  addiu       $t2, $t2, 0x1250
    ctx->pc = 0x100ad0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4688));
    // 0x100ad4: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x100ad4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100ad8: 0x240d0100  addiu       $t5, $zero, 0x100
    ctx->pc = 0x100ad8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x100adc: 0xae022050  sw          $v0, 0x2050($s0)
    ctx->pc = 0x100adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8272), GPR_U32(ctx, 2));
    // 0x100ae0: 0xae0b2054  sw          $t3, 0x2054($s0)
    ctx->pc = 0x100ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8276), GPR_U32(ctx, 11));
    // 0x100ae4: 0x260220b0  addiu       $v0, $s0, 0x20B0
    ctx->pc = 0x100ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8368));
    // 0x100ae8: 0xae032058  sw          $v1, 0x2058($s0)
    ctx->pc = 0x100ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8280), GPR_U32(ctx, 3));
    // 0x100aec: 0xae04205c  sw          $a0, 0x205C($s0)
    ctx->pc = 0x100aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8284), GPR_U32(ctx, 4));
    // 0x100af0: 0xae052068  sw          $a1, 0x2068($s0)
    ctx->pc = 0x100af0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8296), GPR_U32(ctx, 5));
    // 0x100af4: 0xae06206c  sw          $a2, 0x206C($s0)
    ctx->pc = 0x100af4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8300), GPR_U32(ctx, 6));
    // 0x100af8: 0xae072078  sw          $a3, 0x2078($s0)
    ctx->pc = 0x100af8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8312), GPR_U32(ctx, 7));
    // 0x100afc: 0xae08207c  sw          $t0, 0x207C($s0)
    ctx->pc = 0x100afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8316), GPR_U32(ctx, 8));
    // 0x100b00: 0xae092080  sw          $t1, 0x2080($s0)
    ctx->pc = 0x100b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8320), GPR_U32(ctx, 9));
    // 0x100b04: 0xae0a2084  sw          $t2, 0x2084($s0)
    ctx->pc = 0x100b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8324), GPR_U32(ctx, 10));
    // 0x100b08: 0xe600208c  swc1        $f0, 0x208C($s0)
    ctx->pc = 0x100b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8332), bits); }
    // 0x100b0c: 0xae0c2094  sw          $t4, 0x2094($s0)
    ctx->pc = 0x100b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8340), GPR_U32(ctx, 12));
    // 0x100b10: 0xe60120a0  swc1        $f1, 0x20A0($s0)
    ctx->pc = 0x100b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8352), bits); }
    // 0x100b14: 0xae0d20ac  sw          $t5, 0x20AC($s0)
    ctx->pc = 0x100b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8364), GPR_U32(ctx, 13));
    // 0x100b18: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x100b18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x100b1c: 0xae002060  sw          $zero, 0x2060($s0)
    ctx->pc = 0x100b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8288), GPR_U32(ctx, 0));
    // 0x100b20: 0xae002064  sw          $zero, 0x2064($s0)
    ctx->pc = 0x100b20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8292), GPR_U32(ctx, 0));
    // 0x100b24: 0xae002070  sw          $zero, 0x2070($s0)
    ctx->pc = 0x100b24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8304), GPR_U32(ctx, 0));
    // 0x100b28: 0xae002074  sw          $zero, 0x2074($s0)
    ctx->pc = 0x100b28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8308), GPR_U32(ctx, 0));
    // 0x100b2c: 0xae002088  sw          $zero, 0x2088($s0)
    ctx->pc = 0x100b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8328), GPR_U32(ctx, 0));
    // 0x100b30: 0xae0020a8  sw          $zero, 0x20A8($s0)
    ctx->pc = 0x100b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8360), GPR_U32(ctx, 0));
    // 0x100b34: 0xe6012090  swc1        $f1, 0x2090($s0)
    ctx->pc = 0x100b34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8336), bits); }
    // 0x100b38: 0xae002098  sw          $zero, 0x2098($s0)
    ctx->pc = 0x100b38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8344), GPR_U32(ctx, 0));
    // 0x100b3c: 0xe602209c  swc1        $f2, 0x209C($s0)
    ctx->pc = 0x100b3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8348), bits); }
label_100b40:
    // 0x100b40: 0xae0020a4  sw          $zero, 0x20A4($s0)
    ctx->pc = 0x100b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8356), GPR_U32(ctx, 0));
    // 0x100b44: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x100b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x100b48: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x100b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x100b4c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x100B4Cu;
    {
        const bool branch_taken_0x100b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x100B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B4Cu;
        // 0x100b50: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b4c) {
            ctx->pc = 0x100B68u;
            goto label_100b68;
        }
    }
    ctx->pc = 0x100B54u;
    // 0x100b54: 0xc6012098  lwc1        $f1, 0x2098($s0)
    ctx->pc = 0x100b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x100b58: 0xe60120b0  swc1        $f1, 0x20B0($s0)
    ctx->pc = 0x100b58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8368), bits); }
    // 0x100b5c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x100b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x100b60: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x100b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x100b64: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x100b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_100b68:
    // 0x100b68: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x100b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x100b6c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x100b6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x100b70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100b74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100b78: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x100b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x100b7c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x100b7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x100b80: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x100b80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x100b84: 0x24852050  addiu       $a1, $a0, 0x2050
    ctx->pc = 0x100b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8272));
    // 0x100b88: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x100b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x100b8c: 0x248604d0  addiu       $a2, $a0, 0x4D0
    ctx->pc = 0x100b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
    // 0x100b90: 0xc040e38  jal         func_1038E0
    ctx->pc = 0x100B90u;
    SET_GPR_U32(ctx, 31, 0x100B98u);
    ctx->pc = 0x100B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100B90u;
    // 0x100b94: 0xe60020c0  swc1        $f0, 0x20C0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8384), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1038E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038E0u, 0x100B90u, 0x100B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B98u;
label_100b98:
    // 0x100b98: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x100B98u;
    {
        const bool branch_taken_0x100b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100B98u;
        // 0x100b9c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b98) {
            ctx->pc = 0x100CD4u;
            goto label_100cd4;
        }
    }
    ctx->pc = 0x100BA0u;
label_100ba0:
    // 0x100ba0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x100ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x100ba4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x100ba4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x100ba8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x100ba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x100bac: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x100bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x100bb0: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x100bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x100bb4: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x100bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x100bb8: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x100bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
    // 0x100bbc: 0x3c07003c  lui         $a3, 0x3C
    ctx->pc = 0x100bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)60 << 16));
    // 0x100bc0: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x100bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x100bc4: 0x3c09003c  lui         $t1, 0x3C
    ctx->pc = 0x100bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)60 << 16));
    // 0x100bc8: 0x3c0a0046  lui         $t2, 0x46
    ctx->pc = 0x100bc8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)70 << 16));
    // 0x100bcc: 0x3c013c75  lui         $at, 0x3C75
    ctx->pc = 0x100bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15477 << 16));
    // 0x100bd0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x100bd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x100bd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100bd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100bd8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x100bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x100bdc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x100bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100be0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x100be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x100be4: 0x2463c5e0  addiu       $v1, $v1, -0x3A20
    ctx->pc = 0x100be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952416));
    // 0x100be8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x100be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x100bec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x100becu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x100bf0: 0x2484c628  addiu       $a0, $a0, -0x39D8
    ctx->pc = 0x100bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952488));
    // 0x100bf4: 0x24a5c5f8  addiu       $a1, $a1, -0x3A08
    ctx->pc = 0x100bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952440));
    // 0x100bf8: 0x24c6c610  addiu       $a2, $a2, -0x39F0
    ctx->pc = 0x100bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952464));
    // 0x100bfc: 0x24e7c640  addiu       $a3, $a3, -0x39C0
    ctx->pc = 0x100bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952512));
    // 0x100c00: 0x2508c690  addiu       $t0, $t0, -0x3970
    ctx->pc = 0x100c00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952592));
    // 0x100c04: 0x2529c6e0  addiu       $t1, $t1, -0x3920
    ctx->pc = 0x100c04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952672));
    // 0x100c08: 0x254a13a0  addiu       $t2, $t2, 0x13A0
    ctx->pc = 0x100c08u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 5024));
    // 0x100c0c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x100c0cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100c10: 0x240c0100  addiu       $t4, $zero, 0x100
    ctx->pc = 0x100c10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x100c14: 0xae022050  sw          $v0, 0x2050($s0)
    ctx->pc = 0x100c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8272), GPR_U32(ctx, 2));
    // 0x100c18: 0xae032054  sw          $v1, 0x2054($s0)
    ctx->pc = 0x100c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8276), GPR_U32(ctx, 3));
    // 0x100c1c: 0x260220b0  addiu       $v0, $s0, 0x20B0
    ctx->pc = 0x100c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8368));
    // 0x100c20: 0xae042058  sw          $a0, 0x2058($s0)
    ctx->pc = 0x100c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8280), GPR_U32(ctx, 4));
    // 0x100c24: 0xae052068  sw          $a1, 0x2068($s0)
    ctx->pc = 0x100c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8296), GPR_U32(ctx, 5));
    // 0x100c28: 0xae06206c  sw          $a2, 0x206C($s0)
    ctx->pc = 0x100c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8300), GPR_U32(ctx, 6));
    // 0x100c2c: 0xae072078  sw          $a3, 0x2078($s0)
    ctx->pc = 0x100c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8312), GPR_U32(ctx, 7));
    // 0x100c30: 0xae08207c  sw          $t0, 0x207C($s0)
    ctx->pc = 0x100c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8316), GPR_U32(ctx, 8));
    // 0x100c34: 0xae092080  sw          $t1, 0x2080($s0)
    ctx->pc = 0x100c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8320), GPR_U32(ctx, 9));
    // 0x100c38: 0xae0a2084  sw          $t2, 0x2084($s0)
    ctx->pc = 0x100c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8324), GPR_U32(ctx, 10));
    // 0x100c3c: 0xe600208c  swc1        $f0, 0x208C($s0)
    ctx->pc = 0x100c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8332), bits); }
    // 0x100c40: 0xae0b2094  sw          $t3, 0x2094($s0)
    ctx->pc = 0x100c40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8340), GPR_U32(ctx, 11));
    // 0x100c44: 0xe603209c  swc1        $f3, 0x209C($s0)
    ctx->pc = 0x100c44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8348), bits); }
    // 0x100c48: 0xe60120a0  swc1        $f1, 0x20A0($s0)
    ctx->pc = 0x100c48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8352), bits); }
    // 0x100c4c: 0xae0c20ac  sw          $t4, 0x20AC($s0)
    ctx->pc = 0x100c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8364), GPR_U32(ctx, 12));
    // 0x100c50: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x100c50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x100c54: 0xae00205c  sw          $zero, 0x205C($s0)
    ctx->pc = 0x100c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8284), GPR_U32(ctx, 0));
    // 0x100c58: 0xae002060  sw          $zero, 0x2060($s0)
    ctx->pc = 0x100c58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8288), GPR_U32(ctx, 0));
    // 0x100c5c: 0xae002064  sw          $zero, 0x2064($s0)
    ctx->pc = 0x100c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8292), GPR_U32(ctx, 0));
    // 0x100c60: 0xae002070  sw          $zero, 0x2070($s0)
    ctx->pc = 0x100c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8304), GPR_U32(ctx, 0));
    // 0x100c64: 0xae002074  sw          $zero, 0x2074($s0)
    ctx->pc = 0x100c64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8308), GPR_U32(ctx, 0));
    // 0x100c68: 0xae002088  sw          $zero, 0x2088($s0)
    ctx->pc = 0x100c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8328), GPR_U32(ctx, 0));
    // 0x100c6c: 0xae0020a8  sw          $zero, 0x20A8($s0)
    ctx->pc = 0x100c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8360), GPR_U32(ctx, 0));
    // 0x100c70: 0xe6032090  swc1        $f3, 0x2090($s0)
    ctx->pc = 0x100c70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8336), bits); }
    // 0x100c74: 0xae002098  sw          $zero, 0x2098($s0)
    ctx->pc = 0x100c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8344), GPR_U32(ctx, 0));
    // 0x100c78: 0xae0020a4  sw          $zero, 0x20A4($s0)
    ctx->pc = 0x100c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8356), GPR_U32(ctx, 0));
    // 0x100c7c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x100c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x100c80: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x100c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x100c84: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x100C84u;
    {
        const bool branch_taken_0x100c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x100C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100C84u;
        // 0x100c88: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100c84) {
            ctx->pc = 0x100CA0u;
            goto label_100ca0;
        }
    }
    ctx->pc = 0x100C8Cu;
    // 0x100c8c: 0xc6012098  lwc1        $f1, 0x2098($s0)
    ctx->pc = 0x100c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x100c90: 0xe60120b0  swc1        $f1, 0x20B0($s0)
    ctx->pc = 0x100c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8368), bits); }
    // 0x100c94: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x100c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x100c98: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x100c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x100c9c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x100c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_100ca0:
    // 0x100ca0: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x100ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x100ca4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x100ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x100ca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x100ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100cb0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x100cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x100cb4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x100cb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x100cb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x100cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x100cbc: 0x24852050  addiu       $a1, $a0, 0x2050
    ctx->pc = 0x100cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 8272));
    // 0x100cc0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x100cc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x100cc4: 0x248604d0  addiu       $a2, $a0, 0x4D0
    ctx->pc = 0x100cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
    // 0x100cc8: 0xc040e38  jal         func_1038E0
    ctx->pc = 0x100CC8u;
    SET_GPR_U32(ctx, 31, 0x100CD0u);
    ctx->pc = 0x100CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x100CC8u;
    // 0x100ccc: 0xe60020c0  swc1        $f0, 0x20C0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8384), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1038E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1038E0u, 0x100CC8u, 0x100CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100CD0u;
label_100cd0:
    // 0x100cd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x100cd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_100cd4:
    // 0x100cd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100cd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100cd8: 0x3e00008  jr          $ra
    ctx->pc = 0x100CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100CD8u;
        // 0x100cdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100CD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100CE0u;
}
