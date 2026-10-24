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
// Function: movePlay__12cEventCamera
// Address: 0x7acc88 - 0x7acdd0
void movePlay__12cEventCamera_0x7acc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__12cEventCamera_0x7acc88");
#endif

    switch (ctx->pc) {
        case 0x7accbcu: goto label_7accbc;
        case 0x7acd88u: goto label_7acd88;
        case 0x7acdb4u: goto label_7acdb4;
        default: break;
    }

    ctx->pc = 0x7acc88u;

    // 0x7acc88: 0x3c03007b  lui         $v1, 0x7B
    ctx->pc = 0x7acc88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)123 << 16));
    // 0x7acc8c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x7acc8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x7acc90: 0x8c625260  lw          $v0, 0x5260($v1)
    ctx->pc = 0x7acc90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7B5260u));
    // 0x7acc94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x7acc94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x7acc98: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x7acc98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x7acc9c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7acc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7acca0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7acca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7acca4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x7ACCA4u;
    {
        const bool branch_taken_0x7acca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACCA4u;
        // 0x7acca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acca4) {
            ctx->pc = 0x7ACCC4u;
            goto label_7accc4;
        }
    }
    ctx->pc = 0x7ACCACu;
    // 0x7accac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x7accacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x7accb0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x7accb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7accb4: 0xc04e08e  jal         func_138238
    ctx->pc = 0x7ACCB4u;
    SET_GPR_U32(ctx, 31, 0x7ACCBCu);
    ctx->pc = 0x7ACCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACCB4u;
    // 0x7accb8: 0x8c44aff0  lw          $a0, -0x5010($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138238u, 0x7ACCB4u, 0x7ACCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACCBCu;
label_7accbc:
    // 0x7accbc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x7ACCBCu;
    {
        const bool branch_taken_0x7accbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACCBCu;
        // 0x7accc0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7accbc) {
            ctx->pc = 0x7ACDC4u;
            goto label_7acdc4;
        }
    }
    ctx->pc = 0x7ACCC4u;
label_7accc4:
    // 0x7accc4: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7accc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7accc8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x7accc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x7acccc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x7accccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7accd0: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x7accd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x7accd4: 0x24425280  addiu       $v0, $v0, 0x5280
    ctx->pc = 0x7accd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21120));
    // 0x7accd8: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x7accd8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7B5290u));
    // 0x7accdc: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x7accdcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x7acce0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x7acce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x7acce4: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x7acce4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7acce8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x7acce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7accec: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x7ACCECu;
    {
        const bool branch_taken_0x7accec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACCECu;
        // 0x7accf0: 0xc4410014  lwc1        $f1, 0x14($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7accec) {
            ctx->pc = 0x7ACD34u;
            goto label_7acd34;
        }
    }
    ctx->pc = 0x7ACCF4u;
    // 0x7accf4: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x7accf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7accf8: 0xa6050006  sh          $a1, 0x6($s0)
    ctx->pc = 0x7accf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x7accfc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x7accfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7acd00: 0xa2000004  sb          $zero, 0x4($s0)
    ctx->pc = 0x7acd00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 0));
    // 0x7acd04: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7acd04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7acd08: 0x0  nop
    ctx->pc = 0x7acd08u;
    // NOP
    // 0x7acd0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7acd0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7acd10: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x7acd10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7acd14: 0x0  nop
    ctx->pc = 0x7acd14u;
    // NOP
    // 0x7acd18: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x7ACD18u;
    {
        const bool branch_taken_0x7acd18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x7ACD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACD18u;
        // 0x7acd1c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acd18) {
            ctx->pc = 0x7ACD28u;
            goto label_7acd28;
        }
    }
    ctx->pc = 0x7ACD20u;
    // 0x7acd20: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x7ACD20u;
    {
        const bool branch_taken_0x7acd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACD20u;
        // 0x7acd24: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acd20) {
            ctx->pc = 0x7ACD2Cu;
            goto label_7acd2c;
        }
    }
    ctx->pc = 0x7ACD28u;
label_7acd28:
    // 0x7acd28: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x7acd28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_7acd2c:
    // 0x7acd2c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x7ACD2Cu;
    {
        const bool branch_taken_0x7acd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7ACD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACD2Cu;
        // 0x7acd30: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7acd2c) {
            ctx->pc = 0x7ACD7Cu;
            goto label_7acd7c;
        }
    }
    ctx->pc = 0x7ACD34u;
label_7acd34:
    // 0x7acd34: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x7acd34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x7acd38: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x7acd38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x7acd3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x7acd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7acd40: 0x84c20004  lh          $v0, 0x4($a2)
    ctx->pc = 0x7acd40u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x7acd44: 0xa6050006  sh          $a1, 0x6($s0)
    ctx->pc = 0x7acd44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x7acd48: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x7acd48u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7acd4c: 0xa2040004  sb          $a0, 0x4($s0)
    ctx->pc = 0x7acd4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x7acd50: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7ACD50u;
    {
        const bool branch_taken_0x7acd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7acd50) {
            ctx->pc = 0x7ACD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ACD50u;
            // 0x7acd54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACD58u;
            goto label_7acd58;
        }
    }
    ctx->pc = 0x7ACD58u;
label_7acd58:
    // 0x7acd58: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x7acd58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x7acd5c: 0x1812  mflo        $v1
    ctx->pc = 0x7acd5cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x7acd60: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x7acd60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x7acd64: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x7acd64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x7acd68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7acd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7acd6c: 0x0  nop
    ctx->pc = 0x7acd6cu;
    // NOP
    // 0x7acd70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7acd70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7acd74: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x7acd74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x7acd78: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x7acd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_7acd7c:
    // 0x7acd7c: 0x24e45280  addiu       $a0, $a3, 0x5280
    ctx->pc = 0x7acd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 21120));
    // 0x7acd80: 0xc1ed280  jal         func_7B4A00
    ctx->pc = 0x7ACD80u;
    SET_GPR_U32(ctx, 31, 0x7ACD88u);
    ctx->pc = 0x7ACD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACD80u;
    // 0x7acd84: 0x3c054000  lui         $a1, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4A00u, 0x7ACD80u, 0x7ACD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACD88u;
label_7acd88:
    // 0x7acd88: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7acd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7acd8c: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x7ACD8Cu;
    {
        const bool branch_taken_0x7acd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7acd8c) {
            ctx->pc = 0x7ACD90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7ACD8Cu;
            // 0x7acd90: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7ACDC4u;
            goto label_7acdc4;
        }
    }
    ctx->pc = 0x7ACD94u;
    // 0x7acd94: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x7acd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7acd98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7acd98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7acd9c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x7acd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x7acda0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7acda0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7acda4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x7acda4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x7acda8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7acda8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7acdac: 0xc04e42e  jal         func_1390B8
    ctx->pc = 0x7ACDACu;
    SET_GPR_U32(ctx, 31, 0x7ACDB4u);
    ctx->pc = 0x7ACDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7ACDACu;
    // 0x7acdb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1390B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1390B8u, 0x7ACDACu, 0x7ACDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7ACDB4u;
label_7acdb4:
    // 0x7acdb4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x7acdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7acdb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x7acdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7acdbc: 0xe44003a8  swc1        $f0, 0x3A8($v0)
    ctx->pc = 0x7acdbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 936), bits); }
    // 0x7acdc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x7acdc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_7acdc4:
    // 0x7acdc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7acdc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7acdc8: 0x3e00008  jr          $ra
    ctx->pc = 0x7ACDC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7ACDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7ACDC8u;
        // 0x7acdcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7ACDC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7ACDD0u;
}
} // namespace gh_event
