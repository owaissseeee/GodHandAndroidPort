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

// Function: PokerId__Trans
// Address: 0x1df9b8 - 0x1dfb98
void PokerId__Trans_0x1df9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PokerId__Trans_0x1df9b8");
#endif

    switch (ctx->pc) {
        case 0x1df9e0u: goto label_1df9e0;
        case 0x1df9e8u: goto label_1df9e8;
        case 0x1dfa10u: goto label_1dfa10;
        case 0x1dfab8u: goto label_1dfab8;
        case 0x1dfb64u: goto label_1dfb64;
        default: break;
    }

    ctx->pc = 0x1df9b8u;

    // 0x1df9b8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1df9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1df9bc: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x1df9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x1df9c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1df9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1df9c4: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x1df9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x1df9c8: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x1df9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x1df9cc: 0x260425b0  addiu       $a0, $s0, 0x25B0
    ctx->pc = 0x1df9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 9648));
    // 0x1df9d0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x1df9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x1df9d4: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1df9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1df9d8: 0xc077b88  jal         func_1DEE20
    ctx->pc = 0x1DF9D8u;
    SET_GPR_U32(ctx, 31, 0x1DF9E0u);
    ctx->pc = 0x1DF9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9D8u;
    // 0x1df9dc: 0xe7b40120  swc1        $f20, 0x120($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE20u, 0x1DF9D8u, 0x1DF9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9E0u;
label_1df9e0:
    // 0x1df9e0: 0xc07747e  jal         func_1DD1F8
    ctx->pc = 0x1DF9E0u;
    SET_GPR_U32(ctx, 31, 0x1DF9E8u);
    ctx->pc = 0x1DF9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DF9E0u;
    // 0x1df9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD1F8u, 0x1DF9E0u, 0x1DF9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DF9E8u;
label_1df9e8:
    // 0x1df9e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1df9ec: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1df9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1df9f0: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1df9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1df9f4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1df9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1df9f8: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x1df9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1df9fc: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1df9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1dfa00: 0x27b30090  addiu       $s3, $sp, 0x90
    ctx->pc = 0x1dfa00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1dfa04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1dfa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1dfa08: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x1dfa08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfa0c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dfa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dfa10:
    // 0x1dfa10: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1dfa10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1dfa14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1dfa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1dfa18: 0x0  nop
    ctx->pc = 0x1dfa18u;
    // NOP
    // 0x1dfa1c: 0x0  nop
    ctx->pc = 0x1dfa1cu;
    // NOP
    // 0x1dfa20: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1DFA20u;
    {
        const bool branch_taken_0x1dfa20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1DFA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFA20u;
        // 0x1dfa24: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfa20) {
            ctx->pc = 0x1DFA10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1dfa10;
        }
    }
    ctx->pc = 0x1DFA28u;
    // 0x1dfa28: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x1dfa28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1dfa2c: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x1dfa2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1dfa30: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1dfa30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1dfa34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dfa34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfa38: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1dfa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1dfa3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1dfa3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1dfa40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1dfa40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1dfa44: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1dfa44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x1dfa48: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1dfa48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1dfa4c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dfa4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfa50: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1dfa50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1dfa54: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1dfa54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1dfa58: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x1dfa58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1dfa5c: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1dfa5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1dfa60: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1dfa60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1dfa64: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1dfa64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1dfa68: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1dfa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dfa6c: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x1dfa6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dfa70: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1dfa70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfa74: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1dfa74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x1dfa78: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1dfa78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1dfa7c: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1dfa7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1dfa80: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x1dfa80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1dfa84: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1dfa84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1dfa88: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x1dfa88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1dfa8c: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x1dfa8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1dfa90: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1dfa90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1dfa94: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x1dfa94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1dfa98: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x1dfa98u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x1dfa9c: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1dfa9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfaa0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1dfaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfaa4: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x1dfaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dfaa8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1dfaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1dfaac: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1dfaacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1dfab0: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x1DFAB0u;
    SET_GPR_U32(ctx, 31, 0x1DFAB8u);
    ctx->pc = 0x1DFAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFAB0u;
    // 0x1dfab4: 0xe7a200b8  swc1        $f2, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x1DFAB0u, 0x1DFAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFAB8u;
label_1dfab8:
    // 0x1dfab8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1dfab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfabc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1dfabcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfac0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1dfac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfac4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1dfac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1dfac8: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x1dfac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dfacc: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x1dfaccu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x1dfad0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1dfad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1dfad4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1dfad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dfad8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1dfad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1dfadc: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x1dfadcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x1dfae0: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1dfae0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1dfae4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1dfae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfae8: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x1dfae8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1dfaec: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1dfaecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1dfaf0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1dfaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1dfaf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1dfaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dfaf8: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1dfaf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1dfafc: 0x24091cf0  addiu       $t1, $zero, 0x1CF0
    ctx->pc = 0x1dfafcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x1dfb00: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1dfb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1dfb04: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x1dfb04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1dfb08: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1dfb08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1dfb0c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1dfb0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb10: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1dfb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1dfb14: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1dfb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfb18: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1dfb18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfb1c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1dfb1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1dfb20: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1dfb20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1dfb24: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1dfb24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1dfb28: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1dfb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1dfb2c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1dfb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dfb30: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1dfb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dfb34: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1dfb34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1dfb38: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1dfb38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1dfb3c: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1dfb3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1dfb40: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x1dfb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
    // 0x1dfb44: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dfb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dfb48: 0x8c4811b0  lw          $t0, 0x11B0($v0)
    ctx->pc = 0x1dfb48u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11B0u));
    // 0x1dfb4c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1dfb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1dfb50: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x1dfb50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1dfb54: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1dfb54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1dfb58: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1dfb58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1dfb5c: 0xc056f3c  jal         func_15BCF0
    ctx->pc = 0x1DFB5Cu;
    SET_GPR_U32(ctx, 31, 0x1DFB64u);
    ctx->pc = 0x1DFB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFB5Cu;
    // 0x1dfb60: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF0u, 0x1DFB5Cu, 0x1DFB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFB64u;
label_1dfb64:
    // 0x1dfb64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1dfb64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dfb68: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DFB68u;
    {
        const bool branch_taken_0x1dfb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB68u;
        // 0x1dfb6c: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb68) {
            ctx->pc = 0x1DFB7Cu;
            goto label_1dfb7c;
        }
    }
    ctx->pc = 0x1DFB70u;
    // 0x1dfb70: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1dfb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1dfb74: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x1dfb74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x1dfb78: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x1dfb78u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
label_1dfb7c:
    // 0x1dfb7c: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x1dfb7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1dfb80: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x1dfb80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1dfb84: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x1dfb84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1dfb88: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1dfb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1dfb8c: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x1dfb8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dfb90: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB90u;
        // 0x1dfb94: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFB98u;
}
