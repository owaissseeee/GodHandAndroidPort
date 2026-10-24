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

// Function: func_00136A88
// Address: 0x136a88 - 0x137670
void func_00136A88_0x136a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00136A88_0x136a88");
#endif

    switch (ctx->pc) {
        case 0x136b20u: goto label_136b20;
        case 0x136b98u: goto label_136b98;
        case 0x136bc0u: goto label_136bc0;
        case 0x136c18u: goto label_136c18;
        case 0x136c74u: goto label_136c74;
        case 0x136cd0u: goto label_136cd0;
        case 0x136da4u: goto label_136da4;
        case 0x136e08u: goto label_136e08;
        case 0x136e18u: goto label_136e18;
        case 0x136e7cu: goto label_136e7c;
        case 0x136e8cu: goto label_136e8c;
        case 0x136ef0u: goto label_136ef0;
        case 0x136f40u: goto label_136f40;
        case 0x137008u: goto label_137008;
        default: break;
    }

    ctx->pc = 0x136a88u;

    // 0x136a88: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x136a88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x136a8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x136a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x136a90: 0x7fb201d0  sq          $s2, 0x1D0($sp)
    ctx->pc = 0x136a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 18));
    // 0x136a94: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x136a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x136a98: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x136a98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136a9c: 0x7fb301c0  sq          $s3, 0x1C0($sp)
    ctx->pc = 0x136a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 19));
    // 0x136aa0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x136aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x136aa4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x136aa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136aa8: 0xafa40138  sw          $a0, 0x138($sp)
    ctx->pc = 0x136aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 4));
    // 0x136aac: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x136aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x136ab0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x136ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x136ab4: 0xafa5013c  sw          $a1, 0x13C($sp)
    ctx->pc = 0x136ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 5));
    // 0x136ab8: 0xafa40144  sw          $a0, 0x144($sp)
    ctx->pc = 0x136ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 4));
    // 0x136abc: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x136abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x136ac0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x136ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x136ac4: 0xafa50110  sw          $a1, 0x110($sp)
    ctx->pc = 0x136ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 5));
    // 0x136ac8: 0xafa40148  sw          $a0, 0x148($sp)
    ctx->pc = 0x136ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 4));
    // 0x136acc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x136accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x136ad0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x136ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x136ad4: 0xafa5014c  sw          $a1, 0x14C($sp)
    ctx->pc = 0x136ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 5));
    // 0x136ad8: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x136ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
    // 0x136adc: 0x27a50044  addiu       $a1, $sp, 0x44
    ctx->pc = 0x136adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x136ae0: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x136ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x136ae4: 0x7fb401b0  sq          $s4, 0x1B0($sp)
    ctx->pc = 0x136ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 20));
    // 0x136ae8: 0xafa40118  sw          $a0, 0x118($sp)
    ctx->pc = 0x136ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 4));
    // 0x136aec: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x136aecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136af0: 0x7fb001f0  sq          $s0, 0x1F0($sp)
    ctx->pc = 0x136af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 16));
    // 0x136af4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x136af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x136af8: 0x7fb101e0  sq          $s1, 0x1E0($sp)
    ctx->pc = 0x136af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 17));
    // 0x136afc: 0x7fb501a0  sq          $s5, 0x1A0($sp)
    ctx->pc = 0x136afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 21));
    // 0x136b00: 0x7fb60190  sq          $s6, 0x190($sp)
    ctx->pc = 0x136b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 22));
    // 0x136b04: 0x7fb70180  sq          $s7, 0x180($sp)
    ctx->pc = 0x136b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 23));
    // 0x136b08: 0x7fbe0170  sq          $fp, 0x170($sp)
    ctx->pc = 0x136b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 30));
    // 0x136b0c: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x136b0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x136b10: 0xe7b60210  swc1        $f22, 0x210($sp)
    ctx->pc = 0x136b10u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x136b14: 0xe7b50208  swc1        $f21, 0x208($sp)
    ctx->pc = 0x136b14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
    // 0x136b18: 0xe7b40200  swc1        $f20, 0x200($sp)
    ctx->pc = 0x136b18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
    // 0x136b1c: 0xafa50114  sw          $a1, 0x114($sp)
    ctx->pc = 0x136b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 5));
label_136b20:
    // 0x136b20: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x136b20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136b24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x136b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x136b28: 0x0  nop
    ctx->pc = 0x136b28u;
    // NOP
    // 0x136b2c: 0x0  nop
    ctx->pc = 0x136b2cu;
    // NOP
    // 0x136b30: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x136B30u;
    {
        const bool branch_taken_0x136b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x136B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B30u;
        // 0x136b34: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136b30) {
            ctx->pc = 0x136B20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136b20;
        }
    }
    ctx->pc = 0x136B38u;
    // 0x136b38: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x136b38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x136b3c: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x136b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x136b40: 0xafa5011c  sw          $a1, 0x11C($sp)
    ctx->pc = 0x136b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 5));
    // 0x136b44: 0x26420014  addiu       $v0, $s2, 0x14
    ctx->pc = 0x136b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x136b48: 0x26430018  addiu       $v1, $s2, 0x18
    ctx->pc = 0x136b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x136b4c: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x136b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x136b50: 0xc6940000  lwc1        $f20, 0x0($s4)
    ctx->pc = 0x136b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x136b54: 0x26650014  addiu       $a1, $s3, 0x14
    ctx->pc = 0x136b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x136b58: 0xafa20128  sw          $v0, 0x128($sp)
    ctx->pc = 0x136b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 2));
    // 0x136b5c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x136b5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b60: 0xafa30130  sw          $v1, 0x130($sp)
    ctx->pc = 0x136b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 3));
    // 0x136b64: 0x26620018  addiu       $v0, $s3, 0x18
    ctx->pc = 0x136b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x136b68: 0x26430050  addiu       $v1, $s2, 0x50
    ctx->pc = 0x136b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
    // 0x136b6c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x136b6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x136b70: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x136b70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x136b74: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x136b74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x136b78: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x136b78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x136b7c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x136b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x136b80: 0xafa40124  sw          $a0, 0x124($sp)
    ctx->pc = 0x136b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 4));
    // 0x136b84: 0xafa5012c  sw          $a1, 0x12C($sp)
    ctx->pc = 0x136b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 5));
    // 0x136b88: 0xafa20134  sw          $v0, 0x134($sp)
    ctx->pc = 0x136b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
    // 0x136b8c: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x136b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x136b90: 0x78100  sll         $s0, $a3, 4
    ctx->pc = 0x136b90u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x136b94: 0x0  nop
    ctx->pc = 0x136b94u;
    // NOP
label_136b98:
    // 0x136b98: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x136b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x136b9c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x136b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x136ba0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x136ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x136ba4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x136ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x136ba8: 0x90f021  addu        $fp, $a0, $s0
    ctx->pc = 0x136ba8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x136bac: 0xafa70120  sw          $a3, 0x120($sp)
    ctx->pc = 0x136bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 7));
    // 0x136bb0: 0xb0b821  addu        $s7, $a1, $s0
    ctx->pc = 0x136bb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x136bb4: 0x50b021  addu        $s6, $v0, $s0
    ctx->pc = 0x136bb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x136bb8: 0x21da821  addu        $s5, $s0, $sp
    ctx->pc = 0x136bb8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x136bbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x136bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_136bc0:
    // 0x136bc0: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x136bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x136bc4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x136bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x136bc8: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x136bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x136bcc: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x136bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x136bd0: 0xc7c50000  lwc1        $f5, 0x0($fp)
    ctx->pc = 0x136bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x136bd4: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x136bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x136bd8: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x136bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x136bdc: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x136bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
    // 0x136be0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x136be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136be4: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x136be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x136be8: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x136be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136bec: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x136becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x136bf0: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x136bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136bf4: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x136bf4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x136bf8: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x136bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x136bfc: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x136bfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x136c00: 0xe7a20090  swc1        $f2, 0x90($sp)
    ctx->pc = 0x136c00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x136c04: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x136c04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x136c08: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x136c08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x136c0c: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x136c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136c10: 0xc04078a  jal         func_101E28
    ctx->pc = 0x136C10u;
    SET_GPR_U32(ctx, 31, 0x136C18u);
    ctx->pc = 0x136C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C10u;
    // 0x136c14: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x136C10u, 0x136C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C18u;
label_136c18:
    // 0x136c18: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x136c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136c1c: 0x0  nop
    ctx->pc = 0x136c1cu;
    // NOP
    // 0x136c20: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x136C20u;
    {
        const bool branch_taken_0x136c20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C20u;
        // 0x136c24: 0xc7a30080  lwc1        $f3, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c20) {
            ctx->pc = 0x136C5Cu;
            goto label_136c5c;
        }
    }
    ctx->pc = 0x136C28u;
    // 0x136c28: 0x0  nop
    ctx->pc = 0x136c28u;
    // NOP
    // 0x136c2c: 0x0  nop
    ctx->pc = 0x136c2cu;
    // NOP
    // 0x136c30: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x136c30u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x136c34: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x136c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x136c38: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x136c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136c3c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x136c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136c40: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x136c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x136c44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x136c44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x136c48: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x136c48u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x136c4c: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x136c4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x136c50: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x136c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x136c54: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x136c54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x136c58: 0xe7a400c4  swc1        $f4, 0xC4($sp)
    ctx->pc = 0x136c58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_136c5c:
    // 0x136c5c: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x136c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x136c60: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x136c60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136c64: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x136c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136c68: 0xfba000d0  sqc2        $vf0, 0xD0($sp)
    ctx->pc = 0x136c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136c6c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x136C6Cu;
    SET_GPR_U32(ctx, 31, 0x136C74u);
    ctx->pc = 0x136C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136C6Cu;
    // 0x136c70: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x136C6Cu, 0x136C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136C74u;
label_136c74:
    // 0x136c74: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x136c74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136c78: 0x0  nop
    ctx->pc = 0x136c78u;
    // NOP
    // 0x136c7c: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x136C7Cu;
    {
        const bool branch_taken_0x136c7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136C7Cu;
        // 0x136c80: 0xc7a30090  lwc1        $f3, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136c7c) {
            ctx->pc = 0x136CB8u;
            goto label_136cb8;
        }
    }
    ctx->pc = 0x136C84u;
    // 0x136c84: 0x0  nop
    ctx->pc = 0x136c84u;
    // NOP
    // 0x136c88: 0x0  nop
    ctx->pc = 0x136c88u;
    // NOP
    // 0x136c8c: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x136c8cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[21], ctx->f[0]);
    // 0x136c90: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x136c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x136c94: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x136c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136c98: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x136c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136c9c: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x136c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x136ca0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x136ca0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x136ca4: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x136ca4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x136ca8: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x136ca8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x136cac: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x136cacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x136cb0: 0xe7a300d0  swc1        $f3, 0xD0($sp)
    ctx->pc = 0x136cb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x136cb4: 0xe7a400d4  swc1        $f4, 0xD4($sp)
    ctx->pc = 0x136cb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_136cb8:
    // 0x136cb8: 0x8fa30144  lw          $v1, 0x144($sp)
    ctx->pc = 0x136cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x136cbc: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x136cbcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136cc0: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x136cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136cc4: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x136cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x136cc8: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x136CC8u;
    SET_GPR_U32(ctx, 31, 0x136CD0u);
    ctx->pc = 0x136CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136CC8u;
    // 0x136ccc: 0x8fa5013c  lw          $a1, 0x13C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x136CC8u, 0x136CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136CD0u;
label_136cd0:
    // 0x136cd0: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x136cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x136cd4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x136cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x136cd8: 0x3a41021  addu        $v0, $sp, $a0
    ctx->pc = 0x136cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x136cdc: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x136cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x136ce0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x136ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x136ce4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x136ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136ce8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x136ce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136cec: 0x0  nop
    ctx->pc = 0x136cecu;
    // NOP
    // 0x136cf0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x136CF0u;
    {
        const bool branch_taken_0x136cf0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136cf0) {
            ctx->pc = 0x136CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136CF0u;
            // 0x136cf4: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
            ctx->f[0] = FPU_NEG_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x136CF8u;
            goto label_136cf8;
        }
    }
    ctx->pc = 0x136CF8u;
label_136cf8:
    // 0x136cf8: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x136cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x136cfc: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x136cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x136d00: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x136d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x136d04: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x136d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x136d08: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x136d08u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x136d0c: 0x2e230003  sltiu       $v1, $s1, 0x3
    ctx->pc = 0x136d0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x136d10: 0x1460ffab  bnez        $v1, . + 4 + (-0x55 << 2)
    ctx->pc = 0x136D10u;
    {
        const bool branch_taken_0x136d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x136D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136D10u;
        // 0x136d14: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136d10) {
            ctx->pc = 0x136BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136bc0;
        }
    }
    ctx->pc = 0x136D18u;
    // 0x136d18: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x136d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x136d1c: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x136d1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x136d20: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x136d20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x136d24: 0x5440ff9c  bnel        $v0, $zero, . + 4 + (-0x64 << 2)
    ctx->pc = 0x136D24u;
    {
        const bool branch_taken_0x136d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x136d24) {
            ctx->pc = 0x136D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136D24u;
            // 0x136d28: 0x78100  sll         $s0, $a3, 4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x136B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136b98;
        }
    }
    ctx->pc = 0x136D2Cu;
    // 0x136d2c: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x136d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136d30: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x136d30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x136d34: 0xda450000  lqc2        $vf5, 0x0($s2)
    ctx->pc = 0x136d34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x136d38: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x136d38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x136d3c: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x136d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136d40: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x136d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x136d44: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x136d44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x136d48: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x136d48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136d4c: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x136d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136d50: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x136d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136d54: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x136d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136d58: 0xc6430020  lwc1        $f3, 0x20($s2)
    ctx->pc = 0x136d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x136d5c: 0xc6440024  lwc1        $f4, 0x24($s2)
    ctx->pc = 0x136d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x136d60: 0xc6450028  lwc1        $f5, 0x28($s2)
    ctx->pc = 0x136d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x136d64: 0xc6460030  lwc1        $f6, 0x30($s2)
    ctx->pc = 0x136d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x136d68: 0xc6470034  lwc1        $f7, 0x34($s2)
    ctx->pc = 0x136d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x136d6c: 0xc6480038  lwc1        $f8, 0x38($s2)
    ctx->pc = 0x136d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x136d70: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x136d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x136d74: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x136d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x136d78: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x136d78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x136d7c: 0xe7a30090  swc1        $f3, 0x90($sp)
    ctx->pc = 0x136d7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x136d80: 0xe7a40094  swc1        $f4, 0x94($sp)
    ctx->pc = 0x136d80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x136d84: 0xe7a50098  swc1        $f5, 0x98($sp)
    ctx->pc = 0x136d84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x136d88: 0xe7a600a0  swc1        $f6, 0xA0($sp)
    ctx->pc = 0x136d88u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x136d8c: 0xe7a700a4  swc1        $f7, 0xA4($sp)
    ctx->pc = 0x136d8cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x136d90: 0xe7a800a8  swc1        $f8, 0xA8($sp)
    ctx->pc = 0x136d90u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x136d94: 0xfba000e0  sqc2        $vf0, 0xE0($sp)
    ctx->pc = 0x136d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136d98: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x136d98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x136d9c: 0xc04078a  jal         func_101E28
    ctx->pc = 0x136D9Cu;
    SET_GPR_U32(ctx, 31, 0x136DA4u);
    ctx->pc = 0x136DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136D9Cu;
    // 0x136da0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x136D9Cu, 0x136DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136DA4u;
label_136da4:
    // 0x136da4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x136da4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136da8: 0x0  nop
    ctx->pc = 0x136da8u;
    // NOP
    // 0x136dac: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x136DACu;
    {
        const bool branch_taken_0x136dac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136DACu;
        // 0x136db0: 0xc7a40080  lwc1        $f4, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136dac) {
            ctx->pc = 0x136DF0u;
            goto label_136df0;
        }
    }
    ctx->pc = 0x136DB4u;
    // 0x136db4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x136db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x136db8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x136db8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136dbc: 0x0  nop
    ctx->pc = 0x136dbcu;
    // NOP
    // 0x136dc0: 0x0  nop
    ctx->pc = 0x136dc0u;
    // NOP
    // 0x136dc4: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x136dc4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x136dc8: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x136dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x136dcc: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x136dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136dd0: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x136dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136dd4: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x136dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x136dd8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x136dd8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x136ddc: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x136ddcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x136de0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x136de0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x136de4: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x136de4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x136de8: 0xe7a400e0  swc1        $f4, 0xE0($sp)
    ctx->pc = 0x136de8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x136dec: 0xe7a300e4  swc1        $f3, 0xE4($sp)
    ctx->pc = 0x136decu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_136df0:
    // 0x136df0: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x136df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x136df4: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x136df4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x136df8: 0xfba400d0  sqc2        $vf4, 0xD0($sp)
    ctx->pc = 0x136df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136dfc: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x136dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
    // 0x136e00: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x136E00u;
    SET_GPR_U32(ctx, 31, 0x136E08u);
    ctx->pc = 0x136E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E00u;
    // 0x136e04: 0x8fa40138  lw          $a0, 0x138($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x136E00u, 0x136E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E08u;
label_136e08:
    // 0x136e08: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x136e08u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x136e0c: 0xfba000f0  sqc2        $vf0, 0xF0($sp)
    ctx->pc = 0x136e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136e10: 0xc04078a  jal         func_101E28
    ctx->pc = 0x136E10u;
    SET_GPR_U32(ctx, 31, 0x136E18u);
    ctx->pc = 0x136E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E10u;
    // 0x136e14: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x136E10u, 0x136E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E18u;
label_136e18:
    // 0x136e18: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x136e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136e1c: 0x0  nop
    ctx->pc = 0x136e1cu;
    // NOP
    // 0x136e20: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x136E20u;
    {
        const bool branch_taken_0x136e20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E20u;
        // 0x136e24: 0xc7a40090  lwc1        $f4, 0x90($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e20) {
            ctx->pc = 0x136E64u;
            goto label_136e64;
        }
    }
    ctx->pc = 0x136E28u;
    // 0x136e28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x136e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x136e2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x136e2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136e30: 0x0  nop
    ctx->pc = 0x136e30u;
    // NOP
    // 0x136e34: 0x0  nop
    ctx->pc = 0x136e34u;
    // NOP
    // 0x136e38: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x136e38u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x136e3c: 0xc7a30094  lwc1        $f3, 0x94($sp)
    ctx->pc = 0x136e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x136e40: 0xc7a20098  lwc1        $f2, 0x98($sp)
    ctx->pc = 0x136e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136e44: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x136e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136e48: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x136e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x136e4c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x136e4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x136e50: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x136e50u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x136e54: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x136e54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x136e58: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x136e58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x136e5c: 0xe7a400f0  swc1        $f4, 0xF0($sp)
    ctx->pc = 0x136e5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x136e60: 0xe7a300f4  swc1        $f3, 0xF4($sp)
    ctx->pc = 0x136e60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_136e64:
    // 0x136e64: 0x8fa5014c  lw          $a1, 0x14C($sp)
    ctx->pc = 0x136e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x136e68: 0xd8a40000  lqc2        $vf4, 0x0($a1)
    ctx->pc = 0x136e68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x136e6c: 0xfba400e0  sqc2        $vf4, 0xE0($sp)
    ctx->pc = 0x136e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136e70: 0x8fa50148  lw          $a1, 0x148($sp)
    ctx->pc = 0x136e70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
    // 0x136e74: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x136E74u;
    SET_GPR_U32(ctx, 31, 0x136E7Cu);
    ctx->pc = 0x136E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E74u;
    // 0x136e78: 0x8fa40138  lw          $a0, 0x138($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x136E74u, 0x136E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E7Cu;
label_136e7c:
    // 0x136e7c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x136e7cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x136e80: 0xfba00100  sqc2        $vf0, 0x100($sp)
    ctx->pc = 0x136e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x136e84: 0xc04078a  jal         func_101E28
    ctx->pc = 0x136E84u;
    SET_GPR_U32(ctx, 31, 0x136E8Cu);
    ctx->pc = 0x136E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136E84u;
    // 0x136e88: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x136E84u, 0x136E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136E8Cu;
label_136e8c:
    // 0x136e8c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x136e8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136e90: 0x0  nop
    ctx->pc = 0x136e90u;
    // NOP
    // 0x136e94: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x136E94u;
    {
        const bool branch_taken_0x136e94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136E94u;
        // 0x136e98: 0xc7a300a4  lwc1        $f3, 0xA4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x136e94) {
            ctx->pc = 0x136ED8u;
            goto label_136ed8;
        }
    }
    ctx->pc = 0x136E9Cu;
    // 0x136e9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x136e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x136ea0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x136ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136ea4: 0xc7a400a0  lwc1        $f4, 0xA0($sp)
    ctx->pc = 0x136ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x136ea8: 0x0  nop
    ctx->pc = 0x136ea8u;
    // NOP
    // 0x136eac: 0x0  nop
    ctx->pc = 0x136eacu;
    // NOP
    // 0x136eb0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x136eb0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x136eb4: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x136eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136eb8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x136eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136ebc: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x136ebcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x136ec0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x136ec0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x136ec4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x136ec4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x136ec8: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x136ec8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x136ecc: 0xe7a20108  swc1        $f2, 0x108($sp)
    ctx->pc = 0x136eccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x136ed0: 0xe7a40100  swc1        $f4, 0x100($sp)
    ctx->pc = 0x136ed0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x136ed4: 0xe7a30104  swc1        $f3, 0x104($sp)
    ctx->pc = 0x136ed4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_136ed8:
    // 0x136ed8: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x136ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x136edc: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x136edcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x136ee0: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x136ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x136ee4: 0x8fa5014c  lw          $a1, 0x14C($sp)
    ctx->pc = 0x136ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
    // 0x136ee8: 0xc0c28d2  jal         func_30A348
    ctx->pc = 0x136EE8u;
    SET_GPR_U32(ctx, 31, 0x136EF0u);
    ctx->pc = 0x136EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136EE8u;
    // 0x136eec: 0x8fa40138  lw          $a0, 0x138($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A348u, 0x136EE8u, 0x136EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136EF0u;
label_136ef0:
    // 0x136ef0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x136ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x136ef4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x136ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x136ef8: 0x4600a186  mov.s       $f6, $f20
    ctx->pc = 0x136ef8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[20]);
    // 0x136efc: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x136efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
    // 0x136f00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x136f00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136f04: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x136f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x136f08: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x136f08u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x136f0c: 0xe7b500c4  swc1        $f21, 0xC4($sp)
    ctx->pc = 0x136f0cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x136f10: 0x8fa90140  lw          $t1, 0x140($sp)
    ctx->pc = 0x136f10u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x136f14: 0x8fa80114  lw          $t0, 0x114($sp)
    ctx->pc = 0x136f14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x136f18: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x136f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x136f1c: 0x8fa50110  lw          $a1, 0x110($sp)
    ctx->pc = 0x136f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x136f20: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x136f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x136f24: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x136f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136f28: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x136f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136f2c: 0xc7a200c8  lwc1        $f2, 0xC8($sp)
    ctx->pc = 0x136f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136f30: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x136f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x136f34: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x136f34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x136f38: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x136f38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x136f3c: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x136f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_136f40:
    // 0x136f40: 0xc6620050  lwc1        $f2, 0x50($s3)
    ctx->pc = 0x136f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x136f44: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x136f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x136f48: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x136f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x136f4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x136f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136f50: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x136f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x136f54: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x136f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x136f58: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x136f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x136f5c: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x136f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136f60: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x136f60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x136f64: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x136f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x136f68: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x136f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x136f6c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x136f6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x136f70: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x136f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136f74: 0xc48300b0  lwc1        $f3, 0xB0($a0)
    ctx->pc = 0x136f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x136f78: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x136f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x136f7c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x136f7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x136f80: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x136f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x136f84: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x136f84u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x136f88: 0x46061834  c.lt.s      $f3, $f6
    ctx->pc = 0x136f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136f8c: 0x0  nop
    ctx->pc = 0x136f8cu;
    // NOP
    // 0x136f90: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x136F90u;
    {
        const bool branch_taken_0x136f90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x136F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136F90u;
        // 0x136f94: 0x46001100  add.s       $f4, $f2, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x136f90) {
            ctx->pc = 0x136F9Cu;
            goto label_136f9c;
        }
    }
    ctx->pc = 0x136F98u;
    // 0x136f98: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x136f98u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
label_136f9c:
    // 0x136f9c: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x136f9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x136fa0: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x136fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136fa4: 0x0  nop
    ctx->pc = 0x136fa4u;
    // NOP
    // 0x136fa8: 0x450101a1  bc1t        . + 4 + (0x1A1 << 2)
    ctx->pc = 0x136FA8u;
    {
        const bool branch_taken_0x136fa8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x136FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FA8u;
        // 0x136fac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fa8) {
            ctx->pc = 0x137630u;
            goto label_137630;
        }
    }
    ctx->pc = 0x136FB0u;
    // 0x136fb0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x136fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136fb4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x136fb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136fb8: 0x0  nop
    ctx->pc = 0x136fb8u;
    // NOP
    // 0x136fbc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x136FBCu;
    {
        const bool branch_taken_0x136fbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136fbc) {
            ctx->pc = 0x136FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x136FBCu;
            // 0x136fc0: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x136FC4u;
            goto label_136fc4;
        }
    }
    ctx->pc = 0x136FC4u;
label_136fc4:
    // 0x136fc4: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x136fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x136fc8: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x136fc8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x136fcc: 0x2ce30003  sltiu       $v1, $a3, 0x3
    ctx->pc = 0x136fccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x136fd0: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x136FD0u;
    {
        const bool branch_taken_0x136fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x136FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136FD0u;
        // 0x136fd4: 0x71900  sll         $v1, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x136fd0) {
            ctx->pc = 0x136F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_136f40;
        }
    }
    ctx->pc = 0x136FD8u;
    // 0x136fd8: 0xc7aa00b0  lwc1        $f10, 0xB0($sp)
    ctx->pc = 0x136fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x136fdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x136fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136fe0: 0x8fad0110  lw          $t5, 0x110($sp)
    ctx->pc = 0x136fe0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x136fe4: 0x27ac0050  addiu       $t4, $sp, 0x50
    ctx->pc = 0x136fe4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x136fe8: 0xc7a900b4  lwc1        $f9, 0xB4($sp)
    ctx->pc = 0x136fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x136fec: 0x27ab0060  addiu       $t3, $sp, 0x60
    ctx->pc = 0x136fecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x136ff0: 0xc7a800b8  lwc1        $f8, 0xB8($sp)
    ctx->pc = 0x136ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x136ff4: 0x266a0050  addiu       $t2, $s3, 0x50
    ctx->pc = 0x136ff4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
    // 0x136ff8: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x136ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x136ffc: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x136ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x137000: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x137000u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x137004: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x137004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_137008:
    // 0x137008: 0xc6450050  lwc1        $f5, 0x50($s2)
    ctx->pc = 0x137008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x13700c: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x13700cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x137010: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x137010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x137014: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x137014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137018: 0x1032821  addu        $a1, $t0, $v1
    ctx->pc = 0x137018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x13701c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x13701cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137020: 0x1a33021  addu        $a2, $t5, $v1
    ctx->pc = 0x137020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x137024: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x137024u;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x137028: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x137028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13702c: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x13702cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x137030: 0x1831021  addu        $v0, $t4, $v1
    ctx->pc = 0x137030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
    // 0x137034: 0xc4c60000  lwc1        $f6, 0x0($a2)
    ctx->pc = 0x137034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x137038: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x137038u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x13703c: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x13703cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x137040: 0x1632021  addu        $a0, $t3, $v1
    ctx->pc = 0x137040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
    // 0x137044: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x137044u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x137048: 0xc6410054  lwc1        $f1, 0x54($s2)
    ctx->pc = 0x137048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13704c: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x13704cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x137050: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x137050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x137054: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x137054u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x137058: 0xc6400058  lwc1        $f0, 0x58($s2)
    ctx->pc = 0x137058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13705c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x13705cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x137060: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x137060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x137064: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x137064u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x137068: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x137068u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x13706c: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x13706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x137070: 0x460b1034  c.lt.s      $f2, $f11
    ctx->pc = 0x137070u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137074: 0x0  nop
    ctx->pc = 0x137074u;
    // NOP
    // 0x137078: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x137078u;
    {
        const bool branch_taken_0x137078 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137078u;
        // 0x13707c: 0x46002940  add.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137078) {
            ctx->pc = 0x137084u;
            goto label_137084;
        }
    }
    ctx->pc = 0x137080u;
    // 0x137080: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x137080u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_137084:
    // 0x137084: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x137084u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x137088: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x137088u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13708c: 0x0  nop
    ctx->pc = 0x13708cu;
    // NOP
    // 0x137090: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x137090u;
    {
        const bool branch_taken_0x137090 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x137094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137090u;
        // 0x137094: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137090) {
            ctx->pc = 0x13709Cu;
            goto label_13709c;
        }
    }
    ctx->pc = 0x137098u;
    // 0x137098: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13709c:
    // 0x13709c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13709cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1370a0: 0x14400163  bnez        $v0, . + 4 + (0x163 << 2)
    ctx->pc = 0x1370A0u;
    {
        const bool branch_taken_0x1370a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1370A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1370A0u;
        // 0x1370a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1370a0) {
            ctx->pc = 0x137630u;
            goto label_137630;
        }
    }
    ctx->pc = 0x1370A8u;
    // 0x1370a8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1370a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1370ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1370acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1370b0: 0x0  nop
    ctx->pc = 0x1370b0u;
    // NOP
    // 0x1370b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1370B4u;
    {
        const bool branch_taken_0x1370b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1370b4) {
            ctx->pc = 0x1370B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1370B4u;
            // 0x1370b8: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1370BCu;
            goto label_1370bc;
        }
    }
    ctx->pc = 0x1370BCu;
label_1370bc:
    // 0x1370bc: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x1370bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1370c0: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x1370c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1370c4: 0x2ce30003  sltiu       $v1, $a3, 0x3
    ctx->pc = 0x1370c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1370c8: 0x5460ffcf  bnel        $v1, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x1370C8u;
    {
        const bool branch_taken_0x1370c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1370c8) {
            ctx->pc = 0x1370CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1370C8u;
            // 0x1370cc: 0x71880  sll         $v1, $a3, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_137008;
        }
    }
    ctx->pc = 0x1370D0u;
    // 0x1370d0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1370d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1370d4: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1370d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1370d8: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x1370d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1370dc: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x1370dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1370e0: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1370e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1370e4: 0xc6440054  lwc1        $f4, 0x54($s2)
    ctx->pc = 0x1370e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1370e8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1370e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1370ec: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1370ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1370f0: 0xc6430058  lwc1        $f3, 0x58($s2)
    ctx->pc = 0x1370f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1370f4: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1370f4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1370f8: 0xc7a60050  lwc1        $f6, 0x50($sp)
    ctx->pc = 0x1370f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1370fc: 0x460011c1  sub.s       $f7, $f2, $f0
    ctx->pc = 0x1370fcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x137100: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x137100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x137104: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x137104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137108: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x137108u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x13710c: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x13710cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137110: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x137110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137114: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x137114u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x137118: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x137118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x13711c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x13711cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x137120: 0x46093834  c.lt.s      $f7, $f9
    ctx->pc = 0x137120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137124: 0x46032140  add.s       $f5, $f4, $f3
    ctx->pc = 0x137124u;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x137128: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x137128u;
    {
        const bool branch_taken_0x137128 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137128u;
        // 0x13712c: 0x46000900  add.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137128) {
            ctx->pc = 0x137134u;
            goto label_137134;
        }
    }
    ctx->pc = 0x137130u;
    // 0x137130: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x137130u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_137134:
    // 0x137134: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x137134u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x137138: 0x46070834  c.lt.s      $f1, $f7
    ctx->pc = 0x137138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13713c: 0x0  nop
    ctx->pc = 0x13713cu;
    // NOP
    // 0x137140: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x137140u;
    {
        const bool branch_taken_0x137140 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x137144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137140u;
        // 0x137144: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137140) {
            ctx->pc = 0x13714Cu;
            goto label_13714c;
        }
    }
    ctx->pc = 0x137148u;
    // 0x137148: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137148u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13714c:
    // 0x13714c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13714cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x137150: 0x54400137  bnel        $v0, $zero, . + 4 + (0x137 << 2)
    ctx->pc = 0x137150u;
    {
        const bool branch_taken_0x137150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137150) {
            ctx->pc = 0x137154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137150u;
            // 0x137154: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137630u;
            goto label_137630;
        }
    }
    ctx->pc = 0x137158u;
    // 0x137158: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x137158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13715c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13715cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137160: 0x0  nop
    ctx->pc = 0x137160u;
    // NOP
    // 0x137164: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x137164u;
    {
        const bool branch_taken_0x137164 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137164) {
            ctx->pc = 0x137168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137164u;
            // 0x137168: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13716Cu;
            goto label_13716c;
        }
    }
    ctx->pc = 0x13716Cu;
label_13716c:
    // 0x13716c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x13716cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137170: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x137170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137174: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x137174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137178: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x137178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13717c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x13717cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x137180: 0xc6440054  lwc1        $f4, 0x54($s2)
    ctx->pc = 0x137180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x137184: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x137184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x137188: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x137188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13718c: 0xc6430058  lwc1        $f3, 0x58($s2)
    ctx->pc = 0x13718cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137190: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x137190u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x137194: 0xc7a60054  lwc1        $f6, 0x54($sp)
    ctx->pc = 0x137194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x137198: 0x460011c1  sub.s       $f7, $f2, $f0
    ctx->pc = 0x137198u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x13719c: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x13719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1371a0: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x1371a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1371a4: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x1371a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x1371a8: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x1371a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1371ac: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x1371acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1371b0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1371b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1371b4: 0x46093834  c.lt.s      $f7, $f9
    ctx->pc = 0x1371b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1371b8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1371b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1371bc: 0x46032140  add.s       $f5, $f4, $f3
    ctx->pc = 0x1371bcu;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1371c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1371C0u;
    {
        const bool branch_taken_0x1371c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1371C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371C0u;
        // 0x1371c4: 0x46000900  add.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371c0) {
            ctx->pc = 0x1371CCu;
            goto label_1371cc;
        }
    }
    ctx->pc = 0x1371C8u;
    // 0x1371c8: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x1371c8u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_1371cc:
    // 0x1371cc: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x1371ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x1371d0: 0x46070834  c.lt.s      $f1, $f7
    ctx->pc = 0x1371d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1371d4: 0x0  nop
    ctx->pc = 0x1371d4u;
    // NOP
    // 0x1371d8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1371D8u;
    {
        const bool branch_taken_0x1371d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1371DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1371D8u;
        // 0x1371dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371d8) {
            ctx->pc = 0x1371E4u;
            goto label_1371e4;
        }
    }
    ctx->pc = 0x1371E0u;
    // 0x1371e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1371e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1371e4:
    // 0x1371e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1371e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1371e8: 0x54400111  bnel        $v0, $zero, . + 4 + (0x111 << 2)
    ctx->pc = 0x1371E8u;
    {
        const bool branch_taken_0x1371e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1371e8) {
            ctx->pc = 0x1371ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1371E8u;
            // 0x1371ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137630u;
            goto label_137630;
        }
    }
    ctx->pc = 0x1371F0u;
    // 0x1371f0: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1371f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1371f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1371f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1371f8: 0x0  nop
    ctx->pc = 0x1371f8u;
    // NOP
    // 0x1371fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1371FCu;
    {
        const bool branch_taken_0x1371fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1371fc) {
            ctx->pc = 0x137200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1371FCu;
            // 0x137200: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x137204u;
            goto label_137204;
        }
    }
    ctx->pc = 0x137204u;
label_137204:
    // 0x137204: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x137204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137208: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x137208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13720c: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x13720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137210: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x137210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137214: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x137214u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x137218: 0xc6440054  lwc1        $f4, 0x54($s2)
    ctx->pc = 0x137218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13721c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x13721cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x137220: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x137220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137224: 0xc6430058  lwc1        $f3, 0x58($s2)
    ctx->pc = 0x137224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137228: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x137228u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x13722c: 0xc7a60058  lwc1        $f6, 0x58($sp)
    ctx->pc = 0x13722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x137230: 0x460011c1  sub.s       $f7, $f2, $f0
    ctx->pc = 0x137230u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x137234: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x137234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x137238: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x137238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13723c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x13723cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x137240: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x137240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137244: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x137244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137248: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x137248u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x13724c: 0x46093834  c.lt.s      $f7, $f9
    ctx->pc = 0x13724cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137250: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x137250u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x137254: 0x46032140  add.s       $f5, $f4, $f3
    ctx->pc = 0x137254u;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x137258: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x137258u;
    {
        const bool branch_taken_0x137258 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13725Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137258u;
        // 0x13725c: 0x46000900  add.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137258) {
            ctx->pc = 0x137264u;
            goto label_137264;
        }
    }
    ctx->pc = 0x137260u;
    // 0x137260: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x137260u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_137264:
    // 0x137264: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x137264u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x137268: 0x46070834  c.lt.s      $f1, $f7
    ctx->pc = 0x137268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13726c: 0x0  nop
    ctx->pc = 0x13726cu;
    // NOP
    // 0x137270: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x137270u;
    {
        const bool branch_taken_0x137270 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x137274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137270u;
        // 0x137274: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137270) {
            ctx->pc = 0x13727Cu;
            goto label_13727c;
        }
    }
    ctx->pc = 0x137278u;
    // 0x137278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13727c:
    // 0x13727c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13727cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x137280: 0x544000eb  bnel        $v0, $zero, . + 4 + (0xEB << 2)
    ctx->pc = 0x137280u;
    {
        const bool branch_taken_0x137280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137280) {
            ctx->pc = 0x137284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137280u;
            // 0x137284: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137630u;
            goto label_137630;
        }
    }
    ctx->pc = 0x137288u;
    // 0x137288: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x137288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13728c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13728cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137290: 0x0  nop
    ctx->pc = 0x137290u;
    // NOP
    // 0x137294: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x137294u;
    {
        const bool branch_taken_0x137294 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137294) {
            ctx->pc = 0x137298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137294u;
            // 0x137298: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13729Cu;
            goto label_13729c;
        }
    }
    ctx->pc = 0x13729Cu;
label_13729c:
    // 0x13729c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x13729cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1372a0: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x1372a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1372a4: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x1372a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1372a8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1372a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1372ac: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1372acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1372b0: 0xc6440050  lwc1        $f4, 0x50($s2)
    ctx->pc = 0x1372b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1372b4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1372b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1372b8: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1372b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1372bc: 0xc6430058  lwc1        $f3, 0x58($s2)
    ctx->pc = 0x1372bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1372c0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1372c0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1372c4: 0xc7a60040  lwc1        $f6, 0x40($sp)
    ctx->pc = 0x1372c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1372c8: 0x460011c1  sub.s       $f7, $f2, $f0
    ctx->pc = 0x1372c8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1372cc: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x1372ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1372d0: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x1372d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1372d4: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x1372d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x1372d8: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x1372d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1372dc: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1372dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1372e0: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1372e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1372e4: 0x46093834  c.lt.s      $f7, $f9
    ctx->pc = 0x1372e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1372e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1372e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1372ec: 0x46032140  add.s       $f5, $f4, $f3
    ctx->pc = 0x1372ecu;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1372f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1372F0u;
    {
        const bool branch_taken_0x1372f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1372F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1372F0u;
        // 0x1372f4: 0x46000900  add.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1372f0) {
            ctx->pc = 0x1372FCu;
            goto label_1372fc;
        }
    }
    ctx->pc = 0x1372F8u;
    // 0x1372f8: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x1372f8u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_1372fc:
    // 0x1372fc: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x1372fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x137300: 0x46070834  c.lt.s      $f1, $f7
    ctx->pc = 0x137300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137304: 0x0  nop
    ctx->pc = 0x137304u;
    // NOP
    // 0x137308: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x137308u;
    {
        const bool branch_taken_0x137308 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137308u;
        // 0x13730c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137308) {
            ctx->pc = 0x137314u;
            goto label_137314;
        }
    }
    ctx->pc = 0x137310u;
    // 0x137310: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137310u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137314:
    // 0x137314: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x137314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x137318: 0x544000c5  bnel        $v0, $zero, . + 4 + (0xC5 << 2)
    ctx->pc = 0x137318u;
    {
        const bool branch_taken_0x137318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137318) {
            ctx->pc = 0x13731Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137318u;
            // 0x13731c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137630u;
            goto label_137630;
        }
    }
    ctx->pc = 0x137320u;
    // 0x137320: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x137320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137324: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x137324u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137328: 0x0  nop
    ctx->pc = 0x137328u;
    // NOP
    // 0x13732c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13732Cu;
    {
        const bool branch_taken_0x13732c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13732c) {
            ctx->pc = 0x137330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13732Cu;
            // 0x137330: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x137334u;
            goto label_137334;
        }
    }
    ctx->pc = 0x137334u;
label_137334:
    // 0x137334: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x137334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137338: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x137338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13733c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x13733cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137340: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x137340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137344: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x137344u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x137348: 0xc6440050  lwc1        $f4, 0x50($s2)
    ctx->pc = 0x137348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13734c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x13734cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x137350: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x137350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137354: 0xc6430058  lwc1        $f3, 0x58($s2)
    ctx->pc = 0x137354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137358: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x137358u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x13735c: 0xc7a60044  lwc1        $f6, 0x44($sp)
    ctx->pc = 0x13735cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x137360: 0x460011c1  sub.s       $f7, $f2, $f0
    ctx->pc = 0x137360u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x137364: 0xc7a50058  lwc1        $f5, 0x58($sp)
    ctx->pc = 0x137364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x137368: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x137368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13736c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x13736cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x137370: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x137370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137374: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x137374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137378: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x137378u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x13737c: 0x46093834  c.lt.s      $f7, $f9
    ctx->pc = 0x13737cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137380: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x137380u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x137384: 0x46032140  add.s       $f5, $f4, $f3
    ctx->pc = 0x137384u;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x137388: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x137388u;
    {
        const bool branch_taken_0x137388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137388u;
        // 0x13738c: 0x46000900  add.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137388) {
            ctx->pc = 0x137394u;
            goto label_137394;
        }
    }
    ctx->pc = 0x137390u;
    // 0x137390: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x137390u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_137394:
    // 0x137394: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x137394u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x137398: 0x46070834  c.lt.s      $f1, $f7
    ctx->pc = 0x137398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13739c: 0x0  nop
    ctx->pc = 0x13739cu;
    // NOP
    // 0x1373a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1373A0u;
    {
        const bool branch_taken_0x1373a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1373A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1373A0u;
        // 0x1373a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1373a0) {
            ctx->pc = 0x1373ACu;
            goto label_1373ac;
        }
    }
    ctx->pc = 0x1373A8u;
    // 0x1373a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1373a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1373ac:
    // 0x1373ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1373acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1373b0: 0x5440009f  bnel        $v0, $zero, . + 4 + (0x9F << 2)
    ctx->pc = 0x1373B0u;
    {
        const bool branch_taken_0x1373b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1373b0) {
            ctx->pc = 0x1373B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1373B0u;
            // 0x1373b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137630u;
            goto label_137630;
        }
    }
    ctx->pc = 0x1373B8u;
    // 0x1373b8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1373b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1373bc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1373bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1373c0: 0x0  nop
    ctx->pc = 0x1373c0u;
    // NOP
    // 0x1373c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1373C4u;
    {
        const bool branch_taken_0x1373c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1373c4) {
            ctx->pc = 0x1373C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1373C4u;
            // 0x1373c8: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1373CCu;
            goto label_1373cc;
        }
    }
    ctx->pc = 0x1373CCu;
label_1373cc:
    // 0x1373cc: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1373ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1373d0: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x1373d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1373d4: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x1373d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1373d8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1373d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1373dc: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x1373dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1373e0: 0xc6440050  lwc1        $f4, 0x50($s2)
    ctx->pc = 0x1373e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1373e4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1373e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1373e8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x1373e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1373ec: 0xc6430058  lwc1        $f3, 0x58($s2)
    ctx->pc = 0x1373ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1373f0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1373f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1373f4: 0xc7a60048  lwc1        $f6, 0x48($sp)
    ctx->pc = 0x1373f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1373f8: 0x460011c1  sub.s       $f7, $f2, $f0
    ctx->pc = 0x1373f8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1373fc: 0xc7a50054  lwc1        $f5, 0x54($sp)
    ctx->pc = 0x1373fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x137400: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x137400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137404: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x137404u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x137408: 0xc6600054  lwc1        $f0, 0x54($s3)
    ctx->pc = 0x137408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13740c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x13740cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137410: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x137410u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x137414: 0x46093834  c.lt.s      $f7, $f9
    ctx->pc = 0x137414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137418: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x137418u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x13741c: 0x46032140  add.s       $f5, $f4, $f3
    ctx->pc = 0x13741cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x137420: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x137420u;
    {
        const bool branch_taken_0x137420 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137420u;
        // 0x137424: 0x46000900  add.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137420) {
            ctx->pc = 0x13742Cu;
            goto label_13742c;
        }
    }
    ctx->pc = 0x137428u;
    // 0x137428: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x137428u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_13742c:
    // 0x13742c: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x13742cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x137430: 0x46070834  c.lt.s      $f1, $f7
    ctx->pc = 0x137430u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137434: 0x0  nop
    ctx->pc = 0x137434u;
    // NOP
    // 0x137438: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x137438u;
    {
        const bool branch_taken_0x137438 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137438u;
        // 0x13743c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137438) {
            ctx->pc = 0x137444u;
            goto label_137444;
        }
    }
    ctx->pc = 0x137440u;
    // 0x137440: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137440u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137444:
    // 0x137444: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x137444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x137448: 0x54400079  bnel        $v0, $zero, . + 4 + (0x79 << 2)
    ctx->pc = 0x137448u;
    {
        const bool branch_taken_0x137448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137448) {
            ctx->pc = 0x13744Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137448u;
            // 0x13744c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137630u;
            goto label_137630;
        }
    }
    ctx->pc = 0x137450u;
    // 0x137450: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x137450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137454: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x137454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137458: 0x0  nop
    ctx->pc = 0x137458u;
    // NOP
    // 0x13745c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13745Cu;
    {
        const bool branch_taken_0x13745c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13745c) {
            ctx->pc = 0x137460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13745Cu;
            // 0x137460: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x137464u;
            goto label_137464;
        }
    }
    ctx->pc = 0x137464u;
label_137464:
    // 0x137464: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x137464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137468: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x137468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13746c: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x13746cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137470: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x137470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137474: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x137474u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x137478: 0xc6440050  lwc1        $f4, 0x50($s2)
    ctx->pc = 0x137478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13747c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x13747cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x137480: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x137480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137484: 0xc6430054  lwc1        $f3, 0x54($s2)
    ctx->pc = 0x137484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137488: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x137488u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x13748c: 0xc7a60040  lwc1        $f6, 0x40($sp)
    ctx->pc = 0x13748cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x137490: 0x460011c1  sub.s       $f7, $f2, $f0
    ctx->pc = 0x137490u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x137494: 0xc7a50068  lwc1        $f5, 0x68($sp)
    ctx->pc = 0x137494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x137498: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x137498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13749c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x13749cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x1374a0: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x1374a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1374a4: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1374a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1374a8: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1374a8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1374ac: 0x46093834  c.lt.s      $f7, $f9
    ctx->pc = 0x1374acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1374b0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1374b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1374b4: 0x46032140  add.s       $f5, $f4, $f3
    ctx->pc = 0x1374b4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x1374b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1374B8u;
    {
        const bool branch_taken_0x1374b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1374BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1374B8u;
        // 0x1374bc: 0x46000900  add.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374b8) {
            ctx->pc = 0x1374C4u;
            goto label_1374c4;
        }
    }
    ctx->pc = 0x1374C0u;
    // 0x1374c0: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x1374c0u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_1374c4:
    // 0x1374c4: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x1374c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x1374c8: 0x46070834  c.lt.s      $f1, $f7
    ctx->pc = 0x1374c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1374cc: 0x0  nop
    ctx->pc = 0x1374ccu;
    // NOP
    // 0x1374d0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1374D0u;
    {
        const bool branch_taken_0x1374d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1374D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1374D0u;
        // 0x1374d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1374d0) {
            ctx->pc = 0x1374DCu;
            goto label_1374dc;
        }
    }
    ctx->pc = 0x1374D8u;
    // 0x1374d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1374d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1374dc:
    // 0x1374dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1374dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1374e0: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x1374E0u;
    {
        const bool branch_taken_0x1374e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1374e0) {
            ctx->pc = 0x1374E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1374E0u;
            // 0x1374e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137630u;
            goto label_137630;
        }
    }
    ctx->pc = 0x1374E8u;
    // 0x1374e8: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1374e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1374ec: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1374ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1374f0: 0x0  nop
    ctx->pc = 0x1374f0u;
    // NOP
    // 0x1374f4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1374F4u;
    {
        const bool branch_taken_0x1374f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1374f4) {
            ctx->pc = 0x1374F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1374F4u;
            // 0x1374f8: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1374FCu;
            goto label_1374fc;
        }
    }
    ctx->pc = 0x1374FCu;
label_1374fc:
    // 0x1374fc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1374fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137500: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x137500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137504: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x137504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137508: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x137508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13750c: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x13750cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x137510: 0xc6440050  lwc1        $f4, 0x50($s2)
    ctx->pc = 0x137510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x137514: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x137514u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x137518: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x137518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13751c: 0xc6430054  lwc1        $f3, 0x54($s2)
    ctx->pc = 0x13751cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x137520: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x137520u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x137524: 0xc7a60044  lwc1        $f6, 0x44($sp)
    ctx->pc = 0x137524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x137528: 0x460011c1  sub.s       $f7, $f2, $f0
    ctx->pc = 0x137528u;
    ctx->f[7] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x13752c: 0xc7a50068  lwc1        $f5, 0x68($sp)
    ctx->pc = 0x13752cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x137530: 0xc6610050  lwc1        $f1, 0x50($s3)
    ctx->pc = 0x137530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x137534: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x137534u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x137538: 0xc6600058  lwc1        $f0, 0x58($s3)
    ctx->pc = 0x137538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13753c: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x13753cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137540: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x137540u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x137544: 0x46093834  c.lt.s      $f7, $f9
    ctx->pc = 0x137544u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137548: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x137548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x13754c: 0x46032140  add.s       $f5, $f4, $f3
    ctx->pc = 0x13754cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
    // 0x137550: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x137550u;
    {
        const bool branch_taken_0x137550 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x137554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137550u;
        // 0x137554: 0x46000900  add.s       $f4, $f1, $f0 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x137550) {
            ctx->pc = 0x13755Cu;
            goto label_13755c;
        }
    }
    ctx->pc = 0x137558u;
    // 0x137558: 0x460039c7  neg.s       $f7, $f7
    ctx->pc = 0x137558u;
    ctx->f[7] = FPU_NEG_S(ctx->f[7]);
label_13755c:
    // 0x13755c: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x13755cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x137560: 0x46070834  c.lt.s      $f1, $f7
    ctx->pc = 0x137560u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137564: 0x0  nop
    ctx->pc = 0x137564u;
    // NOP
    // 0x137568: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x137568u;
    {
        const bool branch_taken_0x137568 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13756Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137568u;
        // 0x13756c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137568) {
            ctx->pc = 0x137574u;
            goto label_137574;
        }
    }
    ctx->pc = 0x137570u;
    // 0x137570: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137574:
    // 0x137574: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x137574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x137578: 0x5440002d  bnel        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x137578u;
    {
        const bool branch_taken_0x137578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x137578) {
            ctx->pc = 0x13757Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137578u;
            // 0x13757c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137630u;
            goto label_137630;
        }
    }
    ctx->pc = 0x137580u;
    // 0x137580: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x137580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137584: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x137584u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137588: 0x0  nop
    ctx->pc = 0x137588u;
    // NOP
    // 0x13758c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13758Cu;
    {
        const bool branch_taken_0x13758c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13758c) {
            ctx->pc = 0x137590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13758Cu;
            // 0x137590: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x137594u;
            goto label_137594;
        }
    }
    ctx->pc = 0x137594u;
label_137594:
    // 0x137594: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x137594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x137598: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x137598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13759c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x13759cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1375a0: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1375a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1375a4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1375a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1375a8: 0xc6450054  lwc1        $f5, 0x54($s2)
    ctx->pc = 0x1375a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1375ac: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1375acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1375b0: 0xc6640054  lwc1        $f4, 0x54($s3)
    ctx->pc = 0x1375b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1375b4: 0xc6420050  lwc1        $f2, 0x50($s2)
    ctx->pc = 0x1375b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1375b8: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x1375b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1375bc: 0x46000a01  sub.s       $f8, $f1, $f0
    ctx->pc = 0x1375bcu;
    ctx->f[8] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1375c0: 0xc7a60048  lwc1        $f6, 0x48($sp)
    ctx->pc = 0x1375c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1375c4: 0xc6600050  lwc1        $f0, 0x50($s3)
    ctx->pc = 0x1375c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1375c8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1375c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1375cc: 0xc7a70064  lwc1        $f7, 0x64($sp)
    ctx->pc = 0x1375ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1375d0: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x1375d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x1375d4: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1375d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1375d8: 0x46094034  c.lt.s      $f8, $f9
    ctx->pc = 0x1375d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1375dc: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x1375dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x1375e0: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x1375e0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1375e4: 0x46051140  add.s       $f5, $f2, $f5
    ctx->pc = 0x1375e4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1375e8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1375E8u;
    {
        const bool branch_taken_0x1375e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1375ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1375E8u;
        // 0x1375ec: 0x46040100  add.s       $f4, $f0, $f4 (Delay Slot)
        ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1375e8) {
            ctx->pc = 0x1375F4u;
            goto label_1375f4;
        }
    }
    ctx->pc = 0x1375F0u;
    // 0x1375f0: 0x46004207  neg.s       $f8, $f8
    ctx->pc = 0x1375f0u;
    ctx->f[8] = FPU_NEG_S(ctx->f[8]);
label_1375f4:
    // 0x1375f4: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x1375f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x1375f8: 0x46080834  c.lt.s      $f1, $f8
    ctx->pc = 0x1375f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1375fc: 0x0  nop
    ctx->pc = 0x1375fcu;
    // NOP
    // 0x137600: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x137600u;
    {
        const bool branch_taken_0x137600 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x137604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137600u;
        // 0x137604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137600) {
            ctx->pc = 0x13760Cu;
            goto label_13760c;
        }
    }
    ctx->pc = 0x137608u;
    // 0x137608: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137608u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13760c:
    // 0x13760c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13760cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x137610: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x137610u;
    {
        const bool branch_taken_0x137610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137610u;
        // 0x137614: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137610) {
            ctx->pc = 0x137630u;
            goto label_137630;
        }
    }
    ctx->pc = 0x137618u;
    // 0x137618: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x137618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13761c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x13761cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137620: 0x0  nop
    ctx->pc = 0x137620u;
    // NOP
    // 0x137624: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x137624u;
    {
        const bool branch_taken_0x137624 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x137624) {
            ctx->pc = 0x137628u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137624u;
            // 0x137628: 0xe6810000  swc1        $f1, 0x0($s4) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x13762Cu;
            goto label_13762c;
        }
    }
    ctx->pc = 0x13762Cu;
label_13762c:
    // 0x13762c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13762cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_137630:
    // 0x137630: 0x7bb001f0  lq          $s0, 0x1F0($sp)
    ctx->pc = 0x137630u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x137634: 0x7bb101e0  lq          $s1, 0x1E0($sp)
    ctx->pc = 0x137634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x137638: 0x7bb201d0  lq          $s2, 0x1D0($sp)
    ctx->pc = 0x137638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x13763c: 0x7bb301c0  lq          $s3, 0x1C0($sp)
    ctx->pc = 0x13763cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x137640: 0x7bb401b0  lq          $s4, 0x1B0($sp)
    ctx->pc = 0x137640u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x137644: 0x7bb501a0  lq          $s5, 0x1A0($sp)
    ctx->pc = 0x137644u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x137648: 0x7bb60190  lq          $s6, 0x190($sp)
    ctx->pc = 0x137648u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x13764c: 0x7bb70180  lq          $s7, 0x180($sp)
    ctx->pc = 0x13764cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x137650: 0x7bbe0170  lq          $fp, 0x170($sp)
    ctx->pc = 0x137650u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x137654: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x137654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x137658: 0xc7b60210  lwc1        $f22, 0x210($sp)
    ctx->pc = 0x137658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x13765c: 0xc7b50208  lwc1        $f21, 0x208($sp)
    ctx->pc = 0x13765cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x137660: 0xc7b40200  lwc1        $f20, 0x200($sp)
    ctx->pc = 0x137660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x137664: 0x3e00008  jr          $ra
    ctx->pc = 0x137664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137664u;
        // 0x137668: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13766Cu;
    // 0x13766c: 0x0  nop
    ctx->pc = 0x13766cu;
    // NOP
    ctx->pc = 0x137670u;
}
