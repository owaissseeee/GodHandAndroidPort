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

// Function: func_0012FC20
// Address: 0x12fc20 - 0x130700
void func_0012FC20_0x12fc20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012FC20_0x12fc20");
#endif

    if (__builtin_expect(ctx->pc != 0x12fc20u, 0)) {
        switch (ctx->pc) {
            case 0x12fcd8u: goto label_12fcd8;
            case 0x12fe54u: goto label_12fe54;
            case 0x12fec8u: goto label_12fec8;
            case 0x12fee0u: goto label_12fee0;
            case 0x12ffd0u: goto label_12ffd0;
            case 0x12ffe0u: goto label_12ffe0;
            case 0x12fff8u: goto label_12fff8;
            case 0x13003cu: goto label_13003c;
            case 0x1300d4u: goto label_1300d4;
            case 0x130168u: goto label_130168;
            case 0x1301e0u: goto label_1301e0;
            case 0x1301f8u: goto label_1301f8;
            case 0x130210u: goto label_130210;
            case 0x130244u: goto label_130244;
            case 0x1302d0u: goto label_1302d0;
            case 0x1302e0u: goto label_1302e0;
            case 0x130300u: goto label_130300;
            case 0x130344u: goto label_130344;
            case 0x1303dcu: goto label_1303dc;
            case 0x130470u: goto label_130470;
            case 0x130504u: goto label_130504;
            case 0x13057cu: goto label_13057c;
            case 0x130594u: goto label_130594;
            case 0x1305acu: goto label_1305ac;
            case 0x1305c4u: goto label_1305c4;
            case 0x1305f8u: goto label_1305f8;
            case 0x130638u: goto label_130638;
            case 0x130648u: goto label_130648;
            case 0x130664u: goto label_130664;
            case 0x130674u: goto label_130674;
            default: break;
        }
    }


    // 0x12fc20: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x12fc24: 0x24020014  addiu       $v0, $zero, 0x14
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x12fc28: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x12fc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x12fc2c: 0xa22818  mult        $a1, $a1, $v0
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x12fc30: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x12fc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x12fc34: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x12fc34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x12fc38: 0x80b02d  daddu       $s6, $a0, $zero
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fc3c: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x12fc3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x12fc40: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x12fc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x12fc44: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x12fc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x12fc48: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x12fc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x12fc4c: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x12fc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x12fc50: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x12fc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x12fc54: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x12fc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x12fc58: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x12fc58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x12fc5c: 0x8ec30014  lw          $v1, 0x14($s6)
    ctx->pc = 0x12fc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
    // 0x12fc60: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x12fc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x12fc64: 0x658021  addu        $s0, $v1, $a1
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x12fc68: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x12fc68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12fc6c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x12fc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12fc70: 0x21100  sll         $v0, $v0, 4
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x12fc74: 0x822021  addu        $a0, $a0, $v0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x12fc78: 0x30a30006  andi        $v1, $a1, 0x6
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)6);
    // 0x12fc7c: 0x14600293  bnez        $v1, . + 4 + (0x293 << 2)
    ctx->pc = 0x12FC7Cu;
    {
        const bool branch_taken_0x12fc7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12FC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FC7Cu;
        // 0x12fc80: 0xafa40120  sw          $a0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fc7c) {
            ctx->pc = 0x1306CCu;
            goto label_1306cc;
        }
    }
    // 0x12fc84: 0x34a20004  ori         $v0, $a1, 0x4
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x12fc88: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x12fc88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x12fc8c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x12fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x12fc90: 0x8ec20178  lw          $v0, 0x178($s6)
    ctx->pc = 0x12fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 376)));
    // 0x12fc94: 0x621824  and         $v1, $v1, $v0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12fc98: 0x5460028d  bnel        $v1, $zero, . + 4 + (0x28D << 2)
    ctx->pc = 0x12FC98u;
    {
        const bool branch_taken_0x12fc98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12fc98) {
            ctx->pc = 0x12FC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FC98u;
            // 0x12fc9c: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1306D0u;
            goto label_1306d0;
        }
    }
    // 0x12fca0: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x12fca0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x12fca4: 0x3a0102d  daddu       $v0, $sp, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fca8: 0x961e0000  lhu         $fp, 0x0($s0)
    ctx->pc = 0x12fca8u;
    SET_GPR_ZE32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x12fcac: 0x27a60040  addiu       $a2, $sp, 0x40
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12fcb0: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x12fcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x12fcb4: 0x27ac0070  addiu       $t4, $sp, 0x70
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x12fcb8: 0x24030003  addiu       $v1, $zero, 0x3
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12fcbc: 0x27ad0080  addiu       $t5, $sp, 0x80
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x12fcc0: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x12fcc0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12fcc4: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x12fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x12fcc8: 0x2404ffff  addiu       $a0, $zero, -0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12fccc: 0x96050006  lhu         $a1, 0x6($s0)
    ctx->pc = 0x12fcccu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x12fcd0: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x12fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
    // 0x12fcd4: 0x0  nop
    ctx->pc = 0x12fcd4u;
    // NOP
label_12fcd8:
    // 0x12fcd8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12fcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12fcdc: 0x2463ffff  addiu       $v1, $v1, -0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12fce0: 0x0  nop
    // NOP
    // 0x12fce4: 0x0  nop
    // NOP
    // 0x12fce8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x12FCE8u;
    {
        const bool branch_taken_0x12fce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x12FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FCE8u;
        // 0x12fcec: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fce8) {
            ctx->pc = 0x12FCD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fcd8;
        }
    }
    // 0x12fcf0: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x12fcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x12fcf4: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x12fcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x12fcf8: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x12fcf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x12fcfc: 0xafbe0040  sw          $fp, 0x40($sp)
    ctx->pc = 0x12fcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 30));
    // 0x12fd00: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x12fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x12fd04: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x12fd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    // 0x12fd08: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x12fd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x12fd0c: 0x9607000a  lhu         $a3, 0xA($s0)
    ctx->pc = 0x12fd0cu;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x12fd10: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x12fd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12fd14: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x12fd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12fd18: 0x30e20003  andi        $v0, $a3, 0x3
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3);
    // 0x12fd1c: 0x240b000c  addiu       $t3, $zero, 0xC
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x12fd20: 0x21080  sll         $v0, $v0, 2
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12fd24: 0x8ece000c  lw          $t6, 0xC($s6)
    ctx->pc = 0x12fd24u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x12fd28: 0xc21021  addu        $v0, $a2, $v0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12fd2c: 0xc6c00110  lwc1        $f0, 0x110($s6)
    ctx->pc = 0x12fd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fd30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12fd30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12fd34: 0x30e4000c  andi        $a0, $a3, 0xC
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)12);
    // 0x12fd38: 0x8ed1006c  lw          $s1, 0x6C($s6)
    ctx->pc = 0x12fd38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    // 0x12fd3c: 0xc42021  addu        $a0, $a2, $a0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x12fd40: 0x6b1818  mult        $v1, $v1, $t3
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12fd44: 0x8ed20078  lw          $s2, 0x78($s6)
    ctx->pc = 0x12fd44u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x12fd48: 0x8ed30070  lw          $s3, 0x70($s6)
    ctx->pc = 0x12fd48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x12fd4c: 0x74882  srl         $t1, $a3, 2
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
    // 0x12fd50: 0x8ed4007c  lw          $s4, 0x7C($s6)
    ctx->pc = 0x12fd50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
    // 0x12fd54: 0x3129000c  andi        $t1, $t1, 0xC
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)12);
    // 0x12fd58: 0x8ed50074  lw          $s5, 0x74($s6)
    ctx->pc = 0x12fd58u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x12fd5c: 0xc94821  addu        $t1, $a2, $t1
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x12fd60: 0x6e1821  addu        $v1, $v1, $t6
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x12fd64: 0x8ed70080  lw          $s7, 0x80($s6)
    ctx->pc = 0x12fd64u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x12fd68: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x12fd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fd6c: 0x74102  srl         $t0, $a3, 4
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 7), 4));
    // 0x12fd70: 0x3108000c  andi        $t0, $t0, 0xC
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)12);
    // 0x12fd74: 0x75182  srl         $t2, $a3, 6
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x12fd78: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x12fd78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x12fd7c: 0xc84021  addu        $t0, $a2, $t0
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x12fd80: 0x314a000c  andi        $t2, $t2, 0xC
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)12);
    // 0x12fd84: 0x73a02  srl         $a3, $a3, 8
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x12fd88: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12fd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12fd8c: 0xca5021  addu        $t2, $a2, $t2
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x12fd90: 0xc6c40120  lwc1        $f4, 0x120($s6)
    ctx->pc = 0x12fd90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12fd94: 0x30e7000c  andi        $a3, $a3, 0xC
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)12);
    // 0x12fd98: 0x4b1818  mult        $v1, $v0, $t3
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12fd9c: 0xc6c30124  lwc1        $f3, 0x124($s6)
    ctx->pc = 0x12fd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12fda0: 0xc6c20128  lwc1        $f2, 0x128($s6)
    ctx->pc = 0x12fda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12fda4: 0x46002201  sub.s       $f8, $f4, $f0
    ctx->f[8] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x12fda8: 0x460019c1  sub.s       $f7, $f3, $f0
    ctx->f[7] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x12fdac: 0xc73821  addu        $a3, $a2, $a3
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x12fdb0: 0x46001181  sub.s       $f6, $f2, $f0
    ctx->f[6] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x12fdb4: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12fdb8: 0x44812800  mtc1        $at, $f5
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x12fdbc: 0x6e1021  addu        $v0, $v1, $t6
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x12fdc0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x12fdc4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x12fdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12fdc8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x12fdcc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x12fdd0: 0x180282d  daddu       $a1, $t4, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fdd4: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x12fdd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x12fdd8: 0x1a0302d  daddu       $a2, $t5, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fddc: 0x2c0202d  daddu       $a0, $s6, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12fde0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x12fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x12fde4: 0x4b1818  mult        $v1, $v0, $t3
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12fde8: 0x6e1021  addu        $v0, $v1, $t6
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x12fdec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x12fdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fdf0: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x12fdf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x12fdf4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x12fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x12fdf8: 0x4b1818  mult        $v1, $v0, $t3
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12fdfc: 0x6e1021  addu        $v0, $v1, $t6
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x12fe00: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x12fe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fe04: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x12fe04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x12fe08: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x12fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x12fe0c: 0x4b1818  mult        $v1, $v0, $t3
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12fe10: 0x6e1021  addu        $v0, $v1, $t6
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x12fe14: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12fe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fe18: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x12fe18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x12fe1c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x12fe1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12fe20: 0x4b1818  mult        $v1, $v0, $t3
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x12fe24: 0x6e1021  addu        $v0, $v1, $t6
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x12fe28: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12fe28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12fe2c: 0xe7a80070  swc1        $f8, 0x70($sp)
    ctx->pc = 0x12fe2cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x12fe30: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x12fe30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x12fe34: 0xe7a70074  swc1        $f7, 0x74($sp)
    ctx->pc = 0x12fe34u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x12fe38: 0xe7a60078  swc1        $f6, 0x78($sp)
    ctx->pc = 0x12fe38u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x12fe3c: 0xe585000c  swc1        $f5, 0xC($t4)
    ctx->pc = 0x12fe3cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    // 0x12fe40: 0xe7a40080  swc1        $f4, 0x80($sp)
    ctx->pc = 0x12fe40u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x12fe44: 0xe7a30084  swc1        $f3, 0x84($sp)
    ctx->pc = 0x12fe44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x12fe48: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x12fe48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x12fe4c: 0xc04bca2  jal         func_12F288
    SET_GPR_U32(ctx, 31, 0x12FE54u);
    ctx->pc = 0x12FE50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FE4Cu;
    // 0x12fe50: 0xe5a5000c  swc1        $f5, 0xC($t5) (Delay Slot)
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0012F288_0x12f288, 0x12f288u, 0x12fe54u)) {
        return;
    }
    ctx->pc = 0x12FE54u;
label_12fe54:
    // 0x12fe54: 0x5040021e  beql        $v0, $zero, . + 4 + (0x21E << 2)
    ctx->pc = 0x12FE54u;
    {
        const bool branch_taken_0x12fe54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12fe54) {
            ctx->pc = 0x12FE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FE54u;
            // 0x12fe58: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1306D0u;
            goto label_1306d0;
        }
    }
    // 0x12fe5c: 0x8ec2006c  lw          $v0, 0x6C($s6)
    ctx->pc = 0x12fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
    // 0x12fe60: 0x56220011  bnel        $s1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12FE60u;
    {
        const bool branch_taken_0x12fe60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x12fe60) {
            ctx->pc = 0x12FE64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FE60u;
            // 0x12fe64: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FEA8u;
            goto label_12fea8;
        }
    }
    // 0x12fe68: 0x8ec20078  lw          $v0, 0x78($s6)
    ctx->pc = 0x12fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x12fe6c: 0x5642000e  bnel        $s2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x12FE6Cu;
    {
        const bool branch_taken_0x12fe6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x12fe6c) {
            ctx->pc = 0x12FE70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FE6Cu;
            // 0x12fe70: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FEA8u;
            goto label_12fea8;
        }
    }
    // 0x12fe74: 0x8ec20070  lw          $v0, 0x70($s6)
    ctx->pc = 0x12fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x12fe78: 0x5662000b  bnel        $s3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12FE78u;
    {
        const bool branch_taken_0x12fe78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x12fe78) {
            ctx->pc = 0x12FE7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FE78u;
            // 0x12fe7c: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FEA8u;
            goto label_12fea8;
        }
    }
    // 0x12fe80: 0x8ec2007c  lw          $v0, 0x7C($s6)
    ctx->pc = 0x12fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
    // 0x12fe84: 0x56820008  bnel        $s4, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12FE84u;
    {
        const bool branch_taken_0x12fe84 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x12fe84) {
            ctx->pc = 0x12FE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FE84u;
            // 0x12fe88: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FEA8u;
            goto label_12fea8;
        }
    }
    // 0x12fe8c: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x12fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x12fe90: 0x56a20005  bnel        $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12FE90u;
    {
        const bool branch_taken_0x12fe90 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x12fe90) {
            ctx->pc = 0x12FE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12FE90u;
            // 0x12fe94: 0x8ec5006c  lw          $a1, 0x6C($s6) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12FEA8u;
            goto label_12fea8;
        }
    }
    // 0x12fe98: 0x8ec20080  lw          $v0, 0x80($s6)
    ctx->pc = 0x12fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x12fe9c: 0x12e2000b  beq         $s7, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x12FE9Cu;
    {
        const bool branch_taken_0x12fe9c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x12FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FE9Cu;
        // 0x12fea0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fe9c) {
            ctx->pc = 0x12FECCu;
            goto label_12fecc;
        }
    }
    // 0x12fea4: 0x8ec5006c  lw          $a1, 0x6C($s6)
    ctx->pc = 0x12fea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 108)));
label_12fea8:
    // 0x12fea8: 0x2c0202d  daddu       $a0, $s6, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12feac: 0x8ec60078  lw          $a2, 0x78($s6)
    ctx->pc = 0x12feacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 120)));
    // 0x12feb0: 0x8ec70070  lw          $a3, 0x70($s6)
    ctx->pc = 0x12feb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
    // 0x12feb4: 0x8ec8007c  lw          $t0, 0x7C($s6)
    ctx->pc = 0x12feb4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 124)));
    // 0x12feb8: 0x8ec90074  lw          $t1, 0x74($s6)
    ctx->pc = 0x12feb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
    // 0x12febc: 0x8eca0080  lw          $t2, 0x80($s6)
    ctx->pc = 0x12febcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 128)));
    // 0x12fec0: 0xc04bd32  jal         func_12F4C8
    SET_GPR_U32(ctx, 31, 0x12FEC8u);
    ctx->pc = 0x12FEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FEC0u;
    // 0x12fec4: 0x8ecb0174  lw          $t3, 0x174($s6) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 372)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_0012F4C8_0x12f4c8, 0x12f4c8u, 0x12fec8u)) {
        return;
    }
    ctx->pc = 0x12FEC8u;
label_12fec8:
    // 0x12fec8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x12fec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12fecc:
    // 0x12fecc: 0x27a50050  addiu       $a1, $sp, 0x50
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12fed0: 0x27a60060  addiu       $a2, $sp, 0x60
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12fed4: 0x26c70090  addiu       $a3, $s6, 0x90
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    // 0x12fed8: 0xc04cd02  jal         func_133408
    SET_GPR_U32(ctx, 31, 0x12FEE0u);
    ctx->pc = 0x12FEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FED8u;
    // 0x12fedc: 0x26c800a0  addiu       $t0, $s6, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 160));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00133408_0x133408, 0x133408u, 0x12fee0u)) {
        return;
    }
    ctx->pc = 0x12FEE0u;
label_12fee0:
    // 0x12fee0: 0x104001fa  beqz        $v0, . + 4 + (0x1FA << 2)
    ctx->pc = 0x12FEE0u;
    {
        const bool branch_taken_0x12fee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FEE0u;
        // 0x12fee4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12fee0) {
            ctx->pc = 0x1306CCu;
            goto label_1306cc;
        }
    }
    // 0x12fee8: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x12fee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x12feec: 0x3c41018  mult        $v0, $fp, $a0
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x12fef0: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x12fef0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x12fef4: 0xa42818  mult        $a1, $a1, $a0
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x12fef8: 0x621021  addu        $v0, $v1, $v0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12fefc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12fefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ff00: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12ff00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12ff04: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12ff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ff08: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x12ff08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x12ff0c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x12ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ff10: 0xa31021  addu        $v0, $a1, $v1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12ff14: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x12ff14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x12ff18: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x12ff18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x12ff1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12ff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ff20: 0xa42818  mult        $a1, $a1, $a0
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x12ff24: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x12ff24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x12ff28: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12ff28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ff2c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x12ff2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x12ff30: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x12ff30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12ff34: 0xa31021  addu        $v0, $a1, $v1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x12ff38: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x12ff38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x12ff3c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12ff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ff40: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x12ff40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x12ff44: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12ff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ff48: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x12ff48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x12ff4c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12ff4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ff50: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x12ff50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x12ff54: 0xfba00090  sqc2        $vf0, 0x90($sp)
    ctx->pc = 0x12ff54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ff58: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x12ff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ff5c: 0x92020010  lbu         $v0, 0x10($s0)
    ctx->pc = 0x12ff5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x12ff60: 0x38420001  xori        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x12ff64: 0x30420001  andi        $v0, $v0, 0x1
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12ff68: 0x104000b8  beqz        $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x12FF68u;
    {
        const bool branch_taken_0x12ff68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12FF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12FF68u;
        // 0x12ff6c: 0x27b00090  addiu       $s0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ff68) {
            ctx->pc = 0x13024Cu;
            goto label_13024c;
        }
    }
    // 0x12ff70: 0x27b100c0  addiu       $s1, $sp, 0xC0
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x12ff74: 0x27b40010  addiu       $s4, $sp, 0x10
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12ff78: 0x27b500b0  addiu       $s5, $sp, 0xB0
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x12ff7c: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x12ff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ff80: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x12ff80u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x12ff84: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x12ff84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ff88: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12ff8c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x12ff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12ff90: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x12ff90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ff94: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x12ff94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12ff98: 0x27b200d0  addiu       $s2, $sp, 0xD0
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x12ff9c: 0x27b30020  addiu       $s3, $sp, 0x20
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ffa0: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x12ffa0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12ffa4: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x12ffa4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x12ffa8: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x12ffa8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12ffac: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x12ffb0: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x12ffb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12ffb4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x12ffb4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12ffb8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x12ffb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x12ffbc: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffc0: 0x220302d  daddu       $a2, $s1, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffc4: 0x2a0282d  daddu       $a1, $s5, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffc8: 0xc0c28ca  jal         func_30A328
    SET_GPR_U32(ctx, 31, 0x12FFD0u);
    ctx->pc = 0x12FFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FFC8u;
    // 0x12ffcc: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0OuterProduct_0x30a328, 0x30a328u, 0x12ffd0u)) {
        return;
    }
    ctx->pc = 0x12FFD0u;
label_12ffd0:
    // 0x12ffd0: 0x260f02d  daddu       $fp, $s3, $zero
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffd4: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffd8: 0xc0c28dc  jal         func_30A370
    SET_GPR_U32(ctx, 31, 0x12FFE0u);
    ctx->pc = 0x12FFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12FFD8u;
    // 0x12ffdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0Normalize_0x30a370, 0x30a370u, 0x12ffe0u)) {
        return;
    }
    ctx->pc = 0x12FFE0u;
label_12ffe0:
    // 0x12ffe0: 0x2a0a02d  daddu       $s4, $s5, $zero
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ffe4: 0x27b000f0  addiu       $s0, $sp, 0xF0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x12ffe8: 0x2403ffff  addiu       $v1, $zero, -0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12ffec: 0x24020002  addiu       $v0, $zero, 0x2
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12fff0: 0x26d20120  addiu       $s2, $s6, 0x120
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 288));
    // 0x12fff4: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x12fff4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_12fff8:
    // 0x12fff8: 0xfaa00000  sqc2        $vf0, 0x0($s5)
    ctx->pc = 0x12fff8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12fffc: 0x2442ffff  addiu       $v0, $v0, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x130000: 0x0  nop
    // NOP
    // 0x130004: 0x0  nop
    // NOP
    // 0x130008: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x130008u;
    {
        const bool branch_taken_0x130008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130008u;
        // 0x13000c: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130008) {
            ctx->pc = 0x12FFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12fff8;
        }
    }
    // 0x130010: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x130010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130014: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x130014u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130018: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x130018u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13001c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x130020: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x130020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130024: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x130024u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130028: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x130028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13002c: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x13002cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130030: 0x4480a000  mtc1        $zero, $f20
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x130034: 0xc04078a  jal         func_101E28
    SET_GPR_U32(ctx, 31, 0x13003Cu);
    ctx->pc = 0x130038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130034u;
    // 0x130038: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Tramp_001F7DF8_00101E28_0x101e28, 0x101e28u, 0x13003cu)) {
        return;
    }
    ctx->pc = 0x13003Cu;
label_13003c:
    // 0x13003c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130040: 0x0  nop
    // NOP
    // 0x130044: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x130044u;
    {
        const bool branch_taken_0x130044 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130044u;
        // 0x130048: 0xc7a400f0  lwc1        $f4, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130044) {
            ctx->pc = 0x130088u;
            goto label_130088;
        }
    }
    // 0x13004c: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x130050: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130054: 0x0  nop
    // NOP
    // 0x130058: 0x0  nop
    // NOP
    // 0x13005c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x130060: 0xc7a300f4  lwc1        $f3, 0xF4($sp)
    ctx->pc = 0x130060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130064: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x130064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130068: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x130068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13006c: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x13006cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x130070: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x130074: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x130078: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x13007c: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x13007cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x130080: 0xe7a40100  swc1        $f4, 0x100($sp)
    ctx->pc = 0x130080u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x130084: 0xe7a30104  swc1        $f3, 0x104($sp)
    ctx->pc = 0x130084u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_130088:
    // 0x130088: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x130088u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13008c: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x13008cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130090: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x130090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130094: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x130094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130098: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x130098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13009c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x13009cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1300a0: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1300a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1300a4: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x1300a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1300a8: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x1300a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1300ac: 0x27a20010  addiu       $v0, $sp, 0x10
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1300b0: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1300b0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1300b4: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x1300b4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1300b8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1300bc: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1300bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1300c0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1300c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1300c4: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1300c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1300c8: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x1300c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1300cc: 0xc04078a  jal         func_101E28
    SET_GPR_U32(ctx, 31, 0x1300D4u);
    ctx->pc = 0x1300D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1300CCu;
    // 0x1300d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Tramp_001F7DF8_00101E28_0x101e28, 0x101e28u, 0x1300d4u)) {
        return;
    }
    ctx->pc = 0x1300D4u;
label_1300d4:
    // 0x1300d4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1300d8: 0x0  nop
    // NOP
    // 0x1300dc: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1300DCu;
    {
        const bool branch_taken_0x1300dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1300E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1300DCu;
        // 0x1300e0: 0xc7a400f0  lwc1        $f4, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1300dc) {
            ctx->pc = 0x130120u;
            goto label_130120;
        }
    }
    // 0x1300e4: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1300e8: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1300ec: 0x0  nop
    // NOP
    // 0x1300f0: 0x0  nop
    // NOP
    // 0x1300f4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x1300f8: 0xc7a300f4  lwc1        $f3, 0xF4($sp)
    ctx->pc = 0x1300f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1300fc: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x1300fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130100: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x130100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130104: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x130104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x130108: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x13010c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x130110: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x130114: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x130114u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x130118: 0xe7a40100  swc1        $f4, 0x100($sp)
    ctx->pc = 0x130118u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x13011c: 0xe7a30104  swc1        $f3, 0x104($sp)
    ctx->pc = 0x13011cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_130120:
    // 0x130120: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x130120u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130124: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x130124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130128: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x130128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13012c: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x13012cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130130: 0xc7a200e8  lwc1        $f2, 0xE8($sp)
    ctx->pc = 0x130130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130134: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x130134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x130138: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x130138u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x13013c: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x13013cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x130140: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x130140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130144: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x130144u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x130148: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x130148u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13014c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x130150: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x130150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130154: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x130154u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130158: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x130158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13015c: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x13015cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130160: 0xc04078a  jal         func_101E28
    SET_GPR_U32(ctx, 31, 0x130168u);
    ctx->pc = 0x130164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130160u;
    // 0x130164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Tramp_001F7DF8_00101E28_0x101e28, 0x101e28u, 0x130168u)) {
        return;
    }
    ctx->pc = 0x130168u;
label_130168:
    // 0x130168: 0x4600a034  c.lt.s      $f20, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13016c: 0x0  nop
    // NOP
    // 0x130170: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x130170u;
    {
        const bool branch_taken_0x130170 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130170u;
        // 0x130174: 0xc7a400f0  lwc1        $f4, 0xF0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130170) {
            ctx->pc = 0x1301B4u;
            goto label_1301b4;
        }
    }
    // 0x130178: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13017c: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130180: 0x0  nop
    // NOP
    // 0x130184: 0x0  nop
    // NOP
    // 0x130188: 0x46000843  div.s       $f1, $f1, $f0
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x13018c: 0xc7a300f4  lwc1        $f3, 0xF4($sp)
    ctx->pc = 0x13018cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130190: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x130190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130194: 0xc7a000fc  lwc1        $f0, 0xFC($sp)
    ctx->pc = 0x130194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130198: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x130198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x13019c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1301a0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1301a4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1301a8: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x1301a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x1301ac: 0xe7a40100  swc1        $f4, 0x100($sp)
    ctx->pc = 0x1301acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x1301b0: 0xe7a30104  swc1        $f3, 0x104($sp)
    ctx->pc = 0x1301b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1301b4:
    // 0x1301b4: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1301b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1301b8: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x1301b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1301bc: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x1301bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1301c0: 0x2e0202d  daddu       $a0, $s7, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301c4: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x1301c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1301c8: 0x280282d  daddu       $a1, $s4, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1301cc: 0xc7a000e8  lwc1        $f0, 0xE8($sp)
    ctx->pc = 0x1301ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1301d0: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x1301d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1301d4: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x1301d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1301d8: 0xc0c28d2  jal         func_30A348
    SET_GPR_U32(ctx, 31, 0x1301E0u);
    ctx->pc = 0x1301DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301D8u;
    // 0x1301dc: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0InnerProduct_0x30a348, 0x30a348u, 0x1301e0u)) {
        return;
    }
    ctx->pc = 0x1301E0u;
label_1301e0:
    // 0x1301e0: 0x4600a036  c.le.s      $f20, $f0
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1301e4: 0x0  nop
    // NOP
    // 0x1301e8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1301E8u;
    {
        const bool branch_taken_0x1301e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1301ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1301E8u;
        // 0x1301ec: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1301e8) {
            ctx->pc = 0x130220u;
            goto label_130220;
        }
    }
    // 0x1301f0: 0xc0c28d2  jal         func_30A348
    SET_GPR_U32(ctx, 31, 0x1301F8u);
    ctx->pc = 0x1301F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1301F0u;
    // 0x1301f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0InnerProduct_0x30a348, 0x30a348u, 0x1301f8u)) {
        return;
    }
    ctx->pc = 0x1301F8u;
label_1301f8:
    // 0x1301f8: 0x4600a036  c.le.s      $f20, $f0
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1301fc: 0x0  nop
    // NOP
    // 0x130200: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x130200u;
    {
        const bool branch_taken_0x130200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130200u;
        // 0x130204: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130200) {
            ctx->pc = 0x130220u;
            goto label_130220;
        }
    }
    // 0x130208: 0xc0c28d2  jal         func_30A348
    SET_GPR_U32(ctx, 31, 0x130210u);
    ctx->pc = 0x13020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130208u;
    // 0x13020c: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0InnerProduct_0x30a348, 0x30a348u, 0x130210u)) {
        return;
    }
    ctx->pc = 0x130210u;
label_130210:
    // 0x130210: 0x4600a036  c.le.s      $f20, $f0
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130214: 0x0  nop
    // NOP
    // 0x130218: 0x4501012d  bc1t        . + 4 + (0x12D << 2)
    ctx->pc = 0x130218u;
    {
        const bool branch_taken_0x130218 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130218u;
        // 0x13021c: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130218) {
            ctx->pc = 0x1306D0u;
            goto label_1306d0;
        }
    }
    ctx->pc = 0x130220u;
label_130220:
    // 0x130220: 0x27a200a0  addiu       $v0, $sp, 0xA0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x130224: 0xc6cc0110  lwc1        $f12, 0x110($s6)
    ctx->pc = 0x130224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x130228: 0x27a60010  addiu       $a2, $sp, 0x10
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13022c: 0x3c0382d  daddu       $a3, $fp, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130230: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130234: 0x3a0282d  daddu       $a1, $sp, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130238: 0x40402d  daddu       $t0, $v0, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13023c: 0xc04d6c6  jal         func_135B18
    SET_GPR_U32(ctx, 31, 0x130244u);
    ctx->pc = 0x130240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13023Cu;
    // 0x130240: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SphereTriangle_0x135b18, 0x135b18u, 0x130244u)) {
        return;
    }
    ctx->pc = 0x130244u;
label_130244:
    // 0x130244: 0x100000ec  b           . + 4 + (0xEC << 2)
    ctx->pc = 0x130244u;
    {
        const bool branch_taken_0x130244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x130244) {
            ctx->pc = 0x1305F8u;
            goto label_1305f8;
        }
    }
    ctx->pc = 0x13024Cu;
label_13024c:
    // 0x13024c: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x13024cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x130250: 0x27b100c0  addiu       $s1, $sp, 0xC0
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x130254: 0x27b40010  addiu       $s4, $sp, 0x10
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x130258: 0xa42818  mult        $a1, $a1, $a0
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x13025c: 0x27b300b0  addiu       $s3, $sp, 0xB0
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x130260: 0xa31021  addu        $v0, $a1, $v1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x130264: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x130264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130268: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x130268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13026c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x13026cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130270: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x130270u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x130274: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x130274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130278: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x130278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x13027c: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x13027cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130280: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x130280u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x130284: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x130284u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130288: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13028c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x13028cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130290: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x130290u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x130294: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x130294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130298: 0x27b200d0  addiu       $s2, $sp, 0xD0
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x13029c: 0x27a20030  addiu       $v0, $sp, 0x30
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1302a0: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x1302a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1302a4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1302a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1302a8: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1302a8u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1302ac: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1302b0: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x1302b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1302b4: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x1302b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1302b8: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x1302b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1302bc: 0x40a82d  daddu       $s5, $v0, $zero
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302c0: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302c4: 0x220302d  daddu       $a2, $s1, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302c8: 0xc0c28ca  jal         func_30A328
    SET_GPR_U32(ctx, 31, 0x1302D0u);
    ctx->pc = 0x1302CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302C8u;
    // 0x1302cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0OuterProduct_0x30a328, 0x30a328u, 0x1302d0u)) {
        return;
    }
    ctx->pc = 0x1302D0u;
label_1302d0:
    // 0x1302d0: 0x200b82d  daddu       $s7, $s0, $zero
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302d4: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302d8: 0xc0c28dc  jal         func_30A370
    SET_GPR_U32(ctx, 31, 0x1302E0u);
    ctx->pc = 0x1302DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1302D8u;
    // 0x1302dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0Normalize_0x30a370, 0x30a370u, 0x1302e0u)) {
        return;
    }
    ctx->pc = 0x1302E0u;
label_1302e0:
    // 0x1302e0: 0x260a02d  daddu       $s4, $s3, $zero
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1302e4: 0x27b00110  addiu       $s0, $sp, 0x110
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x1302e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1302ec: 0x24020003  addiu       $v0, $zero, 0x3
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1302f0: 0x27be0020  addiu       $fp, $sp, 0x20
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1302f4: 0x26d20120  addiu       $s2, $s6, 0x120
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 288));
    // 0x1302f8: 0x27b10100  addiu       $s1, $sp, 0x100
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1302fc: 0x0  nop
    ctx->pc = 0x1302fcu;
    // NOP
label_130300:
    // 0x130300: 0xfa600000  sqc2        $vf0, 0x0($s3)
    ctx->pc = 0x130300u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130304: 0x2442ffff  addiu       $v0, $v0, -0x1
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x130308: 0x0  nop
    // NOP
    // 0x13030c: 0x0  nop
    // NOP
    // 0x130310: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x130310u;
    {
        const bool branch_taken_0x130310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x130314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130310u;
        // 0x130314: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130310) {
            ctx->pc = 0x130300u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_130300;
        }
    }
    // 0x130318: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x130318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13031c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x13031cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130320: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x130320u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130324: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x130328: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x130328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13032c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x13032cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130330: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x130330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130334: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x130334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130338: 0x4480a000  mtc1        $zero, $f20
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13033c: 0xc04078a  jal         func_101E28
    SET_GPR_U32(ctx, 31, 0x130344u);
    ctx->pc = 0x130340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13033Cu;
    // 0x130340: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Tramp_001F7DF8_00101E28_0x101e28, 0x101e28u, 0x130344u)) {
        return;
    }
    ctx->pc = 0x130344u;
label_130344:
    // 0x130344: 0x4600a034  c.lt.s      $f20, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130348: 0x0  nop
    // NOP
    // 0x13034c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x13034Cu;
    {
        const bool branch_taken_0x13034c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13034Cu;
        // 0x130350: 0xc7a40100  lwc1        $f4, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13034c) {
            ctx->pc = 0x130390u;
            goto label_130390;
        }
    }
    // 0x130354: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x130358: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13035c: 0x0  nop
    // NOP
    // 0x130360: 0x0  nop
    // NOP
    // 0x130364: 0x46000843  div.s       $f1, $f1, $f0
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x130368: 0xc7a30104  lwc1        $f3, 0x104($sp)
    ctx->pc = 0x130368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13036c: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x13036cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130370: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x130370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130374: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x130374u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x130378: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x13037c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x130380: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x130384: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x130384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x130388: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x130388u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x13038c: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x13038cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_130390:
    // 0x130390: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x130390u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130394: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x130394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130398: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x130398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13039c: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x13039cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1303a0: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x1303a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1303a4: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1303a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1303a8: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1303a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1303ac: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x1303acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x1303b0: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x1303b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1303b4: 0x27a20010  addiu       $v0, $sp, 0x10
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1303b8: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1303b8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1303bc: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x1303bcu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1303c0: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1303c4: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x1303c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1303c8: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1303c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1303cc: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1303ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1303d0: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x1303d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1303d4: 0xc04078a  jal         func_101E28
    SET_GPR_U32(ctx, 31, 0x1303DCu);
    ctx->pc = 0x1303D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1303D4u;
    // 0x1303d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Tramp_001F7DF8_00101E28_0x101e28, 0x101e28u, 0x1303dcu)) {
        return;
    }
    ctx->pc = 0x1303DCu;
label_1303dc:
    // 0x1303dc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1303e0: 0x0  nop
    // NOP
    // 0x1303e4: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x1303E4u;
    {
        const bool branch_taken_0x1303e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1303E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1303E4u;
        // 0x1303e8: 0xc7a40100  lwc1        $f4, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1303e4) {
            ctx->pc = 0x130428u;
            goto label_130428;
        }
    }
    // 0x1303ec: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1303f0: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1303f4: 0x0  nop
    // NOP
    // 0x1303f8: 0x0  nop
    // NOP
    // 0x1303fc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x130400: 0xc7a30104  lwc1        $f3, 0x104($sp)
    ctx->pc = 0x130400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130404: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x130404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130408: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x130408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13040c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x13040cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x130410: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x130414: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x130418: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x13041c: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x13041cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x130420: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x130420u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x130424: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x130424u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_130428:
    // 0x130428: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x130428u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13042c: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x13042cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130430: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x130430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130434: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x130434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130438: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x130438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13043c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x13043cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x130440: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x130440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x130444: 0xe7a200c8  swc1        $f2, 0xC8($sp)
    ctx->pc = 0x130444u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x130448: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x130448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x13044c: 0xdbc40000  lqc2        $vf4, 0x0($fp)
    ctx->pc = 0x13044cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x130450: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x130450u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x130454: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x130458: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x130458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13045c: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x13045cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130460: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x130460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130464: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x130464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x130468: 0xc04078a  jal         func_101E28
    SET_GPR_U32(ctx, 31, 0x130470u);
    ctx->pc = 0x13046Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130468u;
    // 0x13046c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Tramp_001F7DF8_00101E28_0x101e28, 0x101e28u, 0x130470u)) {
        return;
    }
    ctx->pc = 0x130470u;
label_130470:
    // 0x130470: 0x4600a034  c.lt.s      $f20, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130474: 0x0  nop
    // NOP
    // 0x130478: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x130478u;
    {
        const bool branch_taken_0x130478 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13047Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130478u;
        // 0x13047c: 0xc7a40100  lwc1        $f4, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x130478) {
            ctx->pc = 0x1304BCu;
            goto label_1304bc;
        }
    }
    // 0x130480: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x130484: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x130488: 0x0  nop
    // NOP
    // 0x13048c: 0x0  nop
    // NOP
    // 0x130490: 0x46000843  div.s       $f1, $f1, $f0
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x130494: 0xc7a30104  lwc1        $f3, 0x104($sp)
    ctx->pc = 0x130494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130498: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x130498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13049c: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x13049cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1304a0: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1304a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x1304a4: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1304a8: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1304ac: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1304b0: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x1304b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x1304b4: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x1304b4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x1304b8: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x1304b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1304bc:
    // 0x1304bc: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1304bcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1304c0: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x1304c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1304c4: 0xc7a000f0  lwc1        $f0, 0xF0($sp)
    ctx->pc = 0x1304c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1304c8: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x1304c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1304cc: 0xc7a200f8  lwc1        $f2, 0xF8($sp)
    ctx->pc = 0x1304ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1304d0: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1304d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1304d4: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x1304d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1304d8: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x1304d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x1304dc: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x1304dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1304e0: 0xdaa40000  lqc2        $vf4, 0x0($s5)
    ctx->pc = 0x1304e0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1304e4: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x1304e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1304e8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1304ec: 0xfba40110  sqc2        $vf4, 0x110($sp)
    ctx->pc = 0x1304ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1304f0: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x1304f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1304f4: 0xfba40100  sqc2        $vf4, 0x100($sp)
    ctx->pc = 0x1304f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1304f8: 0xfba00110  sqc2        $vf0, 0x110($sp)
    ctx->pc = 0x1304f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1304fc: 0xc04078a  jal         func_101E28
    SET_GPR_U32(ctx, 31, 0x130504u);
    ctx->pc = 0x130500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1304FCu;
    // 0x130500: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Tramp_001F7DF8_00101E28_0x101e28, 0x101e28u, 0x130504u)) {
        return;
    }
    ctx->pc = 0x130504u;
label_130504:
    // 0x130504: 0x4600a034  c.lt.s      $f20, $f0
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130508: 0x0  nop
    // NOP
    // 0x13050c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x13050Cu;
    {
        const bool branch_taken_0x13050c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13050Cu;
        // 0x130510: 0xc7a40100  lwc1        $f4, 0x100($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13050c) {
            ctx->pc = 0x130550u;
            goto label_130550;
        }
    }
    // 0x130514: 0x3c013f80  lui         $at, 0x3F80
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x130518: 0x44810800  mtc1        $at, $f1
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13051c: 0x0  nop
    // NOP
    // 0x130520: 0x0  nop
    // NOP
    // 0x130524: 0x46000843  div.s       $f1, $f1, $f0
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x130528: 0xc7a30104  lwc1        $f3, 0x104($sp)
    ctx->pc = 0x130528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13052c: 0xc7a20108  lwc1        $f2, 0x108($sp)
    ctx->pc = 0x13052cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x130530: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x130530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130534: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x130534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x130538: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x13053c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x130540: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x130544: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x130544u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x130548: 0xe7a40110  swc1        $f4, 0x110($sp)
    ctx->pc = 0x130548u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x13054c: 0xe7a30114  swc1        $f3, 0x114($sp)
    ctx->pc = 0x13054cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_130550:
    // 0x130550: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x130550u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130554: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x130554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x130558: 0xc7a200f0  lwc1        $f2, 0xF0($sp)
    ctx->pc = 0x130558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13055c: 0x2e0202d  daddu       $a0, $s7, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130560: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x130560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130564: 0x280282d  daddu       $a1, $s4, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130568: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x130568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13056c: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x13056cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x130570: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x130570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x130574: 0xc0c28d2  jal         func_30A348
    SET_GPR_U32(ctx, 31, 0x13057Cu);
    ctx->pc = 0x130578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130574u;
    // 0x130578: 0xe7a000e8  swc1        $f0, 0xE8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0InnerProduct_0x30a348, 0x30a348u, 0x13057cu)) {
        return;
    }
    ctx->pc = 0x13057Cu;
label_13057c:
    // 0x13057c: 0x4600a036  c.le.s      $f20, $f0
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130580: 0x0  nop
    // NOP
    // 0x130584: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x130584u;
    {
        const bool branch_taken_0x130584 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x130588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130584u;
        // 0x130588: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130584) {
            ctx->pc = 0x1305D4u;
            goto label_1305d4;
        }
    }
    // 0x13058c: 0xc0c28d2  jal         func_30A348
    SET_GPR_U32(ctx, 31, 0x130594u);
    ctx->pc = 0x130590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13058Cu;
    // 0x130590: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0InnerProduct_0x30a348, 0x30a348u, 0x130594u)) {
        return;
    }
    ctx->pc = 0x130594u;
label_130594:
    // 0x130594: 0x4600a036  c.le.s      $f20, $f0
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x130598: 0x0  nop
    // NOP
    // 0x13059c: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x13059Cu;
    {
        const bool branch_taken_0x13059c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1305A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13059Cu;
        // 0x1305a0: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13059c) {
            ctx->pc = 0x1305D4u;
            goto label_1305d4;
        }
    }
    // 0x1305a4: 0xc0c28d2  jal         func_30A348
    SET_GPR_U32(ctx, 31, 0x1305ACu);
    ctx->pc = 0x1305A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305A4u;
    // 0x1305a8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0InnerProduct_0x30a348, 0x30a348u, 0x1305acu)) {
        return;
    }
    ctx->pc = 0x1305ACu;
label_1305ac:
    // 0x1305ac: 0x4600a036  c.le.s      $f20, $f0
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1305b0: 0x0  nop
    // NOP
    // 0x1305b4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1305B4u;
    {
        const bool branch_taken_0x1305b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1305B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305B4u;
        // 0x1305b8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305b4) {
            ctx->pc = 0x1305D4u;
            goto label_1305d4;
        }
    }
    // 0x1305bc: 0xc0c28d2  jal         func_30A348
    SET_GPR_U32(ctx, 31, 0x1305C4u);
    ctx->pc = 0x1305C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305BCu;
    // 0x1305c0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0InnerProduct_0x30a348, 0x30a348u, 0x1305c4u)) {
        return;
    }
    ctx->pc = 0x1305C4u;
label_1305c4:
    // 0x1305c4: 0x4600a036  c.le.s      $f20, $f0
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1305c8: 0x0  nop
    // NOP
    // 0x1305cc: 0x45010040  bc1t        . + 4 + (0x40 << 2)
    ctx->pc = 0x1305CCu;
    {
        const bool branch_taken_0x1305cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1305D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305CCu;
        // 0x1305d0: 0x7bb001c0  lq          $s0, 0x1C0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305cc) {
            ctx->pc = 0x1306D0u;
            goto label_1306d0;
        }
    }
    ctx->pc = 0x1305D4u;
label_1305d4:
    // 0x1305d4: 0x27b000a0  addiu       $s0, $sp, 0xA0
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1305d8: 0xc6cc0110  lwc1        $f12, 0x110($s6)
    ctx->pc = 0x1305d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1305dc: 0x27a60010  addiu       $a2, $sp, 0x10
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1305e0: 0x3c0382d  daddu       $a3, $fp, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305e4: 0x2a0402d  daddu       $t0, $s5, $zero
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305e8: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305ec: 0x3a0282d  daddu       $a1, $sp, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1305f0: 0xc04d754  jal         func_135D50
    SET_GPR_U32(ctx, 31, 0x1305F8u);
    ctx->pc = 0x1305F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1305F0u;
    // 0x1305f4: 0x200482d  daddu       $t1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SphereSquare_0x135d50, 0x135d50u, 0x1305f8u)) {
        return;
    }
    ctx->pc = 0x1305F8u;
label_1305f8:
    // 0x1305f8: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1305F8u;
    {
        const bool branch_taken_0x1305f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1305FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1305F8u;
        // 0x1305fc: 0xc7a200a0  lwc1        $f2, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1305f8) {
            ctx->pc = 0x1306CCu;
            goto label_1306cc;
        }
    }
    // 0x130600: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130604: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x130604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x130608: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13060c: 0xc6d40120  lwc1        $f20, 0x120($s6)
    ctx->pc = 0x13060cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130610: 0x240302d  daddu       $a2, $s2, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130614: 0xc6c00128  lwc1        $f0, 0x128($s6)
    ctx->pc = 0x130614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130618: 0x4602a501  sub.s       $f20, $f20, $f2
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[2]);
    // 0x13061c: 0xc6c10104  lwc1        $f1, 0x104($s6)
    ctx->pc = 0x13061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x130620: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x130624: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x130624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x130628: 0x4614a502  mul.s       $f20, $f20, $f20
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x13062c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x130630: 0xc0c292e  jal         func_30A4B8
    SET_GPR_U32(ctx, 31, 0x130638u);
    ctx->pc = 0x130634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130630u;
    // 0x130634: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0SubVector_0x30a4b8, 0x30a4b8u, 0x130638u)) {
        return;
    }
    ctx->pc = 0x130638u;
label_130638:
    // 0x130638: 0xc6cc0110  lwc1        $f12, 0x110($s6)
    ctx->pc = 0x130638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x13063c: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130640: 0xc0c293a  jal         func_30A4E8
    SET_GPR_U32(ctx, 31, 0x130648u);
    ctx->pc = 0x130644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130640u;
    // 0x130644: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0ScaleVector_0x30a4e8, 0x30a4e8u, 0x130648u)) {
        return;
    }
    ctx->pc = 0x130648u;
label_130648:
    // 0x130648: 0x0  nop
    // NOP
    // 0x13064c: 0x0  nop
    // NOP
    // 0x130650: 0x46140504  c1          0x140504
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[20]);
    // 0x130654: 0x4600a306  mov.s       $f12, $f20
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x130658: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13065c: 0xc0c291a  jal         func_30A468
    SET_GPR_U32(ctx, 31, 0x130664u);
    ctx->pc = 0x130660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13065Cu;
    // 0x130660: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0DivVector_0x30a468, 0x30a468u, 0x130664u)) {
        return;
    }
    ctx->pc = 0x130664u;
label_130664:
    // 0x130664: 0x280202d  daddu       $a0, $s4, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130668: 0x200282d  daddu       $a1, $s0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13066c: 0xc0c292e  jal         func_30A4B8
    SET_GPR_U32(ctx, 31, 0x130674u);
    ctx->pc = 0x130670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13066Cu;
    // 0x130670: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &sceVu0SubVector_0x30a4b8, 0x30a4b8u, 0x130674u)) {
        return;
    }
    ctx->pc = 0x130674u;
label_130674:
    // 0x130674: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x130674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130678: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x130678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13067c: 0xe6c00120  swc1        $f0, 0x120($s6)
    ctx->pc = 0x13067cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 288), bits); }
    // 0x130680: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x130680u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x130684: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x130684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x130688: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x130688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x13068c: 0x8ec4018c  lw          $a0, 0x18C($s6)
    ctx->pc = 0x13068cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 396)));
    // 0x130690: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x130690u;
    {
        const bool branch_taken_0x130690 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x130694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130690u;
        // 0x130694: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130690) {
            ctx->pc = 0x1306C8u;
            goto label_1306c8;
        }
    }
    // 0x130698: 0x8ec3017c  lw          $v1, 0x17C($s6)
    ctx->pc = 0x130698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 380)));
    // 0x13069c: 0x8ec20140  lw          $v0, 0x140($s6)
    ctx->pc = 0x13069cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 320)));
    // 0x1306a0: 0x62102b  sltu        $v0, $v1, $v0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1306a4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1306A4u;
    {
        const bool branch_taken_0x1306a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1306A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306A4u;
        // 0x1306a8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1306a4) {
            ctx->pc = 0x1306C4u;
            goto label_1306c4;
        }
    }
    // 0x1306ac: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1306acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1306b0: 0x441021  addu        $v0, $v0, $a0
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1306b4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1306b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1306b8: 0x8ec3017c  lw          $v1, 0x17C($s6)
    ctx->pc = 0x1306b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 380)));
    // 0x1306bc: 0x24630001  addiu       $v1, $v1, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1306c0: 0xaec3017c  sw          $v1, 0x17C($s6)
    ctx->pc = 0x1306c0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 380), GPR_U32(ctx, 3));
label_1306c4:
    // 0x1306c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1306c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1306c8:
    // 0x1306c8: 0xa2c20180  sb          $v0, 0x180($s6)
    ctx->pc = 0x1306c8u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 384), (uint8_t)GPR_U32(ctx, 2));
label_1306cc:
    // 0x1306cc: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x1306ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_1306d0:
    // 0x1306d0: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x1306d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1306d4: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x1306d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1306d8: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x1306d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1306dc: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x1306dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1306e0: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x1306e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1306e4: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x1306e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1306e8: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x1306e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1306ec: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x1306ecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1306f0: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1306f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1306f4: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x1306f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1306f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1306F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1306FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1306F8u;
        // 0x1306fc: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1306F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130700u;
}