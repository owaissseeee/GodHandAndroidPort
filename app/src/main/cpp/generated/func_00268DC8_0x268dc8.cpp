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

// Function: func_00268DC8
// Address: 0x268dc8 - 0x269ac0
void func_00268DC8_0x268dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00268DC8_0x268dc8");
#endif

    switch (ctx->pc) {
        case 0x268efcu: goto label_268efc;
        case 0x268f68u: goto label_268f68;
        case 0x268fa8u: goto label_268fa8;
        case 0x268fe4u: goto label_268fe4;
        case 0x26902cu: goto label_26902c;
        case 0x269150u: goto label_269150;
        case 0x269178u: goto label_269178;
        case 0x26919cu: goto label_26919c;
        case 0x2691c0u: goto label_2691c0;
        case 0x2691e4u: goto label_2691e4;
        case 0x269208u: goto label_269208;
        case 0x269230u: goto label_269230;
        case 0x269258u: goto label_269258;
        case 0x269288u: goto label_269288;
        case 0x2692b8u: goto label_2692b8;
        case 0x2692e0u: goto label_2692e0;
        case 0x269308u: goto label_269308;
        case 0x26933cu: goto label_26933c;
        case 0x269368u: goto label_269368;
        case 0x269394u: goto label_269394;
        case 0x2693ccu: goto label_2693cc;
        case 0x269410u: goto label_269410;
        case 0x269448u: goto label_269448;
        case 0x269488u: goto label_269488;
        case 0x2694c8u: goto label_2694c8;
        case 0x26951cu: goto label_26951c;
        case 0x26954cu: goto label_26954c;
        case 0x269578u: goto label_269578;
        case 0x2695a4u: goto label_2695a4;
        case 0x2695d8u: goto label_2695d8;
        case 0x269604u: goto label_269604;
        case 0x269628u: goto label_269628;
        case 0x269654u: goto label_269654;
        case 0x269678u: goto label_269678;
        case 0x2696a4u: goto label_2696a4;
        case 0x2696c8u: goto label_2696c8;
        case 0x2696f4u: goto label_2696f4;
        case 0x269744u: goto label_269744;
        case 0x269768u: goto label_269768;
        case 0x26978cu: goto label_26978c;
        case 0x2697bcu: goto label_2697bc;
        case 0x2697e4u: goto label_2697e4;
        case 0x2698c8u: goto label_2698c8;
        case 0x269934u: goto label_269934;
        case 0x269a04u: goto label_269a04;
        case 0x269a70u: goto label_269a70;
        default: break;
    }

    ctx->pc = 0x268dc8u;

    // 0x268dc8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x268dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x268dcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x268dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x268dd0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x268dd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268dd4: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x268dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x268dd8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x268dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ddc: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x268ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x268de0: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x268de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x268de4: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x268de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x268de8: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x268de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x268dec: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x268decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x268df0: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x268df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x268df4: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x268df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x268df8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x268df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x268dfc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x268dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x268e00: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x268e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x268e04: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x268e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x268e08: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x268e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x268e0c: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x268e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x268e10: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x268e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x268e14: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x268e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x268e18: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x268e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x268e1c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x268e1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x268e20: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x268e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x268e24: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x268e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x268e28: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x268e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x268e2c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x268e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x268e30: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x268e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x268e34: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x268e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x268e38: 0xa3a4004c  sb          $a0, 0x4C($sp)
    ctx->pc = 0x268e38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x268e3c: 0xa3a3004f  sb          $v1, 0x4F($sp)
    ctx->pc = 0x268e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 79), (uint8_t)GPR_U32(ctx, 3));
    // 0x268e40: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x268e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x268e44: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x268e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x268e48: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x268e48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x268e4c: 0xa3a0004e  sb          $zero, 0x4E($sp)
    ctx->pc = 0x268e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x268e50: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x268e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x268e54: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x268e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x268e58: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x268e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x268e5c: 0xc6200114  lwc1        $f0, 0x114($s1)
    ctx->pc = 0x268e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x268e60: 0xa7a00070  sh          $zero, 0x70($sp)
    ctx->pc = 0x268e60u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 0));
    // 0x268e64: 0x28620266  slti        $v0, $v1, 0x266
    ctx->pc = 0x268e64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)614) ? 1 : 0);
    // 0x268e68: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x268e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x268e6c: 0xa7a00072  sh          $zero, 0x72($sp)
    ctx->pc = 0x268e6cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 0));
    // 0x268e70: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x268e70u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x268e74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x268E74u;
    {
        const bool branch_taken_0x268e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E74u;
        // 0x268e78: 0xafa00078  sw          $zero, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e74) {
            ctx->pc = 0x268E98u;
            goto label_268e98;
        }
    }
    ctx->pc = 0x268E7Cu;
    // 0x268e7c: 0x28620264  slti        $v0, $v1, 0x264
    ctx->pc = 0x268e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)612) ? 1 : 0);
    // 0x268e80: 0x10400303  beqz        $v0, . + 4 + (0x303 << 2)
    ctx->pc = 0x268E80u;
    {
        const bool branch_taken_0x268e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E80u;
        // 0x268e84: 0x2402020b  addiu       $v0, $zero, 0x20B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 523));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e80) {
            ctx->pc = 0x269A90u;
            goto label_269a90;
        }
    }
    ctx->pc = 0x268E88u;
    // 0x268e88: 0x10620301  beq         $v1, $v0, . + 4 + (0x301 << 2)
    ctx->pc = 0x268E88u;
    {
        const bool branch_taken_0x268e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E88u;
        // 0x268e8c: 0x24020260  addiu       $v0, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e88) {
            ctx->pc = 0x269A90u;
            goto label_269a90;
        }
    }
    ctx->pc = 0x268E90u;
    // 0x268e90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x268E90u;
    {
        const bool branch_taken_0x268e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x268e90) {
            ctx->pc = 0x268E9Cu;
            goto label_268e9c;
        }
    }
    ctx->pc = 0x268E98u;
label_268e98:
    // 0x268e98: 0x2402026a  addiu       $v0, $zero, 0x26A
    ctx->pc = 0x268e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_268e9c:
    // 0x268e9c: 0x106202fc  beq         $v1, $v0, . + 4 + (0x2FC << 2)
    ctx->pc = 0x268E9Cu;
    {
        const bool branch_taken_0x268e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268E9Cu;
        // 0x268ea0: 0x24020256  addiu       $v0, $zero, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268e9c) {
            ctx->pc = 0x269A90u;
            goto label_269a90;
        }
    }
    ctx->pc = 0x268EA4u;
    // 0x268ea4: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x268ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x268ea8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x268EA8u;
    {
        const bool branch_taken_0x268ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x268EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EA8u;
        // 0x268eac: 0x2402027e  addiu       $v0, $zero, 0x27E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ea8) {
            ctx->pc = 0x268EC0u;
            goto label_268ec0;
        }
    }
    ctx->pc = 0x268EB0u;
    // 0x268eb0: 0x5062002f  beql        $v1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x268EB0u;
    {
        const bool branch_taken_0x268eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x268eb0) {
            ctx->pc = 0x268EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268EB0u;
            // 0x268eb4: 0x8e2616d4  lw          $a2, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x268F70u;
            goto label_268f70;
        }
    }
    ctx->pc = 0x268EB8u;
    // 0x268eb8: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x268EB8u;
    {
        const bool branch_taken_0x268eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268EB8u;
        // 0x268ebc: 0x8e231774  lw          $v1, 0x1774($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268eb8) {
            ctx->pc = 0x269030u;
            goto label_269030;
        }
    }
    ctx->pc = 0x268EC0u;
label_268ec0:
    // 0x268ec0: 0x8e2616d4  lw          $a2, 0x16D4($s1)
    ctx->pc = 0x268ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x268ec4: 0x3c020440  lui         $v0, 0x440
    ctx->pc = 0x268ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1088 << 16));
    // 0x268ec8: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x268ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x268ecc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x268ECCu;
    {
        const bool branch_taken_0x268ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268ECCu;
        // 0x268ed0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268ecc) {
            ctx->pc = 0x268F28u;
            goto label_268f28;
        }
    }
    ctx->pc = 0x268ED4u;
    // 0x268ed4: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x268ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x268ed8: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x268ed8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x268edc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ee0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x268ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x268ee4: 0x8e250284  lw          $a1, 0x284($s1)
    ctx->pc = 0x268ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x268ee8: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x268ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x268eec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x268eecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268ef0: 0x8d060084  lw          $a2, 0x84($t0)
    ctx->pc = 0x268ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 132)));
    // 0x268ef4: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x268EF4u;
    SET_GPR_U32(ctx, 31, 0x268EFCu);
    ctx->pc = 0x268EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268EF4u;
    // 0x268ef8: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x268EF4u, 0x268EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268EFCu;
label_268efc:
    // 0x268efc: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x268efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x268f00: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x268f00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x268f04: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x268f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x268f08: 0x54400049  bnel        $v0, $zero, . + 4 + (0x49 << 2)
    ctx->pc = 0x268F08u;
    {
        const bool branch_taken_0x268f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268f08) {
            ctx->pc = 0x268F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268F08u;
            // 0x268f0c: 0x8e231774  lw          $v1, 0x1774($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6004)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269030u;
            goto label_269030;
        }
    }
    ctx->pc = 0x268F10u;
    // 0x268f10: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x268f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x268f14: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x268f14u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x268f18: 0xae2216d4  sw          $v0, 0x16D4($s1)
    ctx->pc = 0x268f18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    // 0x268f1c: 0x240400ae  addiu       $a0, $zero, 0xAE
    ctx->pc = 0x268f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    // 0x268f20: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x268F20u;
    {
        const bool branch_taken_0x268f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F20u;
        // 0x268f24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f20) {
            ctx->pc = 0x268FD0u;
            goto label_268fd0;
        }
    }
    ctx->pc = 0x268F28u;
label_268f28:
    // 0x268f28: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x268f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x268f2c: 0x3c03efff  lui         $v1, 0xEFFF
    ctx->pc = 0x268f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
    // 0x268f30: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x268f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x268f34: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x268f34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x268f38: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x268f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x268f3c: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x268f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x268f40: 0x1080003a  beqz        $a0, . + 4 + (0x3A << 2)
    ctx->pc = 0x268F40u;
    {
        const bool branch_taken_0x268f40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x268F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F40u;
        // 0x268f44: 0xae220254  sw          $v0, 0x254($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f40) {
            ctx->pc = 0x26902Cu;
            goto label_26902c;
        }
    }
    ctx->pc = 0x268F48u;
    // 0x268f48: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x268f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x268f4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x268f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x268f54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x268f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268f58: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x268f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x268f5c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x268f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x268f60: 0xc0c1880  jal         func_306200
    ctx->pc = 0x268F60u;
    SET_GPR_U32(ctx, 31, 0x268F68u);
    ctx->pc = 0x268F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268F60u;
    // 0x268f64: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x268F60u, 0x268F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268F68u;
label_268f68:
    // 0x268f68: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x268F68u;
    {
        const bool branch_taken_0x268f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F68u;
        // 0x268f6c: 0x8e231774  lw          $v1, 0x1774($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f68) {
            ctx->pc = 0x269030u;
            goto label_269030;
        }
    }
    ctx->pc = 0x268F70u;
label_268f70:
    // 0x268f70: 0x3c020440  lui         $v0, 0x440
    ctx->pc = 0x268f70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1088 << 16));
    // 0x268f74: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x268f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x268f78: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x268F78u;
    {
        const bool branch_taken_0x268f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x268F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268F78u;
        // 0x268f7c: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268f78) {
            ctx->pc = 0x268FECu;
            goto label_268fec;
        }
    }
    ctx->pc = 0x268F80u;
    // 0x268f80: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x268f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x268f84: 0x8e280304  lw          $t0, 0x304($s1)
    ctx->pc = 0x268f84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x268f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x268f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f8c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x268f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x268f90: 0x8e250284  lw          $a1, 0x284($s1)
    ctx->pc = 0x268f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x268f94: 0xae220254  sw          $v0, 0x254($s1)
    ctx->pc = 0x268f94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
    // 0x268f98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x268f98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268f9c: 0x8d060090  lw          $a2, 0x90($t0)
    ctx->pc = 0x268f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 144)));
    // 0x268fa0: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x268FA0u;
    SET_GPR_U32(ctx, 31, 0x268FA8u);
    ctx->pc = 0x268FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268FA0u;
    // 0x268fa4: 0xc83021  addu        $a2, $a2, $t0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x268FA0u, 0x268FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FA8u;
label_268fa8:
    // 0x268fa8: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x268fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x268fac: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x268facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x268fb0: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x268fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x268fb4: 0x5440001e  bnel        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x268FB4u;
    {
        const bool branch_taken_0x268fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x268fb4) {
            ctx->pc = 0x268FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x268FB4u;
            // 0x268fb8: 0x8e231774  lw          $v1, 0x1774($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6004)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269030u;
            goto label_269030;
        }
    }
    ctx->pc = 0x268FBCu;
    // 0x268fbc: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x268fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x268fc0: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x268fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x268fc4: 0xae2216d4  sw          $v0, 0x16D4($s1)
    ctx->pc = 0x268fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    // 0x268fc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x268fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fcc: 0x24050072  addiu       $a1, $zero, 0x72
    ctx->pc = 0x268fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_268fd0:
    // 0x268fd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x268fd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fd4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x268fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x268fd8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x268fd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x268fdc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x268FDCu;
    SET_GPR_U32(ctx, 31, 0x268FE4u);
    ctx->pc = 0x268FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x268FDCu;
    // 0x268fe0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x268FDCu, 0x268FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268FE4u;
label_268fe4:
    // 0x268fe4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x268FE4u;
    {
        const bool branch_taken_0x268fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x268FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x268FE4u;
        // 0x268fe8: 0x8e231774  lw          $v1, 0x1774($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x268fe4) {
            ctx->pc = 0x269030u;
            goto label_269030;
        }
    }
    ctx->pc = 0x268FECu;
label_268fec:
    // 0x268fec: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x268fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x268ff0: 0x3c03efff  lui         $v1, 0xEFFF
    ctx->pc = 0x268ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
    // 0x268ff4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x268ff4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x268ff8: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x268ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x268ffc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x268ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x269000: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x269000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x269004: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269004u;
    {
        const bool branch_taken_0x269004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x269008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269004u;
        // 0x269008: 0xae220254  sw          $v0, 0x254($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269004) {
            ctx->pc = 0x26902Cu;
            goto label_26902c;
        }
    }
    ctx->pc = 0x26900Cu;
    // 0x26900c: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x26900cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
    // 0x269010: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269014: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x269014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x269018: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x269018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26901c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x26901cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x269020: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x269020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269024: 0xc0c1880  jal         func_306200
    ctx->pc = 0x269024u;
    SET_GPR_U32(ctx, 31, 0x26902Cu);
    ctx->pc = 0x269028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269024u;
    // 0x269028: 0xae2216d4  sw          $v0, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306200u, 0x269024u, 0x26902Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26902Cu;
label_26902c:
    // 0x26902c: 0x8e231774  lw          $v1, 0x1774($s1)
    ctx->pc = 0x26902cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6004)));
label_269030:
    // 0x269030: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x269030u;
    {
        const bool branch_taken_0x269030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x269030) {
            ctx->pc = 0x269034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269030u;
            // 0x269034: 0x8e231778  lw          $v1, 0x1778($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269048u;
            goto label_269048;
        }
    }
    ctx->pc = 0x269038u;
    // 0x269038: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x269038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x26903c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26903cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x269040: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x269040u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x269044: 0x8e231778  lw          $v1, 0x1778($s1)
    ctx->pc = 0x269044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6008)));
label_269048:
    // 0x269048: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x269048u;
    {
        const bool branch_taken_0x269048 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x269048) {
            ctx->pc = 0x26904Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269048u;
            // 0x26904c: 0x8e23177c  lw          $v1, 0x177C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6012)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269060u;
            goto label_269060;
        }
    }
    ctx->pc = 0x269050u;
    // 0x269050: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x269050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x269054: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x269058: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x269058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x26905c: 0x8e23177c  lw          $v1, 0x177C($s1)
    ctx->pc = 0x26905cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6012)));
label_269060:
    // 0x269060: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x269060u;
    {
        const bool branch_taken_0x269060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x269060) {
            ctx->pc = 0x269064u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269060u;
            // 0x269064: 0x8e231780  lw          $v1, 0x1780($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269078u;
            goto label_269078;
        }
    }
    ctx->pc = 0x269068u;
    // 0x269068: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x269068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x26906c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26906cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x269070: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x269070u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x269074: 0x8e231780  lw          $v1, 0x1780($s1)
    ctx->pc = 0x269074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6016)));
label_269078:
    // 0x269078: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x269078u;
    {
        const bool branch_taken_0x269078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x269078) {
            ctx->pc = 0x26907Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269078u;
            // 0x26907c: 0x8e231784  lw          $v1, 0x1784($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6020)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269090u;
            goto label_269090;
        }
    }
    ctx->pc = 0x269080u;
    // 0x269080: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x269080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x269084: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x269088: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x269088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x26908c: 0x8e231784  lw          $v1, 0x1784($s1)
    ctx->pc = 0x26908cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6020)));
label_269090:
    // 0x269090: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x269090u;
    {
        const bool branch_taken_0x269090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x269090) {
            ctx->pc = 0x269094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269090u;
            // 0x269094: 0x8e231788  lw          $v1, 0x1788($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6024)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2690A8u;
            goto label_2690a8;
        }
    }
    ctx->pc = 0x269098u;
    // 0x269098: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x269098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x26909c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26909cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2690a0: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x2690a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x2690a4: 0x8e231788  lw          $v1, 0x1788($s1)
    ctx->pc = 0x2690a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6024)));
label_2690a8:
    // 0x2690a8: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2690A8u;
    {
        const bool branch_taken_0x2690a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2690a8) {
            ctx->pc = 0x2690ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2690A8u;
            // 0x2690ac: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2690C0u;
            goto label_2690c0;
        }
    }
    ctx->pc = 0x2690B0u;
    // 0x2690b0: 0x8c620380  lw          $v0, 0x380($v1)
    ctx->pc = 0x2690b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
    // 0x2690b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2690b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2690b8: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x2690b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x2690bc: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2690bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_2690c0:
    // 0x2690c0: 0x24020252  addiu       $v0, $zero, 0x252
    ctx->pc = 0x2690c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
    // 0x2690c4: 0x1062019b  beq         $v1, $v0, . + 4 + (0x19B << 2)
    ctx->pc = 0x2690C4u;
    {
        const bool branch_taken_0x2690c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2690C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690C4u;
        // 0x2690c8: 0x28620253  slti        $v0, $v1, 0x253 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)595) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690c4) {
            ctx->pc = 0x269734u;
            goto label_269734;
        }
    }
    ctx->pc = 0x2690CCu;
    // 0x2690cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2690CCu;
    {
        const bool branch_taken_0x2690cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2690D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690CCu;
        // 0x2690d0: 0x24020223  addiu       $v0, $zero, 0x223 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690cc) {
            ctx->pc = 0x269100u;
            goto label_269100;
        }
    }
    ctx->pc = 0x2690D4u;
    // 0x2690d4: 0x1062013c  beq         $v1, $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x2690D4u;
    {
        const bool branch_taken_0x2690d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2690D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690D4u;
        // 0x2690d8: 0x28620223  slti        $v0, $v1, 0x223 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)547) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690d4) {
            ctx->pc = 0x2695C8u;
            goto label_2695c8;
        }
    }
    ctx->pc = 0x2690DCu;
    // 0x2690dc: 0x544001c8  bnel        $v0, $zero, . + 4 + (0x1C8 << 2)
    ctx->pc = 0x2690DCu;
    {
        const bool branch_taken_0x2690dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2690dc) {
            ctx->pc = 0x2690E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2690DCu;
            // 0x2690e0: 0x8e2316d4  lw          $v1, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269800u;
            goto label_269800;
        }
    }
    ctx->pc = 0x2690E4u;
    // 0x2690e4: 0x28620245  slti        $v0, $v1, 0x245
    ctx->pc = 0x2690e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)581) ? 1 : 0);
    // 0x2690e8: 0x104001c4  beqz        $v0, . + 4 + (0x1C4 << 2)
    ctx->pc = 0x2690E8u;
    {
        const bool branch_taken_0x2690e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2690ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690E8u;
        // 0x2690ec: 0x28620242  slti        $v0, $v1, 0x242 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)578) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690e8) {
            ctx->pc = 0x2697FCu;
            goto label_2697fc;
        }
    }
    ctx->pc = 0x2690F0u;
    // 0x2690f0: 0x544001c3  bnel        $v0, $zero, . + 4 + (0x1C3 << 2)
    ctx->pc = 0x2690F0u;
    {
        const bool branch_taken_0x2690f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2690f0) {
            ctx->pc = 0x2690F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2690F0u;
            // 0x2690f4: 0x8e2316d4  lw          $v1, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269800u;
            goto label_269800;
        }
    }
    ctx->pc = 0x2690F8u;
    // 0x2690f8: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x2690F8u;
    {
        const bool branch_taken_0x2690f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2690FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2690F8u;
        // 0x2690fc: 0x8e241778  lw          $a0, 0x1778($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2690f8) {
            ctx->pc = 0x269710u;
            goto label_269710;
        }
    }
    ctx->pc = 0x269100u;
label_269100:
    // 0x269100: 0x24020275  addiu       $v0, $zero, 0x275
    ctx->pc = 0x269100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 629));
    // 0x269104: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x269104u;
    {
        const bool branch_taken_0x269104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x269108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269104u;
        // 0x269108: 0x28620276  slti        $v0, $v1, 0x276 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)630) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269104) {
            ctx->pc = 0x269168u;
            goto label_269168;
        }
    }
    ctx->pc = 0x26910Cu;
    // 0x26910c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26910Cu;
    {
        const bool branch_taken_0x26910c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26910Cu;
        // 0x269110: 0x24020256  addiu       $v0, $zero, 0x256 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 598));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26910c) {
            ctx->pc = 0x269124u;
            goto label_269124;
        }
    }
    ctx->pc = 0x269114u;
    // 0x269114: 0x106201a6  beq         $v1, $v0, . + 4 + (0x1A6 << 2)
    ctx->pc = 0x269114u;
    {
        const bool branch_taken_0x269114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x269118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269114u;
        // 0x269118: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269114) {
            ctx->pc = 0x2697B0u;
            goto label_2697b0;
        }
    }
    ctx->pc = 0x26911Cu;
    // 0x26911c: 0x100001b8  b           . + 4 + (0x1B8 << 2)
    ctx->pc = 0x26911Cu;
    {
        const bool branch_taken_0x26911c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26911Cu;
        // 0x269120: 0x8e2316d4  lw          $v1, 0x16D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26911c) {
            ctx->pc = 0x269800u;
            goto label_269800;
        }
    }
    ctx->pc = 0x269124u;
label_269124:
    // 0x269124: 0x24020276  addiu       $v0, $zero, 0x276
    ctx->pc = 0x269124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 630));
    // 0x269128: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x269128u;
    {
        const bool branch_taken_0x269128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269128u;
        // 0x26912c: 0x2402027e  addiu       $v0, $zero, 0x27E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 638));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269128) {
            ctx->pc = 0x269140u;
            goto label_269140;
        }
    }
    ctx->pc = 0x269130u;
    // 0x269130: 0x1062019f  beq         $v1, $v0, . + 4 + (0x19F << 2)
    ctx->pc = 0x269130u;
    {
        const bool branch_taken_0x269130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x269134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269130u;
        // 0x269134: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269130) {
            ctx->pc = 0x2697B0u;
            goto label_2697b0;
        }
    }
    ctx->pc = 0x269138u;
    // 0x269138: 0x100001b1  b           . + 4 + (0x1B1 << 2)
    ctx->pc = 0x269138u;
    {
        const bool branch_taken_0x269138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269138u;
        // 0x26913c: 0x8e2316d4  lw          $v1, 0x16D4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269138) {
            ctx->pc = 0x269800u;
            goto label_269800;
        }
    }
    ctx->pc = 0x269140u;
label_269140:
    // 0x269140: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x269140u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x269144: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269148: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269148u;
    SET_GPR_U32(ctx, 31, 0x269150u);
    ctx->pc = 0x26914Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269148u;
    // 0x26914c: 0x24a55228  addiu       $a1, $a1, 0x5228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269148u, 0x269150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269150u;
label_269150:
    // 0x269150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269154: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x269154u;
    {
        const bool branch_taken_0x269154 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269154) {
            ctx->pc = 0x269158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269154u;
            // 0x269158: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26916Cu;
            goto label_26916c;
        }
    }
    ctx->pc = 0x26915Cu;
    // 0x26915c: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x26915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269160: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x269164: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x269164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_269168:
    // 0x269168: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x269168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
label_26916c:
    // 0x26916c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26916cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269170: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269170u;
    SET_GPR_U32(ctx, 31, 0x269178u);
    ctx->pc = 0x269174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269170u;
    // 0x269174: 0x24a55230  addiu       $a1, $a1, 0x5230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269170u, 0x269178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269178u;
label_269178:
    // 0x269178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26917c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26917Cu;
    {
        const bool branch_taken_0x26917c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x269180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26917Cu;
        // 0x269180: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26917c) {
            ctx->pc = 0x269190u;
            goto label_269190;
        }
    }
    ctx->pc = 0x269184u;
    // 0x269184: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x269184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269188: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26918c: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x26918cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_269190:
    // 0x269190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269194: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269194u;
    SET_GPR_U32(ctx, 31, 0x26919Cu);
    ctx->pc = 0x269198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269194u;
    // 0x269198: 0x24a55238  addiu       $a1, $a1, 0x5238 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269194u, 0x26919Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26919Cu;
label_26919c:
    // 0x26919c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26919cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2691a0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2691A0u;
    {
        const bool branch_taken_0x2691a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2691A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691A0u;
        // 0x2691a4: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691a0) {
            ctx->pc = 0x2691B4u;
            goto label_2691b4;
        }
    }
    ctx->pc = 0x2691A8u;
    // 0x2691a8: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2691a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2691ac: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2691acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2691b0: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x2691b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_2691b4:
    // 0x2691b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2691b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2691b8: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2691B8u;
    SET_GPR_U32(ctx, 31, 0x2691C0u);
    ctx->pc = 0x2691BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2691B8u;
    // 0x2691bc: 0x24a55240  addiu       $a1, $a1, 0x5240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2691B8u, 0x2691C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691C0u;
label_2691c0:
    // 0x2691c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2691c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2691c4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2691C4u;
    {
        const bool branch_taken_0x2691c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2691C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691C4u;
        // 0x2691c8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691c4) {
            ctx->pc = 0x2691D8u;
            goto label_2691d8;
        }
    }
    ctx->pc = 0x2691CCu;
    // 0x2691cc: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2691ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2691d0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2691d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2691d4: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x2691d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_2691d8:
    // 0x2691d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2691d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2691dc: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2691DCu;
    SET_GPR_U32(ctx, 31, 0x2691E4u);
    ctx->pc = 0x2691E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2691DCu;
    // 0x2691e0: 0x24a55248  addiu       $a1, $a1, 0x5248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2691DCu, 0x2691E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2691E4u;
label_2691e4:
    // 0x2691e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2691e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2691e8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2691E8u;
    {
        const bool branch_taken_0x2691e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2691ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2691E8u;
        // 0x2691ec: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2691e8) {
            ctx->pc = 0x2691FCu;
            goto label_2691fc;
        }
    }
    ctx->pc = 0x2691F0u;
    // 0x2691f0: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2691f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2691f4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2691f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2691f8: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x2691f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_2691fc:
    // 0x2691fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2691fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269200: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269200u;
    SET_GPR_U32(ctx, 31, 0x269208u);
    ctx->pc = 0x269204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269200u;
    // 0x269204: 0x24a55250  addiu       $a1, $a1, 0x5250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269200u, 0x269208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269208u;
label_269208:
    // 0x269208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26920c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26920Cu;
    {
        const bool branch_taken_0x26920c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x269210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26920Cu;
        // 0x269210: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26920c) {
            ctx->pc = 0x269220u;
            goto label_269220;
        }
    }
    ctx->pc = 0x269214u;
    // 0x269214: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x269214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269218: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26921c: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x26921cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_269220:
    // 0x269220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269224: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x269224u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269228: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269228u;
    SET_GPR_U32(ctx, 31, 0x269230u);
    ctx->pc = 0x26922Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269228u;
    // 0x26922c: 0x24a55258  addiu       $a1, $a1, 0x5258 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269228u, 0x269230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269230u;
label_269230:
    // 0x269230: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269234: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269234u;
    {
        const bool branch_taken_0x269234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x269238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269234u;
        // 0x269238: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269234) {
            ctx->pc = 0x269248u;
            goto label_269248;
        }
    }
    ctx->pc = 0x26923Cu;
    // 0x26923c: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x26923cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269240: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x269244: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x269244u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_269248:
    // 0x269248: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26924c: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x26924cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269250: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269250u;
    SET_GPR_U32(ctx, 31, 0x269258u);
    ctx->pc = 0x269254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269250u;
    // 0x269254: 0x24a55260  addiu       $a1, $a1, 0x5260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269250u, 0x269258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269258u;
label_269258:
    // 0x269258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26925c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26925Cu;
    {
        const bool branch_taken_0x26925c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x269260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26925Cu;
        // 0x269260: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26925c) {
            ctx->pc = 0x269274u;
            goto label_269274;
        }
    }
    ctx->pc = 0x269264u;
    // 0x269264: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x269264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269268: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26926c: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x26926cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
    // 0x269270: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x269270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_269274:
    // 0x269274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269278: 0x24525268  addiu       $s2, $v0, 0x5268
    ctx->pc = 0x269278u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 21096));
    // 0x26927c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26927cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269280: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269280u;
    SET_GPR_U32(ctx, 31, 0x269288u);
    ctx->pc = 0x269284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269280u;
    // 0x269284: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269280u, 0x269288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269288u;
label_269288:
    // 0x269288: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26928c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26928Cu;
    {
        const bool branch_taken_0x26928c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x269290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26928Cu;
        // 0x269290: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26928c) {
            ctx->pc = 0x2692A4u;
            goto label_2692a4;
        }
    }
    ctx->pc = 0x269294u;
    // 0x269294: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x269294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269298: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26929c: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x26929cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
    // 0x2692a0: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x2692a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
label_2692a4:
    // 0x2692a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2692a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2692a8: 0x24505270  addiu       $s0, $v0, 0x5270
    ctx->pc = 0x2692a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21104));
    // 0x2692ac: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2692acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2692b0: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2692B0u;
    SET_GPR_U32(ctx, 31, 0x2692B8u);
    ctx->pc = 0x2692B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2692B0u;
    // 0x2692b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2692B0u, 0x2692B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692B8u;
label_2692b8:
    // 0x2692b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2692b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2692bc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2692BCu;
    {
        const bool branch_taken_0x2692bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2692C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692BCu;
        // 0x2692c0: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692bc) {
            ctx->pc = 0x2692D0u;
            goto label_2692d0;
        }
    }
    ctx->pc = 0x2692C4u;
    // 0x2692c4: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2692c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2692c8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2692c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2692cc: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x2692ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_2692d0:
    // 0x2692d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2692d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2692d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2692d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2692d8: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2692D8u;
    SET_GPR_U32(ctx, 31, 0x2692E0u);
    ctx->pc = 0x2692DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2692D8u;
    // 0x2692dc: 0x24a55278  addiu       $a1, $a1, 0x5278 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2692D8u, 0x2692E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2692E0u;
label_2692e0:
    // 0x2692e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2692e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2692e4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2692E4u;
    {
        const bool branch_taken_0x2692e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2692E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2692E4u;
        // 0x2692e8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2692e4) {
            ctx->pc = 0x2692F8u;
            goto label_2692f8;
        }
    }
    ctx->pc = 0x2692ECu;
    // 0x2692ec: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2692ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2692f0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2692f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2692f4: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x2692f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_2692f8:
    // 0x2692f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2692f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2692fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2692fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269300: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269300u;
    SET_GPR_U32(ctx, 31, 0x269308u);
    ctx->pc = 0x269304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269300u;
    // 0x269304: 0x24a55280  addiu       $a1, $a1, 0x5280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269300u, 0x269308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269308u;
label_269308:
    // 0x269308: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26930c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26930Cu;
    {
        const bool branch_taken_0x26930c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26930c) {
            ctx->pc = 0x269310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26930Cu;
            // 0x269310: 0x8e2216d4  lw          $v0, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269324u;
            goto label_269324;
        }
    }
    ctx->pc = 0x269314u;
    // 0x269314: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x269314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269318: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26931c: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x26931cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
    // 0x269320: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x269320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
label_269324:
    // 0x269324: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x269324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x269328: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x269328u;
    {
        const bool branch_taken_0x269328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269328u;
        // 0x26932c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269328) {
            ctx->pc = 0x2693B4u;
            goto label_2693b4;
        }
    }
    ctx->pc = 0x269330u;
    // 0x269330: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x269330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x269334: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269334u;
    SET_GPR_U32(ctx, 31, 0x26933Cu);
    ctx->pc = 0x269338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269334u;
    // 0x269338: 0x24a55228  addiu       $a1, $a1, 0x5228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269334u, 0x26933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26933Cu;
label_26933c:
    // 0x26933c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26933cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269340: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x269340u;
    {
        const bool branch_taken_0x269340 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269340) {
            ctx->pc = 0x269344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269340u;
            // 0x269344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269360u;
            goto label_269360;
        }
    }
    ctx->pc = 0x269348u;
    // 0x269348: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x269348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x26934c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26934cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x269350: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x269350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x269354: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x269354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269358: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x269358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x26935c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26935cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269360:
    // 0x269360: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269360u;
    SET_GPR_U32(ctx, 31, 0x269368u);
    ctx->pc = 0x269364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269360u;
    // 0x269364: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269360u, 0x269368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269368u;
label_269368:
    // 0x269368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26936c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26936Cu;
    {
        const bool branch_taken_0x26936c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26936c) {
            ctx->pc = 0x269370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26936Cu;
            // 0x269370: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26938Cu;
            goto label_26938c;
        }
    }
    ctx->pc = 0x269374u;
    // 0x269374: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x269374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269378: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x269378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26937c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x26937cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x269380: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x269380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269384: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x269384u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x269388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26938c:
    // 0x26938c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x26938Cu;
    SET_GPR_U32(ctx, 31, 0x269394u);
    ctx->pc = 0x269390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26938Cu;
    // 0x269390: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x26938Cu, 0x269394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269394u;
label_269394:
    // 0x269394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269398: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x269398u;
    {
        const bool branch_taken_0x269398 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269398) {
            ctx->pc = 0x26939Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269398u;
            // 0x26939c: 0x8e2316d4  lw          $v1, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2693B8u;
            goto label_2693b8;
        }
    }
    ctx->pc = 0x2693A0u;
    // 0x2693a0: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x2693a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2693a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2693a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2693a8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2693a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2693ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2693acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2693b0: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x2693b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_2693b4:
    // 0x2693b4: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x2693b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
label_2693b8:
    // 0x2693b8: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x2693b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2693bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2693BCu;
    {
        const bool branch_taken_0x2693bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2693C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693BCu;
        // 0x2693c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693bc) {
            ctx->pc = 0x2693F8u;
            goto label_2693f8;
        }
    }
    ctx->pc = 0x2693C4u;
    // 0x2693c4: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2693C4u;
    SET_GPR_U32(ctx, 31, 0x2693CCu);
    ctx->pc = 0x2693C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2693C4u;
    // 0x2693c8: 0x26e55258  addiu       $a1, $s7, 0x5258 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 21080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2693C4u, 0x2693CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2693CCu;
label_2693cc:
    // 0x2693cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2693ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2693d0: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2693D0u;
    {
        const bool branch_taken_0x2693d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2693d0) {
            ctx->pc = 0x2693D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2693D0u;
            // 0x2693d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2693F0u;
            goto label_2693f0;
        }
    }
    ctx->pc = 0x2693D8u;
    // 0x2693d8: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x2693d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2693dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2693dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2693e0: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2693e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2693e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2693e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2693e8: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x2693e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x2693ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2693ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2693f0:
    // 0x2693f0: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x2693F0u;
    {
        const bool branch_taken_0x2693f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2693F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693F0u;
        // 0x2693f4: 0x27c55260  addiu       $a1, $fp, 0x5260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 21088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693f0) {
            ctx->pc = 0x269544u;
            goto label_269544;
        }
    }
    ctx->pc = 0x2693F8u;
label_2693f8:
    // 0x2693f8: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x2693f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x2693fc: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x2693FCu;
    {
        const bool branch_taken_0x2693fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2693FCu;
        // 0x269400: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2693fc) {
            ctx->pc = 0x269504u;
            goto label_269504;
        }
    }
    ctx->pc = 0x269404u;
    // 0x269404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269408: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269408u;
    SET_GPR_U32(ctx, 31, 0x269410u);
    ctx->pc = 0x26940Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269408u;
    // 0x26940c: 0x24455230  addiu       $a1, $v0, 0x5230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269408u, 0x269410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269410u;
label_269410:
    // 0x269410: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269414: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x269414u;
    {
        const bool branch_taken_0x269414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269414) {
            ctx->pc = 0x269418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269414u;
            // 0x269418: 0x82221869  lb          $v0, 0x1869($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6249)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269434u;
            goto label_269434;
        }
    }
    ctx->pc = 0x26941Cu;
    // 0x26941c: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x26941cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269420: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x269420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x269424: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x269424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x269428: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x269428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26942c: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x26942cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x269430: 0x82221869  lb          $v0, 0x1869($s1)
    ctx->pc = 0x269430u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6249)));
label_269434:
    // 0x269434: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x269434u;
    {
        const bool branch_taken_0x269434 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x269438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269434u;
        // 0x269438: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269434) {
            ctx->pc = 0x269468u;
            goto label_269468;
        }
    }
    ctx->pc = 0x26943Cu;
    // 0x26943c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26943cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269440: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269440u;
    SET_GPR_U32(ctx, 31, 0x269448u);
    ctx->pc = 0x269444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269440u;
    // 0x269444: 0x24455238  addiu       $a1, $v0, 0x5238 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269440u, 0x269448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269448u;
label_269448:
    // 0x269448: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26944c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26944Cu;
    {
        const bool branch_taken_0x26944c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26944c) {
            ctx->pc = 0x269450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26944Cu;
            // 0x269450: 0x82221869  lb          $v0, 0x1869($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6249)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26946Cu;
            goto label_26946c;
        }
    }
    ctx->pc = 0x269454u;
    // 0x269454: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x269454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269458: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x269458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26945c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x26945cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x269460: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x269460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269464: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x269464u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_269468:
    // 0x269468: 0x82221869  lb          $v0, 0x1869($s1)
    ctx->pc = 0x269468u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6249)));
label_26946c:
    // 0x26946c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x26946cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x269470: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x269470u;
    {
        const bool branch_taken_0x269470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x269470) {
            ctx->pc = 0x269474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269470u;
            // 0x269474: 0x82221869  lb          $v0, 0x1869($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6249)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2694ACu;
            goto label_2694ac;
        }
    }
    ctx->pc = 0x269478u;
    // 0x269478: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x269478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x26947c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26947cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269480: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269480u;
    SET_GPR_U32(ctx, 31, 0x269488u);
    ctx->pc = 0x269484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269480u;
    // 0x269484: 0x24455240  addiu       $a1, $v0, 0x5240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269480u, 0x269488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269488u;
label_269488:
    // 0x269488: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26948c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26948Cu;
    {
        const bool branch_taken_0x26948c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26948c) {
            ctx->pc = 0x269490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26948Cu;
            // 0x269490: 0x82221869  lb          $v0, 0x1869($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6249)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2694ACu;
            goto label_2694ac;
        }
    }
    ctx->pc = 0x269494u;
    // 0x269494: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x269494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269498: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x269498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26949c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x26949cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2694a0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2694a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2694a4: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x2694a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x2694a8: 0x82221869  lb          $v0, 0x1869($s1)
    ctx->pc = 0x2694a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6249)));
label_2694ac:
    // 0x2694ac: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2694acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2694b0: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2694B0u;
    {
        const bool branch_taken_0x2694b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2694b0) {
            ctx->pc = 0x2694B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2694B0u;
            // 0x2694b4: 0x82221869  lb          $v0, 0x1869($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6249)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2694ECu;
            goto label_2694ec;
        }
    }
    ctx->pc = 0x2694B8u;
    // 0x2694b8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x2694b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x2694bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2694bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2694c0: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2694C0u;
    SET_GPR_U32(ctx, 31, 0x2694C8u);
    ctx->pc = 0x2694C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2694C0u;
    // 0x2694c4: 0x24455248  addiu       $a1, $v0, 0x5248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2694C0u, 0x2694C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2694C8u;
label_2694c8:
    // 0x2694c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2694c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2694cc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2694CCu;
    {
        const bool branch_taken_0x2694cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2694cc) {
            ctx->pc = 0x2694D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2694CCu;
            // 0x2694d0: 0x82221869  lb          $v0, 0x1869($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6249)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2694ECu;
            goto label_2694ec;
        }
    }
    ctx->pc = 0x2694D4u;
    // 0x2694d4: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x2694d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2694d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2694d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2694dc: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2694dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2694e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2694e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2694e4: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x2694e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x2694e8: 0x82221869  lb          $v0, 0x1869($s1)
    ctx->pc = 0x2694e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 6249)));
label_2694ec:
    // 0x2694ec: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2694ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2694f0: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x2694F0u;
    {
        const bool branch_taken_0x2694f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2694F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694F0u;
        // 0x2694f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2694f0) {
            ctx->pc = 0x269570u;
            goto label_269570;
        }
    }
    ctx->pc = 0x2694F8u;
    // 0x2694f8: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x2694f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x2694fc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2694FCu;
    {
        const bool branch_taken_0x2694fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2694FCu;
        // 0x269500: 0x24455250  addiu       $a1, $v0, 0x5250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 21072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2694fc) {
            ctx->pc = 0x269544u;
            goto label_269544;
        }
    }
    ctx->pc = 0x269504u;
label_269504:
    // 0x269504: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x269504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x269508: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x269508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26950c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26950Cu;
    {
        const bool branch_taken_0x26950c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26950Cu;
        // 0x269510: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26950c) {
            ctx->pc = 0x269570u;
            goto label_269570;
        }
    }
    ctx->pc = 0x269514u;
    // 0x269514: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269514u;
    SET_GPR_U32(ctx, 31, 0x26951Cu);
    ctx->pc = 0x269518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269514u;
    // 0x269518: 0x26c55268  addiu       $a1, $s6, 0x5268 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 21096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269514u, 0x26951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26951Cu;
label_26951c:
    // 0x26951c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26951cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269520: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x269520u;
    {
        const bool branch_taken_0x269520 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269520) {
            ctx->pc = 0x269524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269520u;
            // 0x269524: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269540u;
            goto label_269540;
        }
    }
    ctx->pc = 0x269528u;
    // 0x269528: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x269528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x26952c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26952cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x269530: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x269530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x269534: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x269534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269538: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x269538u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x26953c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26953cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269540:
    // 0x269540: 0x26a55270  addiu       $a1, $s5, 0x5270
    ctx->pc = 0x269540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 21104));
label_269544:
    // 0x269544: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269544u;
    SET_GPR_U32(ctx, 31, 0x26954Cu);
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269544u, 0x26954Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26954Cu;
label_26954c:
    // 0x26954c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26954cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269550: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x269550u;
    {
        const bool branch_taken_0x269550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269550) {
            ctx->pc = 0x269554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269550u;
            // 0x269554: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269570u;
            goto label_269570;
        }
    }
    ctx->pc = 0x269558u;
    // 0x269558: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x269558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x26955c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26955cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x269560: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x269560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x269564: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x269564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269568: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x269568u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x26956c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26956cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_269570:
    // 0x269570: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269570u;
    SET_GPR_U32(ctx, 31, 0x269578u);
    ctx->pc = 0x269574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269570u;
    // 0x269574: 0x26655278  addiu       $a1, $s3, 0x5278 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 21112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269570u, 0x269578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269578u;
label_269578:
    // 0x269578: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26957c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x26957Cu;
    {
        const bool branch_taken_0x26957c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26957c) {
            ctx->pc = 0x269580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26957Cu;
            // 0x269580: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26959Cu;
            goto label_26959c;
        }
    }
    ctx->pc = 0x269584u;
    // 0x269584: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x269584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269588: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x269588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26958c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x26958cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x269590: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x269590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269594: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x269594u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x269598: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26959c:
    // 0x26959c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x26959Cu;
    SET_GPR_U32(ctx, 31, 0x2695A4u);
    ctx->pc = 0x2695A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26959Cu;
    // 0x2695a0: 0x26855280  addiu       $a1, $s4, 0x5280 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 21120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x26959Cu, 0x2695A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2695A4u;
label_2695a4:
    // 0x2695a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2695a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2695a8: 0x50800095  beql        $a0, $zero, . + 4 + (0x95 << 2)
    ctx->pc = 0x2695A8u;
    {
        const bool branch_taken_0x2695a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2695a8) {
            ctx->pc = 0x2695ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2695A8u;
            // 0x2695ac: 0x8e2316d4  lw          $v1, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269800u;
            goto label_269800;
        }
    }
    ctx->pc = 0x2695B0u;
    // 0x2695b0: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x2695b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2695b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2695b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2695b8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2695b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2695bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2695bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2695c0: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x2695C0u;
    {
        const bool branch_taken_0x2695c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2695C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695C0u;
        // 0x2695c4: 0xac830380  sw          $v1, 0x380($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2695c0) {
            ctx->pc = 0x2697FCu;
            goto label_2697fc;
        }
    }
    ctx->pc = 0x2695C8u;
label_2695c8:
    // 0x2695c8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x2695c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x2695cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2695ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2695d0: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2695D0u;
    SET_GPR_U32(ctx, 31, 0x2695D8u);
    ctx->pc = 0x2695D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2695D0u;
    // 0x2695d4: 0x24a55288  addiu       $a1, $a1, 0x5288 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2695D0u, 0x2695D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2695D8u;
label_2695d8:
    // 0x2695d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2695d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2695dc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2695DCu;
    {
        const bool branch_taken_0x2695dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2695E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2695DCu;
        // 0x2695e0: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2695dc) {
            ctx->pc = 0x2695F8u;
            goto label_2695f8;
        }
    }
    ctx->pc = 0x2695E4u;
    // 0x2695e4: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x2695e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2695e8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2695e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2695ec: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2695ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2695f0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2695f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2695f4: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x2695f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_2695f8:
    // 0x2695f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2695f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2695fc: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2695FCu;
    SET_GPR_U32(ctx, 31, 0x269604u);
    ctx->pc = 0x269600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2695FCu;
    // 0x269600: 0x24a55290  addiu       $a1, $a1, 0x5290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2695FCu, 0x269604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269604u;
label_269604:
    // 0x269604: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269608: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269608u;
    {
        const bool branch_taken_0x269608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269608u;
        // 0x26960c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269608) {
            ctx->pc = 0x26961Cu;
            goto label_26961c;
        }
    }
    ctx->pc = 0x269610u;
    // 0x269610: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x269610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269614: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x269618: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x269618u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_26961c:
    // 0x26961c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26961cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269620: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269620u;
    SET_GPR_U32(ctx, 31, 0x269628u);
    ctx->pc = 0x269624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269620u;
    // 0x269624: 0x24a55298  addiu       $a1, $a1, 0x5298 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269620u, 0x269628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269628u;
label_269628:
    // 0x269628: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26962c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26962Cu;
    {
        const bool branch_taken_0x26962c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x269630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26962Cu;
        // 0x269630: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26962c) {
            ctx->pc = 0x269648u;
            goto label_269648;
        }
    }
    ctx->pc = 0x269634u;
    // 0x269634: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x269634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269638: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x269638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26963c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x26963cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x269640: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x269640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269644: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x269644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_269648:
    // 0x269648: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26964c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x26964Cu;
    SET_GPR_U32(ctx, 31, 0x269654u);
    ctx->pc = 0x269650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26964Cu;
    // 0x269650: 0x24a552a0  addiu       $a1, $a1, 0x52A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x26964Cu, 0x269654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269654u;
label_269654:
    // 0x269654: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269658: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269658u;
    {
        const bool branch_taken_0x269658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269658u;
        // 0x26965c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269658) {
            ctx->pc = 0x26966Cu;
            goto label_26966c;
        }
    }
    ctx->pc = 0x269660u;
    // 0x269660: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x269660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269664: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x269668: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x269668u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_26966c:
    // 0x26966c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269670: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269670u;
    SET_GPR_U32(ctx, 31, 0x269678u);
    ctx->pc = 0x269674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269670u;
    // 0x269674: 0x24a552a8  addiu       $a1, $a1, 0x52A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269670u, 0x269678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269678u;
label_269678:
    // 0x269678: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26967c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26967Cu;
    {
        const bool branch_taken_0x26967c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x269680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26967Cu;
        // 0x269680: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26967c) {
            ctx->pc = 0x269698u;
            goto label_269698;
        }
    }
    ctx->pc = 0x269684u;
    // 0x269684: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x269684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269688: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x269688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26968c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x26968cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x269690: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x269690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269694: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x269694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_269698:
    // 0x269698: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26969c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x26969Cu;
    SET_GPR_U32(ctx, 31, 0x2696A4u);
    ctx->pc = 0x2696A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26969Cu;
    // 0x2696a0: 0x24a552b0  addiu       $a1, $a1, 0x52B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x26969Cu, 0x2696A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2696A4u;
label_2696a4:
    // 0x2696a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2696a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2696A8u;
    {
        const bool branch_taken_0x2696a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2696ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696A8u;
        // 0x2696ac: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696a8) {
            ctx->pc = 0x2696BCu;
            goto label_2696bc;
        }
    }
    ctx->pc = 0x2696B0u;
    // 0x2696b0: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2696b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2696b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2696b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2696b8: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x2696b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_2696bc:
    // 0x2696bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2696bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696c0: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2696C0u;
    SET_GPR_U32(ctx, 31, 0x2696C8u);
    ctx->pc = 0x2696C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2696C0u;
    // 0x2696c4: 0x24a552b8  addiu       $a1, $a1, 0x52B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2696C0u, 0x2696C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2696C8u;
label_2696c8:
    // 0x2696c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2696c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696cc: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2696CCu;
    {
        const bool branch_taken_0x2696cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2696D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696CCu;
        // 0x2696d0: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696cc) {
            ctx->pc = 0x2696E8u;
            goto label_2696e8;
        }
    }
    ctx->pc = 0x2696D4u;
    // 0x2696d4: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x2696d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2696d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2696d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2696dc: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2696dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2696e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2696e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2696e4: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x2696e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_2696e8:
    // 0x2696e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2696e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696ec: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2696ECu;
    SET_GPR_U32(ctx, 31, 0x2696F4u);
    ctx->pc = 0x2696F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2696ECu;
    // 0x2696f0: 0x24a552c0  addiu       $a1, $a1, 0x52C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2696ECu, 0x2696F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2696F4u;
label_2696f4:
    // 0x2696f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2696f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2696f8: 0x108000e6  beqz        $a0, . + 4 + (0xE6 << 2)
    ctx->pc = 0x2696F8u;
    {
        const bool branch_taken_0x2696f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2696FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2696F8u;
        // 0x2696fc: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2696f8) {
            ctx->pc = 0x269A94u;
            goto label_269a94;
        }
    }
    ctx->pc = 0x269700u;
    // 0x269700: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x269700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269704: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x269708: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x269708u;
    {
        const bool branch_taken_0x269708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26970Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269708u;
        // 0x26970c: 0xac820380  sw          $v0, 0x380($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269708) {
            ctx->pc = 0x269A94u;
            goto label_269a94;
        }
    }
    ctx->pc = 0x269710u;
label_269710:
    // 0x269710: 0x508000d8  beql        $a0, $zero, . + 4 + (0xD8 << 2)
    ctx->pc = 0x269710u;
    {
        const bool branch_taken_0x269710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269710) {
            ctx->pc = 0x269714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269710u;
            // 0x269714: 0x8e241784  lw          $a0, 0x1784($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6020)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269A74u;
            goto label_269a74;
        }
    }
    ctx->pc = 0x269718u;
    // 0x269718: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x269718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x26971c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26971cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x269720: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x269720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x269724: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x269724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269728: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x269728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x26972c: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x26972Cu;
    {
        const bool branch_taken_0x26972c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26972Cu;
        // 0x269730: 0x8e241784  lw          $a0, 0x1784($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26972c) {
            ctx->pc = 0x269A74u;
            goto label_269a74;
        }
    }
    ctx->pc = 0x269734u;
label_269734:
    // 0x269734: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x269734u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x269738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26973c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x26973Cu;
    SET_GPR_U32(ctx, 31, 0x269744u);
    ctx->pc = 0x269740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26973Cu;
    // 0x269740: 0x24a55208  addiu       $a1, $a1, 0x5208 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x26973Cu, 0x269744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269744u;
label_269744:
    // 0x269744: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269748: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269748u;
    {
        const bool branch_taken_0x269748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269748u;
        // 0x26974c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269748) {
            ctx->pc = 0x26975Cu;
            goto label_26975c;
        }
    }
    ctx->pc = 0x269750u;
    // 0x269750: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x269750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269754: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x269758: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x269758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_26975c:
    // 0x26975c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26975cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269760: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269760u;
    SET_GPR_U32(ctx, 31, 0x269768u);
    ctx->pc = 0x269764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269760u;
    // 0x269764: 0x24a55210  addiu       $a1, $a1, 0x5210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269760u, 0x269768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269768u;
label_269768:
    // 0x269768: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26976c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26976Cu;
    {
        const bool branch_taken_0x26976c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x269770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26976Cu;
        // 0x269770: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26976c) {
            ctx->pc = 0x269780u;
            goto label_269780;
        }
    }
    ctx->pc = 0x269774u;
    // 0x269774: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x269774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269778: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x269778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x26977c: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x26977cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_269780:
    // 0x269780: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269784: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269784u;
    SET_GPR_U32(ctx, 31, 0x26978Cu);
    ctx->pc = 0x269788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x269784u;
    // 0x269788: 0x24a55218  addiu       $a1, $a1, 0x5218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269784u, 0x26978Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26978Cu;
label_26978c:
    // 0x26978c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26978cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269790: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x269790u;
    {
        const bool branch_taken_0x269790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x269794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269790u;
        // 0x269794: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269790) {
            ctx->pc = 0x2697A4u;
            goto label_2697a4;
        }
    }
    ctx->pc = 0x269798u;
    // 0x269798: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x269798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x26979c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x26979cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2697a0: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x2697a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_2697a4:
    // 0x2697a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2697a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2697a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2697A8u;
    {
        const bool branch_taken_0x2697a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2697ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697A8u;
        // 0x2697ac: 0x24a55220  addiu       $a1, $a1, 0x5220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697a8) {
            ctx->pc = 0x2697DCu;
            goto label_2697dc;
        }
    }
    ctx->pc = 0x2697B0u;
label_2697b0:
    // 0x2697b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2697b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2697b4: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2697B4u;
    SET_GPR_U32(ctx, 31, 0x2697BCu);
    ctx->pc = 0x2697B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2697B4u;
    // 0x2697b8: 0x24a552c8  addiu       $a1, $a1, 0x52C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2697B4u, 0x2697BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2697BCu;
label_2697bc:
    // 0x2697bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2697bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2697c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2697C0u;
    {
        const bool branch_taken_0x2697c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2697C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2697C0u;
        // 0x2697c4: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2697c0) {
            ctx->pc = 0x2697D4u;
            goto label_2697d4;
        }
    }
    ctx->pc = 0x2697C8u;
    // 0x2697c8: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2697c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2697cc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2697ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2697d0: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x2697d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_2697d4:
    // 0x2697d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2697d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2697d8: 0x24a552d0  addiu       $a1, $a1, 0x52D0
    ctx->pc = 0x2697d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21200));
label_2697dc:
    // 0x2697dc: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2697DCu;
    SET_GPR_U32(ctx, 31, 0x2697E4u);
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2697DCu, 0x2697E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2697E4u;
label_2697e4:
    // 0x2697e4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2697e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2697e8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2697E8u;
    {
        const bool branch_taken_0x2697e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2697e8) {
            ctx->pc = 0x2697ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2697E8u;
            // 0x2697ec: 0x8e2316d4  lw          $v1, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269800u;
            goto label_269800;
        }
    }
    ctx->pc = 0x2697F0u;
    // 0x2697f0: 0x8c820380  lw          $v0, 0x380($a0)
    ctx->pc = 0x2697f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2697f4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2697f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x2697f8: 0xac820380  sw          $v0, 0x380($a0)
    ctx->pc = 0x2697f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 2));
label_2697fc:
    // 0x2697fc: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x2697fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
label_269800:
    // 0x269800: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x269800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x269804: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x269804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x269808: 0x30640100  andi        $a0, $v1, 0x100
    ctx->pc = 0x269808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x26980c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26980cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x269810: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x269810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x269814: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x269814u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x269818: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x269818u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x26981c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x26981Cu;
    {
        const bool branch_taken_0x26981c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x269820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26981Cu;
        // 0x269820: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26981c) {
            ctx->pc = 0x269954u;
            goto label_269954;
        }
    }
    ctx->pc = 0x269824u;
    // 0x269824: 0x922217c3  lbu         $v0, 0x17C3($s1)
    ctx->pc = 0x269824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6083)));
    // 0x269828: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x269828u;
    {
        const bool branch_taken_0x269828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269828u;
        // 0x26982c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269828) {
            ctx->pc = 0x269854u;
            goto label_269854;
        }
    }
    ctx->pc = 0x269830u;
    // 0x269830: 0x962403ac  lhu         $a0, 0x3AC($s1)
    ctx->pc = 0x269830u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x269834: 0xde2303a8  ld          $v1, 0x3A8($s1)
    ctx->pc = 0x269834u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 936)));
    // 0x269838: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x269838u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x26983c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x26983cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x269840: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x269840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x269844: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x269844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269848: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x269848u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x26984c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26984Cu;
    {
        const bool branch_taken_0x26984c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26984Cu;
        // 0x269850: 0x30848000  andi        $a0, $a0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26984c) {
            ctx->pc = 0x269874u;
            goto label_269874;
        }
    }
    ctx->pc = 0x269854u;
label_269854:
    // 0x269854: 0x962403ac  lhu         $a0, 0x3AC($s1)
    ctx->pc = 0x269854u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x269858: 0xde2303a8  ld          $v1, 0x3A8($s1)
    ctx->pc = 0x269858u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 936)));
    // 0x26985c: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x26985cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x269860: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x269860u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x269864: 0x30820040  andi        $v0, $a0, 0x40
    ctx->pc = 0x269864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x269868: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x269868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26986c: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x26986cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x269870: 0x30844000  andi        $a0, $a0, 0x4000
    ctx->pc = 0x269870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
label_269874:
    // 0x269874: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x269874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x269878: 0xa4800b  movn        $s0, $a1, $a0
    ctx->pc = 0x269878u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x26987c: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x26987cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x269880: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x269880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x269884: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x269884u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x269888: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26988c: 0x5202000f  beql        $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26988Cu;
    {
        const bool branch_taken_0x26988c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x26988c) {
            ctx->pc = 0x269890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26988Cu;
            // 0x269890: 0x8e241778  lw          $a0, 0x1778($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2698CCu;
            goto label_2698cc;
        }
    }
    ctx->pc = 0x269894u;
    // 0x269894: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x269894u;
    {
        const bool branch_taken_0x269894 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x269898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269894u;
        // 0x269898: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269894) {
            ctx->pc = 0x2698ACu;
            goto label_2698ac;
        }
    }
    ctx->pc = 0x26989Cu;
    // 0x26989c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26989Cu;
    {
        const bool branch_taken_0x26989c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2698A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26989Cu;
        // 0x2698a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26989c) {
            ctx->pc = 0x2698B4u;
            goto label_2698b4;
        }
    }
    ctx->pc = 0x2698A4u;
    // 0x2698a4: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2698A4u;
    {
        const bool branch_taken_0x2698a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2698A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698A4u;
        // 0x2698a8: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698a4) {
            ctx->pc = 0x2698BCu;
            goto label_2698bc;
        }
    }
    ctx->pc = 0x2698ACu;
label_2698ac:
    // 0x2698ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2698ACu;
    {
        const bool branch_taken_0x2698ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2698B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698ACu;
        // 0x2698b0: 0x8e241774  lw          $a0, 0x1774($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6004)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698ac) {
            ctx->pc = 0x2698CCu;
            goto label_2698cc;
        }
    }
    ctx->pc = 0x2698B4u;
label_2698b4:
    // 0x2698b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2698B4u;
    {
        const bool branch_taken_0x2698b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2698B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2698B4u;
        // 0x2698b8: 0x8e24177c  lw          $a0, 0x177C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6012)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2698b4) {
            ctx->pc = 0x2698CCu;
            goto label_2698cc;
        }
    }
    ctx->pc = 0x2698BCu;
label_2698bc:
    // 0x2698bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2698bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2698c0: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2698C0u;
    SET_GPR_U32(ctx, 31, 0x2698C8u);
    ctx->pc = 0x2698C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2698C0u;
    // 0x2698c4: 0x24a552c8  addiu       $a1, $a1, 0x52C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2698C0u, 0x2698C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2698C8u;
label_2698c8:
    // 0x2698c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2698c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2698cc:
    // 0x2698cc: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2698CCu;
    {
        const bool branch_taken_0x2698cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2698cc) {
            ctx->pc = 0x2698D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2698CCu;
            // 0x2698d0: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2698ECu;
            goto label_2698ec;
        }
    }
    ctx->pc = 0x2698D4u;
    // 0x2698d4: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x2698d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x2698d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2698d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2698dc: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x2698dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x2698e0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2698e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2698e4: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x2698e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x2698e8: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2698e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_2698ec:
    // 0x2698ec: 0x24020252  addiu       $v0, $zero, 0x252
    ctx->pc = 0x2698ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
    // 0x2698f0: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2698F0u;
    {
        const bool branch_taken_0x2698f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2698f0) {
            ctx->pc = 0x2698F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2698F0u;
            // 0x2698f4: 0x8e2216d4  lw          $v0, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x2698F8u;
    // 0x2698f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2698f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2698fc: 0x52020009  beql        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2698FCu;
    {
        const bool branch_taken_0x2698fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2698fc) {
            ctx->pc = 0x269900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2698FCu;
            // 0x269900: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269924u;
            goto label_269924;
        }
    }
    ctx->pc = 0x269904u;
    // 0x269904: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269904u;
    {
        const bool branch_taken_0x269904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x269908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269904u;
        // 0x269908: 0x2e020004  sltiu       $v0, $s0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269904) {
            ctx->pc = 0x269914u;
            goto label_269914;
        }
    }
    ctx->pc = 0x26990Cu;
    // 0x26990c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x26990Cu;
    {
        const bool branch_taken_0x26990c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26990c) {
            ctx->pc = 0x269910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26990Cu;
            // 0x269910: 0x8e2216d4  lw          $v0, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269914u;
label_269914:
    // 0x269914: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x269914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x269918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26991c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26991Cu;
    {
        const bool branch_taken_0x26991c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26991Cu;
        // 0x269920: 0x24a55208  addiu       $a1, $a1, 0x5208 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26991c) {
            ctx->pc = 0x26992Cu;
            goto label_26992c;
        }
    }
    ctx->pc = 0x269924u;
label_269924:
    // 0x269924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269928: 0x24a55210  addiu       $a1, $a1, 0x5210
    ctx->pc = 0x269928u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21008));
label_26992c:
    // 0x26992c: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x26992Cu;
    SET_GPR_U32(ctx, 31, 0x269934u);
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x26992Cu, 0x269934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269934u;
label_269934:
    // 0x269934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269938: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x269938u;
    {
        const bool branch_taken_0x269938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269938) {
            ctx->pc = 0x26993Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269938u;
            // 0x26993c: 0x8e2216d4  lw          $v0, 0x16D4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269958u;
            goto label_269958;
        }
    }
    ctx->pc = 0x269940u;
    // 0x269940: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x269940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269944: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x269944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x269948: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x269948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x26994c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26994cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269950: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x269950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_269954:
    // 0x269954: 0x8e2216d4  lw          $v0, 0x16D4($s1)
    ctx->pc = 0x269954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
label_269958:
    // 0x269958: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x269958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x26995c: 0x1440004c  bnez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x26995Cu;
    {
        const bool branch_taken_0x26995c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x269960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26995Cu;
        // 0x269960: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26995c) {
            ctx->pc = 0x269A90u;
            goto label_269a90;
        }
    }
    ctx->pc = 0x269964u;
    // 0x269964: 0x922217c3  lbu         $v0, 0x17C3($s1)
    ctx->pc = 0x269964u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6083)));
    // 0x269968: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269968u;
    {
        const bool branch_taken_0x269968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26996Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269968u;
        // 0x26996c: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269968) {
            ctx->pc = 0x269990u;
            goto label_269990;
        }
    }
    ctx->pc = 0x269970u;
    // 0x269970: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x269970u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x269974: 0xde2303a8  ld          $v1, 0x3A8($s1)
    ctx->pc = 0x269974u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 936)));
    // 0x269978: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x269978u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x26997c: 0x637f8  dsll        $a2, $a2, 31
    ctx->pc = 0x26997cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 31);
    // 0x269980: 0x30440040  andi        $a0, $v0, 0x40
    ctx->pc = 0x269980u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x269984: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x269984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x269988: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x269988u;
    {
        const bool branch_taken_0x269988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269988u;
        // 0x26998c: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x269988) {
            ctx->pc = 0x2699ACu;
            goto label_2699ac;
        }
    }
    ctx->pc = 0x269990u;
label_269990:
    // 0x269990: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x269990u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x269994: 0xde2303a8  ld          $v1, 0x3A8($s1)
    ctx->pc = 0x269994u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 936)));
    // 0x269998: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x269998u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x26999c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x26999cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2699a0: 0x30440080  andi        $a0, $v0, 0x80
    ctx->pc = 0x2699a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2699a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2699a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2699a8: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2699a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_2699ac:
    // 0x2699ac: 0x4800a  movz        $s0, $zero, $a0
    ctx->pc = 0x2699acu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2699b0: 0xa2800b  movn        $s0, $a1, $v0
    ctx->pc = 0x2699b0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
    // 0x2699b4: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2699b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2699b8: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x2699b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x2699bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2699bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2699c0: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x2699c0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x2699c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2699c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2699c8: 0x5202000f  beql        $s0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2699C8u;
    {
        const bool branch_taken_0x2699c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2699c8) {
            ctx->pc = 0x2699CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2699C8u;
            // 0x2699cc: 0x8e241784  lw          $a0, 0x1784($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6020)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269A08u;
            goto label_269a08;
        }
    }
    ctx->pc = 0x2699D0u;
    // 0x2699d0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2699D0u;
    {
        const bool branch_taken_0x2699d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2699D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699D0u;
        // 0x2699d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699d0) {
            ctx->pc = 0x2699E8u;
            goto label_2699e8;
        }
    }
    ctx->pc = 0x2699D8u;
    // 0x2699d8: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2699D8u;
    {
        const bool branch_taken_0x2699d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2699DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699D8u;
        // 0x2699dc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699d8) {
            ctx->pc = 0x2699F0u;
            goto label_2699f0;
        }
    }
    ctx->pc = 0x2699E0u;
    // 0x2699e0: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2699E0u;
    {
        const bool branch_taken_0x2699e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2699E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699E0u;
        // 0x2699e4: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699e0) {
            ctx->pc = 0x2699F8u;
            goto label_2699f8;
        }
    }
    ctx->pc = 0x2699E8u;
label_2699e8:
    // 0x2699e8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2699E8u;
    {
        const bool branch_taken_0x2699e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2699ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699E8u;
        // 0x2699ec: 0x8e241780  lw          $a0, 0x1780($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699e8) {
            ctx->pc = 0x269A08u;
            goto label_269a08;
        }
    }
    ctx->pc = 0x2699F0u;
label_2699f0:
    // 0x2699f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2699F0u;
    {
        const bool branch_taken_0x2699f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2699F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2699F0u;
        // 0x2699f4: 0x8e241788  lw          $a0, 0x1788($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 6024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2699f0) {
            ctx->pc = 0x269A08u;
            goto label_269a08;
        }
    }
    ctx->pc = 0x2699F8u;
label_2699f8:
    // 0x2699f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2699f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2699fc: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x2699FCu;
    SET_GPR_U32(ctx, 31, 0x269A04u);
    ctx->pc = 0x269A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2699FCu;
    // 0x269a00: 0x24a552d0  addiu       $a1, $a1, 0x52D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x2699FCu, 0x269A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269A04u;
label_269a04:
    // 0x269a04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269a08:
    // 0x269a08: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x269A08u;
    {
        const bool branch_taken_0x269a08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x269a08) {
            ctx->pc = 0x269A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269A08u;
            // 0x269a0c: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269A28u;
            goto label_269a28;
        }
    }
    ctx->pc = 0x269A10u;
    // 0x269a10: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x269a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269a14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x269a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x269a18: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x269a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x269a1c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x269a1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269a20: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x269a20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
    // 0x269a24: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x269a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_269a28:
    // 0x269a28: 0x24020252  addiu       $v0, $zero, 0x252
    ctx->pc = 0x269a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 594));
    // 0x269a2c: 0x54620019  bnel        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x269A2Cu;
    {
        const bool branch_taken_0x269a2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x269a2c) {
            ctx->pc = 0x269A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269A2Cu;
            // 0x269a30: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269A94u;
            goto label_269a94;
        }
    }
    ctx->pc = 0x269A34u;
    // 0x269a34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x269a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x269a38: 0x52020009  beql        $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x269A38u;
    {
        const bool branch_taken_0x269a38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x269a38) {
            ctx->pc = 0x269A3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x269A38u;
            // 0x269a3c: 0x3c050044  lui         $a1, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x269A60u;
            goto label_269a60;
        }
    }
    ctx->pc = 0x269A40u;
    // 0x269a40: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x269A40u;
    {
        const bool branch_taken_0x269a40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A40u;
        // 0x269a44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a40) {
            ctx->pc = 0x269A50u;
            goto label_269a50;
        }
    }
    ctx->pc = 0x269A48u;
    // 0x269a48: 0x12020012  beq         $s0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x269A48u;
    {
        const bool branch_taken_0x269a48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x269A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A48u;
        // 0x269a4c: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a48) {
            ctx->pc = 0x269A94u;
            goto label_269a94;
        }
    }
    ctx->pc = 0x269A50u;
label_269a50:
    // 0x269a50: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x269a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x269a54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269a54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269a58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x269A58u;
    {
        const bool branch_taken_0x269a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A58u;
        // 0x269a5c: 0x24a55218  addiu       $a1, $a1, 0x5218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a58) {
            ctx->pc = 0x269A68u;
            goto label_269a68;
        }
    }
    ctx->pc = 0x269A60u;
label_269a60:
    // 0x269a60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x269a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x269a64: 0x24a55220  addiu       $a1, $a1, 0x5220
    ctx->pc = 0x269a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21024));
label_269a68:
    // 0x269a68: 0xc052dcc  jal         func_14B730
    ctx->pc = 0x269A68u;
    SET_GPR_U32(ctx, 31, 0x269A70u);
    ctx->pc = 0x14B730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B730u, 0x269A68u, 0x269A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x269A70u;
label_269a70:
    // 0x269a70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x269a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_269a74:
    // 0x269a74: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x269A74u;
    {
        const bool branch_taken_0x269a74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x269A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269A74u;
        // 0x269a78: 0x7bb00110  lq          $s0, 0x110($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x269a74) {
            ctx->pc = 0x269A94u;
            goto label_269a94;
        }
    }
    ctx->pc = 0x269A7Cu;
    // 0x269a7c: 0x8c830380  lw          $v1, 0x380($a0)
    ctx->pc = 0x269a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 896)));
    // 0x269a80: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x269a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x269a84: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x269a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x269a88: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x269a88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x269a8c: 0xac830380  sw          $v1, 0x380($a0)
    ctx->pc = 0x269a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 896), GPR_U32(ctx, 3));
label_269a90:
    // 0x269a90: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x269a90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_269a94:
    // 0x269a94: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x269a94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x269a98: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x269a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x269a9c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x269a9cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x269aa0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x269aa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x269aa4: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x269aa4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x269aa8: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x269aa8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x269aac: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x269aacu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x269ab0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x269ab0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x269ab4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x269ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x269ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x269AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x269ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x269AB8u;
        // 0x269abc: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x269AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x269AC0u;
}
