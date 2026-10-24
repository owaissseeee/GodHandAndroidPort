#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: setInnEventJump__5cR022
// Address: 0x79aa50 - 0x79ac80
void setInnEventJump__5cR022_0x79aa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("setInnEventJump__5cR022_0x79aa50");
#endif

    switch (ctx->pc) {
        case 0x79aaf4u: goto label_79aaf4;
        case 0x79ab54u: goto label_79ab54;
        case 0x79ac08u: goto label_79ac08;
        default: break;
    }

    ctx->pc = 0x79aa50u;

    // 0x79aa50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79aa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79aa54: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79aa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79aa58: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x79aa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x79aa5c: 0x24423ec0  addiu       $v0, $v0, 0x3EC0
    ctx->pc = 0x79aa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16064));
    // 0x79aa60: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x79aa60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x79aa64: 0x2454001c  addiu       $s4, $v0, 0x1C
    ctx->pc = 0x79aa64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x79aa68: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x79aa68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x79aa6c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x79aa6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x79aa70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79aa70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79aa74: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x79aa74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x79aa78: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x79aa78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x79aa7c: 0x96930010  lhu         $s3, 0x10($s4)
    ctx->pc = 0x79aa7cu;
    SET_GPR_ZE32(ctx, 19, (uint16_t)FAST_READ16(0x583EECu));
    // 0x79aa80: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x79aa80u;
    { uint32_t bits = FAST_READ32(0x583EDCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x79aa84: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x79aa84u;
    { uint32_t bits = FAST_READ32(0x583EE0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79aa88: 0x131202  srl         $v0, $s3, 8
    ctx->pc = 0x79aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 8));
    // 0x79aa8c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x79aa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79aa90: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x79aa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x79aa94: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79aa94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79aa98: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x79aa98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x79aa9c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x79aa9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x79aaa0: 0xc694000c  lwc1        $f20, 0xC($s4)
    ctx->pc = 0x79aaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79aaa4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x79aaa4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x79aaa8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x79aaa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x79aaac: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x79aaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x79aab0: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x79AAB0u;
    {
        const bool branch_taken_0x79aab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AAB0u;
        // 0x79aab4: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aab0) {
            ctx->pc = 0x79AC5Cu;
            goto label_79ac5c;
        }
    }
    ctx->pc = 0x79AAB8u;
    // 0x79aab8: 0x3c02007a  lui         $v0, 0x7A
    ctx->pc = 0x79aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79aabc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x79aabcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x79aac0: 0x2442cd40  addiu       $v0, $v0, -0x32C0
    ctx->pc = 0x79aac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954304));
    // 0x79aac4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x79aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x79aac8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x79aac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79aacc: 0x800008  jr          $a0
    ctx->pc = 0x79AACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x79AAD4u: goto label_79aad4;
            case 0x79AB34u: goto label_79ab34;
            case 0x79AB94u: goto label_79ab94;
            case 0x79ABB0u: goto label_79abb0;
            case 0x79ABCCu: goto label_79abcc;
            case 0x79ABE8u: goto label_79abe8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AACCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x79AAD4u;
label_79aad4:
    // 0x79aad4: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79aad4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79aad8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79aad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79aadc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79aae0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79aae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79aae4: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79aae4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79aae8: 0x24100008  addiu       $s0, $zero, 0x8
    ctx->pc = 0x79aae8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x79aaec: 0xc1e72bc  jal         func_79CAF0
    ctx->pc = 0x79AAECu;
    SET_GPR_U32(ctx, 31, 0x79AAF4u);
    ctx->pc = 0x79AAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AAECu;
    // 0x79aaf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CAF0u, 0x79AAECu, 0x79AAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AAF4u;
label_79aaf4:
    // 0x79aaf4: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79aaf8: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x79aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x79aafc: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ab00: 0xa4730008  sh          $s3, 0x8($v1)
    ctx->pc = 0x79ab00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x79ab04: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ab08: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x79ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79ab0c: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79AB0Cu;
    {
        const bool branch_taken_0x79ab0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB0Cu;
        // 0x79ab10: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab0c) {
            ctx->pc = 0x79AB28u;
            goto label_79ab28;
        }
    }
    ctx->pc = 0x79AB14u;
    // 0x79ab14: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x79ab14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x79ab18: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79ab18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ab1c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79ab1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79ab20: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ab24: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79ab24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79ab28:
    // 0x79ab28: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ab2c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x79AB2Cu;
    {
        const bool branch_taken_0x79ab2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB2Cu;
        // 0x79ab30: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab2c) {
            ctx->pc = 0x79AC44u;
            goto label_79ac44;
        }
    }
    ctx->pc = 0x79AB34u;
label_79ab34:
    // 0x79ab34: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79ab34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ab38: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79ab38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79ab3c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79ab40: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79ab40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79ab44: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79ab44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79ab48: 0x24100012  addiu       $s0, $zero, 0x12
    ctx->pc = 0x79ab48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x79ab4c: 0xc1e72bc  jal         func_79CAF0
    ctx->pc = 0x79AB4Cu;
    SET_GPR_U32(ctx, 31, 0x79AB54u);
    ctx->pc = 0x79AB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AB4Cu;
    // 0x79ab50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CAF0u, 0x79AB4Cu, 0x79AB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AB54u;
label_79ab54:
    // 0x79ab54: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ab58: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x79ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x79ab5c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79ab5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ab60: 0xa4730008  sh          $s3, 0x8($v1)
    ctx->pc = 0x79ab60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x79ab64: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79ab64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ab68: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x79ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79ab6c: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79AB6Cu;
    {
        const bool branch_taken_0x79ab6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB6Cu;
        // 0x79ab70: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab6c) {
            ctx->pc = 0x79AB88u;
            goto label_79ab88;
        }
    }
    ctx->pc = 0x79AB74u;
    // 0x79ab74: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x79ab74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x79ab78: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ab7c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79ab7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79ab80: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79ab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ab84: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79ab84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79ab88:
    // 0x79ab88: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ab8c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x79AB8Cu;
    {
        const bool branch_taken_0x79ab8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79AB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AB8Cu;
        // 0x79ab90: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ab8c) {
            ctx->pc = 0x79AC44u;
            goto label_79ac44;
        }
    }
    ctx->pc = 0x79AB94u;
label_79ab94:
    // 0x79ab94: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79ab94u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79ab98: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79ab98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79ab9c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79aba0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79aba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79aba4: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79aba4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79aba8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x79ABA8u;
    {
        const bool branch_taken_0x79aba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABA8u;
        // 0x79abac: 0x24100016  addiu       $s0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79aba8) {
            ctx->pc = 0x79AC00u;
            goto label_79ac00;
        }
    }
    ctx->pc = 0x79ABB0u;
label_79abb0:
    // 0x79abb0: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79abb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79abb4: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79abb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79abb8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79abbc: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79abbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79abc0: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79abc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79abc4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x79ABC4u;
    {
        const bool branch_taken_0x79abc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABC4u;
        // 0x79abc8: 0x24100020  addiu       $s0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abc4) {
            ctx->pc = 0x79AC00u;
            goto label_79ac00;
        }
    }
    ctx->pc = 0x79ABCCu;
label_79abcc:
    // 0x79abcc: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79abccu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79abd0: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79abd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79abd4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79abd8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79abd8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79abdc: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79abdcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79abe0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x79ABE0u;
    {
        const bool branch_taken_0x79abe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79ABE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79ABE0u;
        // 0x79abe4: 0x24100024  addiu       $s0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79abe0) {
            ctx->pc = 0x79AC00u;
            goto label_79ac00;
        }
    }
    ctx->pc = 0x79ABE8u;
label_79abe8:
    // 0x79abe8: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x79abe8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79abec: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x79abecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x79abf0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79abf4: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x79abf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79abf8: 0x24526af0  addiu       $s2, $v0, 0x6AF0
    ctx->pc = 0x79abf8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 27376));
    // 0x79abfc: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x79abfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_79ac00:
    // 0x79ac00: 0xc1e72bc  jal         func_79CAF0
    ctx->pc = 0x79AC00u;
    SET_GPR_U32(ctx, 31, 0x79AC08u);
    ctx->pc = 0x79AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79AC00u;
    // 0x79ac04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79CAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79CAF0u, 0x79AC00u, 0x79AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79AC08u;
label_79ac08:
    // 0x79ac08: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79ac08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ac0c: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x79ac0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x79ac10: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ac14: 0xa4730008  sh          $s3, 0x8($v1)
    ctx->pc = 0x79ac14u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 19));
    // 0x79ac18: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79ac18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ac1c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x79ac1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x79ac20: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x79AC20u;
    {
        const bool branch_taken_0x79ac20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x79AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC20u;
        // 0x79ac24: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ac20) {
            ctx->pc = 0x79AC3Cu;
            goto label_79ac3c;
        }
    }
    ctx->pc = 0x79AC28u;
    // 0x79ac28: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x79ac28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x79ac2c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x79ac2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x79ac30: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x79ac30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79ac34: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x79ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x79ac38: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x79ac38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_79ac3c:
    // 0x79ac3c: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x79ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ac40: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x79ac40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_79ac44:
    // 0x79ac44: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x79ac44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x79ac48: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x79ac48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x79ac4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x79ac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79ac50: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x79ac50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x79ac54: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x79ac54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x79ac58: 0xa6840010  sh          $a0, 0x10($s4)
    ctx->pc = 0x79ac58u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 4));
label_79ac5c:
    // 0x79ac5c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x79ac5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79ac60: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x79ac60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79ac64: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x79ac64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79ac68: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x79ac68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79ac6c: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x79ac6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79ac70: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79ac70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79ac74: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x79ac74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79ac78: 0x3e00008  jr          $ra
    ctx->pc = 0x79AC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79AC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79AC78u;
        // 0x79ac7c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79AC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79AC80u;
}
} // namespace gh_r022
