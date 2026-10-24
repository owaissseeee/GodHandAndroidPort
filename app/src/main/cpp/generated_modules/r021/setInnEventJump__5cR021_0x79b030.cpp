#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r021_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r021
{
// Function: setInnEventJump__5cR021
// Address: 0x79b030 - 0x79b2a8
void setInnEventJump__5cR021_0x79b030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setInnEventJump__5cR021_0x79b030");
#endif

    switch (ctx->pc) {
        case 0x79b0d4u: goto label_79b0d4;
        case 0x79b134u: goto label_79b134;
        case 0x79b1b0u: goto label_79b1b0;
        case 0x79b22cu: goto label_79b22c;
        default: break;
    }

    ctx->pc = 0x79b030u;

    // 0x79b030: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79b030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79b034: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79b038: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x79b038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x79b03c: 0x24423ec0  addiu       $v0, $v0, 0x3EC0
    ctx->pc = 0x79b03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
    // 0x79b040: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x79b040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x79b044: 0x2454001c  addiu       $s4, $v0, 0x1C
    ctx->pc = 0x79b044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x79b048: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x79b048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x79b04c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79b04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x79b050: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79b050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79b054: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x79b054u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x79b058: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x79b058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x79b05c: 0x96930010  lhu         $s3, 0x10($s4)
    ctx->pc = 0x79b05cu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)FAST_READ16(0x583EECu));
    // 0x79b060: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x79b060u;
    { uint32_t bits = FAST_READ32(0x583EDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79b064: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x79b064u;
    { uint32_t bits = FAST_READ32(0x583EE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b068: 0x131202  srl         $v0, $s3, 8
    ctx->pc = 0x79b068u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    // 0x79b06c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x79b06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b070: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x79b070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x79b074: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b078: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79b078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79b07c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x79b07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79b080: 0xc694000c  lwc1        $f20, 0xC($s4)
    ctx->pc = 0x79b080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b084: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x79b084u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79b088: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79b088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79b08c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x79b08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79b090: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x79B090u;
    {
        const bool branch_taken_0x79b090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B090u;
        // 0x79b094: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b090) {
            ctx->pc = 0x79B280u;
            goto label_79b280;
        }
    }
    ctx->pc = 0x79B098u;
    // 0x79b098: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79b098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79b09c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79b09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79b0a0: 0x2442bd60  addiu       $v0, $v0, -0x42A0
    ctx->pc = 0x79b0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950240));
    // 0x79b0a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79b0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79b0a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b0ac: 0x800008  jr          $a0
    ctx->pc = 0x79B0ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79B0B4u: goto label_79b0b4;
            case 0x79B114u: goto label_79b114;
            case 0x79B174u: goto label_79b174;
            case 0x79B190u: goto label_79b190;
            case 0x79B1F0u: goto label_79b1f0;
            case 0x79B20Cu: goto label_79b20c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B0ACu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79B0B4u;
label_79b0b4:
    // 0x79b0b4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79b0b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b0b8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79b0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b0bc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79b0c0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79b0c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b0c4: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79b0c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79b0c8: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x79b0c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79b0cc: 0xc1e6eb0  jal         func_79BAC0
    ctx->pc = 0x79B0CCu;
    SET_GPR_U32(ctx, 31, 0x79B0D4u);
    ctx->pc = 0x79B0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0CCu;
    // 0x79b0d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BAC0u, 0x79B0CCu, 0x79B0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0D4u;
label_79b0d4:
    // 0x79b0d4: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b0d8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x79b0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x79b0dc: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b0e0: 0xa4730008  sh          $s3, 0x8($v1)
    ctx->pc = 0x79b0e0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x79b0e4: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79b0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b0e8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x79b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b0ec: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B0ECu;
    {
        const bool branch_taken_0x79b0ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79B0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0ECu;
        // 0x79b0f0: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0ec) {
            ctx->pc = 0x79B108u;
            goto label_79b108;
        }
    }
    ctx->pc = 0x79B0F4u;
    // 0x79b0f4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x79b0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x79b0f8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79b0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b0fc: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79b0fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b100: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79b100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b104: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79b104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79b108:
    // 0x79b108: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79b108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b10c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x79B10Cu;
    {
        const bool branch_taken_0x79b10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B10Cu;
        // 0x79b110: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b10c) {
            ctx->pc = 0x79B268u;
            goto label_79b268;
        }
    }
    ctx->pc = 0x79B114u;
label_79b114:
    // 0x79b114: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79b114u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b118: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79b118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b11c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79b120: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79b120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b124: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79b124u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79b128: 0x24100012  addiu       $s0, $zero, 0x12
    ctx->pc = 0x79b128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x79b12c: 0xc1e6eb0  jal         func_79BAC0
    ctx->pc = 0x79B12Cu;
    SET_GPR_U32(ctx, 31, 0x79B134u);
    ctx->pc = 0x79B130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B12Cu;
    // 0x79b130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BAC0u, 0x79B12Cu, 0x79B134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B134u;
label_79b134:
    // 0x79b134: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79b134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b138: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x79b138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x79b13c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79b13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b140: 0xa4730008  sh          $s3, 0x8($v1)
    ctx->pc = 0x79b140u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x79b144: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79b144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b148: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x79b148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b14c: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B14Cu;
    {
        const bool branch_taken_0x79b14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B14Cu;
        // 0x79b150: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b14c) {
            ctx->pc = 0x79B168u;
            goto label_79b168;
        }
    }
    ctx->pc = 0x79B154u;
    // 0x79b154: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x79b154u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x79b158: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79b158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b15c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79b15cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b160: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79b160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b164: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79b164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79b168:
    // 0x79b168: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79b168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b16c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x79B16Cu;
    {
        const bool branch_taken_0x79b16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B16Cu;
        // 0x79b170: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b16c) {
            ctx->pc = 0x79B268u;
            goto label_79b268;
        }
    }
    ctx->pc = 0x79B174u;
label_79b174:
    // 0x79b174: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79b174u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b178: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79b178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b17c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79b180: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79b180u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b184: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79b184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79b188: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x79B188u;
    {
        const bool branch_taken_0x79b188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B188u;
        // 0x79b18c: 0x24100016  addiu       $s0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b188) {
            ctx->pc = 0x79B224u;
            goto label_79b224;
        }
    }
    ctx->pc = 0x79B190u;
label_79b190:
    // 0x79b190: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79b190u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b194: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79b194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b198: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79b19c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79b19cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b1a0: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79b1a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79b1a4: 0x24100020  addiu       $s0, $zero, 0x20
    ctx->pc = 0x79b1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x79b1a8: 0xc1e6eb0  jal         func_79BAC0
    ctx->pc = 0x79B1A8u;
    SET_GPR_U32(ctx, 31, 0x79B1B0u);
    ctx->pc = 0x79B1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B1A8u;
    // 0x79b1ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BAC0u, 0x79B1A8u, 0x79B1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B1B0u;
label_79b1b0:
    // 0x79b1b0: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b1b4: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x79b1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x79b1b8: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79b1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b1bc: 0xa4730008  sh          $s3, 0x8($v1)
    ctx->pc = 0x79b1bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x79b1c0: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79b1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b1c4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x79b1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b1c8: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B1C8u;
    {
        const bool branch_taken_0x79b1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79B1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1C8u;
        // 0x79b1cc: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1c8) {
            ctx->pc = 0x79B1E4u;
            goto label_79b1e4;
        }
    }
    ctx->pc = 0x79B1D0u;
    // 0x79b1d0: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x79b1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x79b1d4: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79b1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b1d8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79b1d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b1dc: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79b1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b1e0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79b1e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79b1e4:
    // 0x79b1e4: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79b1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b1e8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x79B1E8u;
    {
        const bool branch_taken_0x79b1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1E8u;
        // 0x79b1ec: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1e8) {
            ctx->pc = 0x79B268u;
            goto label_79b268;
        }
    }
    ctx->pc = 0x79B1F0u;
label_79b1f0:
    // 0x79b1f0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79b1f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b1f4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79b1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b1f8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79b1fc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79b1fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b200: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79b200u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79b204: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79B204u;
    {
        const bool branch_taken_0x79b204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B204u;
        // 0x79b208: 0x24100024  addiu       $s0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b204) {
            ctx->pc = 0x79B224u;
            goto label_79b224;
        }
    }
    ctx->pc = 0x79B20Cu;
label_79b20c:
    // 0x79b20c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79b20cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b210: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79b210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79b214: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79b218: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79b218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b21c: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79b21cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79b220: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x79b220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_79b224:
    // 0x79b224: 0xc1e6eb0  jal         func_79BAC0
    ctx->pc = 0x79B224u;
    SET_GPR_U32(ctx, 31, 0x79B22Cu);
    ctx->pc = 0x79B228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B224u;
    // 0x79b228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BAC0u, 0x79B224u, 0x79B22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B22Cu;
label_79b22c:
    // 0x79b22c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b230: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x79b230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x79b234: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79b234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b238: 0xa4730008  sh          $s3, 0x8($v1)
    ctx->pc = 0x79b238u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x79b23c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79b23cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b240: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x79b240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79b244: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B244u;
    {
        const bool branch_taken_0x79b244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79B248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B244u;
        // 0x79b248: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b244) {
            ctx->pc = 0x79B260u;
            goto label_79b260;
        }
    }
    ctx->pc = 0x79B24Cu;
    // 0x79b24c: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x79b24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x79b250: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79b250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79b254: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79b254u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b258: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79b258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79b25c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79b25cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79b260:
    // 0x79b260: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79b260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b264: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x79b264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79b268:
    // 0x79b268: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x79b268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x79b26c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79b26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79b270: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79b270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79b274: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x79b274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x79b278: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79b278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79b27c: 0xa6840010  sh          $a0, 0x10($s4)
    ctx->pc = 0x79b27cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 4));
label_79b280:
    // 0x79b280: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x79b280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b284: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x79b284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79b288: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x79b288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b28c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x79b28cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b290: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x79b290u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b294: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79b294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b298: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x79b298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79b29c: 0x3e00008  jr          $ra
    ctx->pc = 0x79B29Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B29Cu;
        // 0x79b2a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B29Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B2A4u;
    // 0x79b2a4: 0x0  nop
    ctx->pc = 0x79b2a4u;
    // NOP
    ctx->pc = 0x79b2a8u;
}
} // namespace gh_r021
