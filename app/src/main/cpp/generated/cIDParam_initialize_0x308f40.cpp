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

// Function: cIDParam_initialize
// Address: 0x308f40 - 0x309000
void cIDParam_initialize_0x308f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDParam_initialize_0x308f40");
#endif

    switch (ctx->pc) {
        case 0x308f5cu: goto label_308f5c;
        default: break;
    }

    ctx->pc = 0x308f40u;

    // 0x308f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x308f44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x308f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308f48: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x308f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x308f4c: 0x240602e0  addiu       $a2, $zero, 0x2E0
    ctx->pc = 0x308f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x308f50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x308f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x308f54: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x308F54u;
    SET_GPR_U32(ctx, 31, 0x308F5Cu);
    ctx->pc = 0x308F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308F54u;
    // 0x308f58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x308F54u, 0x308F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308F5Cu;
label_308f5c:
    // 0x308f5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x308f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x308f60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x308f60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308f64: 0x3c048080  lui         $a0, 0x8080
    ctx->pc = 0x308f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32896 << 16));
    // 0x308f68: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x308f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x308f6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x308f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x308f70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x308f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308f74: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x308f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
    // 0x308f78: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x308f78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x308f7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x308f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x308f80: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x308f80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x308f84: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x308f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x308f88: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x308f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x308f8c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x308f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x308f90: 0xae0402dc  sw          $a0, 0x2DC($s0)
    ctx->pc = 0x308f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 4));
    // 0x308f94: 0xa2020058  sb          $v0, 0x58($s0)
    ctx->pc = 0x308f94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x308f98: 0xa603005a  sh          $v1, 0x5A($s0)
    ctx->pc = 0x308f98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 3));
    // 0x308f9c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x308f9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x308fa0: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x308fa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x308fa4: 0xa2070003  sb          $a3, 0x3($s0)
    ctx->pc = 0x308fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 7));
    // 0x308fa8: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x308fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x308fac: 0xa2060069  sb          $a2, 0x69($s0)
    ctx->pc = 0x308facu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 6));
    // 0x308fb0: 0xa6050278  sh          $a1, 0x278($s0)
    ctx->pc = 0x308fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 632), (uint16_t)GPR_U32(ctx, 5));
    // 0x308fb4: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x308fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
    // 0x308fb8: 0xa2070002  sb          $a3, 0x2($s0)
    ctx->pc = 0x308fb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x308fbc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x308fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x308fc0: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x308fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x308fc4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x308fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x308fc8: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x308fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x308fcc: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x308fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x308fd0: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x308fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x308fd4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x308fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x308fd8: 0xa206006a  sb          $a2, 0x6A($s0)
    ctx->pc = 0x308fd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 106), (uint8_t)GPR_U32(ctx, 6));
    // 0x308fdc: 0xa206006b  sb          $a2, 0x6B($s0)
    ctx->pc = 0x308fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 107), (uint8_t)GPR_U32(ctx, 6));
    // 0x308fe0: 0xa605006e  sh          $a1, 0x6E($s0)
    ctx->pc = 0x308fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 110), (uint16_t)GPR_U32(ctx, 5));
    // 0x308fe4: 0xa605006c  sh          $a1, 0x6C($s0)
    ctx->pc = 0x308fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 108), (uint16_t)GPR_U32(ctx, 5));
    // 0x308fe8: 0xa60501b0  sh          $a1, 0x1B0($s0)
    ctx->pc = 0x308fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 432), (uint16_t)GPR_U32(ctx, 5));
    // 0x308fec: 0xa6050214  sh          $a1, 0x214($s0)
    ctx->pc = 0x308fecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 532), (uint16_t)GPR_U32(ctx, 5));
    // 0x308ff0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x308ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x308ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x308ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x308FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FF8u;
        // 0x308ffc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309000u;
}
