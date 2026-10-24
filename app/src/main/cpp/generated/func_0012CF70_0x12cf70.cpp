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

// Function: func_0012CF70
// Address: 0x12cf70 - 0x12d178
void func_0012CF70_0x12cf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012CF70_0x12cf70");
#endif

    switch (ctx->pc) {
        case 0x12cff0u: goto label_12cff0;
        case 0x12d018u: goto label_12d018;
        default: break;
    }

    ctx->pc = 0x12cf70u;

    // 0x12cf70: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x12cf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x12cf74: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x12cf74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x12cf78: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x12cf78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x12cf7c: 0x2442d5a8  addiu       $v0, $v0, -0x2A58
    ctx->pc = 0x12cf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956456));
    // 0x12cf80: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x12cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x12cf84: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12cf84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf88: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x12cf88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x12cf8c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x12cf8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12cf90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12cf94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12cf94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cf98: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x12cf98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x12cf9c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x12cf9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfa0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x12cfa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x12cfa4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12cfa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfa8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x12cfa8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x12cfac: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x12cfacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfb0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x12cfb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x12cfb4: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x12cfb4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x12cfb8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12cfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12cfbc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x12cfbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x12cfc0: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x12cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
    // 0x12cfc4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12cfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x12cfc8: 0xfa000010  sqc2        $vf0, 0x10($s0)
    ctx->pc = 0x12cfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12cfcc: 0xfa000020  sqc2        $vf0, 0x20($s0)
    ctx->pc = 0x12cfccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12cfd0: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x12cfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x12cfd4: 0x26040034  addiu       $a0, $s0, 0x34
    ctx->pc = 0x12cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x12cfd8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x12cfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x12cfdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12cfdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cfe0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x12cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x12cfe4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x12cfe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12cfe8: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x12CFE8u;
    SET_GPR_U32(ctx, 31, 0x12CFF0u);
    ctx->pc = 0x12CFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12CFE8u;
    // 0x12cfec: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x12CFE8u, 0x12CFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CFF0u;
label_12cff0:
    // 0x12cff0: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x12cff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x12cff4: 0x2463d580  addiu       $v1, $v1, -0x2A80
    ctx->pc = 0x12cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956416));
    // 0x12cff8: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x12cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
    // 0x12cffc: 0xfa000060  sqc2        $vf0, 0x60($s0)
    ctx->pc = 0x12cffcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d000: 0xfa000070  sqc2        $vf0, 0x70($s0)
    ctx->pc = 0x12d000u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d004: 0xfa000080  sqc2        $vf0, 0x80($s0)
    ctx->pc = 0x12d004u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d008: 0xfa000090  sqc2        $vf0, 0x90($s0)
    ctx->pc = 0x12d008u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d00c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12d010: 0x260200c0  addiu       $v0, $s0, 0xC0
    ctx->pc = 0x12d010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x12d014: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12d014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12d018:
    // 0x12d018: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12d018u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12d01c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12d01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12d020: 0x0  nop
    ctx->pc = 0x12d020u;
    // NOP
    // 0x12d024: 0x0  nop
    ctx->pc = 0x12d024u;
    // NOP
    // 0x12d028: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12D028u;
    {
        const bool branch_taken_0x12d028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x12D02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D028u;
        // 0x12d02c: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d028) {
            ctx->pc = 0x12D018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12d018;
        }
    }
    ctx->pc = 0x12D030u;
    // 0x12d030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12d030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d034: 0xae140058  sw          $s4, 0x58($s0)
    ctx->pc = 0x12d034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 20));
    // 0x12d038: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x12d038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x12d03c: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x12d03cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x12d040: 0xae120030  sw          $s2, 0x30($s0)
    ctx->pc = 0x12d040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 18));
    // 0x12d044: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x12d044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x12d048: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D048u;
    {
        const bool branch_taken_0x12d048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12d048) {
            ctx->pc = 0x12D04Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D048u;
            // 0x12d04c: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D06Cu;
            goto label_12d06c;
        }
    }
    ctx->pc = 0x12D050u;
    // 0x12d050: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12d050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d054: 0xe6000060  swc1        $f0, 0x60($s0)
    ctx->pc = 0x12d054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 96), bits); }
    // 0x12d058: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12d058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d05c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x12d05cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12d060: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12d060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d064: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x12d064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12d068: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x12d068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_12d06c:
    // 0x12d06c: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D06Cu;
    {
        const bool branch_taken_0x12d06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x12D070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D06Cu;
        // 0x12d070: 0x26030080  addiu       $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d06c) {
            ctx->pc = 0x12D08Cu;
            goto label_12d08c;
        }
    }
    ctx->pc = 0x12D074u;
    // 0x12d074: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x12d074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d078: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x12d078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x12d07c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x12d07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d080: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12d080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12d084: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x12d084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d088: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12d088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12d08c:
    // 0x12d08c: 0x26420100  addiu       $v0, $s2, 0x100
    ctx->pc = 0x12d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
    // 0x12d090: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12D090u;
    {
        const bool branch_taken_0x12d090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x12d090) {
            ctx->pc = 0x12D094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D090u;
            // 0x12d094: 0x26020090  addiu       $v0, $s0, 0x90 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D0B4u;
            goto label_12d0b4;
        }
    }
    ctx->pc = 0x12D098u;
    // 0x12d098: 0xc6400100  lwc1        $f0, 0x100($s2)
    ctx->pc = 0x12d098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d09c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x12d09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x12d0a0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12d0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d0a4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x12d0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12d0a8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12d0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d0ac: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x12d0acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12d0b0: 0x26020090  addiu       $v0, $s0, 0x90
    ctx->pc = 0x12d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_12d0b4:
    // 0x12d0b4: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x12D0B4u;
    {
        const bool branch_taken_0x12d0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x12d0b4) {
            ctx->pc = 0x12D0D4u;
            goto label_12d0d4;
        }
    }
    ctx->pc = 0x12D0BCu;
    // 0x12d0bc: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x12d0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d0c0: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x12d0c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x12d0c4: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x12d0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12d0c8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12d0c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12d0cc: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x12d0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12d0d0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12d0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12d0d4:
    // 0x12d0d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12d0d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12d0d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12d0d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x12d0dc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x12d0dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d0e0: 0x0  nop
    ctx->pc = 0x12d0e0u;
    // NOP
    // 0x12d0e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12D0E4u;
    {
        const bool branch_taken_0x12d0e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12d0e4) {
            ctx->pc = 0x12D0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12D0E4u;
            // 0x12d0e8: 0x46006307  neg.s       $f12, $f12 (Delay Slot)
            ctx->f[12] = FPU_NEG_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12D0ECu;
            goto label_12d0ec;
        }
    }
    ctx->pc = 0x12D0ECu;
label_12d0ec:
    // 0x12d0ec: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x12d0ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x12d0f0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x12d0f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12d0f4: 0x0  nop
    ctx->pc = 0x12d0f4u;
    // NOP
    // 0x12d0f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12D0F8u;
    {
        const bool branch_taken_0x12d0f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D0F8u;
        // 0x12d0fc: 0xe60c00a0  swc1        $f12, 0xA0($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12d0f8) {
            ctx->pc = 0x12D104u;
            goto label_12d104;
        }
    }
    ctx->pc = 0x12D100u;
    // 0x12d100: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x12d100u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_12d104:
    // 0x12d104: 0xe60d00a4  swc1        $f13, 0xA4($s0)
    ctx->pc = 0x12d104u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x12d108: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x12d108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x12d10c: 0x6aa20007  ldl         $v0, 0x7($s5)
    ctx->pc = 0x12d10cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12d110: 0x6ea20000  ldr         $v0, 0x0($s5)
    ctx->pc = 0x12d110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x12d114: 0x6aa3000f  ldl         $v1, 0xF($s5)
    ctx->pc = 0x12d114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12d118: 0x6ea30008  ldr         $v1, 0x8($s5)
    ctx->pc = 0x12d118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12d11c: 0xb20200af  sdl         $v0, 0xAF($s0)
    ctx->pc = 0x12d11cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 175); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12d120: 0xb60200a8  sdr         $v0, 0xA8($s0)
    ctx->pc = 0x12d120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 168); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12d124: 0xb20300b7  sdl         $v1, 0xB7($s0)
    ctx->pc = 0x12d124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12d128: 0xb60300b0  sdr         $v1, 0xB0($s0)
    ctx->pc = 0x12d128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12d12c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x12d12cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d130: 0xa60400b0  sh          $a0, 0xB0($s0)
    ctx->pc = 0x12d130u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 176), (uint16_t)GPR_U32(ctx, 4));
    // 0x12d134: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x12d134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12d138: 0xa20000b3  sb          $zero, 0xB3($s0)
    ctx->pc = 0x12d138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 179), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d13c: 0x34630005  ori         $v1, $v1, 0x5
    ctx->pc = 0x12d13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5);
    // 0x12d140: 0xa20000b2  sb          $zero, 0xB2($s0)
    ctx->pc = 0x12d140u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 178), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d144: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x12d144u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x12d148: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x12d148u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12d14c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x12d14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12d150: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x12d150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12d154: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12d154u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12d158: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x12d158u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12d15c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x12d15cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12d160: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12d160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d164: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x12d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x12d168: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x12d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12d16c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D16Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D16Cu;
        // 0x12d170: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D16Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D174u;
    // 0x12d174: 0x0  nop
    ctx->pc = 0x12d174u;
    // NOP
    ctx->pc = 0x12d178u;
}
