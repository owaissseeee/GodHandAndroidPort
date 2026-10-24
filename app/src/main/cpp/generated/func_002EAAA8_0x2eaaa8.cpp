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

// Function: func_002EAAA8
// Address: 0x2eaaa8 - 0x2eaf70
void func_002EAAA8_0x2eaaa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002EAAA8_0x2eaaa8");
#endif

    switch (ctx->pc) {
        case 0x2eab0cu: goto label_2eab0c;
        case 0x2eab18u: goto label_2eab18;
        case 0x2eabb8u: goto label_2eabb8;
        case 0x2eabf0u: goto label_2eabf0;
        case 0x2eac00u: goto label_2eac00;
        case 0x2eac10u: goto label_2eac10;
        case 0x2eac1cu: goto label_2eac1c;
        case 0x2eac2cu: goto label_2eac2c;
        case 0x2eac58u: goto label_2eac58;
        case 0x2eac68u: goto label_2eac68;
        case 0x2eac78u: goto label_2eac78;
        case 0x2eac84u: goto label_2eac84;
        case 0x2eac90u: goto label_2eac90;
        case 0x2eacbcu: goto label_2eacbc;
        case 0x2eacccu: goto label_2eaccc;
        case 0x2eacdcu: goto label_2eacdc;
        case 0x2eacf0u: goto label_2eacf0;
        case 0x2eacfcu: goto label_2eacfc;
        case 0x2ead10u: goto label_2ead10;
        case 0x2ead20u: goto label_2ead20;
        case 0x2ead48u: goto label_2ead48;
        case 0x2ead60u: goto label_2ead60;
        case 0x2ead70u: goto label_2ead70;
        case 0x2eae4cu: goto label_2eae4c;
        case 0x2eae70u: goto label_2eae70;
        case 0x2eae7cu: goto label_2eae7c;
        case 0x2eaeb8u: goto label_2eaeb8;
        default: break;
    }

    ctx->pc = 0x2eaaa8u;

    // 0x2eaaa8: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2eaaa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x2eaaac: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2eaaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2eaab0: 0x7fb30170  sq          $s3, 0x170($sp)
    ctx->pc = 0x2eaab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 19));
    // 0x2eaab4: 0x7fb50150  sq          $s5, 0x150($sp)
    ctx->pc = 0x2eaab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 21));
    // 0x2eaab8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2eaab8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaabc: 0x7fb60140  sq          $s6, 0x140($sp)
    ctx->pc = 0x2eaabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 22));
    // 0x2eaac0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2eaac0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaac4: 0xe7b601c0  swc1        $f22, 0x1C0($sp)
    ctx->pc = 0x2eaac4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2eaac8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2eaac8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaacc: 0xe7b501b8  swc1        $f21, 0x1B8($sp)
    ctx->pc = 0x2eaaccu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2eaad0: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2eaad0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2eaad4: 0x7fb001a0  sq          $s0, 0x1A0($sp)
    ctx->pc = 0x2eaad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 16));
    // 0x2eaad8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2eaad8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2eaadc: 0x7fb10190  sq          $s1, 0x190($sp)
    ctx->pc = 0x2eaadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 17));
    // 0x2eaae0: 0x7fb20180  sq          $s2, 0x180($sp)
    ctx->pc = 0x2eaae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 18));
    // 0x2eaae4: 0x7fb40160  sq          $s4, 0x160($sp)
    ctx->pc = 0x2eaae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 20));
    // 0x2eaae8: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x2eaae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x2eaaec: 0xe7b401b0  swc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2eaaecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2eaaf0: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x2eaaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2eaaf4: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x2eaaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x2eaaf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eaaf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eaafc: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2EAAFCu;
    {
        const bool branch_taken_0x2eaafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAAFCu;
        // 0x2eab00: 0xafa00124  sw          $zero, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaafc) {
            ctx->pc = 0x2EABA0u;
            goto label_2eaba0;
        }
    }
    ctx->pc = 0x2EAB04u;
    // 0x2eab04: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x2EAB04u;
    SET_GPR_U32(ctx, 31, 0x2EAB0Cu);
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x2EAB04u, 0x2EAB0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB0Cu;
label_2eab0c:
    // 0x2eab0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eab0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eab10: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EAB10u;
    SET_GPR_U32(ctx, 31, 0x2EAB18u);
    ctx->pc = 0x2EAB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAB10u;
    // 0x2eab14: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EAB10u, 0x2EAB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAB18u;
label_2eab18:
    // 0x2eab18: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2eab18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2eab1c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2eab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2eab20: 0x8c831180  lw          $v1, 0x1180($a0)
    ctx->pc = 0x2eab20u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2eab24: 0xc4476b80  lwc1        $f7, 0x6B80($v0)
    ctx->pc = 0x2eab24u;
    { uint32_t bits = FAST_READ32(0x586B80u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2eab28: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x2eab28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
    // 0x2eab2c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2eab2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2eab30: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x2eab30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2eab34: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2eab34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2eab38: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x2eab38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
    // 0x2eab3c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2eab3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2eab40: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2eab40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2eab44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2eab44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eab48: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2eab48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eab4c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2eab4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2eab50: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x2eab50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eab54: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2eab54u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2eab58: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2eab58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eab5c: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x2eab5cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2eab60: 0x0  nop
    ctx->pc = 0x2eab60u;
    // NOP
    // 0x2eab64: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2eab64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2eab68: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x2eab68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
    // 0x2eab6c: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x2eab6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
    // 0x2eab70: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2eab70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2eab74: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x2eab74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x2eab78: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x2eab78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2eab7c: 0x46070000  add.s       $f0, $f0, $f7
    ctx->pc = 0x2eab7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[7]);
    // 0x2eab80: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x2eab80u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2eab84: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x2eab84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x2eab88: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x2eab88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x2eab8c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2eab8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2eab90: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2eab90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2eab94: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x2eab94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2eab98: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2EAB98u;
    {
        const bool branch_taken_0x2eab98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAB98u;
        // 0x2eab9c: 0xe7a40000  swc1        $f4, 0x0($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eab98) {
            ctx->pc = 0x2EAD78u;
            goto label_2ead78;
        }
    }
    ctx->pc = 0x2EABA0u;
label_2eaba0:
    // 0x2eaba0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2eaba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2eaba4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2eaba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaba8: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x2eaba8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2eabac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2eabacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabb0: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EABB0u;
    SET_GPR_U32(ctx, 31, 0x2EABB8u);
    ctx->pc = 0x2EABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EABB0u;
    // 0x2eabb4: 0x24a50100  addiu       $a1, $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EABB0u, 0x2EABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EABB8u;
label_2eabb8:
    // 0x2eabb8: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x2eabb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2eabbc: 0x463001e  bgezl       $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2EABBCu;
    {
        const bool branch_taken_0x2eabbc = (GPR_S64(ctx, 3) >= 0);
        if (branch_taken_0x2eabbc) {
            ctx->pc = 0x2EABC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EABBCu;
            // 0x2eabc0: 0x8e62011c  lw          $v0, 0x11C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EAC38u;
            goto label_2eac38;
        }
    }
    ctx->pc = 0x2EABC4u;
    // 0x2eabc4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2eabc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2eabc8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2eabc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eabcc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2EABCCu;
    {
        const bool branch_taken_0x2eabcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABCCu;
        // 0x2eabd0: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eabcc) {
            ctx->pc = 0x2EAC34u;
            goto label_2eac34;
        }
    }
    ctx->pc = 0x2EABD4u;
    // 0x2eabd4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2eabd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eabd8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2EABD8u;
    {
        const bool branch_taken_0x2eabd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EABD8u;
        // 0x2eabdc: 0x8e85aff0  lw          $a1, -0x5010($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eabd8) {
            ctx->pc = 0x2EAC34u;
            goto label_2eac34;
        }
    }
    ctx->pc = 0x2EABE0u;
    // 0x2eabe0: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2eabe0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2eabe4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eabe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabe8: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EABE8u;
    SET_GPR_U32(ctx, 31, 0x2EABF0u);
    ctx->pc = 0x2EABECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EABE8u;
    // 0x2eabec: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EABE8u, 0x2EABF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EABF0u;
label_2eabf0:
    // 0x2eabf0: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x2eabf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2eabf4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eabf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eabf8: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2EABF8u;
    SET_GPR_U32(ctx, 31, 0x2EAC00u);
    ctx->pc = 0x2EABFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EABF8u;
    // 0x2eabfc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2EABF8u, 0x2EAC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC00u;
label_2eac00:
    // 0x2eac00: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2eac00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eac04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac08: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2EAC08u;
    SET_GPR_U32(ctx, 31, 0x2EAC10u);
    ctx->pc = 0x2EAC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC08u;
    // 0x2eac0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2EAC08u, 0x2EAC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC10u;
label_2eac10:
    // 0x2eac10: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2eac10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2eac14: 0xc0ad8ca  jal         func_2B6328
    ctx->pc = 0x2EAC14u;
    SET_GPR_U32(ctx, 31, 0x2EAC1Cu);
    ctx->pc = 0x2EAC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC14u;
    // 0x2eac18: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6328u, 0x2EAC14u, 0x2EAC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC1Cu;
label_2eac1c:
    // 0x2eac1c: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2eac1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eac20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac24: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EAC24u;
    SET_GPR_U32(ctx, 31, 0x2EAC2Cu);
    ctx->pc = 0x2EAC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC24u;
    // 0x2eac28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EAC24u, 0x2EAC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC2Cu;
label_2eac2c:
    // 0x2eac2c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2EAC2Cu;
    {
        const bool branch_taken_0x2eac2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC2Cu;
        // 0x2eac30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac2c) {
            ctx->pc = 0x2EACC4u;
            goto label_2eacc4;
        }
    }
    ctx->pc = 0x2EAC34u;
label_2eac34:
    // 0x2eac34: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x2eac34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_2eac38:
    // 0x2eac38: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2eac38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2eac3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2eac3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2eac40: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2EAC40u;
    {
        const bool branch_taken_0x2eac40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAC40u;
        // 0x2eac44: 0x8e85aff0  lw          $a1, -0x5010($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eac40) {
            ctx->pc = 0x2EACE4u;
            goto label_2eace4;
        }
    }
    ctx->pc = 0x2EAC48u;
    // 0x2eac48: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x2eac48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2eac4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eac4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac50: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EAC50u;
    SET_GPR_U32(ctx, 31, 0x2EAC58u);
    ctx->pc = 0x2EAC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC50u;
    // 0x2eac54: 0x24a50140  addiu       $a1, $a1, 0x140 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EAC50u, 0x2EAC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC58u;
label_2eac58:
    // 0x2eac58: 0x27b100c0  addiu       $s1, $sp, 0xC0
    ctx->pc = 0x2eac58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2eac5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2eac5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac60: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2EAC60u;
    SET_GPR_U32(ctx, 31, 0x2EAC68u);
    ctx->pc = 0x2EAC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC60u;
    // 0x2eac64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2EAC60u, 0x2EAC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC68u;
label_2eac68:
    // 0x2eac68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eac68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2eac6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac70: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2EAC70u;
    SET_GPR_U32(ctx, 31, 0x2EAC78u);
    ctx->pc = 0x2EAC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC70u;
    // 0x2eac74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2EAC70u, 0x2EAC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC78u;
label_2eac78:
    // 0x2eac78: 0x27b20080  addiu       $s2, $sp, 0x80
    ctx->pc = 0x2eac78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2eac7c: 0xc0ad8ca  jal         func_2B6328
    ctx->pc = 0x2EAC7Cu;
    SET_GPR_U32(ctx, 31, 0x2EAC84u);
    ctx->pc = 0x2EAC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC7Cu;
    // 0x2eac80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6328u, 0x2EAC7Cu, 0x2EAC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC84u;
label_2eac84:
    // 0x2eac84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eac84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eac88: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EAC88u;
    SET_GPR_U32(ctx, 31, 0x2EAC90u);
    ctx->pc = 0x2EAC8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAC88u;
    // 0x2eac8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EAC88u, 0x2EAC90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAC90u;
label_2eac90:
    // 0x2eac90: 0x8e82aff0  lw          $v0, -0x5010($s4)
    ctx->pc = 0x2eac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946800)));
    // 0x2eac94: 0x24420220  addiu       $v0, $v0, 0x220
    ctx->pc = 0x2eac94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
    // 0x2eac98: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2eac98u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2eac9c: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x2eac9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2eaca0: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2eaca0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2eaca4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2eaca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eaca8: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x2eaca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2eacac: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x2eacacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x2eacb0: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2eacb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2eacb4: 0xc051ed8  jal         func_147B60
    ctx->pc = 0x2EACB4u;
    SET_GPR_U32(ctx, 31, 0x2EACBCu);
    ctx->pc = 0x2EACB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACB4u;
    // 0x2eacb8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147B60u, 0x2EACB4u, 0x2EACBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACBCu;
label_2eacbc:
    // 0x2eacbc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2eacbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacc0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2eacc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2eacc4:
    // 0x2eacc4: 0xc051f10  jal         func_147C40
    ctx->pc = 0x2EACC4u;
    SET_GPR_U32(ctx, 31, 0x2EACCCu);
    ctx->pc = 0x2EACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACC4u;
    // 0x2eacc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x2EACC4u, 0x2EACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACCCu;
label_2eaccc:
    // 0x2eaccc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2eacccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2eacd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacd4: 0xc051d52  jal         func_147548
    ctx->pc = 0x2EACD4u;
    SET_GPR_U32(ctx, 31, 0x2EACDCu);
    ctx->pc = 0x2EACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACD4u;
    // 0x2eacd8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x2EACD4u, 0x2EACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACDCu;
label_2eacdc:
    // 0x2eacdc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2EACDCu;
    {
        const bool branch_taken_0x2eacdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EACDCu;
        // 0x2eace0: 0xc6610254  lwc1        $f1, 0x254($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eacdc) {
            ctx->pc = 0x2EAD24u;
            goto label_2ead24;
        }
    }
    ctx->pc = 0x2EACE4u;
label_2eace4:
    // 0x2eace4: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x2eace4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2eace8: 0xc0ad86c  jal         func_2B61B0
    ctx->pc = 0x2EACE8u;
    SET_GPR_U32(ctx, 31, 0x2EACF0u);
    ctx->pc = 0x2EACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACE8u;
    // 0x2eacec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61B0u, 0x2EACE8u, 0x2EACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACF0u;
label_2eacf0:
    // 0x2eacf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2eacf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eacf4: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EACF4u;
    SET_GPR_U32(ctx, 31, 0x2EACFCu);
    ctx->pc = 0x2EACF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EACF4u;
    // 0x2eacf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EACF4u, 0x2EACFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EACFCu;
label_2eacfc:
    // 0x2eacfc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x2eacfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead00: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x2ead00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2ead04: 0x8e85aff0  lw          $a1, -0x5010($s4)
    ctx->pc = 0x2ead04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294946800)));
    // 0x2ead08: 0xc051d4a  jal         func_147528
    ctx->pc = 0x2EAD08u;
    SET_GPR_U32(ctx, 31, 0x2EAD10u);
    ctx->pc = 0x2EAD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD08u;
    // 0x2ead0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x2EAD08u, 0x2EAD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD10u;
label_2ead10:
    // 0x2ead10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ead10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ead14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead18: 0xc051d52  jal         func_147548
    ctx->pc = 0x2EAD18u;
    SET_GPR_U32(ctx, 31, 0x2EAD20u);
    ctx->pc = 0x2EAD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD18u;
    // 0x2ead1c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x2EAD18u, 0x2EAD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD20u;
label_2ead20:
    // 0x2ead20: 0xc6610254  lwc1        $f1, 0x254($s3)
    ctx->pc = 0x2ead20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ead24:
    // 0x2ead24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ead24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ead28: 0x0  nop
    ctx->pc = 0x2ead28u;
    // NOP
    // 0x2ead2c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2ead2cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ead30: 0x0  nop
    ctx->pc = 0x2ead30u;
    // NOP
    // 0x2ead34: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x2EAD34u;
    {
        const bool branch_taken_0x2ead34 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EAD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD34u;
        // 0x2ead38: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead34) {
            ctx->pc = 0x2EAD68u;
            goto label_2ead68;
        }
    }
    ctx->pc = 0x2EAD3Cu;
    // 0x2ead3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ead3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead40: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2EAD40u;
    SET_GPR_U32(ctx, 31, 0x2EAD48u);
    ctx->pc = 0x2EAD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD40u;
    // 0x2ead44: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2EAD40u, 0x2EAD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD48u;
label_2ead48:
    // 0x2ead48: 0xc66c0254  lwc1        $f12, 0x254($s3)
    ctx->pc = 0x2ead48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ead4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ead4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ead50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ead54: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x2ead54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2ead58: 0xc0bf798  jal         func_2FDE60
    ctx->pc = 0x2EAD58u;
    SET_GPR_U32(ctx, 31, 0x2EAD60u);
    ctx->pc = 0x2EAD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD58u;
    // 0x2ead5c: 0x27a70124  addiu       $a3, $sp, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDE60u, 0x2EAD58u, 0x2EAD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD60u;
label_2ead60:
    // 0x2ead60: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAD60u;
    {
        const bool branch_taken_0x2ead60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ead60) {
            ctx->pc = 0x2EAD70u;
            goto label_2ead70;
        }
    }
    ctx->pc = 0x2EAD68u;
label_2ead68:
    // 0x2ead68: 0xc0bf76a  jal         func_2FDDA8
    ctx->pc = 0x2EAD68u;
    SET_GPR_U32(ctx, 31, 0x2EAD70u);
    ctx->pc = 0x2EAD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAD68u;
    // 0x2ead6c: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDA8u, 0x2EAD68u, 0x2EAD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAD70u;
label_2ead70:
    // 0x2ead70: 0x14400072  bnez        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2EAD70u;
    {
        const bool branch_taken_0x2ead70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD70u;
        // 0x2ead74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead70) {
            ctx->pc = 0x2EAF3Cu;
            goto label_2eaf3c;
        }
    }
    ctx->pc = 0x2EAD78u;
label_2ead78:
    // 0x2ead78: 0x8e63011c  lw          $v1, 0x11C($s3)
    ctx->pc = 0x2ead78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
    // 0x2ead7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2ead7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2ead80: 0xc6660214  lwc1        $f6, 0x214($s3)
    ctx->pc = 0x2ead80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2ead84: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2ead84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2ead88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EAD88u;
    {
        const bool branch_taken_0x2ead88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAD88u;
        // 0x2ead8c: 0xc6670218  lwc1        $f7, 0x218($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ead88) {
            ctx->pc = 0x2EADA0u;
            goto label_2eada0;
        }
    }
    ctx->pc = 0x2EAD90u;
    // 0x2ead90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2ead90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2ead94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ead94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ead98: 0x0  nop
    ctx->pc = 0x2ead98u;
    // NOP
    // 0x2ead9c: 0x46060181  sub.s       $f6, $f0, $f6
    ctx->pc = 0x2ead9cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
label_2eada0:
    // 0x2eada0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2eada0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2eada4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2eada4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2eada8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EADA8u;
    {
        const bool branch_taken_0x2eada8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2eada8) {
            ctx->pc = 0x2EADACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2EADA8u;
            // 0x2eadac: 0xc6600210  lwc1        $f0, 0x210($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2EADC4u;
            goto label_2eadc4;
        }
    }
    ctx->pc = 0x2EADB0u;
    // 0x2eadb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eadb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2eadb4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2eadb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eadb8: 0x0  nop
    ctx->pc = 0x2eadb8u;
    // NOP
    // 0x2eadbc: 0x460701c1  sub.s       $f7, $f0, $f7
    ctx->pc = 0x2eadbcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x2eadc0: 0xc6600210  lwc1        $f0, 0x210($s3)
    ctx->pc = 0x2eadc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2eadc4:
    // 0x2eadc4: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x2eadc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2eadc8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2eadc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2eadcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2eadccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2eadd0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2eadd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eadd4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2eadd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2eadd8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2eadd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2eaddc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2eaddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2eade0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2eade0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2eade4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eade4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eade8: 0x4606a101  sub.s       $f4, $f20, $f6
    ctx->pc = 0x2eade8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[20], ctx->f[6]);
    // 0x2eadec: 0x4607a141  sub.s       $f5, $f20, $f7
    ctx->pc = 0x2eadecu;
    ctx->f[5] = FPU_SUB_S(ctx->f[20], ctx->f[7]);
    // 0x2eadf0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2eadf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2eadf4: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2eadf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2eadf8: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x2eadf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x2eadfc: 0xe654000c  swc1        $f20, 0xC($s2)
    ctx->pc = 0x2eadfcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x2eae00: 0xe7b4005c  swc1        $f20, 0x5C($sp)
    ctx->pc = 0x2eae00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x2eae04: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x2eae04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2eae08: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x2eae08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2eae0c: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x2eae0cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
    // 0x2eae10: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2eae10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x2eae14: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x2eae14u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x2eae18: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2eae18u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2eae1c: 0x460718c2  mul.s       $f3, $f3, $f7
    ctx->pc = 0x2eae1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[7]);
    // 0x2eae20: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2eae20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2eae24: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2eae24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2eae28: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x2eae28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x2eae2c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2eae2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2eae30: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2eae30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2eae34: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2eae34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2eae38: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2eae38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2eae3c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2eae3cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x2eae40: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x2eae40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2eae44: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2EAE44u;
    SET_GPR_U32(ctx, 31, 0x2EAE4Cu);
    ctx->pc = 0x2EAE48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE44u;
    // 0x2eae48: 0xe7a30054  swc1        $f3, 0x54($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2EAE44u, 0x2EAE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE4Cu;
label_2eae4c:
    // 0x2eae4c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x2eae4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eae50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2eae50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eae54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae58: 0x0  nop
    ctx->pc = 0x2eae58u;
    // NOP
    // 0x2eae5c: 0x0  nop
    ctx->pc = 0x2eae5cu;
    // NOP
    // 0x2eae60: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2eae60u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[20], ctx->f[0]);
    // 0x2eae64: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2eae64u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2eae68: 0xc0c293a  jal         func_30A4E8
    ctx->pc = 0x2EAE68u;
    SET_GPR_U32(ctx, 31, 0x2EAE70u);
    ctx->pc = 0x2EAE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE68u;
    // 0x2eae6c: 0xe6d40000  swc1        $f20, 0x0($s6) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4E8u, 0x2EAE68u, 0x2EAE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE70u;
label_2eae70:
    // 0x2eae70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2eae70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eae74: 0xc0c295c  jal         func_30A570
    ctx->pc = 0x2EAE74u;
    SET_GPR_U32(ctx, 31, 0x2EAE7Cu);
    ctx->pc = 0x2EAE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EAE74u;
    // 0x2eae78: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A570u, 0x2EAE74u, 0x2EAE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EAE7Cu;
label_2eae7c:
    // 0x2eae7c: 0xc6610254  lwc1        $f1, 0x254($s3)
    ctx->pc = 0x2eae7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2eae80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2eae80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2eae84: 0x0  nop
    ctx->pc = 0x2eae84u;
    // NOP
    // 0x2eae88: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2eae88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2eae8c: 0x0  nop
    ctx->pc = 0x2eae8cu;
    // NOP
    // 0x2eae90: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2EAE90u;
    {
        const bool branch_taken_0x2eae90 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAE90u;
        // 0x2eae94: 0x8ea20008  lw          $v0, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eae90) {
            ctx->pc = 0x2EAEB0u;
            goto label_2eaeb0;
        }
    }
    ctx->pc = 0x2EAE98u;
    // 0x2eae98: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x2eae98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2eae9c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2eae9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2eaea0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x2eaea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2eaea4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2eaea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2eaea8: 0xaea20008  sw          $v0, 0x8($s5)
    ctx->pc = 0x2eaea8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 2));
    // 0x2eaeac: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x2eaeacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2eaeb0:
    // 0x2eaeb0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EAEB0u;
    {
        const bool branch_taken_0x2eaeb0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2EAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEB0u;
        // 0x2eaeb4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaeb0) {
            ctx->pc = 0x2EAEC0u;
            goto label_2eaec0;
        }
    }
    ctx->pc = 0x2EAEB8u;
label_2eaeb8:
    // 0x2eaeb8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2EAEB8u;
    {
        const bool branch_taken_0x2eaeb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EAEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEB8u;
        // 0x2eaebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaeb8) {
            ctx->pc = 0x2EAF3Cu;
            goto label_2eaf3c;
        }
    }
    ctx->pc = 0x2EAEC0u;
label_2eaec0:
    // 0x2eaec0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x2eaec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2eaec4: 0x8c461180  lw          $a2, 0x1180($v0)
    ctx->pc = 0x2eaec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4480)));
    // 0x2eaec8: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x2eaec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2eaecc: 0x8ea50004  lw          $a1, 0x4($s5)
    ctx->pc = 0x2eaeccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2eaed0: 0x42103  sra         $a0, $a0, 4
    ctx->pc = 0x2eaed0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2eaed4: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2eaed4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2eaed8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2eaed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eaedc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2eaedcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2eaee0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2eaee0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2eaee4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x2eaee4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2eaee8: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
    ctx->pc = 0x2EAEE8u;
    {
        const bool branch_taken_0x2eaee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEE8u;
        // 0x2eaeec: 0x52903  sra         $a1, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaee8) {
            ctx->pc = 0x2EAEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2eaeb8;
        }
    }
    ctx->pc = 0x2EAEF0u;
    // 0x2eaef0: 0xc21023  subu        $v0, $a2, $v0
    ctx->pc = 0x2eaef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eaef4: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x2eaef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x2eaef8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x2eaef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2eaefc: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2EAEFCu;
    {
        const bool branch_taken_0x2eaefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAEFCu;
        // 0x2eaf00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaefc) {
            ctx->pc = 0x2EAF3Cu;
            goto label_2eaf3c;
        }
    }
    ctx->pc = 0x2EAF04u;
    // 0x2eaf04: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2eaf04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2eaf08: 0x8c666b80  lw          $a2, 0x6B80($v1)
    ctx->pc = 0x2eaf08u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x586B80u));
    // 0x2eaf0c: 0x24c2fc00  addiu       $v0, $a2, -0x400
    ctx->pc = 0x2eaf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966272));
    // 0x2eaf10: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2eaf10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2eaf14: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EAF14u;
    {
        const bool branch_taken_0x2eaf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF14u;
        // 0x2eaf18: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf14) {
            ctx->pc = 0x2EAF3Cu;
            goto label_2eaf3c;
        }
    }
    ctx->pc = 0x2EAF1Cu;
    // 0x2eaf1c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2eaf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2eaf20: 0x8c62118c  lw          $v0, 0x118C($v1)
    ctx->pc = 0x2eaf20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x2eaf24: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2eaf24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2eaf28: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x2eaf28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x2eaf2c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2eaf2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2eaf30: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2EAF30u;
    {
        const bool branch_taken_0x2eaf30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF30u;
        // 0x2eaf34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eaf30) {
            ctx->pc = 0x2EAF3Cu;
            goto label_2eaf3c;
        }
    }
    ctx->pc = 0x2EAF38u;
    // 0x2eaf38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2eaf38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2eaf3c:
    // 0x2eaf3c: 0x7bb001a0  lq          $s0, 0x1A0($sp)
    ctx->pc = 0x2eaf3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2eaf40: 0x7bb10190  lq          $s1, 0x190($sp)
    ctx->pc = 0x2eaf40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2eaf44: 0x7bb20180  lq          $s2, 0x180($sp)
    ctx->pc = 0x2eaf44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2eaf48: 0x7bb30170  lq          $s3, 0x170($sp)
    ctx->pc = 0x2eaf48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2eaf4c: 0x7bb40160  lq          $s4, 0x160($sp)
    ctx->pc = 0x2eaf4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2eaf50: 0x7bb50150  lq          $s5, 0x150($sp)
    ctx->pc = 0x2eaf50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2eaf54: 0x7bb60140  lq          $s6, 0x140($sp)
    ctx->pc = 0x2eaf54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2eaf58: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x2eaf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2eaf5c: 0xc7b601c0  lwc1        $f22, 0x1C0($sp)
    ctx->pc = 0x2eaf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2eaf60: 0xc7b501b8  lwc1        $f21, 0x1B8($sp)
    ctx->pc = 0x2eaf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2eaf64: 0xc7b401b0  lwc1        $f20, 0x1B0($sp)
    ctx->pc = 0x2eaf64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2eaf68: 0x3e00008  jr          $ra
    ctx->pc = 0x2EAF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EAF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EAF68u;
        // 0x2eaf6c: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EAF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EAF70u;
}
