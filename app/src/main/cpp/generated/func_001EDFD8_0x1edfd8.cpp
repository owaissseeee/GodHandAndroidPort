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

// Function: func_001EDFD8
// Address: 0x1edfd8 - 0x1ee1c0
void func_001EDFD8_0x1edfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001EDFD8_0x1edfd8");
#endif

    switch (ctx->pc) {
        case 0x1ee028u: goto label_1ee028;
        case 0x1ee0d0u: goto label_1ee0d0;
        case 0x1ee17cu: goto label_1ee17c;
        case 0x1ee19cu: goto label_1ee19c;
        default: break;
    }

    ctx->pc = 0x1edfd8u;

    // 0x1edfd8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1edfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1edfdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1edfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edfe0: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1edfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x1edfe4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1edfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1edfe8: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1edfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1edfec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1edfecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edff0: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1edff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1edff4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1edff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x1edff8: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1edff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1edffc: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x1edffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ee000: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1ee000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1ee004: 0x27b10080  addiu       $s1, $sp, 0x80
    ctx->pc = 0x1ee004u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1ee008: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1ee008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1ee00c: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1ee00cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee010: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1ee010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1ee014: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ee014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ee018: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1ee018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1ee01c: 0x27b20090  addiu       $s2, $sp, 0x90
    ctx->pc = 0x1ee01cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1ee020: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1ee020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ee024: 0x0  nop
    ctx->pc = 0x1ee024u;
    // NOP
label_1ee028:
    // 0x1ee028: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1ee028u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ee02c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1ee02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1ee030: 0x0  nop
    ctx->pc = 0x1ee030u;
    // NOP
    // 0x1ee034: 0x0  nop
    ctx->pc = 0x1ee034u;
    // NOP
    // 0x1ee038: 0x1445fffb  bne         $v0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1EE038u;
    {
        const bool branch_taken_0x1ee038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1EE03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE038u;
        // 0x1ee03c: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee038) {
            ctx->pc = 0x1EE028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ee028;
        }
    }
    ctx->pc = 0x1EE040u;
    // 0x1ee040: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x1ee040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ee044: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x1ee044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1ee048: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1ee048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1ee04c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ee04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee050: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1ee050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1ee054: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ee054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1ee058: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ee058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ee05c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1ee05cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ee060: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1ee060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1ee064: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ee064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee068: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1ee068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1ee06c: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1ee06cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1ee070: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x1ee070u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ee074: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x1ee074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
    // 0x1ee078: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1ee078u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1ee07c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ee07cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ee080: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x1ee080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ee084: 0xc7a400c8  lwc1        $f4, 0xC8($sp)
    ctx->pc = 0x1ee084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ee088: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1ee088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee08c: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1ee08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
    // 0x1ee090: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ee090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1ee094: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1ee094u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1ee098: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x1ee098u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1ee09c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1ee09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1ee0a0: 0xe7a400a8  swc1        $f4, 0xA8($sp)
    ctx->pc = 0x1ee0a0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x1ee0a4: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x1ee0a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1ee0a8: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x1ee0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
    // 0x1ee0ac: 0xe494000c  swc1        $f20, 0xC($a0)
    ctx->pc = 0x1ee0acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1ee0b0: 0x8c442388  lw          $a0, 0x2388($v0)
    ctx->pc = 0x1ee0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2388u));
    // 0x1ee0b4: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1ee0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee0b8: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x1ee0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee0bc: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x1ee0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ee0c0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ee0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1ee0c4: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1ee0c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1ee0c8: 0xc0ab372  jal         func_2ACDC8
    ctx->pc = 0x1EE0C8u;
    SET_GPR_U32(ctx, 31, 0x1EE0D0u);
    ctx->pc = 0x1EE0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE0C8u;
    // 0x1ee0cc: 0xe7a200b8  swc1        $f2, 0xB8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACDC8u, 0x1EE0C8u, 0x1EE0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE0D0u;
label_1ee0d0:
    // 0x1ee0d0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1ee0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee0d4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1ee0d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee0d8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ee0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee0dc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1ee0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1ee0e0: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x1ee0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ee0e4: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x1ee0e4u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
    // 0x1ee0e8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1ee0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1ee0ec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1ee0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1ee0f0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1ee0f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1ee0f4: 0x3c058080  lui         $a1, 0x8080
    ctx->pc = 0x1ee0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32896 << 16));
    // 0x1ee0f8: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x1ee0f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1ee0fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1ee0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee100: 0xe7a30074  swc1        $f3, 0x74($sp)
    ctx->pc = 0x1ee100u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1ee104: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1ee104u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x1ee108: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1ee108u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1ee10c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ee10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ee110: 0xe674000c  swc1        $f20, 0xC($s3)
    ctx->pc = 0x1ee110u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1ee114: 0x24091cf0  addiu       $t1, $zero, 0x1CF0
    ctx->pc = 0x1ee114u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x1ee118: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1ee118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1ee11c: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x1ee11cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ee120: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x1ee120u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1ee124: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ee124u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee128: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1ee128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1ee12c: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1ee12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee130: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1ee130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee134: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1ee134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1ee138: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1ee138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x1ee13c: 0xe634000c  swc1        $f20, 0xC($s1)
    ctx->pc = 0x1ee13cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x1ee140: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x1ee140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x1ee144: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1ee144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ee148: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1ee148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ee14c: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1ee14cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1ee150: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1ee150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1ee154: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x1ee154u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x1ee158: 0x3c013f60  lui         $at, 0x3F60
    ctx->pc = 0x1ee158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16224 << 16));
    // 0x1ee15c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ee15cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ee160: 0x8c4811b0  lw          $t0, 0x11B0($v0)
    ctx->pc = 0x1ee160u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11B0u));
    // 0x1ee164: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1ee164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1ee168: 0xe7b4001c  swc1        $f20, 0x1C($sp)
    ctx->pc = 0x1ee168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x1ee16c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1ee16cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1ee170: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1ee170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1ee174: 0xc056f3c  jal         func_15BCF0
    ctx->pc = 0x1EE174u;
    SET_GPR_U32(ctx, 31, 0x1EE17Cu);
    ctx->pc = 0x1EE178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE174u;
    // 0x1ee178: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF0u, 0x1EE174u, 0x1EE17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE17Cu;
label_1ee17c:
    // 0x1ee17c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1ee17cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee180: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1EE180u;
    {
        const bool branch_taken_0x1ee180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ee180) {
            ctx->pc = 0x1EE194u;
            goto label_1ee194;
        }
    }
    ctx->pc = 0x1EE188u;
    // 0x1ee188: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1ee188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1ee18c: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x1ee18cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x1ee190: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x1ee190u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
label_1ee194:
    // 0x1ee194: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x1EE194u;
    SET_GPR_U32(ctx, 31, 0x1EE19Cu);
    ctx->pc = 0x1EE198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EE194u;
    // 0x1ee198: 0x26840010  addiu       $a0, $s4, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x1EE194u, 0x1EE19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EE19Cu;
label_1ee19c:
    // 0x1ee19c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1ee19cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1ee1a0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1ee1a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1ee1a4: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1ee1a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1ee1a8: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1ee1a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1ee1ac: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1ee1acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1ee1b0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x1ee1b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1ee1b4: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1ee1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ee1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE1B8u;
        // 0x1ee1bc: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE1C0u;
}
