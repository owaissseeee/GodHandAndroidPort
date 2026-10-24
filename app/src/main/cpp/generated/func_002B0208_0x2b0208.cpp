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

// Function: func_002B0208
// Address: 0x2b0208 - 0x2b0420
void func_002B0208_0x2b0208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B0208_0x2b0208");
#endif

    switch (ctx->pc) {
        case 0x2b025cu: goto label_2b025c;
        case 0x2b0268u: goto label_2b0268;
        case 0x2b0280u: goto label_2b0280;
        case 0x2b02d8u: goto label_2b02d8;
        case 0x2b02f8u: goto label_2b02f8;
        case 0x2b0350u: goto label_2b0350;
        case 0x2b0370u: goto label_2b0370;
        case 0x2b037cu: goto label_2b037c;
        default: break;
    }

    ctx->pc = 0x2b0208u;

    // 0x2b0208: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b0208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b020c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2b020cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2b0210: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2b0210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2b0214: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b0214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0218: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2b0218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2b021c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2b021cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2b0220: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2b0220u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b0224: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2b0224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2b0228: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2b0228u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b022c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2b022cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2b0230: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2b0230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2b0234: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2b0234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2b0238: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2b0238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2b023c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b023cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b0240: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2b0240u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2b0244: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2b0244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2b0248: 0xc6540088  lwc1        $f20, 0x88($s2)
    ctx->pc = 0x2b0248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b024c: 0x8e450064  lw          $a1, 0x64($s2)
    ctx->pc = 0x2b024cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x2b0250: 0x8e5e006c  lw          $fp, 0x6C($s2)
    ctx->pc = 0x2b0250u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x2b0254: 0xc0ac49c  jal         func_2B1270
    ctx->pc = 0x2B0254u;
    SET_GPR_U32(ctx, 31, 0x2B025Cu);
    ctx->pc = 0x2B0258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0254u;
    // 0x2b0258: 0xc655008c  lwc1        $f21, 0x8C($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1270u, 0x2B0254u, 0x2B025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B025Cu;
label_2b025c:
    // 0x2b025c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2b025cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0260: 0xc0abcd2  jal         func_2AF348
    ctx->pc = 0x2B0260u;
    SET_GPR_U32(ctx, 31, 0x2B0268u);
    ctx->pc = 0x2B0264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0260u;
    // 0x2b0264: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF348u, 0x2B0260u, 0x2B0268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0268u;
label_2b0268:
    // 0x2b0268: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b0268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b026c: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x2b026cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b0270: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B0270u;
    {
        const bool branch_taken_0x2b0270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0270u;
        // 0x2b0274: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0270) {
            ctx->pc = 0x2B0298u;
            goto label_2b0298;
        }
    }
    ctx->pc = 0x2B0278u;
    // 0x2b0278: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2b0278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b027c: 0x0  nop
    ctx->pc = 0x2b027cu;
    // NOP
label_2b0280:
    // 0x2b0280: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2b0280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2b0284: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x2b0284u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b0288: 0x0  nop
    ctx->pc = 0x2b0288u;
    // NOP
    // 0x2b028c: 0x0  nop
    ctx->pc = 0x2b028cu;
    // NOP
    // 0x2b0290: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2B0290u;
    {
        const bool branch_taken_0x2b0290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0290u;
        // 0x2b0294: 0x2659818  mult        $s3, $s3, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 19, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0290) {
            ctx->pc = 0x2B0280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0280;
        }
    }
    ctx->pc = 0x2B0298u;
label_2b0298:
    // 0x2b0298: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b0298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b029c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b029cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b02a0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B02A0u;
    {
        const bool branch_taken_0x2b02a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b02a0) {
            ctx->pc = 0x2B02C4u;
            goto label_2b02c4;
        }
    }
    ctx->pc = 0x2B02A8u;
    // 0x2b02a8: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x2b02a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b02ac: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x2b02acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x2b02b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2b02b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b02b4: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x2b02b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b02b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b02b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b02bc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b02bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b02c0: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x2b02c0u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_2b02c4:
    // 0x2b02c4: 0x12600047  beqz        $s3, . + 4 + (0x47 << 2)
    ctx->pc = 0x2B02C4u;
    {
        const bool branch_taken_0x2b02c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B02C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B02C4u;
        // 0x2b02c8: 0x3c170002  lui         $s7, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b02c4) {
            ctx->pc = 0x2B03E4u;
            goto label_2b03e4;
        }
    }
    ctx->pc = 0x2B02CCu;
    // 0x2b02cc: 0x3c16003c  lui         $s6, 0x3C
    ctx->pc = 0x2b02ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)60 << 16));
    // 0x2b02d0: 0x36f78000  ori         $s7, $s7, 0x8000
    ctx->pc = 0x2b02d0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32768);
    // 0x2b02d4: 0x293001a  div         $zero, $s4, $s3
    ctx->pc = 0x2b02d4u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2b02d8:
    // 0x2b02d8: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B02D8u;
    {
        const bool branch_taken_0x2b02d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b02d8) {
            ctx->pc = 0x2B02DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B02D8u;
            // 0x2b02dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B02E0u;
            goto label_2b02e0;
        }
    }
    ctx->pc = 0x2B02E0u;
label_2b02e0:
    // 0x2b02e0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2b02e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2b02e4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2b02e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b02e8: 0x8c4423a4  lw          $a0, 0x23A4($v0)
    ctx->pc = 0x2b02e8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2b02ec: 0x8012  mflo        $s0
    ctx->pc = 0x2b02ecu;
    SET_GPR_U64(ctx, 16, ctx->lo);
    // 0x2b02f0: 0xc0abab4  jal         func_2AEAD0
    ctx->pc = 0x2B02F0u;
    SET_GPR_U32(ctx, 31, 0x2B02F8u);
    ctx->pc = 0x2B02F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B02F0u;
    // 0x2b02f4: 0x27de001e  addiu       $fp, $fp, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEAD0u, 0x2B02F0u, 0x2B02F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B02F8u;
label_2b02f8:
    // 0x2b02f8: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x2b02f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b02fc: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2b02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2b0300: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2b0300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0304: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b0304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b0308: 0xc6420044  lwc1        $f2, 0x44($s2)
    ctx->pc = 0x2b0308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b030c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b030cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b0310: 0x8ec42380  lw          $a0, 0x2380($s6)
    ctx->pc = 0x2b0310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 9088)));
    // 0x2b0314: 0x94710000  lhu         $s1, 0x0($v1)
    ctx->pc = 0x2b0314u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b0318: 0x972021  addu        $a0, $a0, $s7
    ctx->pc = 0x2b0318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
    // 0x2b031c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b031cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b0320: 0xe4812068  swc1        $f1, 0x2068($a0)
    ctx->pc = 0x2b0320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8296), bits); }
    // 0x2b0324: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x2b0324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0328: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x2b0328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b032c: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x2b032cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b0330: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2b0334: 0x8ec22380  lw          $v0, 0x2380($s6)
    ctx->pc = 0x2b0334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 9088)));
    // 0x2b0338: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2b0338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x2b033c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b033cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b0340: 0xe440206c  swc1        $f0, 0x206C($v0)
    ctx->pc = 0x2b0340u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8300), bits); }
    // 0x2b0344: 0x8ec42380  lw          $a0, 0x2380($s6)
    ctx->pc = 0x2b0344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 9088)));
    // 0x2b0348: 0xc0a94ba  jal         func_2A52E8
    ctx->pc = 0x2B0348u;
    SET_GPR_U32(ctx, 31, 0x2B0350u);
    ctx->pc = 0x2B034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0348u;
    // 0x2b034c: 0x8ea50004  lw          $a1, 0x4($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A52E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A52E8u, 0x2B0348u, 0x2B0350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0350u;
label_2b0350:
    // 0x2b0350: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2b0350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2b0354: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2b0354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2b0358: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x2b0358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2b035c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b035cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b0360: 0x8ec42380  lw          $a0, 0x2380($s6)
    ctx->pc = 0x2b0360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 9088)));
    // 0x2b0364: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2b0364u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2b0368: 0xc0a94ea  jal         func_2A53A8
    ctx->pc = 0x2B0368u;
    SET_GPR_U32(ctx, 31, 0x2B0370u);
    ctx->pc = 0x2B036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0368u;
    // 0x2b036c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A53A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A53A8u, 0x2B0368u, 0x2B0370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0370u;
label_2b0370:
    // 0x2b0370: 0x8ec42380  lw          $a0, 0x2380($s6)
    ctx->pc = 0x2b0370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 9088)));
    // 0x2b0374: 0xc0a92c8  jal         func_2A4B20
    ctx->pc = 0x2B0374u;
    SET_GPR_U32(ctx, 31, 0x2B037Cu);
    ctx->pc = 0x2B0378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0374u;
    // 0x2b0378: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4B20u, 0x2B0374u, 0x2B037Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B037Cu;
label_2b037c:
    // 0x2b037c: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x2b037cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0380: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2b0380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b0384: 0x0  nop
    ctx->pc = 0x2b0384u;
    // NOP
    // 0x2b0388: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2b0388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2b038c: 0xc643003c  lwc1        $f3, 0x3C($s2)
    ctx->pc = 0x2b038cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2b0390: 0x2138018  mult        $s0, $s0, $s3
    ctx->pc = 0x2b0390u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b0394: 0xc6440044  lwc1        $f4, 0x44($s2)
    ctx->pc = 0x2b0394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b0398: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2b0398u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2b039c: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x2b039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b03a0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2b03a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x2b03a4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b03a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2b03a8: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x2b03a8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x2b03ac: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2b03acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2b03b0: 0x5e102a  slt         $v0, $v0, $fp
    ctx->pc = 0x2b03b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x2b03b4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2b03b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2b03b8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b03b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b03bc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B03BCu;
    {
        const bool branch_taken_0x2b03bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B03C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B03BCu;
        // 0x2b03c0: 0x4602a500  add.s       $f20, $f20, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b03bc) {
            ctx->pc = 0x2B03E4u;
            goto label_2b03e4;
        }
    }
    ctx->pc = 0x2B03C4u;
    // 0x2b03c4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2b03c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2b03c8: 0x263001a  div         $zero, $s3, $v1
    ctx->pc = 0x2b03c8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2b03cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B03CCu;
    {
        const bool branch_taken_0x2b03cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b03cc) {
            ctx->pc = 0x2B03D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B03CCu;
            // 0x2b03d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B03D4u;
            goto label_2b03d4;
        }
    }
    ctx->pc = 0x2B03D4u;
label_2b03d4:
    // 0x2b03d4: 0x1012  mflo        $v0
    ctx->pc = 0x2b03d4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2b03d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b03d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b03dc: 0x5660ffbe  bnel        $s3, $zero, . + 4 + (-0x42 << 2)
    ctx->pc = 0x2B03DCu;
    {
        const bool branch_taken_0x2b03dc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b03dc) {
            ctx->pc = 0x2B03E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B03DCu;
            // 0x2b03e0: 0x293001a  div         $zero, $s4, $s3 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 20);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B02D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b02d8;
        }
    }
    ctx->pc = 0x2B03E4u;
label_2b03e4:
    // 0x2b03e4: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2b03e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b03e8: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2b03e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b03ec: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2b03ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b03f0: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2b03f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b03f4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2b03f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b03f8: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2b03f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b03fc: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2b03fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b0400: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2b0400u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b0404: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2b0404u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b0408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b0408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b040c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x2b040cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b0410: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x2b0410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b0414: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B0418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0414u;
        // 0x2b0418: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B041Cu;
    // 0x2b041c: 0x0  nop
    ctx->pc = 0x2b041cu;
    // NOP
    ctx->pc = 0x2b0420u;
}
