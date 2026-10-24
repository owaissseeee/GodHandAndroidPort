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

// Function: cSnd_CalcListenerPanDist
// Address: 0x2cf058 - 0x2cf218
void cSnd_CalcListenerPanDist_0x2cf058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_CalcListenerPanDist_0x2cf058");
#endif

    switch (ctx->pc) {
        case 0x2cf0a4u: goto label_2cf0a4;
        case 0x2cf0b0u: goto label_2cf0b0;
        case 0x2cf1b0u: goto label_2cf1b0;
        default: break;
    }

    ctx->pc = 0x2cf058u;

    // 0x2cf058: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2cf058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2cf05c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2cf05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2cf060: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cf060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2cf064: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x2cf064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf068: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2cf068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2cf06c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2cf06cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf070: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2cf070u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2cf074: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2cf074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf078: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2cf078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2cf07c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cf07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cf080: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2cf080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2cf084: 0x12000044  beqz        $s0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2CF084u;
    {
        const bool branch_taken_0x2cf084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF084u;
        // 0x2cf088: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf084) {
            ctx->pc = 0x2CF198u;
            goto label_2cf198;
        }
    }
    ctx->pc = 0x2CF08Cu;
    // 0x2cf08c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2cf08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2cf090: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cf090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf094: 0x2451ee00  addiu       $s1, $v0, -0x1200
    ctx->pc = 0x2cf094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x2cf098: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2cf098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf09c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2CF09Cu;
    SET_GPR_U32(ctx, 31, 0x2CF0A4u);
    ctx->pc = 0x2CF0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF09Cu;
    // 0x2cf0a0: 0x262500d0  addiu       $a1, $s1, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2CF09Cu, 0x2CF0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF0A4u;
label_2cf0a4:
    // 0x2cf0a4: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x2cf0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2cf0a8: 0xc07e060  jal         func_1F8180
    ctx->pc = 0x2CF0A8u;
    SET_GPR_U32(ctx, 31, 0x2CF0B0u);
    ctx->pc = 0x2CF0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF0A8u;
    // 0x2cf0ac: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2CF0A8u, 0x2CF0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF0B0u;
label_2cf0b0:
    // 0x2cf0b0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2cf0b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf0b4: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x2cf0b4u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
    // 0x2cf0b8: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2cf0b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf0bc: 0x0  nop
    ctx->pc = 0x2cf0bcu;
    // NOP
    // 0x2cf0c0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF0C0u;
    {
        const bool branch_taken_0x2cf0c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cf0c0) {
            ctx->pc = 0x2CF0DCu;
            goto label_2cf0dc;
        }
    }
    ctx->pc = 0x2CF0C8u;
    // 0x2cf0c8: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2cf0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2cf0cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2cf0ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2cf0d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cf0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf0d4: 0x0  nop
    ctx->pc = 0x2cf0d4u;
    // NOP
    // 0x2cf0d8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2cf0d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2cf0dc:
    // 0x2cf0dc: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x2cf0dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x2cf0e0: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x2cf0e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x2cf0e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cf0e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf0e8: 0x24040168  addiu       $a0, $zero, 0x168
    ctx->pc = 0x2cf0e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x2cf0ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cf0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2cf0f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2cf0f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf0f4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2cf0f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2cf0f8: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2cf0f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2cf0fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cf0fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cf100: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2cf100u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2cf104: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2cf104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2cf108: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2cf108u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cf10c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2cf10cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2cf110: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF110u;
    {
        const bool branch_taken_0x2cf110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf110) {
            ctx->pc = 0x2CF114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF110u;
            // 0x2cf114: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF118u;
            goto label_2cf118;
        }
    }
    ctx->pc = 0x2CF118u;
label_2cf118:
    // 0x2cf118: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2cf118u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf11c: 0x1810  mfhi        $v1
    ctx->pc = 0x2cf11cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2cf120: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2cf120u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2cf124: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2cf124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2cf128: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2CF128u;
    {
        const bool branch_taken_0x2cf128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CF12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF128u;
        // 0x2cf12c: 0x2462010e  addiu       $v0, $v1, 0x10E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 270));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf128) {
            ctx->pc = 0x2CF198u;
            goto label_2cf198;
        }
    }
    ctx->pc = 0x2CF130u;
    // 0x2cf130: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2cf130u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2cf134: 0x24030168  addiu       $v1, $zero, 0x168
    ctx->pc = 0x2cf134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x2cf138: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF138u;
    {
        const bool branch_taken_0x2cf138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf138) {
            ctx->pc = 0x2CF13Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF138u;
            // 0x2cf13c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF140u;
            goto label_2cf140;
        }
    }
    ctx->pc = 0x2CF140u;
label_2cf140:
    // 0x2cf140: 0x2010  mfhi        $a0
    ctx->pc = 0x2cf140u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2cf144: 0x2482ffcd  addiu       $v0, $a0, -0x33
    ctx->pc = 0x2cf144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967245));
    // 0x2cf148: 0x2c420103  sltiu       $v0, $v0, 0x103
    ctx->pc = 0x2cf148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)259) ? 1 : 0);
    // 0x2cf14c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CF14Cu;
    {
        const bool branch_taken_0x2cf14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF14Cu;
        // 0x2cf150: 0x288200b5  slti        $v0, $a0, 0xB5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)181) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf14c) {
            ctx->pc = 0x2CF198u;
            goto label_2cf198;
        }
    }
    ctx->pc = 0x2CF154u;
    // 0x2cf154: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF154u;
    {
        const bool branch_taken_0x2cf154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF154u;
        // 0x2cf158: 0x2482ffce  addiu       $v0, $a0, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967246));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf154) {
            ctx->pc = 0x2CF170u;
            goto label_2cf170;
        }
    }
    ctx->pc = 0x2CF15Cu;
    // 0x2cf15c: 0x3c013c03  lui         $at, 0x3C03
    ctx->pc = 0x2cf15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15363 << 16));
    // 0x2cf160: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2cf160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2cf164: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cf164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf168: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2CF168u;
    {
        const bool branch_taken_0x2cf168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cf168) {
            ctx->pc = 0x2CF184u;
            goto label_2cf184;
        }
    }
    ctx->pc = 0x2CF170u;
label_2cf170:
    // 0x2cf170: 0x24020136  addiu       $v0, $zero, 0x136
    ctx->pc = 0x2cf170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x2cf174: 0x3c013c03  lui         $at, 0x3C03
    ctx->pc = 0x2cf174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15363 << 16));
    // 0x2cf178: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2cf178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2cf17c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cf17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf180: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2cf180u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2cf184:
    // 0x2cf184: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cf184u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cf188: 0x0  nop
    ctx->pc = 0x2cf188u;
    // NOP
    // 0x2cf18c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2cf18cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2cf190: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cf190u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cf194: 0x46140500  add.s       $f20, $f0, $f20
    ctx->pc = 0x2cf194u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_2cf198:
    // 0x2cf198: 0x12600016  beqz        $s3, . + 4 + (0x16 << 2)
    ctx->pc = 0x2CF198u;
    {
        const bool branch_taken_0x2cf198 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF198u;
        // 0x2cf19c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cf198) {
            ctx->pc = 0x2CF1F4u;
            goto label_2cf1f4;
        }
    }
    ctx->pc = 0x2CF1A0u;
    // 0x2cf1a0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2cf1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2cf1a4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2cf1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2cf1a8: 0xc07df92  jal         func_1F7E48
    ctx->pc = 0x2CF1A8u;
    SET_GPR_U32(ctx, 31, 0x2CF1B0u);
    ctx->pc = 0x2CF1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF1A8u;
    // 0x2cf1ac: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E48u, 0x2CF1A8u, 0x2CF1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF1B0u;
label_2cf1b0:
    // 0x2cf1b0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2cf1b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2cf1b4: 0x3c0146fa  lui         $at, 0x46FA
    ctx->pc = 0x2cf1b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18170 << 16));
    // 0x2cf1b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2cf1b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf1bc: 0x0  nop
    ctx->pc = 0x2cf1bcu;
    // NOP
    // 0x2cf1c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cf1c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf1c4: 0x0  nop
    ctx->pc = 0x2cf1c4u;
    // NOP
    // 0x2cf1c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF1C8u;
    {
        const bool branch_taken_0x2cf1c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cf1c8) {
            ctx->pc = 0x2CF1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF1C8u;
            // 0x2cf1cc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF1D0u;
            goto label_2cf1d0;
        }
    }
    ctx->pc = 0x2CF1D0u;
label_2cf1d0:
    // 0x2cf1d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2cf1d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cf1d4: 0x0  nop
    ctx->pc = 0x2cf1d4u;
    // NOP
    // 0x2cf1d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2cf1d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cf1dc: 0x0  nop
    ctx->pc = 0x2cf1dcu;
    // NOP
    // 0x2cf1e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF1E0u;
    {
        const bool branch_taken_0x2cf1e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cf1e0) {
            ctx->pc = 0x2CF1E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF1E0u;
            // 0x2cf1e4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF1E8u;
            goto label_2cf1e8;
        }
    }
    ctx->pc = 0x2CF1E8u;
label_2cf1e8:
    // 0x2cf1e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2cf1e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2cf1ec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2cf1ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2cf1f0: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x2cf1f0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
label_2cf1f4:
    // 0x2cf1f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2cf1f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cf1f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2cf1f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cf1fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cf1fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cf200: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2cf200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cf204: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cf204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cf208: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2cf208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2cf20c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF20Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF20Cu;
        // 0x2cf210: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF20Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF214u;
    // 0x2cf214: 0x0  nop
    ctx->pc = 0x2cf214u;
    // NOP
    ctx->pc = 0x2cf218u;
}
