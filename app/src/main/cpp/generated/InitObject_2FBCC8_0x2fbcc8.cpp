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

// Function: InitObject_2FBCC8
// Address: 0x2fbcc8 - 0x2fbd98
void InitObject_2FBCC8_0x2fbcc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitObject_2FBCC8_0x2fbcc8");
#endif

    switch (ctx->pc) {
        case 0x2fbcdcu: goto label_2fbcdc;
        default: break;
    }

    ctx->pc = 0x2fbcc8u;

    // 0x2fbcc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fbcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fbccc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2fbcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2fbcd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2fbcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2fbcd4: 0xc0bef66  jal         func_2FBD98
    ctx->pc = 0x2FBCD4u;
    SET_GPR_U32(ctx, 31, 0x2FBCDCu);
    ctx->pc = 0x2FBCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBCD4u;
    // 0x2fbcd8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD98u, 0x2FBCD4u, 0x2FBCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBCDCu;
label_2fbcdc:
    // 0x2fbcdc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fbcdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fbce0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fbce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fbce4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2fbce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2fbce8: 0x2442fad0  addiu       $v0, $v0, -0x530
    ctx->pc = 0x2fbce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965968));
    // 0x2fbcec: 0x26030188  addiu       $v1, $s0, 0x188
    ctx->pc = 0x2fbcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 392));
    // 0x2fbcf0: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2fbcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2fbcf4: 0x260401f8  addiu       $a0, $s0, 0x1F8
    ctx->pc = 0x2fbcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 504));
    // 0x2fbcf8: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x2fbcf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
    // 0x2fbcfc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fbcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fbd00: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2fbd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x2fbd04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2fbd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2fbd08: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2fbd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2fbd0c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2fbd0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2fbd10: 0xe60001f8  swc1        $f0, 0x1F8($s0)
    ctx->pc = 0x2fbd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 504), bits); }
    // 0x2fbd14: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2fbd14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x2fbd18: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2fbd18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2fbd1c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2fbd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2fbd20: 0xa6050238  sh          $a1, 0x238($s0)
    ctx->pc = 0x2fbd20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 568), (uint16_t)GPR_U32(ctx, 5));
    // 0x2fbd24: 0xe6000240  swc1        $f0, 0x240($s0)
    ctx->pc = 0x2fbd24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 576), bits); }
    // 0x2fbd28: 0xa2020246  sb          $v0, 0x246($s0)
    ctx->pc = 0x2fbd28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 582), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fbd2c: 0xe6000210  swc1        $f0, 0x210($s0)
    ctx->pc = 0x2fbd2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x2fbd30: 0xa202023e  sb          $v0, 0x23E($s0)
    ctx->pc = 0x2fbd30u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 574), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fbd34: 0xa202023f  sb          $v0, 0x23F($s0)
    ctx->pc = 0x2fbd34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 575), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fbd38: 0xa2020245  sb          $v0, 0x245($s0)
    ctx->pc = 0x2fbd38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 581), (uint8_t)GPR_U32(ctx, 2));
    // 0x2fbd3c: 0xfa000280  sqc2        $vf0, 0x280($s0)
    ctx->pc = 0x2fbd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 640), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fbd40: 0xfa000290  sqc2        $vf0, 0x290($s0)
    ctx->pc = 0x2fbd40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 656), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2fbd44: 0x8e03011c  lw          $v1, 0x11C($s0)
    ctx->pc = 0x2fbd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2fbd48: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x2fbd48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x2fbd4c: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x2fbd4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x2fbd50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fbd50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fbd54: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2fbd54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2fbd58: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x2fbd58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x2fbd5c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2fbd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2fbd60: 0xae000284  sw          $zero, 0x284($s0)
    ctx->pc = 0x2fbd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 0));
    // 0x2fbd64: 0xae03011c  sw          $v1, 0x11C($s0)
    ctx->pc = 0x2fbd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
    // 0x2fbd68: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x2fbd68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x2fbd6c: 0xae000290  sw          $zero, 0x290($s0)
    ctx->pc = 0x2fbd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 656), GPR_U32(ctx, 0));
    // 0x2fbd70: 0xae000294  sw          $zero, 0x294($s0)
    ctx->pc = 0x2fbd70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 660), GPR_U32(ctx, 0));
    // 0x2fbd74: 0xae000298  sw          $zero, 0x298($s0)
    ctx->pc = 0x2fbd74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 0));
    // 0x2fbd78: 0xa20002a1  sb          $zero, 0x2A1($s0)
    ctx->pc = 0x2fbd78u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 673), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fbd7c: 0xa20002a0  sb          $zero, 0x2A0($s0)
    ctx->pc = 0x2fbd7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 672), (uint8_t)GPR_U32(ctx, 0));
    // 0x2fbd80: 0xa6000276  sh          $zero, 0x276($s0)
    ctx->pc = 0x2fbd80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 630), (uint16_t)GPR_U32(ctx, 0));
    // 0x2fbd84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2fbd84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fbd88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2fbd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fbd8c: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBD8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBD8Cu;
        // 0x2fbd90: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBD8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBD94u;
    // 0x2fbd94: 0x0  nop
    ctx->pc = 0x2fbd94u;
    // NOP
    ctx->pc = 0x2fbd98u;
}
