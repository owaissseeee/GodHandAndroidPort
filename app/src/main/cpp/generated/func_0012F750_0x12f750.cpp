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

// Function: func_0012F750
// Address: 0x12f750 - 0x12fc20
void func_0012F750_0x12f750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012F750_0x12f750");
#endif

    switch (ctx->pc) {
        case 0x12f81cu: goto label_12f81c;
        case 0x12f880u: goto label_12f880;
        case 0x12f9d0u: goto label_12f9d0;
        case 0x12f9e8u: goto label_12f9e8;
        case 0x12fa80u: goto label_12fa80;
        case 0x12fac4u: goto label_12fac4;
        default: break;
    }

    ctx->pc = 0x12f750u;

    // 0x12f750: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x12f750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x12f754: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x12f754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12f758: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x12f758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x12f75c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x12f75cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x12f760: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x12f760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x12f764: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x12f764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x12f768: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f76c: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x12f76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x12f770: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x12f770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x12f774: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x12f774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x12f778: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x12f778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x12f77c: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x12f77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x12f780: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x12f780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x12f784: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x12f784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x12f788: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x12f788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12f78c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x12f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x12f790: 0x658021  addu        $s0, $v1, $a1
    ctx->pc = 0x12f790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12f794: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x12f794u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12f798: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x12f798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12f79c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x12f79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12f7a0: 0x30a30006  andi        $v1, $a1, 0x6
    ctx->pc = 0x12f7a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)6);
    // 0x12f7a4: 0x14600111  bnez        $v1, . + 4 + (0x111 << 2)
    ctx->pc = 0x12F7A4u;
    {
        const bool branch_taken_0x12f7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F7A4u;
        // 0x12f7a8: 0x82b821  addu        $s7, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f7a4) {
            ctx->pc = 0x12FBECu;
            goto label_12fbec;
        }
    }
    ctx->pc = 0x12F7ACu;
    // 0x12f7ac: 0x34a20004  ori         $v0, $a1, 0x4
    ctx->pc = 0x12f7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x12f7b0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x12f7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x12f7b4: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x12f7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x12f7b8: 0x8e220178  lw          $v0, 0x178($s1)
    ctx->pc = 0x12f7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 376)));
    // 0x12f7bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12f7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12f7c0: 0x5460010b  bnel        $v1, $zero, . + 4 + (0x10B << 2)
    ctx->pc = 0x12F7C0u;
    {
        const bool branch_taken_0x12f7c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f7c0) {
            ctx->pc = 0x12F7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F7C0u;
            // 0x12f7c4: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FBF0u;
            goto label_12fbf0;
        }
    }
    ctx->pc = 0x12F7C8u;
    // 0x12f7c8: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x12f7c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12f7cc: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x12f7ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12f7d0: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x12f7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12f7d4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x12f7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x12f7d8: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x12f7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x12f7dc: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x12f7dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12f7e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12f7e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12f7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12f7e8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f7ec: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12f7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12f7f0: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x12f7f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12f7f4: 0x463818  mult        $a3, $v0, $a2
    ctx->pc = 0x12f7f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x12f7f8: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x12f7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x12f7fc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x12f7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f800: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x12f800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12f804: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x12f804u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12f808: 0x463818  mult        $a3, $v0, $a2
    ctx->pc = 0x12f808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x12f80c: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x12f80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x12f810: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12f810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f814: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x12F814u;
    SET_GPR_U32(ctx, 31, 0x12F81Cu);
    ctx->pc = 0x12F818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F814u;
    // 0x12f818: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x12F814u, 0x12F81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F81Cu;
label_12f81c:
    // 0x12f81c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12f81cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f820: 0x0  nop
    ctx->pc = 0x12f820u;
    // NOP
    // 0x12f824: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12f824u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12f828: 0x0  nop
    ctx->pc = 0x12f828u;
    // NOP
    // 0x12f82c: 0x450300f0  bc1tl       . + 4 + (0xF0 << 2)
    ctx->pc = 0x12F82Cu;
    {
        const bool branch_taken_0x12f82c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12f82c) {
            ctx->pc = 0x12F830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F82Cu;
            // 0x12f830: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FBF0u;
            goto label_12fbf0;
        }
    }
    ctx->pc = 0x12F834u;
    // 0x12f834: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x12f834u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x12f838: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x12f838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12f83c: 0x961e0000  lhu         $fp, 0x0($s0)
    ctx->pc = 0x12f83cu;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12f840: 0x27a90060  addiu       $t1, $sp, 0x60
    ctx->pc = 0x12f840u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12f844: 0xafa30090  sw          $v1, 0x90($sp)
    ctx->pc = 0x12f844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 3));
    // 0x12f848: 0x26350090  addiu       $s5, $s1, 0x90
    ctx->pc = 0x12f848u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    // 0x12f84c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x12f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12f850: 0x263300e0  addiu       $s3, $s1, 0xE0
    ctx->pc = 0x12f850u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x12f854: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x12f854u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12f858: 0x263400a0  addiu       $s4, $s1, 0xA0
    ctx->pc = 0x12f858u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x12f85c: 0x263600f0  addiu       $s6, $s1, 0xF0
    ctx->pc = 0x12f85cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x12f860: 0xafa40094  sw          $a0, 0x94($sp)
    ctx->pc = 0x12f860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 4));
    // 0x12f864: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x12f864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12f868: 0x96070006  lhu         $a3, 0x6($s0)
    ctx->pc = 0x12f868u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x12f86c: 0xafa4009c  sw          $a0, 0x9C($sp)
    ctx->pc = 0x12f86cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 4));
    // 0x12f870: 0xafa70098  sw          $a3, 0x98($sp)
    ctx->pc = 0x12f870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 7));
    // 0x12f874: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x12f874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12f878: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x12f878u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12f87c: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x12f87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
label_12f880:
    // 0x12f880: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12f880u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12f884: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12f884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12f888: 0x0  nop
    ctx->pc = 0x12f888u;
    // NOP
    // 0x12f88c: 0x0  nop
    ctx->pc = 0x12f88cu;
    // NOP
    // 0x12f890: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12F890u;
    {
        const bool branch_taken_0x12f890 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x12F894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F890u;
        // 0x12f894: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f890) {
            ctx->pc = 0x12F880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12f880;
        }
    }
    ctx->pc = 0x12F898u;
    // 0x12f898: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x12f898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12f89c: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x12f89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x12f8a0: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x12f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12f8a4: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12f8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12f8a8: 0xafbe0060  sw          $fp, 0x60($sp)
    ctx->pc = 0x12f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 30));
    // 0x12f8ac: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x12f8acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x12f8b0: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x12f8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x12f8b4: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x12f8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
    // 0x12f8b8: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x12f8b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x12f8bc: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x12f8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12f8c0: 0xfba00080  sqc2        $vf0, 0x80($sp)
    ctx->pc = 0x12f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12f8c4: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x12f8c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x12f8c8: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x12f8c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12f8cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12f8d0: 0x8e2a000c  lw          $t2, 0xC($s1)
    ctx->pc = 0x12f8d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12f8d4: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x12f8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x12f8d8: 0x3068000c  andi        $t0, $v1, 0xC
    ctx->pc = 0x12f8d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x12f8dc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x12f8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12f8e0: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x12f8e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x12f8e4: 0x32882  srl         $a1, $v1, 2
    ctx->pc = 0x12f8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x12f8e8: 0x33902  srl         $a3, $v1, 4
    ctx->pc = 0x12f8e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x12f8ec: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x12f8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x12f8f0: 0x30a5000c  andi        $a1, $a1, 0xC
    ctx->pc = 0x12f8f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)12);
    // 0x12f8f4: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x12f8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x12f8f8: 0x30e7000c  andi        $a3, $a3, 0xC
    ctx->pc = 0x12f8f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)12);
    // 0x12f8fc: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x12f8fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x12f900: 0x33182  srl         $a2, $v1, 6
    ctx->pc = 0x12f900u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x12f904: 0x30c6000c  andi        $a2, $a2, 0xC
    ctx->pc = 0x12f904u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)12);
    // 0x12f908: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x12f908u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x12f90c: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x12f90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x12f910: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x12f910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x12f914: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x12f914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f918: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x12f918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x12f91c: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x12f91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x12f920: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x12f920u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x12f924: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x12f924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12f928: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x12f928u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x12f92c: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x12f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x12f930: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12f930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f934: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x12f934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x12f938: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x12f938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12f93c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x12f93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x12f940: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x12f940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x12f944: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x12f944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f948: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x12f948u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x12f94c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x12f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12f950: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x12f950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x12f954: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x12f954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x12f958: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x12f958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f95c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x12f95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x12f960: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x12f960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12f964: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x12f964u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x12f968: 0x8a1021  addu        $v0, $a0, $t2
    ctx->pc = 0x12f968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x12f96c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12f96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f970: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x12f970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x12f974: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f978: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x12f978u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12f97c: 0x6a1021  addu        $v0, $v1, $t2
    ctx->pc = 0x12f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x12f980: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12f980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f984: 0x12b30007  beq         $s5, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x12F984u;
    {
        const bool branch_taken_0x12f984 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        ctx->pc = 0x12F988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F984u;
        // 0x12f988: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f984) {
            ctx->pc = 0x12F9A4u;
            goto label_12f9a4;
        }
    }
    ctx->pc = 0x12F98Cu;
    // 0x12f98c: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x12f98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f990: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x12f990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
    // 0x12f994: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x12f994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f998: 0xe6a10004  swc1        $f1, 0x4($s5)
    ctx->pc = 0x12f998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x12f99c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x12f99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f9a0: 0xe6a00008  swc1        $f0, 0x8($s5)
    ctx->pc = 0x12f9a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 8), bits); }
label_12f9a4:
    // 0x12f9a4: 0x12960007  beq         $s4, $s6, . + 4 + (0x7 << 2)
    ctx->pc = 0x12F9A4u;
    {
        const bool branch_taken_0x12f9a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 22));
        ctx->pc = 0x12F9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9A4u;
        // 0x12f9a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9a4) {
            ctx->pc = 0x12F9C4u;
            goto label_12f9c4;
        }
    }
    ctx->pc = 0x12F9ACu;
    // 0x12f9ac: 0xc62000f0  lwc1        $f0, 0xF0($s1)
    ctx->pc = 0x12f9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f9b0: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x12f9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
    // 0x12f9b4: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x12f9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f9b8: 0xe6810004  swc1        $f1, 0x4($s4)
    ctx->pc = 0x12f9b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4), bits); }
    // 0x12f9bc: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x12f9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f9c0: 0xe6800008  swc1        $f0, 0x8($s4)
    ctx->pc = 0x12f9c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_12f9c4:
    // 0x12f9c4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12f9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9c8: 0xc04ce52  jal         func_133948
    ctx->pc = 0x12F9C8u;
    SET_GPR_U32(ctx, 31, 0x12F9D0u);
    ctx->pc = 0x12F9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F9C8u;
    // 0x12f9cc: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133948u, 0x12F9C8u, 0x12F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F9D0u;
label_12f9d0:
    // 0x12f9d0: 0x8fa5009c  lw          $a1, 0x9C($sp)
    ctx->pc = 0x12f9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
    // 0x12f9d4: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x12f9d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9d8: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x12f9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12f9dc: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x12f9dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f9e0: 0xc04cd02  jal         func_133408
    ctx->pc = 0x12F9E0u;
    SET_GPR_U32(ctx, 31, 0x12F9E8u);
    ctx->pc = 0x12F9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F9E0u;
    // 0x12f9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133408u, 0x12F9E0u, 0x12F9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F9E8u;
label_12f9e8:
    // 0x12f9e8: 0x10400080  beqz        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x12F9E8u;
    {
        const bool branch_taken_0x12f9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F9E8u;
        // 0x12f9ec: 0x3d21018  mult        $v0, $fp, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f9e8) {
            ctx->pc = 0x12FBECu;
            goto label_12fbec;
        }
    }
    ctx->pc = 0x12F9F0u;
    // 0x12f9f0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x12f9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12f9f4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x12f9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12f9f8: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x12f9f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12f9fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x12f9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12fa00: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12fa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa04: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x12fa04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12fa08: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12fa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fa0c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x12fa0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12fa10: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x12fa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12fa14: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x12fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12fa18: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x12fa18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x12fa1c: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x12fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
    // 0x12fa20: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12fa20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa24: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x12fa24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12fa28: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x12fa28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x12fa2c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12fa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fa30: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x12fa30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x12fa34: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x12fa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12fa38: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x12fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12fa3c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x12fa3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x12fa40: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12fa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa44: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x12fa44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x12fa48: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12fa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fa4c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x12fa4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x12fa50: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12fa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fa54: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x12fa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x12fa58: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x12fa58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12fa5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12fa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x12fa60: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12fa60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12fa64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12FA64u;
    {
        const bool branch_taken_0x12fa64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FA64u;
        // 0x12fa68: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fa64) {
            ctx->pc = 0x12FA88u;
            goto label_12fa88;
        }
    }
    ctx->pc = 0x12FA6Cu;
    // 0x12fa6c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12fa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12fa70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12fa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa74: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12fa74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa78: 0xc04d916  jal         func_136458
    ctx->pc = 0x12FA78u;
    SET_GPR_U32(ctx, 31, 0x12FA80u);
    ctx->pc = 0x12FA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FA78u;
    // 0x12fa7c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136458u, 0x12FA78u, 0x12FA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FA80u;
label_12fa80:
    // 0x12fa80: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x12FA80u;
    {
        const bool branch_taken_0x12fa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fa80) {
            ctx->pc = 0x12FAC4u;
            goto label_12fac4;
        }
    }
    ctx->pc = 0x12FA88u;
label_12fa88:
    // 0x12fa88: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12fa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12fa8c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12fa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12fa90: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12fa90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa94: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x12fa94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12fa98: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x12fa98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fa9c: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x12fa9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12faa0: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x12faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x12faa4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12faa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12faa8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12faa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12faac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x12faacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x12fab0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12fab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fab4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x12fab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x12fab8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12fab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fabc: 0xc04d96e  jal         func_1365B8
    ctx->pc = 0x12FABCu;
    SET_GPR_U32(ctx, 31, 0x12FAC4u);
    ctx->pc = 0x12FAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FABCu;
    // 0x12fac0: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365B8u, 0x12FABCu, 0x12FAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12FAC4u;
label_12fac4:
    // 0x12fac4: 0x5040004a  beql        $v0, $zero, . + 4 + (0x4A << 2)
    ctx->pc = 0x12FAC4u;
    {
        const bool branch_taken_0x12fac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fac4) {
            ctx->pc = 0x12FAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FAC4u;
            // 0x12fac8: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FBF0u;
            goto label_12fbf0;
        }
    }
    ctx->pc = 0x12FACCu;
    // 0x12facc: 0x8e23018c  lw          $v1, 0x18C($s1)
    ctx->pc = 0x12faccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 396)));
    // 0x12fad0: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x12FAD0u;
    {
        const bool branch_taken_0x12fad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fad0) {
            ctx->pc = 0x12FAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FAD0u;
            // 0x12fad4: 0xc6030004  lwc1        $f3, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FB28u;
            goto label_12fb28;
        }
    }
    ctx->pc = 0x12FAD8u;
    // 0x12fad8: 0x92220181  lbu         $v0, 0x181($s1)
    ctx->pc = 0x12fad8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 385)));
    // 0x12fadc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12FADCu;
    {
        const bool branch_taken_0x12fadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FADCu;
        // 0x12fae0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fadc) {
            ctx->pc = 0x12FAF0u;
            goto label_12faf0;
        }
    }
    ctx->pc = 0x12FAE4u;
    // 0x12fae4: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x12fae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
    // 0x12fae8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12FAE8u;
    {
        const bool branch_taken_0x12fae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FAE8u;
        // 0x12faec: 0xae22017c  sw          $v0, 0x17C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fae8) {
            ctx->pc = 0x12FB24u;
            goto label_12fb24;
        }
    }
    ctx->pc = 0x12FAF0u;
label_12faf0:
    // 0x12faf0: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x12faf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x12faf4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x12FAF4u;
    {
        const bool branch_taken_0x12faf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12faf4) {
            ctx->pc = 0x12FAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FAF4u;
            // 0x12faf8: 0xc6030004  lwc1        $f3, 0x4($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FB28u;
            goto label_12fb28;
        }
    }
    ctx->pc = 0x12FAFCu;
    // 0x12fafc: 0x8e22017c  lw          $v0, 0x17C($s1)
    ctx->pc = 0x12fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x12fb00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12fb04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12fb04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x12fb08: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x12fb08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x12fb0c: 0x8e23017c  lw          $v1, 0x17C($s1)
    ctx->pc = 0x12fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 380)));
    // 0x12fb10: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x12fb10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x12fb14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12fb18: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12fb1c: 0xae23017c  sw          $v1, 0x17C($s1)
    ctx->pc = 0x12fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 380), GPR_U32(ctx, 3));
    // 0x12fb20: 0xae220140  sw          $v0, 0x140($s1)
    ctx->pc = 0x12fb20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
label_12fb24:
    // 0x12fb24: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x12fb24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12fb28:
    // 0x12fb28: 0xc7a40050  lwc1        $f4, 0x50($sp)
    ctx->pc = 0x12fb28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12fb2c: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x12fb2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12fb30: 0xc62000e0  lwc1        $f0, 0xE0($s1)
    ctx->pc = 0x12fb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fb34: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x12fb34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x12fb38: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x12fb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fb3c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x12fb3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x12fb40: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x12fb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12fb44: 0xc6240188  lwc1        $f4, 0x188($s1)
    ctx->pc = 0x12fb44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12fb48: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x12fb48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x12fb4c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x12fb4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x12fb50: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12fb50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x12fb54: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x12fb54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x12fb58: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12fb58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12fb5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12fb5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12fb60: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x12fb60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12fb64: 0x0  nop
    ctx->pc = 0x12fb64u;
    // NOP
    // 0x12fb68: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
    ctx->pc = 0x12FB68u;
    {
        const bool branch_taken_0x12fb68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB68u;
        // 0x12fb6c: 0xe6200184  swc1        $f0, 0x184($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb68) {
            ctx->pc = 0x12FBE4u;
            goto label_12fbe4;
        }
    }
    ctx->pc = 0x12FB70u;
    // 0x12fb70: 0x26220130  addiu       $v0, $s1, 0x130
    ctx->pc = 0x12fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
    // 0x12fb74: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x12FB74u;
    {
        const bool branch_taken_0x12fb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x12FB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB74u;
        // 0x12fb78: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb74) {
            ctx->pc = 0x12FB90u;
            goto label_12fb90;
        }
    }
    ctx->pc = 0x12FB7Cu;
    // 0x12fb7c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x12fb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fb80: 0xe6200130  swc1        $f0, 0x130($s1)
    ctx->pc = 0x12fb80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 304), bits); }
    // 0x12fb84: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12fb84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12fb88: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x12fb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fb8c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12fb8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_12fb90:
    // 0x12fb90: 0xc6200184  lwc1        $f0, 0x184($s1)
    ctx->pc = 0x12fb90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fb94: 0x26230120  addiu       $v1, $s1, 0x120
    ctx->pc = 0x12fb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
    // 0x12fb98: 0x10700007  beq         $v1, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12FB98u;
    {
        const bool branch_taken_0x12fb98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x12FB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FB98u;
        // 0x12fb9c: 0xe6200188  swc1        $f0, 0x188($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fb98) {
            ctx->pc = 0x12FBB8u;
            goto label_12fbb8;
        }
    }
    ctx->pc = 0x12FBA0u;
    // 0x12fba0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x12fba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fba4: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x12fba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fba8: 0xe6200120  swc1        $f0, 0x120($s1)
    ctx->pc = 0x12fba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 288), bits); }
    // 0x12fbac: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x12fbacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12fbb0: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x12fbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fbb4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x12fbb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_12fbb8:
    // 0x12fbb8: 0x92220181  lbu         $v0, 0x181($s1)
    ctx->pc = 0x12fbb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 385)));
    // 0x12fbbc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x12FBBCu;
    {
        const bool branch_taken_0x12fbbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FBBCu;
        // 0x12fbc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fbbc) {
            ctx->pc = 0x12FBE8u;
            goto label_12fbe8;
        }
    }
    ctx->pc = 0x12FBC4u;
    // 0x12fbc4: 0x52c30009  beql        $s6, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12FBC4u;
    {
        const bool branch_taken_0x12fbc4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 3));
        if (branch_taken_0x12fbc4) {
            ctx->pc = 0x12FBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FBC4u;
            // 0x12fbc8: 0xa2220180  sb          $v0, 0x180($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 384), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FBECu;
            goto label_12fbec;
        }
    }
    ctx->pc = 0x12FBCCu;
    // 0x12fbcc: 0xc6200120  lwc1        $f0, 0x120($s1)
    ctx->pc = 0x12fbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fbd0: 0xe62000f0  swc1        $f0, 0xF0($s1)
    ctx->pc = 0x12fbd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 240), bits); }
    // 0x12fbd4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x12fbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fbd8: 0xe6c10004  swc1        $f1, 0x4($s6)
    ctx->pc = 0x12fbd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
    // 0x12fbdc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x12fbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fbe0: 0xe6c00008  swc1        $f0, 0x8($s6)
    ctx->pc = 0x12fbe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 8), bits); }
label_12fbe4:
    // 0x12fbe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12fbe8:
    // 0x12fbe8: 0xa2220180  sb          $v0, 0x180($s1)
    ctx->pc = 0x12fbe8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 384), (uint8_t)GPR_U32(ctx, 2));
label_12fbec:
    // 0x12fbec: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x12fbecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_12fbf0:
    // 0x12fbf0: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x12fbf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x12fbf4: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x12fbf4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x12fbf8: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x12fbf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12fbfc: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x12fbfcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12fc00: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x12fc00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12fc04: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x12fc04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12fc08: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x12fc08u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12fc0c: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x12fc0cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12fc10: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x12fc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12fc14: 0x3e00008  jr          $ra
    ctx->pc = 0x12FC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC14u;
        // 0x12fc18: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12FC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12FC1Cu;
    // 0x12fc1c: 0x0  nop
    ctx->pc = 0x12fc1cu;
    // NOP
    ctx->pc = 0x12fc20u;
}
