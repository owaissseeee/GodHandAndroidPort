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

// Function: func_002B0D68
// Address: 0x2b0d68 - 0x2b0eb8
void func_002B0D68_0x2b0d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B0D68_0x2b0d68");
#endif

    switch (ctx->pc) {
        case 0x2b0dacu: goto label_2b0dac;
        case 0x2b0dc8u: goto label_2b0dc8;
        case 0x2b0df0u: goto label_2b0df0;
        case 0x2b0e0cu: goto label_2b0e0c;
        case 0x2b0e20u: goto label_2b0e20;
        default: break;
    }

    ctx->pc = 0x2b0d68u;

    // 0x2b0d68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2b0d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2b0d6c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2b0d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2b0d70: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2b0d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2b0d74: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b0d74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0d78: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2b0d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2b0d7c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2b0d7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0d80: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2b0d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2b0d84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b0d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0d88: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2b0d88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2b0d8c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2b0d8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0d90: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2b0d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2b0d94: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b0d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b0d98: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2b0d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2b0d9c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2b0d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x2b0da0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b0da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0da4: 0xc0abcd2  jal         func_2AF348
    ctx->pc = 0x2B0DA4u;
    SET_GPR_U32(ctx, 31, 0x2B0DACu);
    ctx->pc = 0x2B0DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0DA4u;
    // 0x2b0da8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF348u, 0x2B0DA4u, 0x2B0DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0DACu;
label_2b0dac:
    // 0x2b0dac: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2b0dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b0db0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b0db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0db4: 0x224102b  sltu        $v0, $s1, $a0
    ctx->pc = 0x2b0db4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2b0db8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B0DB8u;
    {
        const bool branch_taken_0x2b0db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DB8u;
        // 0x2b0dbc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0db8) {
            ctx->pc = 0x2B0DE0u;
            goto label_2b0de0;
        }
    }
    ctx->pc = 0x2B0DC0u;
    // 0x2b0dc0: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2b0dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b0dc4: 0x0  nop
    ctx->pc = 0x2b0dc4u;
    // NOP
label_2b0dc8:
    // 0x2b0dc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b0dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2b0dcc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x2b0dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2b0dd0: 0x0  nop
    ctx->pc = 0x2b0dd0u;
    // NOP
    // 0x2b0dd4: 0x0  nop
    ctx->pc = 0x2b0dd4u;
    // NOP
    // 0x2b0dd8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B0DD8u;
    {
        const bool branch_taken_0x2b0dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DD8u;
        // 0x2b0ddc: 0x2258818  mult        $s1, $s1, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0dd8) {
            ctx->pc = 0x2B0DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0dc8;
        }
    }
    ctx->pc = 0x2B0DE0u;
label_2b0de0:
    // 0x2b0de0: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B0DE0u;
    {
        const bool branch_taken_0x2b0de0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DE0u;
        // 0x2b0de4: 0x3c17003c  lui         $s7, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0de0) {
            ctx->pc = 0x2B0E74u;
            goto label_2b0e74;
        }
    }
    ctx->pc = 0x2B0DE8u;
    // 0x2b0de8: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x2b0de8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x2b0dec: 0x2414000a  addiu       $s4, $zero, 0xA
    ctx->pc = 0x2b0decu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2b0df0:
    // 0x2b0df0: 0x251001a  div         $zero, $s2, $s1
    ctx->pc = 0x2b0df0u;
    { int32_t divisor = GPR_S32(ctx, 17);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b0df4: 0x52200001  beql        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B0DF4u;
    {
        const bool branch_taken_0x2b0df4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0df4) {
            ctx->pc = 0x2B0DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0DF4u;
            // 0x2b0df8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0DFCu;
            goto label_2b0dfc;
        }
    }
    ctx->pc = 0x2B0DFCu;
label_2b0dfc:
    // 0x2b0dfc: 0x8ee423a4  lw          $a0, 0x23A4($s7)
    ctx->pc = 0x2b0dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 9124)));
    // 0x2b0e00: 0x8012  mflo        $s0
    ctx->pc = 0x2b0e00u;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2b0e04: 0xc0abab4  jal         func_2AEAD0
    ctx->pc = 0x2B0E04u;
    SET_GPR_U32(ctx, 31, 0x2B0E0Cu);
    ctx->pc = 0x2B0E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E04u;
    // 0x2b0e08: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEAD0u, 0x2B0E04u, 0x2B0E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E0Cu;
label_2b0e0c:
    // 0x2b0e0c: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2b0e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2b0e10: 0x8ec42380  lw          $a0, 0x2380($s6)
    ctx->pc = 0x2b0e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 9088)));
    // 0x2b0e14: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b0e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b0e18: 0xc0a92c8  jal         func_2A4B20
    ctx->pc = 0x2B0E18u;
    SET_GPR_U32(ctx, 31, 0x2B0E20u);
    ctx->pc = 0x2B0E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0E18u;
    // 0x2b0e1c: 0x94650000  lhu         $a1, 0x0($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B20u, 0x2B0E18u, 0x2B0E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0E20u;
label_2b0e20:
    // 0x2b0e20: 0x234001a  div         $zero, $s1, $s4
    ctx->pc = 0x2b0e20u;
    { int32_t divisor = GPR_S32(ctx, 20);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b0e24: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2b0e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0e28: 0xc663003c  lwc1        $f3, 0x3C($s3)
    ctx->pc = 0x2b0e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0e2c: 0x52800001  beql        $s4, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B0E2Cu;
    {
        const bool branch_taken_0x2b0e2c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0e2c) {
            ctx->pc = 0x2B0E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0E2Cu;
            // 0x2b0e30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0E34u;
            goto label_2b0e34;
        }
    }
    ctx->pc = 0x2B0E34u;
label_2b0e34:
    // 0x2b0e34: 0xc6640044  lwc1        $f4, 0x44($s3)
    ctx->pc = 0x2b0e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b0e38: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b0e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0e3c: 0x0  nop
    ctx->pc = 0x2b0e3cu;
    // NOP
    // 0x2b0e40: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b0e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b0e44: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2b0e44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2b0e48: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x2b0e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0e4c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b0e4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2b0e50: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2b0e50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2b0e54: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2b0e54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2b0e58: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b0e58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b0e5c: 0x4602a500  add.s       $f20, $f20, $f2
    ctx->pc = 0x2b0e5cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    // 0x2b0e60: 0x2812  mflo        $a1
    ctx->pc = 0x2b0e60u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2b0e64: 0x2118018  mult        $s0, $s0, $s1
    ctx->pc = 0x2b0e64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b0e68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b0e68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0e6c: 0x1620ffe0  bnez        $s1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x2B0E6Cu;
    {
        const bool branch_taken_0x2b0e6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E6Cu;
        // 0x2b0e70: 0x2509023  subu        $s2, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e6c) {
            ctx->pc = 0x2B0DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0df0;
        }
    }
    ctx->pc = 0x2B0E74u;
label_2b0e74:
    // 0x2b0e74: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x2b0e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0e78: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x2b0e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b0e7c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2b0e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b0e80: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0e80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b0e84: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2b0e84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b0e88: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2b0e88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b0e8c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2b0e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b0e90: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x2b0e90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x2b0e94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b0e94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b0e98: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2b0e98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0e9c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2b0e9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0ea0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2b0ea0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0ea4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b0ea8: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2b0ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b0eac: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0EACu;
        // 0x2b0eb0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B0EB4u;
    // 0x2b0eb4: 0x0  nop
    ctx->pc = 0x2b0eb4u;
    // NOP
    ctx->pc = 0x2b0eb8u;
}
