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

// Function: func_0015EAC8
// Address: 0x15eac8 - 0x15ec60
void func_0015EAC8_0x15eac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015EAC8_0x15eac8");
#endif

    switch (ctx->pc) {
        case 0x15ebe0u: goto label_15ebe0;
        default: break;
    }

    ctx->pc = 0x15eac8u;

    // 0x15eac8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15eac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15eacc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15eaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15ead0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15ead0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15ead4: 0x7fb30000  sq          $s3, 0x0($sp)
    ctx->pc = 0x15ead4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 19));
    // 0x15ead8: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x15ead8u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eadc: 0x44130000  mfc1        $s3, $f0
    ctx->pc = 0x15eadcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x15eae0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x15eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x15eae4: 0x34420074  ori         $v0, $v0, 0x74
    ctx->pc = 0x15eae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)116);
    // 0x15eae8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15eae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15eaec: 0x3c055000  lui         $a1, 0x5000
    ctx->pc = 0x15eaecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20480 << 16));
    // 0x15eaf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15eaf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15eaf4: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x15eaf4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eaf8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15eaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15eafc: 0x3c041100  lui         $a0, 0x1100
    ctx->pc = 0x15eafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4352 << 16));
    // 0x15eb00: 0xff020000  sd          $v0, 0x0($t8)
    ctx->pc = 0x15eb00u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 2));
    // 0x15eb04: 0x34a50074  ori         $a1, $a1, 0x74
    ctx->pc = 0x15eb04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)116);
    // 0x15eb08: 0x34068172  ori         $a2, $zero, 0x8172
    ctx->pc = 0x15eb08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33138);
    // 0x15eb0c: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x15eb0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
    // 0x15eb10: 0x34c68073  ori         $a2, $a2, 0x8073
    ctx->pc = 0x15eb10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32883);
    // 0x15eb14: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x15eb14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x15eb18: 0x340280ff  ori         $v0, $zero, 0x80FF
    ctx->pc = 0x15eb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33023);
    // 0x15eb1c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x15eb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x15eb20: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x15eb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x15eb24: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x15eb24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15eb28: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x15eb28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x15eb2c: 0x35080044  ori         $t0, $t0, 0x44
    ctx->pc = 0x15eb2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)68);
    // 0x15eb30: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x15eb30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x15eb34: 0x3c0a0005  lui         $t2, 0x5
    ctx->pc = 0x15eb34u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)5 << 16));
    // 0x15eb38: 0x354a040c  ori         $t2, $t2, 0x40C
    ctx->pc = 0x15eb38u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)1036);
    // 0x15eb3c: 0x240b0047  addiu       $t3, $zero, 0x47
    ctx->pc = 0x15eb3cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x15eb40: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x15eb40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15eb44: 0x340d9d00  ori         $t5, $zero, 0x9D00
    ctx->pc = 0x15eb44u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40192);
    // 0x15eb48: 0xd6c78  dsll        $t5, $t5, 17
    ctx->pc = 0x15eb48u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 17);
    // 0x15eb4c: 0x35ad00f8  ori         $t5, $t5, 0xF8
    ctx->pc = 0x15eb4cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)248);
    // 0x15eb50: 0x240e004e  addiu       $t6, $zero, 0x4E
    ctx->pc = 0x15eb50u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x15eb54: 0x340f800e  ori         $t7, $zero, 0x800E
    ctx->pc = 0x15eb54u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x15eb58: 0xf7ef8  dsll        $t7, $t7, 27
    ctx->pc = 0x15eb58u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 27);
    // 0x15eb5c: 0x35efb328  ori         $t7, $t7, 0xB328
    ctx->pc = 0x15eb5cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)45864);
    // 0x15eb60: 0xf7c78  dsll        $t7, $t7, 17
    ctx->pc = 0x15eb60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 17);
    // 0x15eb64: 0x35ef8980  ori         $t7, $t7, 0x8980
    ctx->pc = 0x15eb64u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)35200);
    // 0x15eb68: 0xf78b8  dsll        $t7, $t7, 2
    ctx->pc = 0x15eb68u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 2);
    // 0x15eb6c: 0x24100006  addiu       $s0, $zero, 0x6
    ctx->pc = 0x15eb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15eb70: 0x24110060  addiu       $s1, $zero, 0x60
    ctx->pc = 0x15eb70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x15eb74: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x15eb74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15eb78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x15eb78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x15eb7c: 0xaf040008  sw          $a0, 0x8($t8)
    ctx->pc = 0x15eb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 8), GPR_U32(ctx, 4));
    // 0x15eb80: 0xaf05000c  sw          $a1, 0xC($t8)
    ctx->pc = 0x15eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 12), GPR_U32(ctx, 5));
    // 0x15eb84: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x15eb84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15eb88: 0xff060010  sd          $a2, 0x10($t8)
    ctx->pc = 0x15eb88u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 16), GPR_U64(ctx, 6));
    // 0x15eb8c: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x15eb8cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x15eb90: 0xff070018  sd          $a3, 0x18($t8)
    ctx->pc = 0x15eb90u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 24), GPR_U64(ctx, 7));
    // 0x15eb94: 0x24190001  addiu       $t9, $zero, 0x1
    ctx->pc = 0x15eb94u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15eb98: 0xff080020  sd          $t0, 0x20($t8)
    ctx->pc = 0x15eb98u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 32), GPR_U64(ctx, 8));
    // 0x15eb9c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x15eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15eba0: 0xff090028  sd          $t1, 0x28($t8)
    ctx->pc = 0x15eba0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 40), GPR_U64(ctx, 9));
    // 0x15eba4: 0x2407000d  addiu       $a3, $zero, 0xD
    ctx->pc = 0x15eba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15eba8: 0xff0a0030  sd          $t2, 0x30($t8)
    ctx->pc = 0x15eba8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 48), GPR_U64(ctx, 10));
    // 0x15ebac: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x15ebacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x15ebb0: 0xff0b0038  sd          $t3, 0x38($t8)
    ctx->pc = 0x15ebb0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 56), GPR_U64(ctx, 11));
    // 0x15ebb4: 0x27020080  addiu       $v0, $t8, 0x80
    ctx->pc = 0x15ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), 128));
    // 0x15ebb8: 0xff0c0048  sd          $t4, 0x48($t8)
    ctx->pc = 0x15ebb8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 72), GPR_U64(ctx, 12));
    // 0x15ebbc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x15ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x15ebc0: 0xff0d0050  sd          $t5, 0x50($t8)
    ctx->pc = 0x15ebc0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 80), GPR_U64(ctx, 13));
    // 0x15ebc4: 0xff0e0058  sd          $t6, 0x58($t8)
    ctx->pc = 0x15ebc4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 88), GPR_U64(ctx, 14));
    // 0x15ebc8: 0xff0f0060  sd          $t7, 0x60($t8)
    ctx->pc = 0x15ebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 96), GPR_U64(ctx, 15));
    // 0x15ebcc: 0xff100068  sd          $s0, 0x68($t8)
    ctx->pc = 0x15ebccu;
    WRITE64(ADD32(GPR_U32(ctx, 24), 104), GPR_U64(ctx, 16));
    // 0x15ebd0: 0xff110070  sd          $s1, 0x70($t8)
    ctx->pc = 0x15ebd0u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 112), GPR_U64(ctx, 17));
    // 0x15ebd4: 0xff120078  sd          $s2, 0x78($t8)
    ctx->pc = 0x15ebd4u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 120), GPR_U64(ctx, 18));
    // 0x15ebd8: 0xff000040  sd          $zero, 0x40($t8)
    ctx->pc = 0x15ebd8u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 64), GPR_U64(ctx, 0));
    // 0x15ebdc: 0x0  nop
    ctx->pc = 0x15ebdcu;
    // NOP
label_15ebe0:
    // 0x15ebe0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x15ebe0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x15ebe4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x15ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x15ebe8: 0xfc590008  sd          $t9, 0x8($v0)
    ctx->pc = 0x15ebe8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 25));
    // 0x15ebec: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x15ebecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x15ebf0: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x15ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x15ebf4: 0xfc440018  sd          $a0, 0x18($v0)
    ctx->pc = 0x15ebf4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 4));
    // 0x15ebf8: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x15ebf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x15ebfc: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x15ebfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x15ec00: 0xfc440038  sd          $a0, 0x38($v0)
    ctx->pc = 0x15ec00u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 4));
    // 0x15ec04: 0xe4410050  swc1        $f1, 0x50($v0)
    ctx->pc = 0x15ec04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x15ec08: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x15ec08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x15ec0c: 0xfc440058  sd          $a0, 0x58($v0)
    ctx->pc = 0x15ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 4));
    // 0x15ec10: 0xe4410070  swc1        $f1, 0x70($v0)
    ctx->pc = 0x15ec10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x15ec14: 0xe4410074  swc1        $f1, 0x74($v0)
    ctx->pc = 0x15ec14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x15ec18: 0xfc440078  sd          $a0, 0x78($v0)
    ctx->pc = 0x15ec18u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 120), GPR_U64(ctx, 4));
    // 0x15ec1c: 0xfc470028  sd          $a3, 0x28($v0)
    ctx->pc = 0x15ec1cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 7));
    // 0x15ec20: 0xfc470048  sd          $a3, 0x48($v0)
    ctx->pc = 0x15ec20u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 7));
    // 0x15ec24: 0xfc460068  sd          $a2, 0x68($v0)
    ctx->pc = 0x15ec24u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 6));
    // 0x15ec28: 0xfc460088  sd          $a2, 0x88($v0)
    ctx->pc = 0x15ec28u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 136), GPR_U64(ctx, 6));
    // 0x15ec2c: 0x4a1ffec  bgez        $a1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x15EC2Cu;
    {
        const bool branch_taken_0x15ec2c = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x15EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC2Cu;
        // 0x15ec30: 0x24420090  addiu       $v0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ec2c) {
            ctx->pc = 0x15EBE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ebe0;
        }
    }
    ctx->pc = 0x15EC34u;
    // 0x15ec34: 0x3c033a00  lui         $v1, 0x3A00
    ctx->pc = 0x15ec34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)14848 << 16));
    // 0x15ec38: 0x346300f8  ori         $v1, $v1, 0xF8
    ctx->pc = 0x15ec38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)248);
    // 0x15ec3c: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x15ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x15ec40: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15ec40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15ec44: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15ec44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ec48: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15ec48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ec4c: 0x7bb30000  lq          $s3, 0x0($sp)
    ctx->pc = 0x15ec4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ec50: 0xff020748  sd          $v0, 0x748($t8)
    ctx->pc = 0x15ec50u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 1864), GPR_U64(ctx, 2));
    // 0x15ec54: 0xff030740  sd          $v1, 0x740($t8)
    ctx->pc = 0x15ec54u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 1856), GPR_U64(ctx, 3));
    // 0x15ec58: 0x3e00008  jr          $ra
    ctx->pc = 0x15EC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EC58u;
        // 0x15ec5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EC60u;
}
