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

// Function: BlackJackId__Trans
// Address: 0x1d4fd0 - 0x1d51b8
void BlackJackId__Trans_0x1d4fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJackId__Trans_0x1d4fd0");
#endif

    switch (ctx->pc) {
        case 0x1d5020u: goto label_1d5020;
        case 0x1d50c8u: goto label_1d50c8;
        case 0x1d5174u: goto label_1d5174;
        case 0x1d5194u: goto label_1d5194;
        default: break;
    }

    ctx->pc = 0x1d4fd0u;

    // 0x1d4fd0: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1d4fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1d4fd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d4fd8: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1d4fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x1d4fdc: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1d4fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1d4fe0: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1d4fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1d4fe4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d4fe4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4fe8: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1d4fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1d4fec: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1d4fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1d4ff0: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1d4ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1d4ff4: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x1d4ff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1d4ff8: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1d4ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1d4ffc: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1d4ffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1d5000: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d5000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d5004: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1d5004u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5008: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1d5008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1d500c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d5010: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1d5010u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1d5014: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x1d5014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1d5018: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d5018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d501c: 0x0  nop
    ctx->pc = 0x1d501cu;
    // NOP
label_1d5020:
    // 0x1d5020: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1d5020u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1d5024: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1d5024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1d5028: 0x0  nop
    ctx->pc = 0x1d5028u;
    // NOP
    // 0x1d502c: 0x0  nop
    ctx->pc = 0x1d502cu;
    // NOP
    // 0x1d5030: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D5030u;
    {
        const bool branch_taken_0x1d5030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D5034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D5030u;
        // 0x1d5034: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5030) {
            ctx->pc = 0x1D5020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d5020;
        }
    }
    ctx->pc = 0x1D5038u;
    // 0x1d5038: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x1d5038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1d503c: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x1d503cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1d5040: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1d5040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1d5044: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d5044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5048: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1d5048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1d504c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d504cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d5050: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d5050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1d5054: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1d5054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1d5058: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1d5058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1d505c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d505cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5060: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1d5060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d5064: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1d5064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1d5068: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x1d5068u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1d506c: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1d506cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1d5070: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1d5070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1d5074: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d5074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5078: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1d5078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d507c: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x1d507cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d5080: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1d5080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5084: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1d5084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x1d5088: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1d5088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1d508c: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1d508cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1d5090: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x1d5090u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1d5094: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1d5094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1d5098: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x1d5098u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1d509c: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x1d509cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1d50a0: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1d50a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1d50a4: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x1d50a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1d50a8: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x1d50a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x1d50ac: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1d50acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d50b0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1d50b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d50b4: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x1d50b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d50b8: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1d50b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1d50bc: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1d50bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1d50c0: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x1D50C0u;
    SET_GPR_U32(ctx, 31, 0x1D50C8u);
    ctx->pc = 0x1D50C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D50C0u;
    // 0x1d50c4: 0xe7a200b8  swc1        $f2, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x1D50C0u, 0x1D50C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D50C8u;
label_1d50c8:
    // 0x1d50c8: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1d50c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d50cc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d50ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d50d0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d50d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d50d4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1d50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1d50d8: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x1d50d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d50dc: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x1d50dcu;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x1d50e0: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1d50e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1d50e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d50e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d50e8: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1d50e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1d50ec: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x1d50ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x1d50f0: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1d50f0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1d50f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d50f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d50f8: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x1d50f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1d50fc: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1d50fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1d5100: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1d5100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1d5104: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d5104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d5108: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1d5108u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1d510c: 0x24091cf0  addiu       $t1, $zero, 0x1CF0
    ctx->pc = 0x1d510cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x1d5110: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1d5110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1d5114: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x1d5114u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d5118: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1d5118u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1d511c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d511cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5120: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1d5120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1d5124: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1d5124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5128: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1d5128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d512c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1d512cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1d5130: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1d5130u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1d5134: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1d5134u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1d5138: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1d5138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1d513c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1d513cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5140: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1d5140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5144: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1d5144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1d5148: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1d5148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1d514c: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1d514cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1d5150: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x1d5150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
    // 0x1d5154: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1d5154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d5158: 0x8c4811b0  lw          $t0, 0x11B0($v0)
    ctx->pc = 0x1d5158u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11B0u));
    // 0x1d515c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1d515cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1d5160: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x1d5160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1d5164: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1d5164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1d5168: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d5168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1d516c: 0xc056f3c  jal         func_15BCF0
    ctx->pc = 0x1D516Cu;
    SET_GPR_U32(ctx, 31, 0x1D5174u);
    ctx->pc = 0x1D5170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D516Cu;
    // 0x1d5170: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF0u, 0x1D516Cu, 0x1D5174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5174u;
label_1d5174:
    // 0x1d5174: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1d5174u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d5178: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D5178u;
    {
        const bool branch_taken_0x1d5178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5178) {
            ctx->pc = 0x1D518Cu;
            goto label_1d518c;
        }
    }
    ctx->pc = 0x1D5180u;
    // 0x1d5180: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1d5180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1d5184: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x1d5184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x1d5188: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x1d5188u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
label_1d518c:
    // 0x1d518c: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1D518Cu;
    SET_GPR_U32(ctx, 31, 0x1D5194u);
    ctx->pc = 0x1D5190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D518Cu;
    // 0x1d5190: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1D518Cu, 0x1D5194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D5194u;
label_1d5194:
    // 0x1d5194: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1d5194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1d5198: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1d5198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1d519c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1d519cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1d51a0: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1d51a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1d51a4: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1d51a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1d51a8: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1d51a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1d51ac: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1d51acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d51b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D51B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D51B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D51B0u;
        // 0x1d51b4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D51B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D51B8u;
}
