#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlaySetMotionParam__15cEventActorWorkif
// Address: 0x7aaca0 - 0x7aae50
void movePlaySetMotionParam__15cEventActorWorkif_0x7aaca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlaySetMotionParam__15cEventActorWorkif_0x7aaca0");
#endif

    switch (ctx->pc) {
        case 0x7aacecu: goto label_7aacec;
        case 0x7aad00u: goto label_7aad00;
        case 0x7aad98u: goto label_7aad98;
        case 0x7aadb8u: goto label_7aadb8;
        default: break;
    }

    ctx->pc = 0x7aaca0u;

    // 0x7aaca0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x7aaca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x7aaca4: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x7aaca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x7aaca8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7aaca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7aacac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x7aacacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aacb0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7aacb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7aacb4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x7aacb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7aacb8: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x7aacb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7aacbc: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x7aacbcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x7aacc0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x7aacc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aacc4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7aacc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7aacc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x7aacc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x7aaccc: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x7aacccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x7aacd0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x7aacd0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x7aacd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7aacd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7aacd8: 0x8e830044  lw          $v1, 0x44($s4)
    ctx->pc = 0x7aacd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x7aacdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7aacdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7aace0: 0x8c550008  lw          $s5, 0x8($v0)
    ctx->pc = 0x7aace0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x7aace4: 0xc1eadf4  jal         func_7AB7D0
    ctx->pc = 0x7AACE4u;
    SET_GPR_U32(ctx, 31, 0x7AACECu);
    ctx->pc = 0x7AACE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AACE4u;
    // 0x7aace8: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AB7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AB7D0u, 0x7AACE4u, 0x7AACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AACECu;
label_7aacec:
    // 0x7aacec: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7aacecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7aacf0: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x7aacf0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x7aacf4: 0x24845248  addiu       $a0, $a0, 0x5248
    ctx->pc = 0x7aacf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21064));
    // 0x7aacf8: 0xc1eb3b8  jal         func_7ACEE0
    ctx->pc = 0x7AACF8u;
    SET_GPR_U32(ctx, 31, 0x7AAD00u);
    ctx->pc = 0x7AACFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AACF8u;
    // 0x7aacfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACEE0u, 0x7AACF8u, 0x7AAD00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAD00u;
label_7aad00:
    // 0x7aad00: 0x1220001b  beqz        $s1, . + 4 + (0x1B << 2)
    ctx->pc = 0x7AAD00u;
    {
        const bool branch_taken_0x7aad00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aad00) {
            ctx->pc = 0x7AAD70u;
            goto label_7aad70;
        }
    }
    ctx->pc = 0x7AAD08u;
    // 0x7aad08: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x7aad08u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7aad0c: 0x0  nop
    ctx->pc = 0x7aad0cu;
    // NOP
    // 0x7aad10: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x7aad10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x7aad14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7aad14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7aad18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7aad18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7aad1c: 0x0  nop
    ctx->pc = 0x7aad1cu;
    // NOP
    // 0x7aad20: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x7aad20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x7aad24: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x7aad24u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7aad28: 0x0  nop
    ctx->pc = 0x7aad28u;
    // NOP
    // 0x7aad2c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x7AAD2Cu;
    {
        const bool branch_taken_0x7aad2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x7aad2c) {
            ctx->pc = 0x7AAD48u;
            goto label_7aad48;
        }
    }
    ctx->pc = 0x7AAD34u;
    // 0x7aad34: 0xe6940010  swc1        $f20, 0x10($s4)
    ctx->pc = 0x7aad34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x7aad38: 0xa690000a  sh          $s0, 0xA($s4)
    ctx->pc = 0x7aad38u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 16));
    // 0x7aad3c: 0xae910014  sw          $s1, 0x14($s4)
    ctx->pc = 0x7aad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 17));
    // 0x7aad40: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x7AAD40u;
    {
        const bool branch_taken_0x7aad40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAD40u;
        // 0x7aad44: 0xa2800009  sb          $zero, 0x9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 9), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aad40) {
            ctx->pc = 0x7AAE20u;
            goto label_7aae20;
        }
    }
    ctx->pc = 0x7AAD48u;
label_7aad48:
    // 0x7aad48: 0x56a0000b  bnel        $s5, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x7AAD48u;
    {
        const bool branch_taken_0x7aad48 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x7aad48) {
            ctx->pc = 0x7AAD4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AAD48u;
            // 0x7aad4c: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AAD78u;
            goto label_7aad78;
        }
    }
    ctx->pc = 0x7AAD50u;
    // 0x7aad50: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x7aad50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x7aad54: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AAD54u;
    {
        const bool branch_taken_0x7aad54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7aad54) {
            ctx->pc = 0x7AAD70u;
            goto label_7aad70;
        }
    }
    ctx->pc = 0x7AAD5Cu;
    // 0x7aad5c: 0xe6810010  swc1        $f1, 0x10($s4)
    ctx->pc = 0x7aad5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
    // 0x7aad60: 0xa690000a  sh          $s0, 0xA($s4)
    ctx->pc = 0x7aad60u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 16));
    // 0x7aad64: 0xae910014  sw          $s1, 0x14($s4)
    ctx->pc = 0x7aad64u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 17));
    // 0x7aad68: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x7AAD68u;
    {
        const bool branch_taken_0x7aad68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAD68u;
        // 0x7aad6c: 0xa2800009  sb          $zero, 0x9($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 9), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aad68) {
            ctx->pc = 0x7AAE20u;
            goto label_7aae20;
        }
    }
    ctx->pc = 0x7AAD70u;
label_7aad70:
    // 0x7aad70: 0x12a00026  beqz        $s5, . + 4 + (0x26 << 2)
    ctx->pc = 0x7AAD70u;
    {
        const bool branch_taken_0x7aad70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAD70u;
        // 0x7aad74: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aad70) {
            ctx->pc = 0x7AAE0Cu;
            goto label_7aae0c;
        }
    }
    ctx->pc = 0x7AAD78u;
label_7aad78:
    // 0x7aad78: 0x8e820044  lw          $v0, 0x44($s4)
    ctx->pc = 0x7aad78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x7aad7c: 0x2129018  mult        $s2, $s0, $s2
    ctx->pc = 0x7aad7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x7aad80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7aad80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aad84: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x7aad84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aad88: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x7aad88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x7aad8c: 0x8451000e  lh          $s1, 0xE($v0)
    ctx->pc = 0x7aad8cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x7aad90: 0xc1eae00  jal         func_7AB800
    ctx->pc = 0x7AAD90u;
    SET_GPR_U32(ctx, 31, 0x7AAD98u);
    ctx->pc = 0x7AAD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AAD90u;
    // 0x7aad94: 0x9053000d  lbu         $s3, 0xD($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AB800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AB800u, 0x7AAD90u, 0x7AAD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AAD98u;
label_7aad98:
    // 0x7aad98: 0x44916000  mtc1        $s1, $f12
    ctx->pc = 0x7aad98u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7aad9c: 0x0  nop
    ctx->pc = 0x7aad9cu;
    // NOP
    // 0x7aada0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x7aada0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x7aada4: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7aada4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7aada8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7aada8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aadac: 0x24845280  addiu       $a0, $a0, 0x5280
    ctx->pc = 0x7aadacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    // 0x7aadb0: 0xc1eba56  jal         func_7AE958
    ctx->pc = 0x7AADB0u;
    SET_GPR_U32(ctx, 31, 0x7AADB8u);
    ctx->pc = 0x7AADB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AADB0u;
    // 0x7aadb4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AE958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AE958u, 0x7AADB0u, 0x7AADB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AADB8u;
label_7aadb8:
    // 0x7aadb8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7aadb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x7aadbc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x7aadbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x7aadc0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7aadc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7aadc4: 0x8e830044  lw          $v1, 0x44($s4)
    ctx->pc = 0x7aadc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 68)));
    // 0x7aadc8: 0xa2840009  sb          $a0, 0x9($s4)
    ctx->pc = 0x7aadc8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 9), (uint8_t)GPR_U32(ctx, 4));
    // 0x7aadcc: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x7aadccu;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7aadd0: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x7aadd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x7aadd4: 0x9243000c  lbu         $v1, 0xC($s2)
    ctx->pc = 0x7aadd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x7aadd8: 0xae950014  sw          $s5, 0x14($s4)
    ctx->pc = 0x7aadd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 21));
    // 0x7aaddc: 0xa683000a  sh          $v1, 0xA($s4)
    ctx->pc = 0x7aaddcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 3));
    // 0x7aade0: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7AADE0u;
    {
        const bool branch_taken_0x7aade0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aade0) {
            ctx->pc = 0x7AADE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AADE0u;
            // 0x7aade4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AADE8u;
            goto label_7aade8;
        }
    }
    ctx->pc = 0x7AADE8u;
label_7aade8:
    // 0x7aade8: 0x1012  mflo        $v0
    ctx->pc = 0x7aade8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x7aadec: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x7aadecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x7aadf0: 0xae82000c  sw          $v0, 0xC($s4)
    ctx->pc = 0x7aadf0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 2));
    // 0x7aadf4: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x7aadf4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7aadf8: 0x0  nop
    ctx->pc = 0x7aadf8u;
    // NOP
    // 0x7aadfc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x7aadfcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x7aae00: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x7aae00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x7aae04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7AAE04u;
    {
        const bool branch_taken_0x7aae04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AAE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAE04u;
        // 0x7aae08: 0xe6800010  swc1        $f0, 0x10($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aae04) {
            ctx->pc = 0x7AAE24u;
            goto label_7aae24;
        }
    }
    ctx->pc = 0x7AAE0Cu;
label_7aae0c:
    // 0x7aae0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7aae0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7aae10: 0xae800010  sw          $zero, 0x10($s4)
    ctx->pc = 0x7aae10u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 0));
    // 0x7aae14: 0xa2820009  sb          $v0, 0x9($s4)
    ctx->pc = 0x7aae14u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x7aae18: 0xa680000a  sh          $zero, 0xA($s4)
    ctx->pc = 0x7aae18u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x7aae1c: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x7aae1cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
label_7aae20:
    // 0x7aae20: 0xae80000c  sw          $zero, 0xC($s4)
    ctx->pc = 0x7aae20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 0));
label_7aae24:
    // 0x7aae24: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7aae24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7aae28: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7aae28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7aae2c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x7aae2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7aae30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x7aae30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7aae34: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x7aae34u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7aae38: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x7aae38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7aae3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7aae3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7aae40: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x7aae40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x7aae44: 0x3e00008  jr          $ra
    ctx->pc = 0x7AAE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AAE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AAE44u;
        // 0x7aae48: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AAE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AAE4Cu;
    // 0x7aae4c: 0x0  nop
    ctx->pc = 0x7aae4cu;
    // NOP
    ctx->pc = 0x7aae50u;
}
} // namespace gh_event
