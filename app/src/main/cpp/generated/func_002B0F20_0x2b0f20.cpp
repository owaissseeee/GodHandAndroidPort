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

// Function: func_002B0F20
// Address: 0x2b0f20 - 0x2b1090
void func_002B0F20_0x2b0f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B0F20_0x2b0f20");
#endif

    switch (ctx->pc) {
        case 0x2b0f64u: goto label_2b0f64;
        case 0x2b0f80u: goto label_2b0f80;
        case 0x2b0fa8u: goto label_2b0fa8;
        case 0x2b0fc4u: goto label_2b0fc4;
        case 0x2b0fd8u: goto label_2b0fd8;
        default: break;
    }

    ctx->pc = 0x2b0f20u;

    // 0x2b0f20: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b0f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b0f24: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2b0f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2b0f28: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2b0f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2b0f2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b0f2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0f30: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2b0f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2b0f34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b0f34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0f38: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2b0f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2b0f3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0f40: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2b0f40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b0f44: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2b0f44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0f48: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2b0f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2b0f4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b0f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b0f50: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2b0f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2b0f54: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2b0f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x2b0f58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0f5c: 0xc0abcd2  jal         func_2AF348
    ctx->pc = 0x2B0F5Cu;
    SET_GPR_U32(ctx, 31, 0x2B0F64u);
    ctx->pc = 0x2B0F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0F5Cu;
    // 0x2b0f60: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF348u, 0x2B0F5Cu, 0x2B0F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0F64u;
label_2b0f64:
    // 0x2b0f64: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2b0f64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b0f68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0f6c: 0x204102b  sltu        $v0, $s0, $a0
    ctx->pc = 0x2b0f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2b0f70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B0F70u;
    {
        const bool branch_taken_0x2b0f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F70u;
        // 0x2b0f74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f70) {
            ctx->pc = 0x2B0F98u;
            goto label_2b0f98;
        }
    }
    ctx->pc = 0x2B0F78u;
    // 0x2b0f78: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2b0f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b0f7c: 0x0  nop
    ctx->pc = 0x2b0f7cu;
    // NOP
label_2b0f80:
    // 0x2b0f80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b0f84: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2b0f84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2b0f88: 0x0  nop
    ctx->pc = 0x2b0f88u;
    // NOP
    // 0x2b0f8c: 0x0  nop
    ctx->pc = 0x2b0f8cu;
    // NOP
    // 0x2b0f90: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B0F90u;
    {
        const bool branch_taken_0x2b0f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F90u;
        // 0x2b0f94: 0x2058018  mult        $s0, $s0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f90) {
            ctx->pc = 0x2B0F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0f80;
        }
    }
    ctx->pc = 0x2B0F98u;
label_2b0f98:
    // 0x2b0f98: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B0F98u;
    {
        const bool branch_taken_0x2b0f98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0F98u;
        // 0x2b0f9c: 0x3c17003c  lui         $s7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0f98) {
            ctx->pc = 0x2B102Cu;
            goto label_2b102c;
        }
    }
    ctx->pc = 0x2B0FA0u;
    // 0x2b0fa0: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x2b0fa0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x2b0fa4: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x2b0fa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b0fa8:
    // 0x2b0fa8: 0x230001a  div         $zero, $s1, $s0
    ctx->pc = 0x2b0fa8u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b0fac: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B0FACu;
    {
        const bool branch_taken_0x2b0fac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0fac) {
            ctx->pc = 0x2B0FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0FACu;
            // 0x2b0fb0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0FB4u;
            goto label_2b0fb4;
        }
    }
    ctx->pc = 0x2B0FB4u;
label_2b0fb4:
    // 0x2b0fb4: 0x8ee423a4  lw          $a0, 0x23A4($s7)
    ctx->pc = 0x2b0fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 9124)));
    // 0x2b0fb8: 0x9012  mflo        $s2
    ctx->pc = 0x2b0fb8u;
    SET_GPR_U64(ctx, 18, ctx->lo);
    // 0x2b0fbc: 0xc0abab4  jal         func_2AEAD0
    ctx->pc = 0x2B0FBCu;
    SET_GPR_U32(ctx, 31, 0x2B0FC4u);
    ctx->pc = 0x2B0FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0FBCu;
    // 0x2b0fc0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEAD0u, 0x2B0FBCu, 0x2B0FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0FC4u;
label_2b0fc4:
    // 0x2b0fc4: 0x121840  sll         $v1, $s2, 1
    ctx->pc = 0x2b0fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x2b0fc8: 0x8ec42380  lw          $a0, 0x2380($s6)
    ctx->pc = 0x2b0fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 9088)));
    // 0x2b0fcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b0fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b0fd0: 0xc0a92e2  jal         func_2A4B88
    ctx->pc = 0x2B0FD0u;
    SET_GPR_U32(ctx, 31, 0x2B0FD8u);
    ctx->pc = 0x2B0FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0FD0u;
    // 0x2b0fd4: 0x94650000  lhu         $a1, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B88u, 0x2B0FD0u, 0x2B0FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0FD8u;
label_2b0fd8:
    // 0x2b0fd8: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2b0fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0fdc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b0fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b0fe0: 0x0  nop
    ctx->pc = 0x2b0fe0u;
    // NOP
    // 0x2b0fe4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b0fe4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b0fe8: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x2b0fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0fec: 0xc6620048  lwc1        $f2, 0x48($s3)
    ctx->pc = 0x2b0fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b0ff0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0ff0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b0ff4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b0ff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b0ff8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b0ff8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b0ffc: 0x4603a034  c.lt.s      $f20, $f3
    ctx->pc = 0x2b0ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b1000: 0x0  nop
    ctx->pc = 0x2b1000u;
    // NOP
    // 0x2b1004: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B1004u;
    {
        const bool branch_taken_0x2b1004 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1004) {
            ctx->pc = 0x2B1008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1004u;
            // 0x2b1008: 0x46001d06  mov.s       $f20, $f3 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B100Cu;
            goto label_2b100c;
        }
    }
    ctx->pc = 0x2B100Cu;
label_2b100c:
    // 0x2b100c: 0x214001a  div         $zero, $s0, $s4
    ctx->pc = 0x2b100cu;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b1010: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B1010u;
    {
        const bool branch_taken_0x2b1010 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b1010) {
            ctx->pc = 0x2B1014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1010u;
            // 0x2b1014: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1018u;
            goto label_2b1018;
        }
    }
    ctx->pc = 0x2B1018u;
label_2b1018:
    // 0x2b1018: 0x1812  mflo        $v1
    ctx->pc = 0x2b1018u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x2b101c: 0x2501018  mult        $v0, $s2, $s0
    ctx->pc = 0x2b101cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2b1020: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2b1020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b1024: 0x1600ffe0  bnez        $s0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2B1024u;
    {
        const bool branch_taken_0x2b1024 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B1028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1024u;
        // 0x2b1028: 0x2228823  subu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1024) {
            ctx->pc = 0x2B0FA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0fa8;
        }
    }
    ctx->pc = 0x2B102Cu;
label_2b102c:
    // 0x2b102c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2b102cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2b1030: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b1030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b1034: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B1034u;
    {
        const bool branch_taken_0x2b1034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1034u;
        // 0x2b1038: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1034) {
            ctx->pc = 0x2B105Cu;
            goto label_2b105c;
        }
    }
    ctx->pc = 0x2B103Cu;
    // 0x2b103c: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x2b103cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b1040: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2b1040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x2b1044: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b1044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b1048: 0xc6620048  lwc1        $f2, 0x48($s3)
    ctx->pc = 0x2b1048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b104c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b104cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b1050: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b1050u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b1054: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x2b1054u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x2b1058: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x2b1058u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
label_2b105c:
    // 0x2b105c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2b105cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b1060: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2b1060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b1064: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2b1064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b1068: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2b1068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b106c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b106cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b1070: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2b1070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b1074: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2b1074u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b1078: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2b1078u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b107c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b107cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b1080: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2b1080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b1084: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1084u;
        // 0x2b1088: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B108Cu;
    // 0x2b108c: 0x0  nop
    ctx->pc = 0x2b108cu;
    // NOP
    ctx->pc = 0x2b1090u;
}
